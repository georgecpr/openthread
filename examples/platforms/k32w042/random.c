/*
 *  Copyright (c) 2017, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file implements a random number generator.
 *
 */

#include "openthread/platform/random.h"
#include "fsl_device_registers.h"
#include "fsl_trng.h"
#include <stdint.h>
#include <stdlib.h>
#include <utils/code_utils.h>
#include "openthread/types.h"

void k32wRandomInit(void)
{
    trng_config_t config;
    uint32_t      seed;

    uint32_t clocks_per_sample = 800u;
    int32_t freq_min;
    int32_t freq_max;

    TRNG_GetDefaultConfig(&config);

    /* Set freq_min and freq_max based on clocks_per_sample */
    freq_min = clocks_per_sample / 4u;
    freq_max = clocks_per_sample * 16u;    
    config.frequencyCountLimit.minimum = freq_min;
    config.frequencyCountLimit.maximum = freq_max;
    config.entropyDelay = clocks_per_sample;
    config.sampleSize = 512u; /* number of bits to generate and test */
    
    /* Load new statistical test values */
    config.retryCount = 1u; /* if self-test fails, allow 1 retry */
    config.longRunMaxLimit = 32u;
    config.pokerLimit.minimum = 1030u;
    config.pokerLimit.maximum = 1600u;
    config.monobitLimit.minimum = 195u;
    config.monobitLimit.maximum = 317u;
    config.runBit1Limit.minimum = 27u;
    config.runBit1Limit.maximum = 107u;
    config.runBit2Limit.minimum = 7u;
    config.runBit2Limit.maximum = 62u;
    config.runBit3Limit.minimum = 0u;
    config.runBit3Limit.maximum = 39u;
    config.runBit4Limit.minimum = 0u;
    config.runBit4Limit.maximum = 26u;
    config.runBit5Limit.minimum = 0u;
    config.runBit5Limit.maximum = 18u;
    config.runBit6PlusLimit.minimum = 0u;
    config.runBit6PlusLimit.maximum = 17u;

    /* Set sample mode of the TRNG ring oscillator to Von Neumann, for better random data.*/
    config.sampleMode = kTRNG_SampleModeVonNeumann;

    /* Initialize TRNG */
    otEXPECT(TRNG_Init(TRNG0, &config) == kStatus_Success);

    otEXPECT(TRNG_GetRandomData(TRNG0, &seed, sizeof(seed)) == kStatus_Success);

    srand(seed);

exit:
    return;
}

uint32_t otPlatRandomGet(void)
{
    return (uint32_t)rand();
}

otError otPlatRandomGetTrue(uint8_t *aOutput, uint16_t aOutputLength)
{
    otError status = OT_ERROR_NONE;

    otEXPECT_ACTION((aOutput != NULL), status = OT_ERROR_INVALID_ARGS);

    otEXPECT_ACTION(TRNG_GetRandomData(TRNG0, aOutput, aOutputLength) == kStatus_Success, status = OT_ERROR_FAILED);

exit:
    return status;
}
