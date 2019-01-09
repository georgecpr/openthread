/*! *********************************************************************************
* The Clear BSD License
* Copyright (c) 2017, Freescale Semiconductor, Inc.
* Copyright 2018 NXP
* All rights reserved.
*
* \file
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted (subject to the limitations in the disclaimer
* below) provided that the following conditions are met:
*
* * Redistributions of source code must retain the above copyright notice,
*   this list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above copyright notice,
*   this list of conditions and the following disclaimer in the documentation
*   and/or other materials provided with the distribution.
*
* * Neither the name of the copyright holder nor the names of its contributors
*   may be used to endorse or promote products derived from this software
*   without specific prior written permission.
*
* NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE
* GRANTED BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
* HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
* BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
* IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************************** */
#include "fsl_common.h"
#include "mathfp.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* constants for fixed point atan2 approximation function */
#define addfac      0x10EF
#define zp273       0x045E
#define neg_zp273   0xFBA2
#define piover2     0x1921
#define neg_piover2 0xE6DF
#define pi          0x3243
#define neg_pi      0xCDBC

/* custom inner calculation macro for atan approximation */
#define INNERCALC(iqd,sgz)  (FPMUL((iqd),FPADD(addfac,FPMUL((sgz),(iqd),NUMQBITS)),NUMQBITS))

/*******************************************************************************
 * Variables
 ******************************************************************************/


/*******************************************************************************
 * Prototypes
 ******************************************************************************/


/*******************************************************************************
 * Code
 ******************************************************************************/
int16_t atan2fp(int16_t y, int16_t x)
{
    int16_t iqdiv; /* I/Q or Q/I, depending upon which equation is being calculated */
    int16_t sgn_zp273; /* holds sign(I)*0.273 or sign(Q)*0x273 */

    /* handle error cases and cases that will cause divide by zero in approximation equations */
    if ((y == 0) && (x == 0))
    {
        return 0xFFFFU; /* invalid return value indicating an error */
    }
    if (x == 0)
    {
        return (y > 0 ? piover2 : neg_piover2);
    }
    if (y == 0)
    {
        return (x > 0 ? 0 : pi);
    }

    /* 4 quadrant approximation of atan() function */
    if ((x > 0) && (x >= FPABS(y))) /* equation #1 */
    {
        iqdiv = FPDIV(y, x, NUMQBITS);
        if (y < 0) /* choose 0.273 (or negated) factor so that FPADD can be used in all INNERCALC calls */
        {
            sgn_zp273 = zp273;
        }
        else
        {
            sgn_zp273 = neg_zp273;
        }

        return INNERCALC(iqdiv,sgn_zp273);
    }

    if ((y > 0) && (y >= FPABS(x))) /* equation #2 */
    {
        iqdiv = FPDIV(x, y, NUMQBITS);
        if (x < 0) /* choose 0.273 (or negated) factor so that FPADD can be used in all INNERCALC calls */
        {
            sgn_zp273 = zp273;
        }
        else
        {
            sgn_zp273 = neg_zp273;
        }

        return FPSUB(piover2,INNERCALC(iqdiv,sgn_zp273));
    }

    if ((x < 0) && (FPABS(x) >= FPABS(y))) /* equation #3 */
    {
        uint16_t pifac;
        iqdiv = FPDIV(y, x, NUMQBITS);
        if (y < 0) /* choose 0.273 (or negated) factor so that FPADD can be used in all INNERCALC calls */
        {
            sgn_zp273 = neg_zp273;
            pifac = neg_pi;
        }
        else
        {
            sgn_zp273 = zp273;
            pifac = pi;
        }

        return FPADD(pifac,INNERCALC(iqdiv,sgn_zp273));
    }

    if ((y < 0) && (FPABS(y) >= FPABS(x))) /* equation #4 */
    {
        iqdiv = FPDIV(x, y, NUMQBITS);
        if (x < 0) /* choose 0.273 (or negated) factor so that FPADD can be used in all INNERCALC calls */
        {
            sgn_zp273 = neg_zp273;
        }
        else
        {
            sgn_zp273 = zp273;
        }

        return FPSUB(neg_piover2,INNERCALC(iqdiv,sgn_zp273));
    }

    return 0xFFFFU; /* invalid return value indicating an error */
}

