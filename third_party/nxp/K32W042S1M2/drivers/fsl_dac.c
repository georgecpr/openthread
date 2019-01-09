/*
 * The Clear BSD License
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted (subject to the limitations in the disclaimer below) provided
 *  that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "fsl_dac.h"

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
/*!
 * @brief Get instance number for DAC module.
 *
 * @param base DAC peripheral base address
 */
static uint32_t DAC_GetInstance(LPDAC_Type *base);

/*******************************************************************************
 * Variables
 ******************************************************************************/
/*! @brief Pointers to DAC bases for each instance. */
static LPDAC_Type *const s_dacBases[] = LPDAC_BASE_PTRS;

/*! @brief Pointers to DAC clocks for each instance. */
static const clock_ip_name_t s_dacClocks[] = LPDAC_CLOCKS;

/*******************************************************************************
 * Code
 ******************************************************************************/
static uint32_t DAC_GetInstance(LPDAC_Type *base)
{
    uint32_t instance;

    /* Find the instance index from base address mappings. */
    for (instance = 0; instance < ARRAY_SIZE(s_dacBases); instance++)
    {
        if (s_dacBases[instance] == base)
        {
            break;
        }
    }

    assert(instance < ARRAY_SIZE(s_dacBases));

    return instance;
}

void DAC_Init(LPDAC_Type *base, const dac_config_t *config)
{
    assert(NULL != config);

    uint32_t tmp32 = 0U;

    /* Enable the clock. */
    CLOCK_EnableClock(s_dacClocks[DAC_GetInstance(base)]);

    /* Reset the logic. */
    DAC_SetReset(base, kDAC_ResetLogic);
    DAC_ClearReset(base, kDAC_ResetLogic);

    /* Reset the FIFO. */
    DAC_SetReset(base, kDAC_ResetFIFO);
    DAC_ClearReset(base, kDAC_ResetFIFO);

    /* Configuration. */
    if (kDAC_FIFOTriggerBySoftwareMode == config->fifoTriggerMode)
    {
        tmp32 |= LPDAC_GCR_TRGSEL_MASK; /* Software trigger. */
    }
    switch (config->fifoWorkMode)
    {
        case kDAC_FIFOWorkAsNormalMode: /* Normal FIFO. */
            tmp32 |= LPDAC_GCR_FIFOEN_MASK;
            break;
        case kDAC_FIFOWorkAsSwingMode:
            tmp32 |= LPDAC_GCR_FIFOEN_MASK | LPDAC_GCR_SWMD_MASK; /* Enable swing mode. */
            break;
        default: /* kDAC_FIFODisabled. */
            break;
    }
    if (config->enableLowPowerMode)
    {
        tmp32 |= LPDAC_GCR_LPEN_MASK; /* Enable low power. */
    }
    if (kDAC_ReferenceVoltageSourceAlt2 == config->referenceVoltageSource)
    {
        tmp32 |= LPDAC_GCR_DACRFS_MASK;
    }
    base->GCR = tmp32;
    base->FCR = LPDAC_FCR_WML(config->fifoWatermarkLevel);

    /* Now, the DAC is disabled. It needs to be enabled in application. */
}

void DAC_GetDefaultConfig(dac_config_t *config)
{
    assert(config != NULL);

    config->fifoWatermarkLevel = 0U;
    config->fifoTriggerMode = kDAC_FIFOTriggerByHardwareMode;
    config->fifoWorkMode = kDAC_FIFODisabled;
    config->enableLowPowerMode = false;
    config->referenceVoltageSource = kDAC_ReferenceVoltageSourceAlt1;
}

void DAC_Deinit(LPDAC_Type *base)
{
    /* Disable the module. */
    DAC_Enable(base, false);

    /* Disable the clock. */
    CLOCK_DisableClock(s_dacClocks[DAC_GetInstance(base)]);
}
