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

#ifndef _MATHFP_H_
/* clang-format off */
#define _MATHFP_H_
/* clang-format on */

#include "fsl_common.h"
#include "fsl_device_registers.h"

/*!
 * @addtogroup xcvr
 * @{
 */

/*! @file*/

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* macros for fixed point math in integers */
#define NUMQBITS        (12) /* define the number of fractional bits to be used. Leaves 3 integer bits & a sign bit */
#define FPABS(x)        ((x) < 0 ? (~(x))+1 : (x))
#define FPADD(x,y)      ((x) + (y))
#define FPSUB(x,y)      ((x) - (y))
#define FPMUL(x,y,q)    (((x) * (y)) >> (q))
#define FPDIV(x,y,q)    (((x) << (q)) / (y))
#define FLTTOFP(f,q)    ((int16_t)((f)*(double)(1<<q)))
#define FPTOFLT(x,q)    ((double)(x) / (double)(1<<(q)))

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*! *********************************************************************************
 * \brief  This function performs the arctan function on fixed point data using an approximation of the arctan.
 *
 * \param[in] y - The Y axis value S(3,12) fixed point format.
 * \param[in] x - X axis value in S(3,12) fixed point format.
 *
 * \return The approximate value of the angle in the range -pi to +pi. Returns 0xFFFF in case of error.
 *
 * \details
 ***********************************************************************************/
int16_t atan2fp(int16_t y, int16_t x);

#if defined(__cplusplus)
}
#endif

#endif /* ifndef _MATHFP_H_ */
