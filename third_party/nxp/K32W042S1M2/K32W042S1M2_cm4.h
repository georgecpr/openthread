/*
** ###################################################################
**     Processors:          K32W042S1M2CAx_cm4
**                          K32W042S1M2VPJ_cm4
**
**     Compilers:           Keil ARM C/C++ Compiler
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          MCUXpresso Compiler
**
**     Reference manual:    K32W0x2S Series Reference Manual, Rev. 1.4 , 11/2017
**     Version:             rev. 1.0, 2016-11-02
**     Build:               b171115
**
**     Abstract:
**         CMSIS Peripheral Access Layer for K32W042S1M2_cm4
**
**     The Clear BSD License
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2017 NXP
**     All rights reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted (subject to the limitations in the disclaimer below) provided
**      that the following conditions are met:
**
**     1. Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     2. Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     3. Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE.
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2016-11-02)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file K32W042S1M2_cm4.h
 * @version 1.0
 * @date 2016-11-02
 * @brief CMSIS Peripheral Access Layer for K32W042S1M2_cm4
 *
 * CMSIS Peripheral Access Layer for K32W042S1M2_cm4
 */

#ifndef _K32W042S1M2_CM4_H_
#define _K32W042S1M2_CM4_H_                      /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0100U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 82                 /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M4 SV Hard Fault Interrupt */
  MemoryManagement_IRQn        = -12,              /**< Cortex-M4 Memory Management Interrupt */
  BusFault_IRQn                = -11,              /**< Cortex-M4 Bus Fault Interrupt */
  UsageFault_IRQn              = -10,              /**< Cortex-M4 Usage Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M4 SV Call Interrupt */
  DebugMonitor_IRQn            = -4,               /**< Cortex-M4 Debug Monitor Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M4 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M4 System Tick Interrupt */

  /* Device specific interrupts */
  CTI0_MCM0_IRQn               = 0,                /**< Cross Trigger Interface 0 / Miscellaneous Control Module */
  DMA0_IRQn                    = 1,                /**< DMA0 channel 0 transfer complete */
  DMA1_IRQn                    = 2,                /**< DMA0 channel 1 transfer complete */
  DMA2_IRQn                    = 3,                /**< DMA0 channel 2 transfer complete */
  DMA3_IRQn                    = 4,                /**< DMA0 channel 3 transfer complete */
  DMA4_IRQn                    = 5,                /**< DMA0 channel 4 transfer complete */
  DMA5_IRQn                    = 6,                /**< DMA0 channel 5 transfer complete */
  DMA6_IRQn                    = 7,                /**< DMA0 channel 6 transfer complete */
  DMA7_IRQn                    = 8,                /**< DMA0 channel 7 transfer complete */
  DMA8_IRQn                    = 9,                /**< DMA0 channel 8 transfer complete */
  DMA9_IRQn                    = 10,               /**< DMA0 channel 9 transfer complete */
  DMA10_IRQn                   = 11,               /**< DMA0 channel 10 transfer complete */
  DMA11_IRQn                   = 12,               /**< DMA0 channel 11 transfer complete */
  DMA12_IRQn                   = 13,               /**< DMA0 channel 12 transfer complete */
  DMA13_IRQn                   = 14,               /**< DMA0 channel 13 transfer complete */
  DMA14_IRQn                   = 15,               /**< DMA0 channel 14 transfer complete */
  DMA15_IRQn                   = 16,               /**< DMA0 channel 15 transfer complete */
  DMA0_Error_IRQn              = 17,               /**< DMA0 channel 0-15 error interrupt */
  CMC0_IRQn                    = 18,               /**< Core Mode Controller 0 */
  EWM_IRQn                     = 19,               /**< EWM interrupt */
  FTFE_Command_Complete_IRQn   = 20,               /**< FTFE interrupt */
  FTFE_Read_Collision_IRQn     = 21,               /**< FTFE interrupt */
  LLWU0_IRQn                   = 22,               /**< Low leakage wakeup 0 */
  MUA_IRQn                     = 23,               /**< MU Side A interrupt */
  SPM_IRQn                     = 24,               /**< SPM */
  WDOG0_IRQn                   = 25,               /**< WDOG0 interrupt */
  SCG_IRQn                     = 26,               /**< SCG interrupt */
  LPIT0_IRQn                   = 27,               /**< LPIT0 interrupt */
  RTC_IRQn                     = 28,               /**< RTC Alarm interrupt */
  LPTMR0_IRQn                  = 29,               /**< LPTMR0 interrupt */
  LPTMR1_IRQn                  = 30,               /**< LPTMR1 interrupt */
  TPM0_IRQn                    = 31,               /**< TPM0 single interrupt vector for all sources */
  TPM1_IRQn                    = 32,               /**< TPM1 single interrupt vector for all sources */
  TPM2_IRQn                    = 33,               /**< TPM2 single interrupt vector for all sources */
  EMVSIM0_IRQn                 = 34,               /**< EMVSIM0 interrupt */
  FLEXIO0_IRQn                 = 35,               /**< FLEXIO0 */
  LPI2C0_IRQn                  = 36,               /**< LPI2C0 interrupt */
  LPI2C1_IRQn                  = 37,               /**< LPI2C1 interrupt */
  LPI2C2_IRQn                  = 38,               /**< LPI2C2 interrupt */
  I2S0_IRQn                    = 39,               /**< I2S0 interrupt */
  USDHC0_IRQn                  = 40,               /**< SDHC0 interrupt */
  LPSPI0_IRQn                  = 41,               /**< LPSPI0 single interrupt vector for all sources */
  LPSPI1_IRQn                  = 42,               /**< LPSPI1 single interrupt vector for all sources */
  LPSPI2_IRQn                  = 43,               /**< LPSPI2 single interrupt vector for all sources */
  LPUART0_IRQn                 = 44,               /**< LPUART0 status and error */
  LPUART1_IRQn                 = 45,               /**< LPUART1 status and error */
  LPUART2_IRQn                 = 46,               /**< LPUART2 status and error */
  USB0_IRQn                    = 47,               /**< USB0 interrupt */
  PORTA_IRQn                   = 48,               /**< PORTA Pin detect */
  PORTB_IRQn                   = 49,               /**< PORTB Pin detect */
  PORTC_IRQn                   = 50,               /**< PORTC Pin detect */
  PORTD_IRQn                   = 51,               /**< PORTD Pin detect */
  ADC0_IRQn                    = 52,               /**< LPADC0 interrupt */
  LPCMP0_IRQn                  = 53,               /**< LPCMP0 interrupt */
  LPDAC0_IRQn                  = 54,               /**< DAC0 interrupt */
  CAU3_Task_Complete_IRQn      = 55,               /**< Cryptographic Acceleration Unit version 3 Task Complete */
  CAU3_Security_Violation_IRQn = 56,               /**< Cryptographic Acceleration Unit version 3 Security Violation */
  TRNG_IRQn                    = 57,               /**< TRNG interrupt */
  LPIT1_IRQn                   = 58,               /**< LPIT1 interrupt */
  LPTMR2_IRQn                  = 59,               /**< LPTMR2 interrupt */
  TPM3_IRQn                    = 60,               /**< TPM3 single interrupt vector for all sources */
  LPI2C3_IRQn                  = 61,               /**< LPI2C3 interrupt */
  LPSPI3_IRQn                  = 62,               /**< LPSPI3 single interrupt vector for all sources */
  LPUART3_IRQn                 = 63,               /**< LPUART3 status and error */
  PORTE_IRQn                   = 64,               /**< PORTE Pin detect */
  LPCMP1_IRQn                  = 65                /**< LPCMP1 interrupt */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex M4 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M4 Core Configuration
 * @{
 */

#define __MPU_PRESENT                  1         /**< Defines if an MPU is present or not */
#define __NVIC_PRIO_BITS               3         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  1         /**< Defines if an FPU is present or not */

#include "core_cm4.h"                  /* Core Peripheral Access Layer */
#include "system_K32W042S1M2_cm4.h"    /* Device specific configuration file */

/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


/* ----------------------------------------------------------------------------
   -- Mapping Information
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Mapping_Information Mapping Information
 * @{
 */

/** Mapping Information */
/*!
 * @addtogroup edma_request
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the DMA hardware request
 *
 * Defines the enumeration for the DMA hardware request collections.
 */
typedef enum _dma_request_source
{
    kDmaRequestMux0LLWU0            = 0|0x100U,    /**< LLWU0 Wakeup */
    kDmaRequestMux0LPTMR0           = 1|0x100U,    /**< LPTMR0 Trigger */
    kDmaRequestMux0LPTMR1           = 2|0x100U,    /**< LPTMR1 Trigger */
    kDmaRequestMux0TPM0Channel0     = 3|0x100U,    /**< TPM0 Channel 0 */
    kDmaRequestMux0TPM0Channel1     = 4|0x100U,    /**< TPM0 Channel 1 */
    kDmaRequestMux0TPM0Channel2     = 5|0x100U,    /**< TPM0 Channel 2 */
    kDmaRequestMux0TPM0Channel3     = 6|0x100U,    /**< TPM0 Channel 3 */
    kDmaRequestMux0TPM0Channel4     = 7|0x100U,    /**< TPM0 Channel 4 */
    kDmaRequestMux0TPM0Channel5     = 8|0x100U,    /**< TPM0 Channel 5 */
    kDmaRequestMux0TPM0Overflow     = 9|0x100U,    /**< TPM0 Overflow */
    kDmaRequestMux0TPM1Channel0     = 10|0x100U,   /**< TPM1 Channel 0 */
    kDmaRequestMux0TPM1Channel1     = 11|0x100U,   /**< TPM1 Channel 1 */
    kDmaRequestMux0TPM1Overflow     = 12|0x100U,   /**< TPM1 Overflow */
    kDmaRequestMux0TPM2Channel0     = 13|0x100U,   /**< TPM2 Channel 0 */
    kDmaRequestMux0TPM2Channel1     = 14|0x100U,   /**< TPM2 Channel 1 */
    kDmaRequestMux0TPM2Channel2     = 15|0x100U,   /**< TPM2 Channel 2 */
    kDmaRequestMux0TPM2Channel3     = 16|0x100U,   /**< TPM2 Channel 3 */
    kDmaRequestMux0TPM2Channel4     = 17|0x100U,   /**< TPM2 Channel 4 */
    kDmaRequestMux0TPM2Channel5     = 18|0x100U,   /**< TPM2 Channel 5 */
    kDmaRequestMux0TPM2Overflow     = 19|0x100U,   /**< TPM2 Overflow */
    kDmaRequestMux0EMVSIM0Rx        = 20|0x100U,   /**< EMVSIM0 Receive */
    kDmaRequestMux0EMVSIM0Tx        = 21|0x100U,   /**< EMVSIM0 Transmit */
    kDmaRequestMux0FLEXIO0Channel0  = 22|0x100U,   /**< FLEXIO0 Channel 0 */
    kDmaRequestMux0FLEXIO0Channel1  = 23|0x100U,   /**< FLEXIO0 Channel 1 */
    kDmaRequestMux0FLEXIO0Channel2  = 24|0x100U,   /**< FLEXIO0 Channel 2 */
    kDmaRequestMux0FLEXIO0Channel3  = 25|0x100U,   /**< FLEXIO0 Channel 3 */
    kDmaRequestMux0FLEXIO0Channel4  = 26|0x100U,   /**< FLEXIO0 Channel 4 */
    kDmaRequestMux0FLEXIO0Channel5  = 27|0x100U,   /**< FLEXIO0 Channel 5 */
    kDmaRequestMux0FLEXIO0Channel6  = 28|0x100U,   /**< FLEXIO0 Channel 6 */
    kDmaRequestMux0FLEXIO0Channel7  = 29|0x100U,   /**< FLEXIO0 Channel 7 */
    kDmaRequestMux0LPI2C0Rx         = 30|0x100U,   /**< LPI2C0 Receive */
    kDmaRequestMux0LPI2C0Tx         = 31|0x100U,   /**< LPI2C0 Transmit */
    kDmaRequestMux0LPI2C1Rx         = 32|0x100U,   /**< LPI2C1 Receive */
    kDmaRequestMux0LPI2C1Tx         = 33|0x100U,   /**< LPI2C1 Transmit */
    kDmaRequestMux0LPI2C2Rx         = 34|0x100U,   /**< LPI2C2 Receive */
    kDmaRequestMux0LPI2C2Tx         = 35|0x100U,   /**< LPI2C2 Transmit */
    kDmaRequestMux0I2S0Rx           = 36|0x100U,   /**< I2S0 Receive */
    kDmaRequestMux0I2S0Tx           = 37|0x100U,   /**< I2S0 Transmit */
    kDmaRequestMux0LPSPI0Rx         = 38|0x100U,   /**< LPSPI0 Receive */
    kDmaRequestMux0LPSPI0Tx         = 39|0x100U,   /**< LPSPI0 Transmit */
    kDmaRequestMux0LPSPI1Rx         = 40|0x100U,   /**< LPSPI1 Receive */
    kDmaRequestMux0LPSPI1Tx         = 41|0x100U,   /**< LPSPI1 Transmit */
    kDmaRequestMux0LPSPI2Rx         = 42|0x100U,   /**< LPSPI2 Receive */
    kDmaRequestMux0LPSPI2Tx         = 43|0x100U,   /**< LPSPI2 Transmit */
    kDmaRequestMux0LPUART0Rx        = 44|0x100U,   /**< LPUART0 Receive */
    kDmaRequestMux0LPUART0Tx        = 45|0x100U,   /**< LPUART0 Transmit */
    kDmaRequestMux0LPUART1Rx        = 46|0x100U,   /**< LPUART1 Receive */
    kDmaRequestMux0LPUART1Tx        = 47|0x100U,   /**< LPUART1 Transmit */
    kDmaRequestMux0LPUART2Rx        = 48|0x100U,   /**< LPUART2 Receive */
    kDmaRequestMux0LPUART2Tx        = 49|0x100U,   /**< LPUART2 Transmit */
    kDmaRequestMux0PORTA            = 50|0x100U,   /**< PORTA Pin Request */
    kDmaRequestMux0PORTB            = 51|0x100U,   /**< PORTB Pin Request */
    kDmaRequestMux0PORTC            = 52|0x100U,   /**< PORTC Pin Request */
    kDmaRequestMux0PORTD            = 53|0x100U,   /**< PORTD Pin Request */
    kDmaRequestMux0LPADC0           = 54|0x100U,   /**< LPADC0 Conversion Complete */
    kDmaRequestMux0LPCMP0           = 55|0x100U,   /**< LPCMP0 Comparator Trigger */
    kDmaRequestMux0DAC0             = 56|0x100U,   /**< DAC0 Conversion Complete */
    kDmaRequestMux0CAUv3            = 57|0x100U,   /**< CAUv3 Data Request */
    kDmaRequestMux0LPTMR2           = 58|0x100U,   /**< LPTMR2 Trigger */
    kDmaRequestMux0LPSPI3Rx         = 59|0x100U,   /**< LPSPI3 Receive */
    kDmaRequestMux0LPSPI3Tx         = 60|0x100U,   /**< LPSPI3 Transmit */
    kDmaRequestMux0LPUART3Rx        = 61|0x100U,   /**< LPUART3 Receive */
    kDmaRequestMux0LPUART3Tx        = 62|0x100U,   /**< LPUART3 Transmit */
    kDmaRequestMux0PORTE            = 63|0x100U,   /**< PORTE Pin Request */
} dma_request_source_t;

/*!
 * @addtogroup trgmux_source
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the TRGMUX source
 *
 * Defines the enumeration for the TRGMUX source collections.
 */
typedef enum _trgmux_source
{
    kTRGMUX_Source0Disabled         = 0U,          /**< Trigger function is disabled */
    kTRGMUX_Source1Disabled         = 0U,          /**< Trigger function is disabled */
    kTRGMUX_Source0Llwu0            = 1U,          /**< LLWU0 trigger is selected */
    kTRGMUX_Source1Llwu1            = 1U,          /**< LLWU1 trigger is selected */
    kTRGMUX_Source0Lpit0Channel0    = 2U,          /**< LPIT0 Channel 0 is selected */
    kTRGMUX_Source1Lpit1Channel0    = 2U,          /**< LPIT1 Channel 0 is selected */
    kTRGMUX_Source0Lpit0Channel1    = 3U,          /**< LPIT0 Channel 1 is selected */
    kTRGMUX_Source1Lpit1Channel1    = 3U,          /**< LPIT1 Channel 1 is selected */
    kTRGMUX_Source0Lpit0Channel2    = 4U,          /**< LPIT0 Channel 2 is selected */
    kTRGMUX_Source1Lpit1Channel2    = 4U,          /**< LPIT1 Channel 2 is selected */
    kTRGMUX_Source0Lpit0Channel3    = 5U,          /**< LPIT0 Channel 3 is selected */
    kTRGMUX_Source1Lpit1Channel3    = 5U,          /**< LPIT1 Channel 3 is selected */
    kTRGMUX_Source0RtcAlarm         = 6U,          /**< RTC Alarm is selected */
    kTRGMUX_Source1Lptmr2Trigger    = 6U,          /**< LPTMR2 Trigger is selected */
    kTRGMUX_Source0RtcSeconds       = 7U,          /**< RTC Seconds is selected */
    kTRGMUX_Source1Tpm3ChannelEven  = 7U,          /**< TPM3 Channel Even is selected */
    kTRGMUX_Source0Lptmr0Trigger    = 8U,          /**< LPTMR0 Trigger is selected */
    kTRGMUX_Source1Tpm3ChannelOdd   = 8U,          /**< TPM3 Channel Odd is selected */
    kTRGMUX_Source0Lptmr1Trigger    = 9U,          /**< LPTMR1 Trigger is selected */
    kTRGMUX_Source1Tpm3Overflow     = 9U,          /**< TPM3 Overflow is selected */
    kTRGMUX_Source0Tpm0ChannelEven  = 10U,         /**< TPM0 Channel Even is selected */
    kTRGMUX_Source1Lpi2c3MasterStop = 10U,         /**< LPI2C3 Master Stop is selected */
    kTRGMUX_Source0Tpm0ChannelOdd   = 11U,         /**< TPM0 Channel Odd is selected */
    kTRGMUX_Source1Lpi2c3SlaveStop  = 11U,         /**< LPI2C3 Slave Stop is selected */
    kTRGMUX_Source0Tpm0Overflow     = 12U,         /**< TPM0 Overflow is selected */
    kTRGMUX_Source1Lpspi3Frame      = 12U,         /**< LPSPI3 Frame is selected */
    kTRGMUX_Source0Tpm1ChannelEven  = 13U,         /**< TPM1 Channel Even is selected */
    kTRGMUX_Source1Lpspi3RX         = 13U,         /**< LPSPI3 Rx is selected */
    kTRGMUX_Source0Tpm1ChannelOdd   = 14U,         /**< TPM1 Channel Odd is selected */
    kTRGMUX_Source1Lpuart3RxData    = 14U,         /**< LPUART3 Rx Data is selected */
    kTRGMUX_Source0Tpm1Overflow     = 15U,         /**< TPM1 Overflow is selected */
    kTRGMUX_Source1Lpuart3RxIdle    = 15U,         /**< LPUART3 Rx Idle is selected */
    kTRGMUX_Source0Tpm2ChannelEven  = 16U,         /**< TPM2 Channel Even is selected */
    kTRGMUX_Source1Lpuart3TxData    = 16U,         /**< LPUART3 Tx Data is selected */
    kTRGMUX_Source0Tpm2ChannelOdd   = 17U,         /**< TPM2 Channel Odd is selected */
    kTRGMUX_Source1PortEPinTrigger  = 17U,         /**< PORTE Pin Trigger is selected */
    kTRGMUX_Source0Tpm2Overflow     = 18U,         /**< TPM2 Overflow is selected */
    kTRGMUX_Source1Lpcmp1Output     = 18U,         /**< LPCMP1 Output is selected */
    kTRGMUX_Source0FlexIO0Timer0    = 19U,         /**< FlexIO0 Timer 0 is selected */
    kTRGMUX_Source1RtcAlarm         = 19U,         /**< RTC Alarm is selected */
    kTRGMUX_Source0FlexIO0Timer1    = 20U,         /**< FlexIO0 Timer 1 is selected */
    kTRGMUX_Source1RtcSeconds       = 20U,         /**< RTC Seconds is selected */
    kTRGMUX_Source0FlexIO0Timer2    = 21U,         /**< FlexIO0 Timer 2 is selected */
    kTRGMUX_Source1Lptmr0Trigger    = 21U,         /**< LPTMR0 Trigger is selected */
    kTRGMUX_Source0FlexIO0Timer3    = 22U,         /**< FlexIO0 Timer 3 is selected */
    kTRGMUX_Source1Lptmr1Trigger    = 22U,         /**< LPTMR1 Trigger is selected */
    kTRGMUX_Source0FlexIO0Timer4    = 23U,         /**< FLexIO0 Timer 4 is selected */
    kTRGMUX_Source1Tpm1ChannelEven  = 23U,         /**< TPM1 Channel Even is selected */
    kTRGMUX_Source0FlexIO0Timer5    = 24U,         /**< FlexIO0 Timer 5 is selected */
    kTRGMUX_Source1Tpm1ChannelOdd   = 24U,         /**< TPM1 Channel Odd is selected */
    kTRGMUX_Source0FlexIO0Timer6    = 25U,         /**< FlexIO0 Timer 6 is selected */
    kTRGMUX_Source1Tpm1Overflow     = 25U,         /**< TPM1 Overflow is selected */
    kTRGMUX_Source0FlexIO0Timer7    = 26U,         /**< FlexIO0 Timer 7 is selected */
    kTRGMUX_Source1Tpm2ChannelEven  = 26U,         /**< TPM2 Channel Even is selected */
    kTRGMUX_Source0Lpi2c0MasterStop = 27U,         /**< LPI2C0 Master Stop is selected */
    kTRGMUX_Source1Tpm2ChannelOdd   = 27U,         /**< TPM2 Channel Odd is selected */
    kTRGMUX_Source0Lpi2c0SlaveStop  = 28U,         /**< LPI2C0 Slave Stop is selected */
    kTRGMUX_Source1Tpm2Overflow     = 28U,         /**< TPM2 Overflow is selected */
    kTRGMUX_Source0Lpi2c1MasterStop = 29U,         /**< LPI2C1 Master Stop is selected */
    kTRGMUX_Source1FlexIO0Timer0    = 29U,         /**< FlexIO0 Timer 0 is selected */
    kTRGMUX_Source0Lpi2c1SlaveStop  = 30U,         /**< LPI2C1 Slave Stop is selected */
    kTRGMUX_Source1FlexIO0Timer1    = 30U,         /**< FlexIO0 Timer 1 is selected */
    kTRGMUX_Source0Lpi2c2MasterStop = 31U,         /**< LPI2C2 Master Stop is selected */
    kTRGMUX_Source1FlexIO0Timer2    = 31U,         /**< FlexIO0 Timer 2 is selected */
    kTRGMUX_Source0Lpi2c2SlaveStop  = 32U,         /**< LPI2C2 Slave Stop is selected */
    kTRGMUX_Source1FlexIO0Timer3    = 32U,         /**< FlexIO0 Timer 3 is selected */
    kTRGMUX_Source0Sai0Rx           = 33U,         /**< SAI0 Rx Frame Sync is selected */
    kTRGMUX_Source1FlexIO0Timer4    = 33U,         /**< FLexIO0 Timer 4 is selected */
    kTRGMUX_Source0Sai0Tx           = 34U,         /**< SAI0 Tx Frame Sync is selected */
    kTRGMUX_Source1FlexIO0Timer5    = 34U,         /**< FlexIO0 Timer 5 is selected */
    kTRGMUX_Source0Lpspi0Frame      = 35U,         /**< LPSPI0 Frame is selected */
    kTRGMUX_Source1FlexIO0Timer6    = 35U,         /**< FlexIO0 Timer 6 is selected */
    kTRGMUX_Source0Lpspi0Rx         = 36U,         /**< LPSPI0 Rx is selected */
    kTRGMUX_Source1FlexIO0Timer7    = 36U,         /**< FlexIO0 Timer 7 is selected */
    kTRGMUX_Source0Lpspi1Frame      = 37U,         /**< LPSPI1 Frame is selected */
    kTRGMUX_Source1Lpi2c0MasterStop = 37U,         /**< LPI2C0 Master Stop is selected */
    kTRGMUX_Source0Lpspi1Rx         = 38U,         /**< LPSPI1 Rx is selected */
    kTRGMUX_Source1Lpi2c0SlaveStop  = 38U,         /**< LPI2C0 Slave Stop is selected */
    kTRGMUX_Source0Lpspi2Frame      = 39U,         /**< LPSPI2 Frame is selected */
    kTRGMUX_Source1Lpi2c1MasterStop = 39U,         /**< LPI2C1 Master Stop is selected */
    kTRGMUX_Source0Lpspi2RX         = 40U,         /**< LPSPI2 Rx is selected */
    kTRGMUX_Source1Lpi2c1SlaveStop  = 40U,         /**< LPI2C1 Slave Stop is selected */
    kTRGMUX_Source0Lpuart0RxData    = 41U,         /**< LPUART0 Rx Data is selected */
    kTRGMUX_Source1Lpi2c2MasterStop = 41U,         /**< LPI2C2 Master Stop is selected */
    kTRGMUX_Source0Lpuart0RxIdle    = 42U,         /**< LPUART0 Rx Idle is selected */
    kTRGMUX_Source1Lpi2c2SlaveStop  = 42U,         /**< LPI2C2 Slave Stop is selected */
    kTRGMUX_Source0Lpuart0TxData    = 43U,         /**< LPUART0 Tx Data is selected */
    kTRGMUX_Source1Sai0Rx           = 43U,         /**< SAI0 Rx Frame Sync is selected */
    kTRGMUX_Source0Lpuart1RxData    = 44U,         /**< LPUART1 Rx Data is selected */
    kTRGMUX_Source1Sai0Tx           = 44U,         /**< SAI0 Tx Frame Sync is selected */
    kTRGMUX_Source0Lpuart1RxIdle    = 45U,         /**< LPUART1 Rx Idle is selected */
    kTRGMUX_Source1Lpspi0Frame      = 45U,         /**< LPSPI0 Frame is selected */
    kTRGMUX_Source0Lpuart1TxData    = 46U,         /**< LPUART1 TX Data is selected */
    kTRGMUX_Source1Lpspi0Rx         = 46U,         /**< LPSPI0 Rx is selected */
    kTRGMUX_Source0Lpuart2RxData    = 47U,         /**< LPUART2 RX Data is selected */
    kTRGMUX_Source1Lpspi1Frame      = 47U,         /**< LPSPI1 Frame is selected */
    kTRGMUX_Source0Lpuart2RxIdle    = 48U,         /**< LPUART2 RX Idle is selected */
    kTRGMUX_Source1Lpspi1Rx         = 48U,         /**< LPSPI1 Rx is selected */
    kTRGMUX_Source0Lpuart2TxData    = 49U,         /**< LPUART2 TX Data is selected */
    kTRGMUX_Source1Lpspi2Frame      = 49U,         /**< LPSPI2 Frame is selected */
    kTRGMUX_Source0Usb0Frame        = 50U,         /**< USB0 Start of Frame is selected */
    kTRGMUX_Source1Lpspi2RX         = 50U,         /**< LPSPI2 Rx is selected */
    kTRGMUX_Source0PortAPinTrigger  = 51U,         /**< PORTA Pin Trigger is selected */
    kTRGMUX_Source1Lpuart0RxData    = 51U,         /**< LPUART0 Rx Data is selected */
    kTRGMUX_Source0PortBPinTrigger  = 52U,         /**< PORTB Pin Trigger is selected */
    kTRGMUX_Source1Lpuart0RxIdle    = 52U,         /**< LPUART0 Rx Idle is selected */
    kTRGMUX_Source0PortCPinTrigger  = 53U,         /**< PORTC Pin Trigger is selected */
    kTRGMUX_Source1Lpuart0TxData    = 53U,         /**< LPUART0 Tx Data is selected */
    kTRGMUX_Source0PortDPinTrigger  = 54U,         /**< PORTD Pin Trigger is selected */
    kTRGMUX_Source1Lpuart1RxData    = 54U,         /**< LPUART1 Rx Data is selected */
    kTRGMUX_Source0Lpcmp0Output     = 55U,         /**< LPCMP0 Output is selected */
    kTRGMUX_Source1Lpuart1RxIdle    = 55U,         /**< LPUART1 Rx Idle is selected */
    kTRGMUX_Source0Lpi2c3MasterStop = 56U,         /**< LPI2C3 Master Stop is selected */
    kTRGMUX_Source1Lpuart1TxData    = 56U,         /**< LPUART1 TX Data is selected */
    kTRGMUX_Source0Lpi2c3SlaveStop  = 57U,         /**< LPI2C3 Slave Stop is selected */
    kTRGMUX_Source1Lpuart2RxData    = 57U,         /**< LPUART2 RX Data is selected */
    kTRGMUX_Source0Lpspi3Frame      = 58U,         /**< LPSPI3 Frame is selected */
    kTRGMUX_Source1Lpuart2RxIdle    = 58U,         /**< LPUART2 RX Idle is selected */
    kTRGMUX_Source0Lpspi3Rx         = 59U,         /**< LPSPI3 Rx Data is selected */
    kTRGMUX_Source1Lpuart2TxData    = 59U,         /**< LPUART2 TX Data is selected */
    kTRGMUX_Source0Lpuart3RxData    = 60U,         /**< LPUART3 Rx Data is selected */
    kTRGMUX_Source1PortAPinTrigger  = 60U,         /**< PORTA Pin Trigger is selected */
    kTRGMUX_Source0Lpuart3RxIdle    = 61U,         /**< LPUART3 Rx Idle is selected */
    kTRGMUX_Source1PortBPinTrigger  = 61U,         /**< PORTB Pin Trigger is selected */
    kTRGMUX_Source0Lpuart3TxData    = 62U,         /**< LPUART3 Tx Data is selected */
    kTRGMUX_Source1PortCPinTrigger  = 62U,         /**< PORTC Pin Trigger is selected */
    kTRGMUX_Source0PortEPinTrigger  = 63U,         /**< PORTE Pin Trigger is selected */
    kTRGMUX_Source1PortDPinTrigger  = 63U,         /**< PORTD Pin Trigger is selected */
} trgmux_source_t;

/*!
 * @brief Enumeration for the TRGMUX device
 *
 * Defines the enumeration for the TRGMUX device collections.
 */
typedef enum _trgmux_device
{
    kTRGMUX_Trgmux0Dmamux0          = 0U,          /**< DMAMUX0 device trigger input */
    kTRGMUX_Trgmux1Dmamux1          = 0U,          /**< DMAMUX1 device trigger input */
    kTRGMUX_Trgmux0Lpit0            = 1U,          /**< LPIT0 device trigger input */
    kTRGMUX_Trgmux1Lpit1            = 1U,          /**< LPIT1 device trigger input */
    kTRGMUX_Trgmux0Tpm0             = 2U,          /**< TPM0 device trigger input */
    kTRGMUX_Trgmux1Tpm3             = 2U,          /**< TPM3 device trigger input */
    kTRGMUX_Trgmux0Tpm1             = 3U,          /**< TPM1 device trigger input */
    kTRGMUX_Trgmux1Lpi2c3           = 3U,          /**< LPI2C3 device trigger input */
    kTRGMUX_Trgmux0Tpm2             = 4U,          /**< TPM2 device trigger input */
    kTRGMUX_Trgmux1Lpspi3           = 4U,          /**< LPSPI3 device trigger input */
    kTRGMUX_Trgmux0Flexio0          = 5U,          /**< FLEXIO0 device trigger input */
    kTRGMUX_Trgmux1Lpuart3          = 5U,          /**< LPUART3 device trigger input */
    kTRGMUX_Trgmux0Lpi2c0           = 6U,          /**< LPI2C0 device trigger input */
    kTRGMUX_Trgmux1Lpcmp1           = 6U,          /**< LPCMP1 device trigger input */
    kTRGMUX_Trgmux0Lpi2c1           = 7U,          /**< LPI2C1 device trigger input */
    kTRGMUX_Trgmux1Dmamux0          = 7U,          /**< DMAMUX0 device trigger input */
    kTRGMUX_Trgmux0Lpi2c2           = 8U,          /**< LPI2C2 device trigger input */
    kTRGMUX_Trgmux1Lpit0            = 8U,          /**< LPIT0 device trigger input */
    kTRGMUX_Trgmux0Lpspi0           = 9U,          /**< LPSPI0 device trigger input */
    kTRGMUX_Trgmux1Tpm0             = 9U,          /**< TPM0 device trigger input */
    kTRGMUX_Trgmux0Lpspi1           = 10U,         /**< LPSPI1 device trigger input */
    kTRGMUX_Trgmux1Tpm1             = 10U,         /**< TPM1 device trigger input */
    kTRGMUX_Trgmux0Lpspi2           = 11U,         /**< LPSPI2 device trigger input */
    kTRGMUX_Trgmux1Tpm2             = 11U,         /**< TPM2 device trigger input */
    kTRGMUX_Trgmux0Lpuart0          = 12U,         /**< LPUART0 device trigger input */
    kTRGMUX_Trgmux1Flexio0          = 12U,         /**< FLEXIO0 device trigger input */
    kTRGMUX_Trgmux0Lpuart1          = 13U,         /**< LPUART1 device trigger input */
    kTRGMUX_Trgmux1Lpi2c0           = 13U,         /**< LPI2C0 device trigger input */
    kTRGMUX_Trgmux0Lpuart2          = 14U,         /**< LPUART2 device trigger input */
    kTRGMUX_Trgmux1Lpi2c1           = 14U,         /**< LPI2C1 device trigger input */
    kTRGMUX_Trgmux0Adc0             = 15U,         /**< ADC0 device trigger input */
    kTRGMUX_Trgmux1Lpi2c2           = 15U,         /**< LPI2C2 device trigger input */
    kTRGMUX_Trgmux0Lpcmp0           = 16U,         /**< LPCMP0 device trigger input */
    kTRGMUX_Trgmux1Lpspi0           = 16U,         /**< LPSPI0 device trigger input */
    kTRGMUX_Trgmux0Dac0             = 17U,         /**< DAC0 device trigger input */
    kTRGMUX_Trgmux1Lpspi1           = 17U,         /**< LPSPI1 device trigger input */
    kTRGMUX_Trgmux0Dmamux1          = 18U,         /**< DMAMUX1 device trigger input */
    kTRGMUX_Trgmux1Lpspi2           = 18U,         /**< LPSPI2 device trigger input */
    kTRGMUX_Trgmux0Lpit1            = 19U,         /**< LPIT1 device trigger input */
    kTRGMUX_Trgmux1Lpuart0          = 19U,         /**< LPUART0 device trigger input */
    kTRGMUX_Trgmux0Tpm3             = 20U,         /**< TPM3 device trigger input */
    kTRGMUX_Trgmux1Lpuart1          = 20U,         /**< LPUART1 device trigger input */
    kTRGMUX_Trgmux0Lpi2c3           = 21U,         /**< LPI2C3 device trigger input */
    kTRGMUX_Trgmux1Lpuart2          = 21U,         /**< LPUART2 device trigger input */
    kTRGMUX_Trgmux0Lpspi3           = 22U,         /**< LPSPI3 device trigger input */
    kTRGMUX_Trgmux1Adc0             = 22U,         /**< ADC0 device trigger input */
    kTRGMUX_Trgmux0Lpuart3          = 23U,         /**< LPUART3 device trigger input */
    kTRGMUX_Trgmux1Lpcmp0           = 23U,         /**< LPCMP0 device trigger input */
    kTRGMUX_Trgmux0Lpcmp1           = 24U,         /**< LPCMP1 device trigger input */
    kTRGMUX_Trgmux1Lpdac0           = 24U,         /**< LPDAC0 device trigger input */
} trgmux_device_t;

/* @} */

/*!
 * @addtogroup xrdc_mapping
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*!
 * @brief Structure for the XRDC mapping
 *
 * Defines the structure for the XRDC resource collections.
 */

typedef enum _xrdc_master
{
    kXRDC_MasterCM4CodeBus          = 0U,          /**< CM4 C-BUS */
    kXRDC_MasterCM4SystemBus        = 1U,          /**< CM4 S-BUS */
    kXRDC_MasterEdma0               = 2U,          /**< EDMA0 */
    kXRDC_MasterUsdhc               = 3U,          /**< USDHC */
    kXRDC_MasterUsb                 = 4U,          /**< USB */
    kXRDC_MasterCM0P                = 32U,         /**< CM0P */
    kXRDC_MasterEdma1               = 33U,         /**< EDMA1 */
    kXRDC_MasterCau3                = 34U,         /**< CAU3 */
} xrdc_master_t;

typedef enum _xrdc_mem
{
    kXRDC_MemMrc0_0                 = 0U,          /**< MRC0 Memory 0 */
    kXRDC_MemMrc0_1                 = 1U,          /**< MRC0 Memory 1 */
    kXRDC_MemMrc0_2                 = 2U,          /**< MRC0 Memory 2 */
    kXRDC_MemMrc0_3                 = 3U,          /**< MRC0 Memory 3 */
    kXRDC_MemMrc0_4                 = 4U,          /**< MRC0 Memory 4 */
    kXRDC_MemMrc0_5                 = 5U,          /**< MRC0 Memory 5 */
    kXRDC_MemMrc0_6                 = 6U,          /**< MRC0 Memory 6 */
    kXRDC_MemMrc0_7                 = 7U,          /**< MRC0 Memory 7 */
    kXRDC_MemMrc1_0                 = 16U,         /**< MRC1 Memory 0 */
    kXRDC_MemMrc1_1                 = 17U,         /**< MRC1 Memory 1 */
    kXRDC_MemMrc1_2                 = 18U,         /**< MRC1 Memory 2 */
    kXRDC_MemMrc1_3                 = 19U,         /**< MRC1 Memory 3 */
    kXRDC_MemMrc1_4                 = 20U,         /**< MRC1 Memory 4 */
    kXRDC_MemMrc1_5                 = 21U,         /**< MRC1 Memory 5 */
    kXRDC_MemMrc1_6                 = 22U,         /**< MRC1 Memory 6 */
    kXRDC_MemMrc1_7                 = 23U,         /**< MRC1 Memory 7 */
} xrdc_mem_t;

typedef enum _xrdc_periph
{
    kXRDC_PeriphMscm                = 1U,          /**< Miscellaneous System Control Module (MSCM) */
    kXRDC_PeriphDma0                = 8U,          /**< Direct Memory Access 0 (DMA0) controller */
    kXRDC_PeriphDma0Tcd             = 9U,          /**< Direct Memory Access 0 (DMA0) controller transfer control descriptors */
    kXRDC_PeriphFlexBus             = 12U,         /**< External Bus Interface(FlexBus) */
    kXRDC_PeriphXrdcMgr             = 20U,         /**< Extended Resource Domain Controller (XRDC) MGR */
    kXRDC_PeriphXrdcMdac            = 21U,         /**< Extended Resource Domain Controller (XRDC) MDAC */
    kXRDC_PeriphXrdcPac             = 22U,         /**< Extended Resource Domain Controller (XRDC) PAC */
    kXRDC_PeriphXrdcMrc             = 23U,         /**< Extended Resource Domain Controller (XRDC) MRC */
    kXRDC_PeriphSema420             = 27U,         /**< Semaphore Unit 0 (SEMA420) */
    kXRDC_PeriphCmc0                = 32U,         /**< Core Mode Controller (CMC) */
    kXRDC_PeriphDmamux0             = 33U,         /**< Direct Memory Access Multiplexer 0 (DMAMUX0) */
    kXRDC_PeriphEwm                 = 34U,         /**< External Watchdog Monitor (EWM) */
    kXRDC_PeriphFtfe                = 35U,         /**< Flash Memory Module (FTFE) */
    kXRDC_PeriphLlwu0               = 36U,         /**< Low Leakage Wake-up Unit 0 (LLWU0) */
    kXRDC_PeriphMua                 = 37U,         /**< Message Unit Side A (MU-A) */
    kXRDC_PeriphSim                 = 38U,         /**< System Integration Module (SIM) */
    kXRDC_PeriphSimdgo              = 39U,         /**< System Integration Module - DGO (SIM-DGO) */
    kXRDC_PeriphSpm                 = 40U,         /**< System Power Management (SPM) */
    kXRDC_PeriphTrgmux0             = 41U,         /**< Tirgger Multiplexer 0 (TRGMUX0) */
    kXRDC_PeriphWdog0               = 42U,         /**< Watchdog 0 (WDOG0) */
    kXRDC_PeriphPcc0                = 43U,         /**< Peripheral Clock Controller 0 (PCC0) */
    kXRDC_PeriphScg                 = 44U,         /**< System Clock Generator (SCG) */
    kXRDC_PeriphSrf                 = 45U,         /**< System Register File */
    kXRDC_PeriphVbat                = 46U,         /**< VBAT Register File */
    kXRDC_PeriphCrc0                = 47U,         /**< Cyclic Redundancy Check 0 (CRC0) */
    kXRDC_PeriphLpit0               = 48U,         /**< Low-Power Periodic Interrupt Timer 0 (LPIT0) */
    kXRDC_PeriphRtc                 = 49U,         /**< Real Time Clock (RTC) */
    kXRDC_PeriphLptmr0              = 50U,         /**< Low-Power Timer 0 (LPTMR0) */
    kXRDC_PeriphLptmr1              = 51U,         /**< Low-Power Timer 1 (LPTMR1) */
    kXRDC_PeriphTstmr0              = 52U,         /**< Time Stamp Timer 0 (TSTMR0) */
    kXRDC_PeriphTpm0                = 53U,         /**< Timer / Pulse Width Modulator Module 0 (TPM0) - 6 channel */
    kXRDC_PeriphTpm1                = 54U,         /**< Timer / Pulse Width Modulator Module 1 (TPM1) - 2 channel */
    kXRDC_PeriphTpm2                = 55U,         /**< Timer / Pulse Width Modulator Module 2 (TPM2) - 6 channel */
    kXRDC_PeriphEmvsim0             = 56U,         /**< Euro Mastercard Visa Secure Identity Module 0 (EMVSIM0) */
    kXRDC_PeriphFlexio0             = 57U,         /**< Flexible Input / Output 0 (FlexIO0) */
    kXRDC_PeriphLpi2c0              = 58U,         /**< Low-Power Inter-Integrated Circuit 0 (LPI2C0) */
    kXRDC_PeriphLpi2c1              = 59U,         /**< Low-Power Inter-Integrated Circuit 1 (LPI2C1) */
    kXRDC_PeriphLpi2c2              = 60U,         /**< Low-Power Inter-Integrated Circuit 2 (LPI2C2) */
    kXRDC_PeriphSai0                = 61U,         /**< Serial Audio Interface 0 (SAI0) */
    kXRDC_PeriphSdhc0               = 62U,         /**< Secure Digital Host Controller 0 (SDHC0) */
    kXRDC_PeriphLpspi0              = 63U,         /**< Low-Power Serial Peripheral Interface 0 (LPSPI0) */
    kXRDC_PeriphLpspi1              = 64U,         /**< Low-Power Serial Peripheral Interface 1 (LPSPI1) */
    kXRDC_PeriphLpspi2              = 65U,         /**< Low-Power Serial Peripheral Interface 2 (LPSPI2) */
    kXRDC_PeriphLpuart0             = 66U,         /**< Low-Power Universal Asynchronous Receive / Transmit 0 (LPUART0) */
    kXRDC_PeriphLpuart1             = 67U,         /**< Low-Power Universal Asynchronous Receive / Transmit 1 (LPUART1) */
    kXRDC_PeriphLpuart2             = 68U,         /**< Low-Power Universal Asynchronous Receive / Transmit 2 (LPUART2) */
    kXRDC_PeriphUsb0                = 69U,         /**< Universal Serial Bus 0 (USB0) - Full Speed, Device Only */
    kXRDC_PeriphPortA               = 70U,         /**< PORTA Multiplex Control */
    kXRDC_PeriphPortB               = 71U,         /**< PORTB Multiplex Control */
    kXRDC_PeriphPortC               = 72U,         /**< PORTC Multiplex Control */
    kXRDC_PeriphPortD               = 73U,         /**< PORTD Multiplex Control */
    kXRDC_PeriphLpadc0              = 74U,         /**< Low-Power Analog-to-Digital Converter 0 (LPADC0) */
    kXRDC_PeriphLpcmp0              = 75U,         /**< Low-Power Comparator 0 (LPCMP0) */
    kXRDC_PeriphDac0                = 76U,         /**< Digital-to-Analog Converter 0 (DAC0) */
    kXRDC_PeriphVref                = 77U,         /**< Voltage Reference (VREF) */
    kXRDC_PeriphDma1                = 136U,        /**< Direct Memory Access 1 (DMA1) controller */
    kXRDC_PeriphDma1Tcd             = 137U,        /**< Direct Memory Access 1 (DMA1) controller trasfer control descriptors */
    kXRDC_PeriphFgpio1              = 143U,        /**< IO Port Alias */
    kXRDC_PeriphSema421             = 155U,        /**< Semaphore Unit 1 (SEMA421) */
    kXRDC_PeriphCmc1                = 160U,        /**< Core Mode Controller (CMC) */
    kXRDC_PeriphDmamux1             = 161U,        /**< Direct Memory Access Mutiplexer 1 (DMAMUX1) */
    kXRDC_PeriphIntmux0             = 162U,        /**< Interrupt Multiplexer 0 (INTMUX0) */
    kXRDC_Periphllwu1               = 163U,        /**< Low Leakage Wake-up Unit 1 (LLWU1) */
    kXRDC_PeriphMub                 = 164U,        /**< Messaging Unit - Side B (MU-B) */
    kXRDC_PeriphTrgmux1             = 165U,        /**< Trigger Multiplexer 1 (TRGMUX1) */
    kXRDC_PeriphWdog1               = 166U,        /**< Watchdog 1 (WDOG1) */
    kXRDC_PeriphPcc1                = 167U,        /**< Peripheral Clock Controller 1 (PCC1) */
    kXRDC_PeriphCau3                = 168U,        /**< Cryptographic Acceleration Unit (CAU3) */
    kXRDC_PeriphTrng                = 169U,        /**< True Random Number Generator (TRNG) */
    kXRDC_PeriphLpit1               = 170U,        /**< Low-Power Periodic Interrupt Timer 1 (LPIT1) */
    kXRDC_PeriphLptmr2              = 171U,        /**< Low-Power Timer 2 (LPTMR2) */
    kXRDC_PeriphTstmr1              = 172U,        /**< Time Stamp Timer 1 (TSTMR1) */
    kXRDC_PeriphTpm3                = 173U,        /**< Timer / Pulse Width Modulation Module 3 (TPM3) - 2 channel */
    kXRDC_PeriphLpi2c3              = 174U,        /**< Low-Power Inter-Integrated Circuit 3 (LPI2C3) */
    kXRDC_PeriphRsim                = 175U,        /**< 2.4GHz Radio (RF2.4G) - RSIM */
    kXRDC_PeriphXcvr                = 176U,        /**< 2.4GHz Radio (RF2.4G) - XCVR */
    kXRDC_PeriphAnt                 = 177U,        /**< 2.4GHz Radio (RF2.4G) - ANT+ Link Layer */
    kXRDC_PeriphBle                 = 178U,        /**< 2.4GHz Radio (RF2.4G) - Bluetooth Link layer */
    kXRDC_PeriphGfsk                = 179U,        /**< 2.4GHz Radio (RF2.4G) - Generic Link layer */
    kXRDC_PeriphIeee                = 180U,        /**< 2.4GHz Radio (RF2.4G) - IEEE 802.15.4 Link Layer */
    kXRDC_PeriphLpspi3              = 181U,        /**< Low-Power Serial Peripheral Interface 3 (LPSPI3) */
    kXRDC_PeriphLpuart3             = 182U,        /**< Low-Power Universal Asynchronous Receive / Transmit 3 (LPUART3) */
    kXRDC_PeriphPortE               = 183U,        /**< PORTE Multiplex Control */
    kXRDC_PeriphLpcmp1              = 214U,        /**< Low-Power Comparator 1 (LPCMP1) */
} xrdc_periph_t;

/* @} */


/*!
 * @}
 */ /* end of group Mapping_Information */


/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #pragma push
  #pragma anon_unions
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- ADC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Peripheral_Access_Layer ADC Peripheral Access Layer
 * @{
 */

/** ADC - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t CTRL;                              /**< ADC Control Register, offset: 0x10 */
  __IO uint32_t STAT;                              /**< ADC Status Register, offset: 0x14 */
  __IO uint32_t IE;                                /**< Interrupt Enable Register, offset: 0x18 */
  __IO uint32_t DE;                                /**< DMA Enable Register, offset: 0x1C */
  __IO uint32_t CFG;                               /**< ADC Configuration Register, offset: 0x20 */
  __IO uint32_t PAUSE;                             /**< ADC Pause Register, offset: 0x24 */
       uint8_t RESERVED_1[8];
  __IO uint32_t FCTRL;                             /**< ADC FIFO Control Register, offset: 0x30 */
  __O  uint32_t SWTRIG;                            /**< Software Trigger Register, offset: 0x34 */
       uint8_t RESERVED_2[8];
  __IO uint32_t OFSTRIM;                           /**< ADC Offset Trim Register, offset: 0x40 */
       uint8_t RESERVED_3[124];
  __IO uint32_t TCTRL[4];                          /**< Trigger Control Register, array offset: 0xC0, array step: 0x4 */
       uint8_t RESERVED_4[48];
  struct {                                         /* offset: 0x100, array step: 0x8 */
    __IO uint32_t CMDL;                              /**< ADC Command Low Buffer Register, array offset: 0x100, array step: 0x8 */
    __IO uint32_t CMDH;                              /**< ADC Command High Buffer Register, array offset: 0x104, array step: 0x8 */
  } CMD[15];
       uint8_t RESERVED_5[136];
  __IO uint32_t CV[4];                             /**< Compare Value Register, array offset: 0x200, array step: 0x4 */
       uint8_t RESERVED_6[240];
  __I  uint32_t RESFIFO;                           /**< ADC Data Result FIFO Register, offset: 0x300 */
} ADC_Type;

/* ----------------------------------------------------------------------------
   -- ADC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Register_Masks ADC Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define ADC_VERID_RES_MASK                       (0x1U)
#define ADC_VERID_RES_SHIFT                      (0U)
#define ADC_VERID_RES(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_RES_SHIFT)) & ADC_VERID_RES_MASK)
#define ADC_VERID_DIFFEN_MASK                    (0x2U)
#define ADC_VERID_DIFFEN_SHIFT                   (1U)
#define ADC_VERID_DIFFEN(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_VERID_DIFFEN_SHIFT)) & ADC_VERID_DIFFEN_MASK)
#define ADC_VERID_MVI_MASK                       (0x8U)
#define ADC_VERID_MVI_SHIFT                      (3U)
#define ADC_VERID_MVI(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MVI_SHIFT)) & ADC_VERID_MVI_MASK)
#define ADC_VERID_CSW_MASK                       (0x70U)
#define ADC_VERID_CSW_SHIFT                      (4U)
#define ADC_VERID_CSW(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_CSW_SHIFT)) & ADC_VERID_CSW_MASK)
#define ADC_VERID_VR1RNGI_MASK                   (0x100U)
#define ADC_VERID_VR1RNGI_SHIFT                  (8U)
#define ADC_VERID_VR1RNGI(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_VERID_VR1RNGI_SHIFT)) & ADC_VERID_VR1RNGI_MASK)
#define ADC_VERID_IADCKI_MASK                    (0x200U)
#define ADC_VERID_IADCKI_SHIFT                   (9U)
#define ADC_VERID_IADCKI(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_VERID_IADCKI_SHIFT)) & ADC_VERID_IADCKI_MASK)
#define ADC_VERID_CALOFSI_MASK                   (0x400U)
#define ADC_VERID_CALOFSI_SHIFT                  (10U)
#define ADC_VERID_CALOFSI(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_VERID_CALOFSI_SHIFT)) & ADC_VERID_CALOFSI_MASK)
#define ADC_VERID_MINOR_MASK                     (0xFF0000U)
#define ADC_VERID_MINOR_SHIFT                    (16U)
#define ADC_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MINOR_SHIFT)) & ADC_VERID_MINOR_MASK)
#define ADC_VERID_MAJOR_MASK                     (0xFF000000U)
#define ADC_VERID_MAJOR_SHIFT                    (24U)
#define ADC_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MAJOR_SHIFT)) & ADC_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define ADC_PARAM_TRIG_NUM_MASK                  (0xFFU)
#define ADC_PARAM_TRIG_NUM_SHIFT                 (0U)
#define ADC_PARAM_TRIG_NUM(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_TRIG_NUM_SHIFT)) & ADC_PARAM_TRIG_NUM_MASK)
#define ADC_PARAM_FIFOSIZE_MASK                  (0xFF00U)
#define ADC_PARAM_FIFOSIZE_SHIFT                 (8U)
#define ADC_PARAM_FIFOSIZE(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_FIFOSIZE_SHIFT)) & ADC_PARAM_FIFOSIZE_MASK)
#define ADC_PARAM_CV_NUM_MASK                    (0xFF0000U)
#define ADC_PARAM_CV_NUM_SHIFT                   (16U)
#define ADC_PARAM_CV_NUM(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_CV_NUM_SHIFT)) & ADC_PARAM_CV_NUM_MASK)
#define ADC_PARAM_CMD_NUM_MASK                   (0xFF000000U)
#define ADC_PARAM_CMD_NUM_SHIFT                  (24U)
#define ADC_PARAM_CMD_NUM(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_CMD_NUM_SHIFT)) & ADC_PARAM_CMD_NUM_MASK)

/*! @name CTRL - ADC Control Register */
#define ADC_CTRL_ADCEN_MASK                      (0x1U)
#define ADC_CTRL_ADCEN_SHIFT                     (0U)
#define ADC_CTRL_ADCEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_ADCEN_SHIFT)) & ADC_CTRL_ADCEN_MASK)
#define ADC_CTRL_RST_MASK                        (0x2U)
#define ADC_CTRL_RST_SHIFT                       (1U)
#define ADC_CTRL_RST(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_RST_SHIFT)) & ADC_CTRL_RST_MASK)
#define ADC_CTRL_DOZEN_MASK                      (0x4U)
#define ADC_CTRL_DOZEN_SHIFT                     (2U)
#define ADC_CTRL_DOZEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_DOZEN_SHIFT)) & ADC_CTRL_DOZEN_MASK)
#define ADC_CTRL_RSTFIFO_MASK                    (0x100U)
#define ADC_CTRL_RSTFIFO_SHIFT                   (8U)
#define ADC_CTRL_RSTFIFO(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_RSTFIFO_SHIFT)) & ADC_CTRL_RSTFIFO_MASK)

/*! @name STAT - ADC Status Register */
#define ADC_STAT_RDY_MASK                        (0x1U)
#define ADC_STAT_RDY_SHIFT                       (0U)
#define ADC_STAT_RDY(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_STAT_RDY_SHIFT)) & ADC_STAT_RDY_MASK)
#define ADC_STAT_FOF_MASK                        (0x2U)
#define ADC_STAT_FOF_SHIFT                       (1U)
#define ADC_STAT_FOF(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_STAT_FOF_SHIFT)) & ADC_STAT_FOF_MASK)
#define ADC_STAT_TRGACT_MASK                     (0x30000U)
#define ADC_STAT_TRGACT_SHIFT                    (16U)
#define ADC_STAT_TRGACT(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAT_TRGACT_SHIFT)) & ADC_STAT_TRGACT_MASK)
#define ADC_STAT_CMDACT_MASK                     (0xF000000U)
#define ADC_STAT_CMDACT_SHIFT                    (24U)
#define ADC_STAT_CMDACT(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAT_CMDACT_SHIFT)) & ADC_STAT_CMDACT_MASK)

/*! @name IE - Interrupt Enable Register */
#define ADC_IE_FWMIE_MASK                        (0x1U)
#define ADC_IE_FWMIE_SHIFT                       (0U)
#define ADC_IE_FWMIE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_IE_FWMIE_SHIFT)) & ADC_IE_FWMIE_MASK)
#define ADC_IE_FOFIE_MASK                        (0x2U)
#define ADC_IE_FOFIE_SHIFT                       (1U)
#define ADC_IE_FOFIE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_IE_FOFIE_SHIFT)) & ADC_IE_FOFIE_MASK)

/*! @name DE - DMA Enable Register */
#define ADC_DE_FWMDE_MASK                        (0x1U)
#define ADC_DE_FWMDE_SHIFT                       (0U)
#define ADC_DE_FWMDE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_DE_FWMDE_SHIFT)) & ADC_DE_FWMDE_MASK)

/*! @name CFG - ADC Configuration Register */
#define ADC_CFG_TPRICTRL_MASK                    (0x1U)
#define ADC_CFG_TPRICTRL_SHIFT                   (0U)
#define ADC_CFG_TPRICTRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CFG_TPRICTRL_SHIFT)) & ADC_CFG_TPRICTRL_MASK)
#define ADC_CFG_PWRSEL_MASK                      (0x30U)
#define ADC_CFG_PWRSEL_SHIFT                     (4U)
#define ADC_CFG_PWRSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PWRSEL_SHIFT)) & ADC_CFG_PWRSEL_MASK)
#define ADC_CFG_REFSEL_MASK                      (0xC0U)
#define ADC_CFG_REFSEL_SHIFT                     (6U)
#define ADC_CFG_REFSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_REFSEL_SHIFT)) & ADC_CFG_REFSEL_MASK)
#define ADC_CFG_CALOFS_MASK                      (0x8000U)
#define ADC_CFG_CALOFS_SHIFT                     (15U)
#define ADC_CFG_CALOFS(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_CALOFS_SHIFT)) & ADC_CFG_CALOFS_MASK)
#define ADC_CFG_PUDLY_MASK                       (0xFF0000U)
#define ADC_CFG_PUDLY_SHIFT                      (16U)
#define ADC_CFG_PUDLY(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PUDLY_SHIFT)) & ADC_CFG_PUDLY_MASK)
#define ADC_CFG_PWREN_MASK                       (0x10000000U)
#define ADC_CFG_PWREN_SHIFT                      (28U)
#define ADC_CFG_PWREN(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PWREN_SHIFT)) & ADC_CFG_PWREN_MASK)
#define ADC_CFG_VREF1RNG_MASK                    (0x20000000U)
#define ADC_CFG_VREF1RNG_SHIFT                   (29U)
#define ADC_CFG_VREF1RNG(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CFG_VREF1RNG_SHIFT)) & ADC_CFG_VREF1RNG_MASK)
#define ADC_CFG_ADCKEN_MASK                      (0x80000000U)
#define ADC_CFG_ADCKEN_SHIFT                     (31U)
#define ADC_CFG_ADCKEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADCKEN_SHIFT)) & ADC_CFG_ADCKEN_MASK)

/*! @name PAUSE - ADC Pause Register */
#define ADC_PAUSE_PAUSEDLY_MASK                  (0x1FFU)
#define ADC_PAUSE_PAUSEDLY_SHIFT                 (0U)
#define ADC_PAUSE_PAUSEDLY(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PAUSE_PAUSEDLY_SHIFT)) & ADC_PAUSE_PAUSEDLY_MASK)
#define ADC_PAUSE_PAUSEEN_MASK                   (0x80000000U)
#define ADC_PAUSE_PAUSEEN_SHIFT                  (31U)
#define ADC_PAUSE_PAUSEEN(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_PAUSE_PAUSEEN_SHIFT)) & ADC_PAUSE_PAUSEEN_MASK)

/*! @name FCTRL - ADC FIFO Control Register */
#define ADC_FCTRL_FCOUNT_MASK                    (0x1FU)
#define ADC_FCTRL_FCOUNT_SHIFT                   (0U)
#define ADC_FCTRL_FCOUNT(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FCTRL_FCOUNT_SHIFT)) & ADC_FCTRL_FCOUNT_MASK)
#define ADC_FCTRL_FWMARK_MASK                    (0xF0000U)
#define ADC_FCTRL_FWMARK_SHIFT                   (16U)
#define ADC_FCTRL_FWMARK(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FCTRL_FWMARK_SHIFT)) & ADC_FCTRL_FWMARK_MASK)

/*! @name SWTRIG - Software Trigger Register */
#define ADC_SWTRIG_SWT0_MASK                     (0x1U)
#define ADC_SWTRIG_SWT0_SHIFT                    (0U)
#define ADC_SWTRIG_SWT0(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT0_SHIFT)) & ADC_SWTRIG_SWT0_MASK)
#define ADC_SWTRIG_SWT1_MASK                     (0x2U)
#define ADC_SWTRIG_SWT1_SHIFT                    (1U)
#define ADC_SWTRIG_SWT1(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT1_SHIFT)) & ADC_SWTRIG_SWT1_MASK)
#define ADC_SWTRIG_SWT2_MASK                     (0x4U)
#define ADC_SWTRIG_SWT2_SHIFT                    (2U)
#define ADC_SWTRIG_SWT2(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT2_SHIFT)) & ADC_SWTRIG_SWT2_MASK)
#define ADC_SWTRIG_SWT3_MASK                     (0x8U)
#define ADC_SWTRIG_SWT3_SHIFT                    (3U)
#define ADC_SWTRIG_SWT3(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT3_SHIFT)) & ADC_SWTRIG_SWT3_MASK)

/*! @name OFSTRIM - ADC Offset Trim Register */
#define ADC_OFSTRIM_OFSTRIM_MASK                 (0x3FU)
#define ADC_OFSTRIM_OFSTRIM_SHIFT                (0U)
#define ADC_OFSTRIM_OFSTRIM(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_OFSTRIM_OFSTRIM_SHIFT)) & ADC_OFSTRIM_OFSTRIM_MASK)

/*! @name TCTRL - Trigger Control Register */
#define ADC_TCTRL_HTEN_MASK                      (0x1U)
#define ADC_TCTRL_HTEN_SHIFT                     (0U)
#define ADC_TCTRL_HTEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_HTEN_SHIFT)) & ADC_TCTRL_HTEN_MASK)
#define ADC_TCTRL_TPRI_MASK                      (0x300U)
#define ADC_TCTRL_TPRI_SHIFT                     (8U)
#define ADC_TCTRL_TPRI(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TPRI_SHIFT)) & ADC_TCTRL_TPRI_MASK)
#define ADC_TCTRL_TDLY_MASK                      (0xF0000U)
#define ADC_TCTRL_TDLY_SHIFT                     (16U)
#define ADC_TCTRL_TDLY(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TDLY_SHIFT)) & ADC_TCTRL_TDLY_MASK)
#define ADC_TCTRL_TCMD_MASK                      (0xF000000U)
#define ADC_TCTRL_TCMD_SHIFT                     (24U)
#define ADC_TCTRL_TCMD(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TCMD_SHIFT)) & ADC_TCTRL_TCMD_MASK)

/* The count of ADC_TCTRL */
#define ADC_TCTRL_COUNT                          (4U)

/*! @name CMDL - ADC Command Low Buffer Register */
#define ADC_CMDL_ADCH_MASK                       (0x1FU)
#define ADC_CMDL_ADCH_SHIFT                      (0U)
#define ADC_CMDL_ADCH(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_ADCH_SHIFT)) & ADC_CMDL_ADCH_MASK)
#define ADC_CMDL_ABSEL_MASK                      (0x20U)
#define ADC_CMDL_ABSEL_SHIFT                     (5U)
#define ADC_CMDL_ABSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_ABSEL_SHIFT)) & ADC_CMDL_ABSEL_MASK)

/* The count of ADC_CMDL */
#define ADC_CMDL_COUNT                           (15U)

/*! @name CMDH - ADC Command High Buffer Register */
#define ADC_CMDH_CMPEN_MASK                      (0x3U)
#define ADC_CMDH_CMPEN_SHIFT                     (0U)
#define ADC_CMDH_CMPEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_CMPEN_SHIFT)) & ADC_CMDH_CMPEN_MASK)
#define ADC_CMDH_LWI_MASK                        (0x80U)
#define ADC_CMDH_LWI_SHIFT                       (7U)
#define ADC_CMDH_LWI(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_LWI_SHIFT)) & ADC_CMDH_LWI_MASK)
#define ADC_CMDH_STS_MASK                        (0x700U)
#define ADC_CMDH_STS_SHIFT                       (8U)
#define ADC_CMDH_STS(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_STS_SHIFT)) & ADC_CMDH_STS_MASK)
#define ADC_CMDH_AVGS_MASK                       (0x7000U)
#define ADC_CMDH_AVGS_SHIFT                      (12U)
#define ADC_CMDH_AVGS(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_AVGS_SHIFT)) & ADC_CMDH_AVGS_MASK)
#define ADC_CMDH_LOOP_MASK                       (0xF0000U)
#define ADC_CMDH_LOOP_SHIFT                      (16U)
#define ADC_CMDH_LOOP(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_LOOP_SHIFT)) & ADC_CMDH_LOOP_MASK)
#define ADC_CMDH_NEXT_MASK                       (0xF000000U)
#define ADC_CMDH_NEXT_SHIFT                      (24U)
#define ADC_CMDH_NEXT(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_NEXT_SHIFT)) & ADC_CMDH_NEXT_MASK)

/* The count of ADC_CMDH */
#define ADC_CMDH_COUNT                           (15U)

/*! @name CV - Compare Value Register */
#define ADC_CV_CVL_MASK                          (0xFFFFU)
#define ADC_CV_CVL_SHIFT                         (0U)
#define ADC_CV_CVL(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CVL_SHIFT)) & ADC_CV_CVL_MASK)
#define ADC_CV_CVH_MASK                          (0xFFFF0000U)
#define ADC_CV_CVH_SHIFT                         (16U)
#define ADC_CV_CVH(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CVH_SHIFT)) & ADC_CV_CVH_MASK)

/* The count of ADC_CV */
#define ADC_CV_COUNT                             (4U)

/*! @name RESFIFO - ADC Data Result FIFO Register */
#define ADC_RESFIFO_D_MASK                       (0xFFFFU)
#define ADC_RESFIFO_D_SHIFT                      (0U)
#define ADC_RESFIFO_D(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_D_SHIFT)) & ADC_RESFIFO_D_MASK)
#define ADC_RESFIFO_TSRC_MASK                    (0x30000U)
#define ADC_RESFIFO_TSRC_SHIFT                   (16U)
#define ADC_RESFIFO_TSRC(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_TSRC_SHIFT)) & ADC_RESFIFO_TSRC_MASK)
#define ADC_RESFIFO_LOOPCNT_MASK                 (0xF00000U)
#define ADC_RESFIFO_LOOPCNT_SHIFT                (20U)
#define ADC_RESFIFO_LOOPCNT(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_LOOPCNT_SHIFT)) & ADC_RESFIFO_LOOPCNT_MASK)
#define ADC_RESFIFO_CMDSRC_MASK                  (0xF000000U)
#define ADC_RESFIFO_CMDSRC_SHIFT                 (24U)
#define ADC_RESFIFO_CMDSRC(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_CMDSRC_SHIFT)) & ADC_RESFIFO_CMDSRC_MASK)
#define ADC_RESFIFO_VALID_MASK                   (0x80000000U)
#define ADC_RESFIFO_VALID_SHIFT                  (31U)
#define ADC_RESFIFO_VALID(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_VALID_SHIFT)) & ADC_RESFIFO_VALID_MASK)


/*!
 * @}
 */ /* end of group ADC_Register_Masks */


/* ADC - Peripheral instance base addresses */
/** Peripheral ADC0 base address */
#define ADC0_BASE                                (0x4004A000u)
/** Peripheral ADC0 base pointer */
#define ADC0                                     ((ADC_Type *)ADC0_BASE)
/** Array initializer of ADC peripheral base addresses */
#define ADC_BASE_ADDRS                           { ADC0_BASE }
/** Array initializer of ADC peripheral base pointers */
#define ADC_BASE_PTRS                            { ADC0 }
/** Interrupt vectors for the ADC peripheral type */
#define ADC_IRQS                                 { ADC0_IRQn }

/*!
 * @}
 */ /* end of group ADC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- AXBS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AXBS_Peripheral_Access_Layer AXBS Peripheral Access Layer
 * @{
 */

/** AXBS - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x100 */
    __IO uint32_t PRS;                               /**< Priority Slave Registers, array offset: 0x0, array step: 0x100 */
         uint8_t RESERVED_0[12];
    __IO uint32_t CRS;                               /**< Control Register, array offset: 0x10, array step: 0x100 */
         uint8_t RESERVED_1[236];
  } SLAVE[5];
       uint8_t RESERVED_0[768];
  __IO uint32_t MGPCR0;                            /**< Master General Purpose Control Register, offset: 0x800 */
       uint8_t RESERVED_1[252];
  __IO uint32_t MGPCR1;                            /**< Master General Purpose Control Register, offset: 0x900 */
       uint8_t RESERVED_2[252];
  __IO uint32_t MGPCR2;                            /**< Master General Purpose Control Register, offset: 0xA00 */
       uint8_t RESERVED_3[252];
  __IO uint32_t MGPCR3;                            /**< Master General Purpose Control Register, offset: 0xB00 */
       uint8_t RESERVED_4[252];
  __IO uint32_t MGPCR4;                            /**< Master General Purpose Control Register, offset: 0xC00 */
       uint8_t RESERVED_5[252];
  __IO uint32_t MGPCR5;                            /**< Master General Purpose Control Register, offset: 0xD00 */
} AXBS_Type;

/* ----------------------------------------------------------------------------
   -- AXBS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AXBS_Register_Masks AXBS Register Masks
 * @{
 */

/*! @name PRS - Priority Slave Registers */
#define AXBS_PRS_M0_MASK                         (0x7U)
#define AXBS_PRS_M0_SHIFT                        (0U)
#define AXBS_PRS_M0(x)                           (((uint32_t)(((uint32_t)(x)) << AXBS_PRS_M0_SHIFT)) & AXBS_PRS_M0_MASK)
#define AXBS_PRS_M1_MASK                         (0x70U)
#define AXBS_PRS_M1_SHIFT                        (4U)
#define AXBS_PRS_M1(x)                           (((uint32_t)(((uint32_t)(x)) << AXBS_PRS_M1_SHIFT)) & AXBS_PRS_M1_MASK)
#define AXBS_PRS_M2_MASK                         (0x700U)
#define AXBS_PRS_M2_SHIFT                        (8U)
#define AXBS_PRS_M2(x)                           (((uint32_t)(((uint32_t)(x)) << AXBS_PRS_M2_SHIFT)) & AXBS_PRS_M2_MASK)
#define AXBS_PRS_M3_MASK                         (0x7000U)
#define AXBS_PRS_M3_SHIFT                        (12U)
#define AXBS_PRS_M3(x)                           (((uint32_t)(((uint32_t)(x)) << AXBS_PRS_M3_SHIFT)) & AXBS_PRS_M3_MASK)
#define AXBS_PRS_M4_MASK                         (0x70000U)
#define AXBS_PRS_M4_SHIFT                        (16U)
#define AXBS_PRS_M4(x)                           (((uint32_t)(((uint32_t)(x)) << AXBS_PRS_M4_SHIFT)) & AXBS_PRS_M4_MASK)
#define AXBS_PRS_M5_MASK                         (0x700000U)
#define AXBS_PRS_M5_SHIFT                        (20U)
#define AXBS_PRS_M5(x)                           (((uint32_t)(((uint32_t)(x)) << AXBS_PRS_M5_SHIFT)) & AXBS_PRS_M5_MASK)

/* The count of AXBS_PRS */
#define AXBS_PRS_COUNT                           (5U)

/*! @name CRS - Control Register */
#define AXBS_CRS_PARK_MASK                       (0x7U)
#define AXBS_CRS_PARK_SHIFT                      (0U)
#define AXBS_CRS_PARK(x)                         (((uint32_t)(((uint32_t)(x)) << AXBS_CRS_PARK_SHIFT)) & AXBS_CRS_PARK_MASK)
#define AXBS_CRS_PCTL_MASK                       (0x30U)
#define AXBS_CRS_PCTL_SHIFT                      (4U)
#define AXBS_CRS_PCTL(x)                         (((uint32_t)(((uint32_t)(x)) << AXBS_CRS_PCTL_SHIFT)) & AXBS_CRS_PCTL_MASK)
#define AXBS_CRS_ARB_MASK                        (0x300U)
#define AXBS_CRS_ARB_SHIFT                       (8U)
#define AXBS_CRS_ARB(x)                          (((uint32_t)(((uint32_t)(x)) << AXBS_CRS_ARB_SHIFT)) & AXBS_CRS_ARB_MASK)
#define AXBS_CRS_HLP_MASK                        (0x40000000U)
#define AXBS_CRS_HLP_SHIFT                       (30U)
#define AXBS_CRS_HLP(x)                          (((uint32_t)(((uint32_t)(x)) << AXBS_CRS_HLP_SHIFT)) & AXBS_CRS_HLP_MASK)
#define AXBS_CRS_RO_MASK                         (0x80000000U)
#define AXBS_CRS_RO_SHIFT                        (31U)
#define AXBS_CRS_RO(x)                           (((uint32_t)(((uint32_t)(x)) << AXBS_CRS_RO_SHIFT)) & AXBS_CRS_RO_MASK)

/* The count of AXBS_CRS */
#define AXBS_CRS_COUNT                           (5U)

/*! @name MGPCR0 - Master General Purpose Control Register */
#define AXBS_MGPCR0_AULB_MASK                    (0x7U)
#define AXBS_MGPCR0_AULB_SHIFT                   (0U)
#define AXBS_MGPCR0_AULB(x)                      (((uint32_t)(((uint32_t)(x)) << AXBS_MGPCR0_AULB_SHIFT)) & AXBS_MGPCR0_AULB_MASK)

/*! @name MGPCR1 - Master General Purpose Control Register */
#define AXBS_MGPCR1_AULB_MASK                    (0x7U)
#define AXBS_MGPCR1_AULB_SHIFT                   (0U)
#define AXBS_MGPCR1_AULB(x)                      (((uint32_t)(((uint32_t)(x)) << AXBS_MGPCR1_AULB_SHIFT)) & AXBS_MGPCR1_AULB_MASK)

/*! @name MGPCR2 - Master General Purpose Control Register */
#define AXBS_MGPCR2_AULB_MASK                    (0x7U)
#define AXBS_MGPCR2_AULB_SHIFT                   (0U)
#define AXBS_MGPCR2_AULB(x)                      (((uint32_t)(((uint32_t)(x)) << AXBS_MGPCR2_AULB_SHIFT)) & AXBS_MGPCR2_AULB_MASK)

/*! @name MGPCR3 - Master General Purpose Control Register */
#define AXBS_MGPCR3_AULB_MASK                    (0x7U)
#define AXBS_MGPCR3_AULB_SHIFT                   (0U)
#define AXBS_MGPCR3_AULB(x)                      (((uint32_t)(((uint32_t)(x)) << AXBS_MGPCR3_AULB_SHIFT)) & AXBS_MGPCR3_AULB_MASK)

/*! @name MGPCR4 - Master General Purpose Control Register */
#define AXBS_MGPCR4_AULB_MASK                    (0x7U)
#define AXBS_MGPCR4_AULB_SHIFT                   (0U)
#define AXBS_MGPCR4_AULB(x)                      (((uint32_t)(((uint32_t)(x)) << AXBS_MGPCR4_AULB_SHIFT)) & AXBS_MGPCR4_AULB_MASK)

/*! @name MGPCR5 - Master General Purpose Control Register */
#define AXBS_MGPCR5_AULB_MASK                    (0x7U)
#define AXBS_MGPCR5_AULB_SHIFT                   (0U)
#define AXBS_MGPCR5_AULB(x)                      (((uint32_t)(((uint32_t)(x)) << AXBS_MGPCR5_AULB_SHIFT)) & AXBS_MGPCR5_AULB_MASK)


/*!
 * @}
 */ /* end of group AXBS_Register_Masks */


/* AXBS - Peripheral instance base addresses */
/** Peripheral AXBS0 base address */
#define AXBS0_BASE                               (0x40004000u)
/** Peripheral AXBS0 base pointer */
#define AXBS0                                    ((AXBS_Type *)AXBS0_BASE)
/** Array initializer of AXBS peripheral base addresses */
#define AXBS_BASE_ADDRS                          { AXBS0_BASE }
/** Array initializer of AXBS peripheral base pointers */
#define AXBS_BASE_PTRS                           { AXBS0 }

/*!
 * @}
 */ /* end of group AXBS_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- CAU3 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAU3_Peripheral_Access_Layer CAU3 Peripheral Access Layer
 * @{
 */

/** CAU3 - Register Layout Typedef */
typedef struct {
  __I  uint32_t PCT;                               /**< Processor Core Type, offset: 0x0 */
  __I  uint32_t MCFG;                              /**< Memory Configuration, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t CR;                                /**< Control Register, offset: 0x10 */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x14 */
       uint8_t RESERVED_1[8];
  __IO uint32_t DBGCSR;                            /**< Debug Control/Status Register, offset: 0x20 */
  __IO uint32_t DBGPBR;                            /**< Debug PC Breakpoint Register, offset: 0x24 */
       uint8_t RESERVED_2[8];
  __IO uint32_t DBGMCMD;                           /**< Debug Memory Command Register, offset: 0x30 */
  __IO uint32_t DBGMADR;                           /**< Debug Memory Address Register, offset: 0x34 */
  __IO uint32_t DBGMDR;                            /**< Debug Memory Data Register, offset: 0x38 */
       uint8_t RESERVED_3[180];
  __IO uint32_t SEMA4;                             /**< Semaphore Register, offset: 0xF0 */
  __I  uint32_t SMOWNR;                            /**< Semaphore Ownership Register, offset: 0xF4 */
       uint8_t RESERVED_4[4];
  __IO uint32_t ARR;                               /**< Address Remap Register, offset: 0xFC */
       uint8_t RESERVED_5[128];
  __IO uint32_t CC_R[30];                          /**< CryptoCore General Purpose Registers, array offset: 0x180, array step: 0x4 */
  __IO uint32_t CC_R30;                            /**< General Purpose R30, offset: 0x1F8 */
  __IO uint32_t CC_R31;                            /**< General Purpose R31, offset: 0x1FC */
  __IO uint32_t CC_PC;                             /**< Program Counter, offset: 0x200 */
  __O  uint32_t CC_CMD;                            /**< Start Command Register, offset: 0x204 */
  __I  uint32_t CC_CF;                             /**< Condition Flag, offset: 0x208 */
       uint8_t RESERVED_6[500];
  __IO uint32_t MDPK;                              /**< Mode Register (PublicKey), offset: 0x400 */
       uint8_t RESERVED_7[44];
  __O  uint32_t COM;                               /**< Command Register, offset: 0x430 */
  __IO uint32_t CTL;                               /**< Control Register, offset: 0x434 */
       uint8_t RESERVED_8[8];
  __O  uint32_t CW;                                /**< Clear Written Register, offset: 0x440 */
       uint8_t RESERVED_9[4];
  __IO uint32_t STA;                               /**< Status Register, offset: 0x448 */
  __I  uint32_t ESTA;                              /**< Error Status Register, offset: 0x44C */
       uint8_t RESERVED_10[48];
  __IO uint32_t PKASZ;                             /**< PKHA A Size Register, offset: 0x480 */
       uint8_t RESERVED_11[4];
  __IO uint32_t PKBSZ;                             /**< PKHA B Size Register, offset: 0x488 */
       uint8_t RESERVED_12[4];
  __IO uint32_t PKNSZ;                             /**< PKHA N Size Register, offset: 0x490 */
       uint8_t RESERVED_13[4];
  __IO uint32_t PKESZ;                             /**< PKHA E Size Register, offset: 0x498 */
       uint8_t RESERVED_14[84];
  __I  uint32_t PKHA_VID1;                         /**< PKHA Revision ID 1, offset: 0x4F0 */
  __I  uint32_t PKHA_VID2;                         /**< PKHA Revision ID 2, offset: 0x4F4 */
  __I  uint32_t CHA_VID;                           /**< CHA Revision ID, offset: 0x4F8 */
       uint8_t RESERVED_15[260];
  __IO uint32_t PKHA_CCR;                          /**< PKHA Clock Control Register, offset: 0x600 */
  __I  uint32_t GSR;                               /**< Global Status Register, offset: 0x604 */
  __IO uint32_t CKLFSR;                            /**< Clock Linear Feedback Shift Register, offset: 0x608 */
       uint8_t RESERVED_16[500];
  __IO uint32_t PKA0[32];                          /**< PKHA A0 Register, array offset: 0x800, array step: 0x4 */
  __IO uint32_t PKA1[32];                          /**< PKHA A1 Register, array offset: 0x880, array step: 0x4 */
  __IO uint32_t PKA2[32];                          /**< PKHA A2 Register, array offset: 0x900, array step: 0x4 */
  __IO uint32_t PKA3[32];                          /**< PKHA A3 Register, array offset: 0x980, array step: 0x4 */
  __IO uint32_t PKB0[32];                          /**< PKHA B0 Register, array offset: 0xA00, array step: 0x4 */
  __IO uint32_t PKB1[32];                          /**< PKHA B1 Register, array offset: 0xA80, array step: 0x4 */
  __IO uint32_t PKB2[32];                          /**< PKHA B2 Register, array offset: 0xB00, array step: 0x4 */
  __IO uint32_t PKB3[32];                          /**< PKHA B3 Register, array offset: 0xB80, array step: 0x4 */
  __IO uint32_t PKN0[32];                          /**< PKHA N0 Register, array offset: 0xC00, array step: 0x4 */
  __IO uint32_t PKN1[32];                          /**< PKHA N1 Register, array offset: 0xC80, array step: 0x4 */
  __IO uint32_t PKN2[32];                          /**< PKHA N2 Register, array offset: 0xD00, array step: 0x4 */
  __IO uint32_t PKN3[32];                          /**< PKHA N3 Register, array offset: 0xD80, array step: 0x4 */
  __O  uint32_t PKE[128];                          /**< PKHA E Register, array offset: 0xE00, array step: 0x4 */
} CAU3_Type;

/* ----------------------------------------------------------------------------
   -- CAU3 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAU3_Register_Masks CAU3 Register Masks
 * @{
 */

/*! @name PCT - Processor Core Type */
#define CAU3_PCT_Y_MASK                          (0xFU)
#define CAU3_PCT_Y_SHIFT                         (0U)
#define CAU3_PCT_Y(x)                            (((uint32_t)(((uint32_t)(x)) << CAU3_PCT_Y_SHIFT)) & CAU3_PCT_Y_MASK)
#define CAU3_PCT_X_MASK                          (0xF0U)
#define CAU3_PCT_X_SHIFT                         (4U)
#define CAU3_PCT_X(x)                            (((uint32_t)(((uint32_t)(x)) << CAU3_PCT_X_SHIFT)) & CAU3_PCT_X_MASK)
#define CAU3_PCT_ID_MASK                         (0xFFFFFF00U)
#define CAU3_PCT_ID_SHIFT                        (8U)
#define CAU3_PCT_ID(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_PCT_ID_SHIFT)) & CAU3_PCT_ID_MASK)

/*! @name MCFG - Memory Configuration */
#define CAU3_MCFG_DRAM_SZ_MASK                   (0xF00U)
#define CAU3_MCFG_DRAM_SZ_SHIFT                  (8U)
#define CAU3_MCFG_DRAM_SZ(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_MCFG_DRAM_SZ_SHIFT)) & CAU3_MCFG_DRAM_SZ_MASK)
#define CAU3_MCFG_IROM_SZ_MASK                   (0xF0000U)
#define CAU3_MCFG_IROM_SZ_SHIFT                  (16U)
#define CAU3_MCFG_IROM_SZ(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_MCFG_IROM_SZ_SHIFT)) & CAU3_MCFG_IROM_SZ_MASK)
#define CAU3_MCFG_IRAM_SZ_MASK                   (0xF000000U)
#define CAU3_MCFG_IRAM_SZ_SHIFT                  (24U)
#define CAU3_MCFG_IRAM_SZ(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_MCFG_IRAM_SZ_SHIFT)) & CAU3_MCFG_IRAM_SZ_MASK)

/*! @name CR - Control Register */
#define CAU3_CR_TCSEIE_MASK                      (0x1U)
#define CAU3_CR_TCSEIE_SHIFT                     (0U)
#define CAU3_CR_TCSEIE(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CR_TCSEIE_SHIFT)) & CAU3_CR_TCSEIE_MASK)
#define CAU3_CR_ILLIE_MASK                       (0x2U)
#define CAU3_CR_ILLIE_SHIFT                      (1U)
#define CAU3_CR_ILLIE(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_CR_ILLIE_SHIFT)) & CAU3_CR_ILLIE_MASK)
#define CAU3_CR_ASREIE_MASK                      (0x8U)
#define CAU3_CR_ASREIE_SHIFT                     (3U)
#define CAU3_CR_ASREIE(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CR_ASREIE_SHIFT)) & CAU3_CR_ASREIE_MASK)
#define CAU3_CR_IIADIE_MASK                      (0x10U)
#define CAU3_CR_IIADIE_SHIFT                     (4U)
#define CAU3_CR_IIADIE(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CR_IIADIE_SHIFT)) & CAU3_CR_IIADIE_MASK)
#define CAU3_CR_DIADIE_MASK                      (0x20U)
#define CAU3_CR_DIADIE_SHIFT                     (5U)
#define CAU3_CR_DIADIE(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CR_DIADIE_SHIFT)) & CAU3_CR_DIADIE_MASK)
#define CAU3_CR_SVIE_MASK                        (0x40U)
#define CAU3_CR_SVIE_SHIFT                       (6U)
#define CAU3_CR_SVIE(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CR_SVIE_SHIFT)) & CAU3_CR_SVIE_MASK)
#define CAU3_CR_TCIE_MASK                        (0x80U)
#define CAU3_CR_TCIE_SHIFT                       (7U)
#define CAU3_CR_TCIE(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CR_TCIE_SHIFT)) & CAU3_CR_TCIE_MASK)
#define CAU3_CR_RSTSM4_MASK                      (0x3000U)
#define CAU3_CR_RSTSM4_SHIFT                     (12U)
#define CAU3_CR_RSTSM4(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CR_RSTSM4_SHIFT)) & CAU3_CR_RSTSM4_MASK)
#define CAU3_CR_MRST_MASK                        (0x8000U)
#define CAU3_CR_MRST_SHIFT                       (15U)
#define CAU3_CR_MRST(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CR_MRST_SHIFT)) & CAU3_CR_MRST_MASK)
#define CAU3_CR_FSV_MASK                         (0x10000U)
#define CAU3_CR_FSV_SHIFT                        (16U)
#define CAU3_CR_FSV(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_CR_FSV_SHIFT)) & CAU3_CR_FSV_MASK)
#define CAU3_CR_DTCCFG_MASK                      (0x7000000U)
#define CAU3_CR_DTCCFG_SHIFT                     (24U)
#define CAU3_CR_DTCCFG(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CR_DTCCFG_SHIFT)) & CAU3_CR_DTCCFG_MASK)
#define CAU3_CR_DSHFI_MASK                       (0x10000000U)
#define CAU3_CR_DSHFI_SHIFT                      (28U)
#define CAU3_CR_DSHFI(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_CR_DSHFI_SHIFT)) & CAU3_CR_DSHFI_MASK)
#define CAU3_CR_DDESI_MASK                       (0x20000000U)
#define CAU3_CR_DDESI_SHIFT                      (29U)
#define CAU3_CR_DDESI(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_CR_DDESI_SHIFT)) & CAU3_CR_DDESI_MASK)
#define CAU3_CR_DAESI_MASK                       (0x40000000U)
#define CAU3_CR_DAESI_SHIFT                      (30U)
#define CAU3_CR_DAESI(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_CR_DAESI_SHIFT)) & CAU3_CR_DAESI_MASK)
#define CAU3_CR_MDIS_MASK                        (0x80000000U)
#define CAU3_CR_MDIS_SHIFT                       (31U)
#define CAU3_CR_MDIS(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CR_MDIS_SHIFT)) & CAU3_CR_MDIS_MASK)

/*! @name SR - Status Register */
#define CAU3_SR_TCSEIRQ_MASK                     (0x1U)
#define CAU3_SR_TCSEIRQ_SHIFT                    (0U)
#define CAU3_SR_TCSEIRQ(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_SR_TCSEIRQ_SHIFT)) & CAU3_SR_TCSEIRQ_MASK)
#define CAU3_SR_ILLIRQ_MASK                      (0x2U)
#define CAU3_SR_ILLIRQ_SHIFT                     (1U)
#define CAU3_SR_ILLIRQ(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_SR_ILLIRQ_SHIFT)) & CAU3_SR_ILLIRQ_MASK)
#define CAU3_SR_ASREIRQ_MASK                     (0x8U)
#define CAU3_SR_ASREIRQ_SHIFT                    (3U)
#define CAU3_SR_ASREIRQ(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_SR_ASREIRQ_SHIFT)) & CAU3_SR_ASREIRQ_MASK)
#define CAU3_SR_IIADIRQ_MASK                     (0x10U)
#define CAU3_SR_IIADIRQ_SHIFT                    (4U)
#define CAU3_SR_IIADIRQ(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_SR_IIADIRQ_SHIFT)) & CAU3_SR_IIADIRQ_MASK)
#define CAU3_SR_DIADIRQ_MASK                     (0x20U)
#define CAU3_SR_DIADIRQ_SHIFT                    (5U)
#define CAU3_SR_DIADIRQ(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_SR_DIADIRQ_SHIFT)) & CAU3_SR_DIADIRQ_MASK)
#define CAU3_SR_SVIRQ_MASK                       (0x40U)
#define CAU3_SR_SVIRQ_SHIFT                      (6U)
#define CAU3_SR_SVIRQ(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_SR_SVIRQ_SHIFT)) & CAU3_SR_SVIRQ_MASK)
#define CAU3_SR_TCIRQ_MASK                       (0x80U)
#define CAU3_SR_TCIRQ_SHIFT                      (7U)
#define CAU3_SR_TCIRQ(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_SR_TCIRQ_SHIFT)) & CAU3_SR_TCIRQ_MASK)
#define CAU3_SR_TKCS_MASK                        (0xF00U)
#define CAU3_SR_TKCS_SHIFT                       (8U)
#define CAU3_SR_TKCS(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_SR_TKCS_SHIFT)) & CAU3_SR_TKCS_MASK)
#define CAU3_SR_SVF_MASK                         (0x10000U)
#define CAU3_SR_SVF_SHIFT                        (16U)
#define CAU3_SR_SVF(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_SR_SVF_SHIFT)) & CAU3_SR_SVF_MASK)
#define CAU3_SR_DBG_MASK                         (0x20000U)
#define CAU3_SR_DBG_SHIFT                        (17U)
#define CAU3_SR_DBG(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_SR_DBG_SHIFT)) & CAU3_SR_DBG_MASK)
#define CAU3_SR_TCCFG_MASK                       (0x7000000U)
#define CAU3_SR_TCCFG_SHIFT                      (24U)
#define CAU3_SR_TCCFG(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_SR_TCCFG_SHIFT)) & CAU3_SR_TCCFG_MASK)
#define CAU3_SR_MDISF_MASK                       (0x80000000U)
#define CAU3_SR_MDISF_SHIFT                      (31U)
#define CAU3_SR_MDISF(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_SR_MDISF_SHIFT)) & CAU3_SR_MDISF_MASK)

/*! @name DBGCSR - Debug Control/Status Register */
#define CAU3_DBGCSR_DDBG_MASK                    (0x1U)
#define CAU3_DBGCSR_DDBG_SHIFT                   (0U)
#define CAU3_DBGCSR_DDBG(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_DDBG_SHIFT)) & CAU3_DBGCSR_DDBG_MASK)
#define CAU3_DBGCSR_DDBGMC_MASK                  (0x2U)
#define CAU3_DBGCSR_DDBGMC_SHIFT                 (1U)
#define CAU3_DBGCSR_DDBGMC(x)                    (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_DDBGMC_SHIFT)) & CAU3_DBGCSR_DDBGMC_MASK)
#define CAU3_DBGCSR_PBREN_MASK                   (0x10U)
#define CAU3_DBGCSR_PBREN_SHIFT                  (4U)
#define CAU3_DBGCSR_PBREN(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_PBREN_SHIFT)) & CAU3_DBGCSR_PBREN_MASK)
#define CAU3_DBGCSR_SIM_MASK                     (0x20U)
#define CAU3_DBGCSR_SIM_SHIFT                    (5U)
#define CAU3_DBGCSR_SIM(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_SIM_SHIFT)) & CAU3_DBGCSR_SIM_MASK)
#define CAU3_DBGCSR_FRCH_MASK                    (0x100U)
#define CAU3_DBGCSR_FRCH_SHIFT                   (8U)
#define CAU3_DBGCSR_FRCH(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_FRCH_SHIFT)) & CAU3_DBGCSR_FRCH_MASK)
#define CAU3_DBGCSR_DBGGO_MASK                   (0x1000U)
#define CAU3_DBGCSR_DBGGO_SHIFT                  (12U)
#define CAU3_DBGCSR_DBGGO(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_DBGGO_SHIFT)) & CAU3_DBGCSR_DBGGO_MASK)
#define CAU3_DBGCSR_PCBHF_MASK                   (0x10000U)
#define CAU3_DBGCSR_PCBHF_SHIFT                  (16U)
#define CAU3_DBGCSR_PCBHF(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_PCBHF_SHIFT)) & CAU3_DBGCSR_PCBHF_MASK)
#define CAU3_DBGCSR_SIMHF_MASK                   (0x20000U)
#define CAU3_DBGCSR_SIMHF_SHIFT                  (17U)
#define CAU3_DBGCSR_SIMHF(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_SIMHF_SHIFT)) & CAU3_DBGCSR_SIMHF_MASK)
#define CAU3_DBGCSR_HLTIF_MASK                   (0x40000U)
#define CAU3_DBGCSR_HLTIF_SHIFT                  (18U)
#define CAU3_DBGCSR_HLTIF(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_HLTIF_SHIFT)) & CAU3_DBGCSR_HLTIF_MASK)
#define CAU3_DBGCSR_CSTPF_MASK                   (0x40000000U)
#define CAU3_DBGCSR_CSTPF_SHIFT                  (30U)
#define CAU3_DBGCSR_CSTPF(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_CSTPF_SHIFT)) & CAU3_DBGCSR_CSTPF_MASK)
#define CAU3_DBGCSR_CHLTF_MASK                   (0x80000000U)
#define CAU3_DBGCSR_CHLTF_SHIFT                  (31U)
#define CAU3_DBGCSR_CHLTF(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGCSR_CHLTF_SHIFT)) & CAU3_DBGCSR_CHLTF_MASK)

/*! @name DBGPBR - Debug PC Breakpoint Register */
#define CAU3_DBGPBR_PCBKPT_MASK                  (0xFFFFCU)
#define CAU3_DBGPBR_PCBKPT_SHIFT                 (2U)
#define CAU3_DBGPBR_PCBKPT(x)                    (((uint32_t)(((uint32_t)(x)) << CAU3_DBGPBR_PCBKPT_SHIFT)) & CAU3_DBGPBR_PCBKPT_MASK)

/*! @name DBGMCMD - Debug Memory Command Register */
#define CAU3_DBGMCMD_DM_MASK                     (0x1000000U)
#define CAU3_DBGMCMD_DM_SHIFT                    (24U)
#define CAU3_DBGMCMD_DM(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMCMD_DM_SHIFT)) & CAU3_DBGMCMD_DM_MASK)
#define CAU3_DBGMCMD_IA_MASK                     (0x4000000U)
#define CAU3_DBGMCMD_IA_SHIFT                    (26U)
#define CAU3_DBGMCMD_IA(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMCMD_IA_SHIFT)) & CAU3_DBGMCMD_IA_MASK)
#define CAU3_DBGMCMD_Rb_1_MASK                   (0x8000000U)
#define CAU3_DBGMCMD_Rb_1_SHIFT                  (27U)
#define CAU3_DBGMCMD_Rb_1(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMCMD_Rb_1_SHIFT)) & CAU3_DBGMCMD_Rb_1_MASK)
#define CAU3_DBGMCMD_BV_MASK                     (0x10000000U)
#define CAU3_DBGMCMD_BV_SHIFT                    (28U)
#define CAU3_DBGMCMD_BV(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMCMD_BV_SHIFT)) & CAU3_DBGMCMD_BV_MASK)
#define CAU3_DBGMCMD_R_0_MASK                    (0x40000000U)
#define CAU3_DBGMCMD_R_0_SHIFT                   (30U)
#define CAU3_DBGMCMD_R_0(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMCMD_R_0_SHIFT)) & CAU3_DBGMCMD_R_0_MASK)
#define CAU3_DBGMCMD_R_1_MASK                    (0x80000000U)
#define CAU3_DBGMCMD_R_1_SHIFT                   (31U)
#define CAU3_DBGMCMD_R_1(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMCMD_R_1_SHIFT)) & CAU3_DBGMCMD_R_1_MASK)

/*! @name DBGMADR - Debug Memory Address Register */
#define CAU3_DBGMADR_DMADDR_MASK                 (0xFFFFFFFCU)
#define CAU3_DBGMADR_DMADDR_SHIFT                (2U)
#define CAU3_DBGMADR_DMADDR(x)                   (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMADR_DMADDR_SHIFT)) & CAU3_DBGMADR_DMADDR_MASK)

/*! @name DBGMDR - Debug Memory Data Register */
#define CAU3_DBGMDR_DMDATA_MASK                  (0xFFFFFFFFU)
#define CAU3_DBGMDR_DMDATA_SHIFT                 (0U)
#define CAU3_DBGMDR_DMDATA(x)                    (((uint32_t)(((uint32_t)(x)) << CAU3_DBGMDR_DMDATA_SHIFT)) & CAU3_DBGMDR_DMDATA_MASK)

/*! @name SEMA4 - Semaphore Register */
#define CAU3_SEMA4_DID_MASK                      (0xFU)
#define CAU3_SEMA4_DID_SHIFT                     (0U)
#define CAU3_SEMA4_DID(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_SEMA4_DID_SHIFT)) & CAU3_SEMA4_DID_MASK)
#define CAU3_SEMA4_PR_MASK                       (0x40U)
#define CAU3_SEMA4_PR_SHIFT                      (6U)
#define CAU3_SEMA4_PR(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_SEMA4_PR_SHIFT)) & CAU3_SEMA4_PR_MASK)
#define CAU3_SEMA4_NS_MASK                       (0x80U)
#define CAU3_SEMA4_NS_SHIFT                      (7U)
#define CAU3_SEMA4_NS(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_SEMA4_NS_SHIFT)) & CAU3_SEMA4_NS_MASK)
#define CAU3_SEMA4_MSTRN_MASK                    (0x3F00U)
#define CAU3_SEMA4_MSTRN_SHIFT                   (8U)
#define CAU3_SEMA4_MSTRN(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_SEMA4_MSTRN_SHIFT)) & CAU3_SEMA4_MSTRN_MASK)
#define CAU3_SEMA4_LK_MASK                       (0x80000000U)
#define CAU3_SEMA4_LK_SHIFT                      (31U)
#define CAU3_SEMA4_LK(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_SEMA4_LK_SHIFT)) & CAU3_SEMA4_LK_MASK)

/*! @name SMOWNR - Semaphore Ownership Register */
#define CAU3_SMOWNR_LOCK_MASK                    (0x1U)
#define CAU3_SMOWNR_LOCK_SHIFT                   (0U)
#define CAU3_SMOWNR_LOCK(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_SMOWNR_LOCK_SHIFT)) & CAU3_SMOWNR_LOCK_MASK)
#define CAU3_SMOWNR_NOWNER_MASK                  (0x80000000U)
#define CAU3_SMOWNR_NOWNER_SHIFT                 (31U)
#define CAU3_SMOWNR_NOWNER(x)                    (((uint32_t)(((uint32_t)(x)) << CAU3_SMOWNR_NOWNER_SHIFT)) & CAU3_SMOWNR_NOWNER_MASK)

/*! @name ARR - Address Remap Register */
#define CAU3_ARR_ARRL_MASK                       (0xFFFFFFFFU)
#define CAU3_ARR_ARRL_SHIFT                      (0U)
#define CAU3_ARR_ARRL(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_ARR_ARRL_SHIFT)) & CAU3_ARR_ARRL_MASK)

/*! @name CC_R - CryptoCore General Purpose Registers */
#define CAU3_CC_R_R_MASK                         (0xFFFFFFFFU)
#define CAU3_CC_R_R_SHIFT                        (0U)
#define CAU3_CC_R_R(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_CC_R_R_SHIFT)) & CAU3_CC_R_R_MASK)

/* The count of CAU3_CC_R */
#define CAU3_CC_R_COUNT                          (30U)

/*! @name CC_R30 - General Purpose R30 */
#define CAU3_CC_R30_SP_MASK                      (0xFFFFFFFFU)
#define CAU3_CC_R30_SP_SHIFT                     (0U)
#define CAU3_CC_R30_SP(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CC_R30_SP_SHIFT)) & CAU3_CC_R30_SP_MASK)

/*! @name CC_R31 - General Purpose R31 */
#define CAU3_CC_R31_LR_MASK                      (0xFFFFFFFFU)
#define CAU3_CC_R31_LR_SHIFT                     (0U)
#define CAU3_CC_R31_LR(x)                        (((uint32_t)(((uint32_t)(x)) << CAU3_CC_R31_LR_SHIFT)) & CAU3_CC_R31_LR_MASK)

/*! @name CC_PC - Program Counter */
#define CAU3_CC_PC_PC_MASK                       (0xFFFFFU)
#define CAU3_CC_PC_PC_SHIFT                      (0U)
#define CAU3_CC_PC_PC(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_CC_PC_PC_SHIFT)) & CAU3_CC_PC_PC_MASK)

/*! @name CC_CMD - Start Command Register */
#define CAU3_CC_CMD_CMD_MASK                     (0x70000U)
#define CAU3_CC_CMD_CMD_SHIFT                    (16U)
#define CAU3_CC_CMD_CMD(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_CC_CMD_CMD_SHIFT)) & CAU3_CC_CMD_CMD_MASK)

/*! @name CC_CF - Condition Flag */
#define CAU3_CC_CF_C_MASK                        (0x1U)
#define CAU3_CC_CF_C_SHIFT                       (0U)
#define CAU3_CC_CF_C(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CC_CF_C_SHIFT)) & CAU3_CC_CF_C_MASK)
#define CAU3_CC_CF_V_MASK                        (0x2U)
#define CAU3_CC_CF_V_SHIFT                       (1U)
#define CAU3_CC_CF_V(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CC_CF_V_SHIFT)) & CAU3_CC_CF_V_MASK)
#define CAU3_CC_CF_Z_MASK                        (0x4U)
#define CAU3_CC_CF_Z_SHIFT                       (2U)
#define CAU3_CC_CF_Z(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CC_CF_Z_SHIFT)) & CAU3_CC_CF_Z_MASK)
#define CAU3_CC_CF_N_MASK                        (0x8U)
#define CAU3_CC_CF_N_SHIFT                       (3U)
#define CAU3_CC_CF_N(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CC_CF_N_SHIFT)) & CAU3_CC_CF_N_MASK)

/*! @name MDPK - Mode Register (PublicKey) */
#define CAU3_MDPK_PKHA_MODE_LS_MASK              (0xFFFU)
#define CAU3_MDPK_PKHA_MODE_LS_SHIFT             (0U)
#define CAU3_MDPK_PKHA_MODE_LS(x)                (((uint32_t)(((uint32_t)(x)) << CAU3_MDPK_PKHA_MODE_LS_SHIFT)) & CAU3_MDPK_PKHA_MODE_LS_MASK)
#define CAU3_MDPK_PKHA_MODE_MS_MASK              (0xF0000U)
#define CAU3_MDPK_PKHA_MODE_MS_SHIFT             (16U)
#define CAU3_MDPK_PKHA_MODE_MS(x)                (((uint32_t)(((uint32_t)(x)) << CAU3_MDPK_PKHA_MODE_MS_SHIFT)) & CAU3_MDPK_PKHA_MODE_MS_MASK)
#define CAU3_MDPK_ALG_MASK                       (0xF00000U)
#define CAU3_MDPK_ALG_SHIFT                      (20U)
#define CAU3_MDPK_ALG(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_MDPK_ALG_SHIFT)) & CAU3_MDPK_ALG_MASK)

/*! @name COM - Command Register */
#define CAU3_COM_ALL_MASK                        (0x1U)
#define CAU3_COM_ALL_SHIFT                       (0U)
#define CAU3_COM_ALL(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_COM_ALL_SHIFT)) & CAU3_COM_ALL_MASK)
#define CAU3_COM_PK_MASK                         (0x40U)
#define CAU3_COM_PK_SHIFT                        (6U)
#define CAU3_COM_PK(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_COM_PK_SHIFT)) & CAU3_COM_PK_MASK)

/*! @name CTL - Control Register */
#define CAU3_CTL_IM_MASK                         (0x1U)
#define CAU3_CTL_IM_SHIFT                        (0U)
#define CAU3_CTL_IM(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_CTL_IM_SHIFT)) & CAU3_CTL_IM_MASK)
#define CAU3_CTL_PDE_MASK                        (0x10U)
#define CAU3_CTL_PDE_SHIFT                       (4U)
#define CAU3_CTL_PDE(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CTL_PDE_SHIFT)) & CAU3_CTL_PDE_MASK)

/*! @name CW - Clear Written Register */
#define CAU3_CW_CM_MASK                          (0x1U)
#define CAU3_CW_CM_SHIFT                         (0U)
#define CAU3_CW_CM(x)                            (((uint32_t)(((uint32_t)(x)) << CAU3_CW_CM_SHIFT)) & CAU3_CW_CM_MASK)
#define CAU3_CW_CPKA_MASK                        (0x1000U)
#define CAU3_CW_CPKA_SHIFT                       (12U)
#define CAU3_CW_CPKA(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CW_CPKA_SHIFT)) & CAU3_CW_CPKA_MASK)
#define CAU3_CW_CPKB_MASK                        (0x2000U)
#define CAU3_CW_CPKB_SHIFT                       (13U)
#define CAU3_CW_CPKB(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CW_CPKB_SHIFT)) & CAU3_CW_CPKB_MASK)
#define CAU3_CW_CPKN_MASK                        (0x4000U)
#define CAU3_CW_CPKN_SHIFT                       (14U)
#define CAU3_CW_CPKN(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CW_CPKN_SHIFT)) & CAU3_CW_CPKN_MASK)
#define CAU3_CW_CPKE_MASK                        (0x8000U)
#define CAU3_CW_CPKE_SHIFT                       (15U)
#define CAU3_CW_CPKE(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_CW_CPKE_SHIFT)) & CAU3_CW_CPKE_MASK)

/*! @name STA - Status Register */
#define CAU3_STA_PB_MASK                         (0x40U)
#define CAU3_STA_PB_SHIFT                        (6U)
#define CAU3_STA_PB(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_STA_PB_SHIFT)) & CAU3_STA_PB_MASK)
#define CAU3_STA_DI_MASK                         (0x10000U)
#define CAU3_STA_DI_SHIFT                        (16U)
#define CAU3_STA_DI(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_STA_DI_SHIFT)) & CAU3_STA_DI_MASK)
#define CAU3_STA_EI_MASK                         (0x100000U)
#define CAU3_STA_EI_SHIFT                        (20U)
#define CAU3_STA_EI(x)                           (((uint32_t)(((uint32_t)(x)) << CAU3_STA_EI_SHIFT)) & CAU3_STA_EI_MASK)
#define CAU3_STA_PKP_MASK                        (0x10000000U)
#define CAU3_STA_PKP_SHIFT                       (28U)
#define CAU3_STA_PKP(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_STA_PKP_SHIFT)) & CAU3_STA_PKP_MASK)
#define CAU3_STA_PKO_MASK                        (0x20000000U)
#define CAU3_STA_PKO_SHIFT                       (29U)
#define CAU3_STA_PKO(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_STA_PKO_SHIFT)) & CAU3_STA_PKO_MASK)
#define CAU3_STA_PKZ_MASK                        (0x40000000U)
#define CAU3_STA_PKZ_SHIFT                       (30U)
#define CAU3_STA_PKZ(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_STA_PKZ_SHIFT)) & CAU3_STA_PKZ_MASK)

/*! @name ESTA - Error Status Register */
#define CAU3_ESTA_ERRID1_MASK                    (0xFU)
#define CAU3_ESTA_ERRID1_SHIFT                   (0U)
#define CAU3_ESTA_ERRID1(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_ESTA_ERRID1_SHIFT)) & CAU3_ESTA_ERRID1_MASK)
#define CAU3_ESTA_CL1_MASK                       (0xF00U)
#define CAU3_ESTA_CL1_SHIFT                      (8U)
#define CAU3_ESTA_CL1(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_ESTA_CL1_SHIFT)) & CAU3_ESTA_CL1_MASK)

/*! @name PKASZ - PKHA A Size Register */
#define CAU3_PKASZ_PKASZ_MASK                    (0x1FFU)
#define CAU3_PKASZ_PKASZ_SHIFT                   (0U)
#define CAU3_PKASZ_PKASZ(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_PKASZ_PKASZ_SHIFT)) & CAU3_PKASZ_PKASZ_MASK)

/*! @name PKBSZ - PKHA B Size Register */
#define CAU3_PKBSZ_PKBSZ_MASK                    (0x1FFU)
#define CAU3_PKBSZ_PKBSZ_SHIFT                   (0U)
#define CAU3_PKBSZ_PKBSZ(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_PKBSZ_PKBSZ_SHIFT)) & CAU3_PKBSZ_PKBSZ_MASK)

/*! @name PKNSZ - PKHA N Size Register */
#define CAU3_PKNSZ_PKNSZ_MASK                    (0x1FFU)
#define CAU3_PKNSZ_PKNSZ_SHIFT                   (0U)
#define CAU3_PKNSZ_PKNSZ(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_PKNSZ_PKNSZ_SHIFT)) & CAU3_PKNSZ_PKNSZ_MASK)

/*! @name PKESZ - PKHA E Size Register */
#define CAU3_PKESZ_PKESZ_MASK                    (0x1FFU)
#define CAU3_PKESZ_PKESZ_SHIFT                   (0U)
#define CAU3_PKESZ_PKESZ(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_PKESZ_PKESZ_SHIFT)) & CAU3_PKESZ_PKESZ_MASK)

/*! @name PKHA_VID1 - PKHA Revision ID 1 */
#define CAU3_PKHA_VID1_MIN_REV_MASK              (0xFFU)
#define CAU3_PKHA_VID1_MIN_REV_SHIFT             (0U)
#define CAU3_PKHA_VID1_MIN_REV(x)                (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_VID1_MIN_REV_SHIFT)) & CAU3_PKHA_VID1_MIN_REV_MASK)
#define CAU3_PKHA_VID1_MAJ_REV_MASK              (0xFF00U)
#define CAU3_PKHA_VID1_MAJ_REV_SHIFT             (8U)
#define CAU3_PKHA_VID1_MAJ_REV(x)                (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_VID1_MAJ_REV_SHIFT)) & CAU3_PKHA_VID1_MAJ_REV_MASK)
#define CAU3_PKHA_VID1_IP_ID_MASK                (0xFFFF0000U)
#define CAU3_PKHA_VID1_IP_ID_SHIFT               (16U)
#define CAU3_PKHA_VID1_IP_ID(x)                  (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_VID1_IP_ID_SHIFT)) & CAU3_PKHA_VID1_IP_ID_MASK)

/*! @name PKHA_VID2 - PKHA Revision ID 2 */
#define CAU3_PKHA_VID2_ECO_REV_MASK              (0xFFU)
#define CAU3_PKHA_VID2_ECO_REV_SHIFT             (0U)
#define CAU3_PKHA_VID2_ECO_REV(x)                (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_VID2_ECO_REV_SHIFT)) & CAU3_PKHA_VID2_ECO_REV_MASK)
#define CAU3_PKHA_VID2_ARCH_ERA_MASK             (0xFF00U)
#define CAU3_PKHA_VID2_ARCH_ERA_SHIFT            (8U)
#define CAU3_PKHA_VID2_ARCH_ERA(x)               (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_VID2_ARCH_ERA_SHIFT)) & CAU3_PKHA_VID2_ARCH_ERA_MASK)

/*! @name CHA_VID - CHA Revision ID */
#define CAU3_CHA_VID_PKHAREV_MASK                (0xF0000U)
#define CAU3_CHA_VID_PKHAREV_SHIFT               (16U)
#define CAU3_CHA_VID_PKHAREV(x)                  (((uint32_t)(((uint32_t)(x)) << CAU3_CHA_VID_PKHAREV_SHIFT)) & CAU3_CHA_VID_PKHAREV_MASK)
#define CAU3_CHA_VID_PKHAVID_MASK                (0xF00000U)
#define CAU3_CHA_VID_PKHAVID_SHIFT               (20U)
#define CAU3_CHA_VID_PKHAVID(x)                  (((uint32_t)(((uint32_t)(x)) << CAU3_CHA_VID_PKHAVID_SHIFT)) & CAU3_CHA_VID_PKHAVID_MASK)

/*! @name PKHA_CCR - PKHA Clock Control Register */
#define CAU3_PKHA_CCR_CKTHRT_MASK                (0x7U)
#define CAU3_PKHA_CCR_CKTHRT_SHIFT               (0U)
#define CAU3_PKHA_CCR_CKTHRT(x)                  (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_CCR_CKTHRT_SHIFT)) & CAU3_PKHA_CCR_CKTHRT_MASK)
#define CAU3_PKHA_CCR_LK_MASK                    (0x1000000U)
#define CAU3_PKHA_CCR_LK_SHIFT                   (24U)
#define CAU3_PKHA_CCR_LK(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_CCR_LK_SHIFT)) & CAU3_PKHA_CCR_LK_MASK)
#define CAU3_PKHA_CCR_ELFR_MASK                  (0x20000000U)
#define CAU3_PKHA_CCR_ELFR_SHIFT                 (29U)
#define CAU3_PKHA_CCR_ELFR(x)                    (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_CCR_ELFR_SHIFT)) & CAU3_PKHA_CCR_ELFR_MASK)
#define CAU3_PKHA_CCR_ECJ_MASK                   (0x40000000U)
#define CAU3_PKHA_CCR_ECJ_SHIFT                  (30U)
#define CAU3_PKHA_CCR_ECJ(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_CCR_ECJ_SHIFT)) & CAU3_PKHA_CCR_ECJ_MASK)
#define CAU3_PKHA_CCR_ECT_MASK                   (0x80000000U)
#define CAU3_PKHA_CCR_ECT_SHIFT                  (31U)
#define CAU3_PKHA_CCR_ECT(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKHA_CCR_ECT_SHIFT)) & CAU3_PKHA_CCR_ECT_MASK)

/*! @name GSR - Global Status Register */
#define CAU3_GSR_CDI_MASK                        (0x400U)
#define CAU3_GSR_CDI_SHIFT                       (10U)
#define CAU3_GSR_CDI(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_GSR_CDI_SHIFT)) & CAU3_GSR_CDI_MASK)
#define CAU3_GSR_CEI_MASK                        (0x4000U)
#define CAU3_GSR_CEI_SHIFT                       (14U)
#define CAU3_GSR_CEI(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_GSR_CEI_SHIFT)) & CAU3_GSR_CEI_MASK)
#define CAU3_GSR_PEI_MASK                        (0x8000U)
#define CAU3_GSR_PEI_SHIFT                       (15U)
#define CAU3_GSR_PEI(x)                          (((uint32_t)(((uint32_t)(x)) << CAU3_GSR_PEI_SHIFT)) & CAU3_GSR_PEI_MASK)
#define CAU3_GSR_PBSY_MASK                       (0x80000000U)
#define CAU3_GSR_PBSY_SHIFT                      (31U)
#define CAU3_GSR_PBSY(x)                         (((uint32_t)(((uint32_t)(x)) << CAU3_GSR_PBSY_SHIFT)) & CAU3_GSR_PBSY_MASK)

/*! @name CKLFSR - Clock Linear Feedback Shift Register */
#define CAU3_CKLFSR_LFSR_MASK                    (0xFFFFFFFFU)
#define CAU3_CKLFSR_LFSR_SHIFT                   (0U)
#define CAU3_CKLFSR_LFSR(x)                      (((uint32_t)(((uint32_t)(x)) << CAU3_CKLFSR_LFSR_SHIFT)) & CAU3_CKLFSR_LFSR_MASK)

/*! @name PKA0 - PKHA A0 Register */
#define CAU3_PKA0_PKHA_A0_MASK                   (0xFFFFFFFFU)
#define CAU3_PKA0_PKHA_A0_SHIFT                  (0U)
#define CAU3_PKA0_PKHA_A0(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKA0_PKHA_A0_SHIFT)) & CAU3_PKA0_PKHA_A0_MASK)

/* The count of CAU3_PKA0 */
#define CAU3_PKA0_COUNT                          (32U)

/*! @name PKA1 - PKHA A1 Register */
#define CAU3_PKA1_PKHA_A1_MASK                   (0xFFFFFFFFU)
#define CAU3_PKA1_PKHA_A1_SHIFT                  (0U)
#define CAU3_PKA1_PKHA_A1(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKA1_PKHA_A1_SHIFT)) & CAU3_PKA1_PKHA_A1_MASK)

/* The count of CAU3_PKA1 */
#define CAU3_PKA1_COUNT                          (32U)

/*! @name PKA2 - PKHA A2 Register */
#define CAU3_PKA2_PKHA_A2_MASK                   (0xFFFFFFFFU)
#define CAU3_PKA2_PKHA_A2_SHIFT                  (0U)
#define CAU3_PKA2_PKHA_A2(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKA2_PKHA_A2_SHIFT)) & CAU3_PKA2_PKHA_A2_MASK)

/* The count of CAU3_PKA2 */
#define CAU3_PKA2_COUNT                          (32U)

/*! @name PKA3 - PKHA A3 Register */
#define CAU3_PKA3_PKHA_A3_MASK                   (0xFFFFFFFFU)
#define CAU3_PKA3_PKHA_A3_SHIFT                  (0U)
#define CAU3_PKA3_PKHA_A3(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKA3_PKHA_A3_SHIFT)) & CAU3_PKA3_PKHA_A3_MASK)

/* The count of CAU3_PKA3 */
#define CAU3_PKA3_COUNT                          (32U)

/*! @name PKB0 - PKHA B0 Register */
#define CAU3_PKB0_PKHA_B0_MASK                   (0xFFFFFFFFU)
#define CAU3_PKB0_PKHA_B0_SHIFT                  (0U)
#define CAU3_PKB0_PKHA_B0(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKB0_PKHA_B0_SHIFT)) & CAU3_PKB0_PKHA_B0_MASK)

/* The count of CAU3_PKB0 */
#define CAU3_PKB0_COUNT                          (32U)

/*! @name PKB1 - PKHA B1 Register */
#define CAU3_PKB1_PKHA_B1_MASK                   (0xFFFFFFFFU)
#define CAU3_PKB1_PKHA_B1_SHIFT                  (0U)
#define CAU3_PKB1_PKHA_B1(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKB1_PKHA_B1_SHIFT)) & CAU3_PKB1_PKHA_B1_MASK)

/* The count of CAU3_PKB1 */
#define CAU3_PKB1_COUNT                          (32U)

/*! @name PKB2 - PKHA B2 Register */
#define CAU3_PKB2_PKHA_B2_MASK                   (0xFFFFFFFFU)
#define CAU3_PKB2_PKHA_B2_SHIFT                  (0U)
#define CAU3_PKB2_PKHA_B2(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKB2_PKHA_B2_SHIFT)) & CAU3_PKB2_PKHA_B2_MASK)

/* The count of CAU3_PKB2 */
#define CAU3_PKB2_COUNT                          (32U)

/*! @name PKB3 - PKHA B3 Register */
#define CAU3_PKB3_PKHA_B3_MASK                   (0xFFFFFFFFU)
#define CAU3_PKB3_PKHA_B3_SHIFT                  (0U)
#define CAU3_PKB3_PKHA_B3(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKB3_PKHA_B3_SHIFT)) & CAU3_PKB3_PKHA_B3_MASK)

/* The count of CAU3_PKB3 */
#define CAU3_PKB3_COUNT                          (32U)

/*! @name PKN0 - PKHA N0 Register */
#define CAU3_PKN0_PKHA_N0_MASK                   (0xFFFFFFFFU)
#define CAU3_PKN0_PKHA_N0_SHIFT                  (0U)
#define CAU3_PKN0_PKHA_N0(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKN0_PKHA_N0_SHIFT)) & CAU3_PKN0_PKHA_N0_MASK)

/* The count of CAU3_PKN0 */
#define CAU3_PKN0_COUNT                          (32U)

/*! @name PKN1 - PKHA N1 Register */
#define CAU3_PKN1_PKHA_N1_MASK                   (0xFFFFFFFFU)
#define CAU3_PKN1_PKHA_N1_SHIFT                  (0U)
#define CAU3_PKN1_PKHA_N1(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKN1_PKHA_N1_SHIFT)) & CAU3_PKN1_PKHA_N1_MASK)

/* The count of CAU3_PKN1 */
#define CAU3_PKN1_COUNT                          (32U)

/*! @name PKN2 - PKHA N2 Register */
#define CAU3_PKN2_PKHA_N2_MASK                   (0xFFFFFFFFU)
#define CAU3_PKN2_PKHA_N2_SHIFT                  (0U)
#define CAU3_PKN2_PKHA_N2(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKN2_PKHA_N2_SHIFT)) & CAU3_PKN2_PKHA_N2_MASK)

/* The count of CAU3_PKN2 */
#define CAU3_PKN2_COUNT                          (32U)

/*! @name PKN3 - PKHA N3 Register */
#define CAU3_PKN3_PKHA_N3_MASK                   (0xFFFFFFFFU)
#define CAU3_PKN3_PKHA_N3_SHIFT                  (0U)
#define CAU3_PKN3_PKHA_N3(x)                     (((uint32_t)(((uint32_t)(x)) << CAU3_PKN3_PKHA_N3_SHIFT)) & CAU3_PKN3_PKHA_N3_MASK)

/* The count of CAU3_PKN3 */
#define CAU3_PKN3_COUNT                          (32U)

/*! @name PKE - PKHA E Register */
#define CAU3_PKE_PKHA_E_MASK                     (0xFFFFFFFFU)
#define CAU3_PKE_PKHA_E_SHIFT                    (0U)
#define CAU3_PKE_PKHA_E(x)                       (((uint32_t)(((uint32_t)(x)) << CAU3_PKE_PKHA_E_SHIFT)) & CAU3_PKE_PKHA_E_MASK)

/* The count of CAU3_PKE */
#define CAU3_PKE_COUNT                           (128U)


/*!
 * @}
 */ /* end of group CAU3_Register_Masks */


/* CAU3 - Peripheral instance base addresses */
/** Peripheral CAU3 base address */
#define CAU3_BASE                                (0x41028000u)
/** Peripheral CAU3 base pointer */
#define CAU3                                     ((CAU3_Type *)CAU3_BASE)
/** Array initializer of CAU3 peripheral base addresses */
#define CAU3_BASE_ADDRS                          { CAU3_BASE }
/** Array initializer of CAU3 peripheral base pointers */
#define CAU3_BASE_PTRS                           { CAU3 }
/** Interrupt vectors for the CAU3 peripheral type */
#define CAU3_TASK_COMPLETE_IRQS                  { CAU3_Task_Complete_IRQn }
#define CAU3_SECURITY_VIOLATION_IRQS             { CAU3_Security_Violation_IRQn }

/*!
 * @}
 */ /* end of group CAU3_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- CRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Peripheral_Access_Layer CRC Peripheral Access Layer
 * @{
 */

/** CRC - Register Layout Typedef */
typedef struct {
  union {                                          /* offset: 0x0 */
    __IO uint32_t DATA;                              /**< CRC Data register, offset: 0x0 */
    struct {                                         /* offset: 0x0 */
      __IO uint8_t DATALL;                             /**< CRC_DATALL register, offset: 0x0 */
      __IO uint8_t DATALU;                             /**< CRC_DATALU register, offset: 0x1 */
      __IO uint8_t DATAHL;                             /**< CRC_DATAHL register, offset: 0x2 */
      __IO uint8_t DATAHU;                             /**< CRC_DATAHU register, offset: 0x3 */
    } ACCESS8BIT;
    struct {                                         /* offset: 0x0 */
      __IO uint16_t DATAL;                             /**< CRC_DATAL register, offset: 0x0 */
      __IO uint16_t DATAH;                             /**< CRC_DATAH register, offset: 0x2 */
    } ACCESS16BIT;
  };
  union {                                          /* offset: 0x4 */
    __IO uint32_t GPOLY;                             /**< CRC Polynomial register, offset: 0x4 */
    struct {                                         /* offset: 0x4 */
      __IO uint8_t GPOLYLL;                            /**< CRC_GPOLYLL register, offset: 0x4 */
      __IO uint8_t GPOLYLU;                            /**< CRC_GPOLYLU register, offset: 0x5 */
      __IO uint8_t GPOLYHL;                            /**< CRC_GPOLYHL register, offset: 0x6 */
      __IO uint8_t GPOLYHU;                            /**< CRC_GPOLYHU register, offset: 0x7 */
    } GPOLY_ACCESS8BIT;
    struct {                                         /* offset: 0x4 */
      __IO uint16_t GPOLYL;                            /**< CRC_GPOLYL register, offset: 0x4 */
      __IO uint16_t GPOLYH;                            /**< CRC_GPOLYH register, offset: 0x6 */
    } GPOLY_ACCESS16BIT;
  };
  union {                                          /* offset: 0x8 */
    __IO uint32_t CTRL;                              /**< CRC Control register, offset: 0x8 */
    struct {                                         /* offset: 0x8 */
           uint8_t RESERVED_0[3];
      __IO uint8_t CTRLHU;                             /**< CRC_CTRLHU register, offset: 0xB */
    } CTRL_ACCESS8BIT;
  };
} CRC_Type;

/* ----------------------------------------------------------------------------
   -- CRC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Register_Masks CRC Register Masks
 * @{
 */

/*! @name DATA - CRC Data register */
#define CRC_DATA_LL_MASK                         (0xFFU)
#define CRC_DATA_LL_SHIFT                        (0U)
#define CRC_DATA_LL(x)                           (((uint32_t)(((uint32_t)(x)) << CRC_DATA_LL_SHIFT)) & CRC_DATA_LL_MASK)
#define CRC_DATA_LU_MASK                         (0xFF00U)
#define CRC_DATA_LU_SHIFT                        (8U)
#define CRC_DATA_LU(x)                           (((uint32_t)(((uint32_t)(x)) << CRC_DATA_LU_SHIFT)) & CRC_DATA_LU_MASK)
#define CRC_DATA_HL_MASK                         (0xFF0000U)
#define CRC_DATA_HL_SHIFT                        (16U)
#define CRC_DATA_HL(x)                           (((uint32_t)(((uint32_t)(x)) << CRC_DATA_HL_SHIFT)) & CRC_DATA_HL_MASK)
#define CRC_DATA_HU_MASK                         (0xFF000000U)
#define CRC_DATA_HU_SHIFT                        (24U)
#define CRC_DATA_HU(x)                           (((uint32_t)(((uint32_t)(x)) << CRC_DATA_HU_SHIFT)) & CRC_DATA_HU_MASK)

/*! @name DATALL - CRC_DATALL register */
#define CRC_DATALL_DATALL_MASK                   (0xFFU)
#define CRC_DATALL_DATALL_SHIFT                  (0U)
#define CRC_DATALL_DATALL(x)                     (((uint8_t)(((uint8_t)(x)) << CRC_DATALL_DATALL_SHIFT)) & CRC_DATALL_DATALL_MASK)

/*! @name DATALU - CRC_DATALU register */
#define CRC_DATALU_DATALU_MASK                   (0xFFU)
#define CRC_DATALU_DATALU_SHIFT                  (0U)
#define CRC_DATALU_DATALU(x)                     (((uint8_t)(((uint8_t)(x)) << CRC_DATALU_DATALU_SHIFT)) & CRC_DATALU_DATALU_MASK)

/*! @name DATAHL - CRC_DATAHL register */
#define CRC_DATAHL_DATAHL_MASK                   (0xFFU)
#define CRC_DATAHL_DATAHL_SHIFT                  (0U)
#define CRC_DATAHL_DATAHL(x)                     (((uint8_t)(((uint8_t)(x)) << CRC_DATAHL_DATAHL_SHIFT)) & CRC_DATAHL_DATAHL_MASK)

/*! @name DATAHU - CRC_DATAHU register */
#define CRC_DATAHU_DATAHU_MASK                   (0xFFU)
#define CRC_DATAHU_DATAHU_SHIFT                  (0U)
#define CRC_DATAHU_DATAHU(x)                     (((uint8_t)(((uint8_t)(x)) << CRC_DATAHU_DATAHU_SHIFT)) & CRC_DATAHU_DATAHU_MASK)

/*! @name DATAL - CRC_DATAL register */
#define CRC_DATAL_DATAL_MASK                     (0xFFFFU)
#define CRC_DATAL_DATAL_SHIFT                    (0U)
#define CRC_DATAL_DATAL(x)                       (((uint16_t)(((uint16_t)(x)) << CRC_DATAL_DATAL_SHIFT)) & CRC_DATAL_DATAL_MASK)

/*! @name DATAH - CRC_DATAH register */
#define CRC_DATAH_DATAH_MASK                     (0xFFFFU)
#define CRC_DATAH_DATAH_SHIFT                    (0U)
#define CRC_DATAH_DATAH(x)                       (((uint16_t)(((uint16_t)(x)) << CRC_DATAH_DATAH_SHIFT)) & CRC_DATAH_DATAH_MASK)

/*! @name GPOLY - CRC Polynomial register */
#define CRC_GPOLY_LOW_MASK                       (0xFFFFU)
#define CRC_GPOLY_LOW_SHIFT                      (0U)
#define CRC_GPOLY_LOW(x)                         (((uint32_t)(((uint32_t)(x)) << CRC_GPOLY_LOW_SHIFT)) & CRC_GPOLY_LOW_MASK)
#define CRC_GPOLY_HIGH_MASK                      (0xFFFF0000U)
#define CRC_GPOLY_HIGH_SHIFT                     (16U)
#define CRC_GPOLY_HIGH(x)                        (((uint32_t)(((uint32_t)(x)) << CRC_GPOLY_HIGH_SHIFT)) & CRC_GPOLY_HIGH_MASK)

/*! @name GPOLYLL - CRC_GPOLYLL register */
#define CRC_GPOLYLL_GPOLYLL_MASK                 (0xFFU)
#define CRC_GPOLYLL_GPOLYLL_SHIFT                (0U)
#define CRC_GPOLYLL_GPOLYLL(x)                   (((uint8_t)(((uint8_t)(x)) << CRC_GPOLYLL_GPOLYLL_SHIFT)) & CRC_GPOLYLL_GPOLYLL_MASK)

/*! @name GPOLYLU - CRC_GPOLYLU register */
#define CRC_GPOLYLU_GPOLYLU_MASK                 (0xFFU)
#define CRC_GPOLYLU_GPOLYLU_SHIFT                (0U)
#define CRC_GPOLYLU_GPOLYLU(x)                   (((uint8_t)(((uint8_t)(x)) << CRC_GPOLYLU_GPOLYLU_SHIFT)) & CRC_GPOLYLU_GPOLYLU_MASK)

/*! @name GPOLYHL - CRC_GPOLYHL register */
#define CRC_GPOLYHL_GPOLYHL_MASK                 (0xFFU)
#define CRC_GPOLYHL_GPOLYHL_SHIFT                (0U)
#define CRC_GPOLYHL_GPOLYHL(x)                   (((uint8_t)(((uint8_t)(x)) << CRC_GPOLYHL_GPOLYHL_SHIFT)) & CRC_GPOLYHL_GPOLYHL_MASK)

/*! @name GPOLYHU - CRC_GPOLYHU register */
#define CRC_GPOLYHU_GPOLYHU_MASK                 (0xFFU)
#define CRC_GPOLYHU_GPOLYHU_SHIFT                (0U)
#define CRC_GPOLYHU_GPOLYHU(x)                   (((uint8_t)(((uint8_t)(x)) << CRC_GPOLYHU_GPOLYHU_SHIFT)) & CRC_GPOLYHU_GPOLYHU_MASK)

/*! @name GPOLYL - CRC_GPOLYL register */
#define CRC_GPOLYL_GPOLYL_MASK                   (0xFFFFU)
#define CRC_GPOLYL_GPOLYL_SHIFT                  (0U)
#define CRC_GPOLYL_GPOLYL(x)                     (((uint16_t)(((uint16_t)(x)) << CRC_GPOLYL_GPOLYL_SHIFT)) & CRC_GPOLYL_GPOLYL_MASK)

/*! @name GPOLYH - CRC_GPOLYH register */
#define CRC_GPOLYH_GPOLYH_MASK                   (0xFFFFU)
#define CRC_GPOLYH_GPOLYH_SHIFT                  (0U)
#define CRC_GPOLYH_GPOLYH(x)                     (((uint16_t)(((uint16_t)(x)) << CRC_GPOLYH_GPOLYH_SHIFT)) & CRC_GPOLYH_GPOLYH_MASK)

/*! @name CTRL - CRC Control register */
#define CRC_CTRL_TCRC_MASK                       (0x1000000U)
#define CRC_CTRL_TCRC_SHIFT                      (24U)
#define CRC_CTRL_TCRC(x)                         (((uint32_t)(((uint32_t)(x)) << CRC_CTRL_TCRC_SHIFT)) & CRC_CTRL_TCRC_MASK)
#define CRC_CTRL_WAS_MASK                        (0x2000000U)
#define CRC_CTRL_WAS_SHIFT                       (25U)
#define CRC_CTRL_WAS(x)                          (((uint32_t)(((uint32_t)(x)) << CRC_CTRL_WAS_SHIFT)) & CRC_CTRL_WAS_MASK)
#define CRC_CTRL_FXOR_MASK                       (0x4000000U)
#define CRC_CTRL_FXOR_SHIFT                      (26U)
#define CRC_CTRL_FXOR(x)                         (((uint32_t)(((uint32_t)(x)) << CRC_CTRL_FXOR_SHIFT)) & CRC_CTRL_FXOR_MASK)
#define CRC_CTRL_TOTR_MASK                       (0x30000000U)
#define CRC_CTRL_TOTR_SHIFT                      (28U)
#define CRC_CTRL_TOTR(x)                         (((uint32_t)(((uint32_t)(x)) << CRC_CTRL_TOTR_SHIFT)) & CRC_CTRL_TOTR_MASK)
#define CRC_CTRL_TOT_MASK                        (0xC0000000U)
#define CRC_CTRL_TOT_SHIFT                       (30U)
#define CRC_CTRL_TOT(x)                          (((uint32_t)(((uint32_t)(x)) << CRC_CTRL_TOT_SHIFT)) & CRC_CTRL_TOT_MASK)

/*! @name CTRLHU - CRC_CTRLHU register */
#define CRC_CTRLHU_TCRC_MASK                     (0x1U)
#define CRC_CTRLHU_TCRC_SHIFT                    (0U)
#define CRC_CTRLHU_TCRC(x)                       (((uint8_t)(((uint8_t)(x)) << CRC_CTRLHU_TCRC_SHIFT)) & CRC_CTRLHU_TCRC_MASK)
#define CRC_CTRLHU_WAS_MASK                      (0x2U)
#define CRC_CTRLHU_WAS_SHIFT                     (1U)
#define CRC_CTRLHU_WAS(x)                        (((uint8_t)(((uint8_t)(x)) << CRC_CTRLHU_WAS_SHIFT)) & CRC_CTRLHU_WAS_MASK)
#define CRC_CTRLHU_FXOR_MASK                     (0x4U)
#define CRC_CTRLHU_FXOR_SHIFT                    (2U)
#define CRC_CTRLHU_FXOR(x)                       (((uint8_t)(((uint8_t)(x)) << CRC_CTRLHU_FXOR_SHIFT)) & CRC_CTRLHU_FXOR_MASK)
#define CRC_CTRLHU_TOTR_MASK                     (0x30U)
#define CRC_CTRLHU_TOTR_SHIFT                    (4U)
#define CRC_CTRLHU_TOTR(x)                       (((uint8_t)(((uint8_t)(x)) << CRC_CTRLHU_TOTR_SHIFT)) & CRC_CTRLHU_TOTR_MASK)
#define CRC_CTRLHU_TOT_MASK                      (0xC0U)
#define CRC_CTRLHU_TOT_SHIFT                     (6U)
#define CRC_CTRLHU_TOT(x)                        (((uint8_t)(((uint8_t)(x)) << CRC_CTRLHU_TOT_SHIFT)) & CRC_CTRLHU_TOT_MASK)


/*!
 * @}
 */ /* end of group CRC_Register_Masks */


/* CRC - Peripheral instance base addresses */
/** Peripheral CRC base address */
#define CRC_BASE                                 (0x4002F000u)
/** Peripheral CRC base pointer */
#define CRC0                                     ((CRC_Type *)CRC_BASE)
/** Array initializer of CRC peripheral base addresses */
#define CRC_BASE_ADDRS                           { CRC_BASE }
/** Array initializer of CRC peripheral base pointers */
#define CRC_BASE_PTRS                            { CRC0 }

/*!
 * @}
 */ /* end of group CRC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Peripheral_Access_Layer DMA Peripheral Access Layer
 * @{
 */

/** DMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control Register, offset: 0x0 */
  __I  uint32_t ES;                                /**< Error Status Register, offset: 0x4 */
       uint8_t RESERVED_0[4];
  __IO uint32_t ERQ;                               /**< Enable Request Register, offset: 0xC */
       uint8_t RESERVED_1[4];
  __IO uint32_t EEI;                               /**< Enable Error Interrupt Register, offset: 0x14 */
  __O  uint8_t CEEI;                               /**< Clear Enable Error Interrupt Register, offset: 0x18 */
  __O  uint8_t SEEI;                               /**< Set Enable Error Interrupt Register, offset: 0x19 */
  __O  uint8_t CERQ;                               /**< Clear Enable Request Register, offset: 0x1A */
  __O  uint8_t SERQ;                               /**< Set Enable Request Register, offset: 0x1B */
  __O  uint8_t CDNE;                               /**< Clear DONE Status Bit Register, offset: 0x1C */
  __O  uint8_t SSRT;                               /**< Set START Bit Register, offset: 0x1D */
  __O  uint8_t CERR;                               /**< Clear Error Register, offset: 0x1E */
  __O  uint8_t CINT;                               /**< Clear Interrupt Request Register, offset: 0x1F */
       uint8_t RESERVED_2[4];
  __IO uint32_t INT;                               /**< Interrupt Request Register, offset: 0x24 */
       uint8_t RESERVED_3[4];
  __IO uint32_t ERR;                               /**< Error Register, offset: 0x2C */
       uint8_t RESERVED_4[4];
  __I  uint32_t HRS;                               /**< Hardware Request Status Register, offset: 0x34 */
       uint8_t RESERVED_5[12];
  __IO uint32_t EARS;                              /**< Enable Asynchronous Request in Stop Register, offset: 0x44 */
       uint8_t RESERVED_6[184];
  __IO uint8_t DCHPRI3;                            /**< Channel Priority Register, offset: 0x100 */
  __IO uint8_t DCHPRI2;                            /**< Channel Priority Register, offset: 0x101 */
  __IO uint8_t DCHPRI1;                            /**< Channel Priority Register, offset: 0x102 */
  __IO uint8_t DCHPRI0;                            /**< Channel Priority Register, offset: 0x103 */
  __IO uint8_t DCHPRI7;                            /**< Channel Priority Register, offset: 0x104 */
  __IO uint8_t DCHPRI6;                            /**< Channel Priority Register, offset: 0x105 */
  __IO uint8_t DCHPRI5;                            /**< Channel Priority Register, offset: 0x106 */
  __IO uint8_t DCHPRI4;                            /**< Channel Priority Register, offset: 0x107 */
  __IO uint8_t DCHPRI11;                           /**< Channel Priority Register, offset: 0x108 */
  __IO uint8_t DCHPRI10;                           /**< Channel Priority Register, offset: 0x109 */
  __IO uint8_t DCHPRI9;                            /**< Channel Priority Register, offset: 0x10A */
  __IO uint8_t DCHPRI8;                            /**< Channel Priority Register, offset: 0x10B */
  __IO uint8_t DCHPRI15;                           /**< Channel Priority Register, offset: 0x10C */
  __IO uint8_t DCHPRI14;                           /**< Channel Priority Register, offset: 0x10D */
  __IO uint8_t DCHPRI13;                           /**< Channel Priority Register, offset: 0x10E */
  __IO uint8_t DCHPRI12;                           /**< Channel Priority Register, offset: 0x10F */
       uint8_t RESERVED_7[3824];
  struct {                                         /* offset: 0x1000, array step: 0x20 */
    __IO uint32_t SADDR;                             /**< TCD Source Address, array offset: 0x1000, array step: 0x20 */
    __IO uint16_t SOFF;                              /**< TCD Signed Source Address Offset, array offset: 0x1004, array step: 0x20 */
    __IO uint16_t ATTR;                              /**< TCD Transfer Attributes, array offset: 0x1006, array step: 0x20 */
    union {                                          /* offset: 0x1008, array step: 0x20 */
      __IO uint32_t NBYTES_MLNO;                       /**< TCD Minor Byte Count (Minor Loop Mapping Disabled), array offset: 0x1008, array step: 0x20 */
      __IO uint32_t NBYTES_MLOFFNO;                    /**< TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled), array offset: 0x1008, array step: 0x20 */
      __IO uint32_t NBYTES_MLOFFYES;                   /**< TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled), array offset: 0x1008, array step: 0x20 */
    };
    __IO uint32_t SLAST;                             /**< TCD Last Source Address Adjustment, array offset: 0x100C, array step: 0x20 */
    __IO uint32_t DADDR;                             /**< TCD Destination Address, array offset: 0x1010, array step: 0x20 */
    __IO uint16_t DOFF;                              /**< TCD Signed Destination Address Offset, array offset: 0x1014, array step: 0x20 */
    union {                                          /* offset: 0x1016, array step: 0x20 */
      __IO uint16_t CITER_ELINKNO;                     /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x1016, array step: 0x20 */
      __IO uint16_t CITER_ELINKYES;                    /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x1016, array step: 0x20 */
    };
    __IO uint32_t DLAST_SGA;                         /**< TCD Last Destination Address Adjustment/Scatter Gather Address, array offset: 0x1018, array step: 0x20 */
    __IO uint16_t CSR;                               /**< TCD Control and Status, array offset: 0x101C, array step: 0x20 */
    union {                                          /* offset: 0x101E, array step: 0x20 */
      __IO uint16_t BITER_ELINKNO;                     /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x101E, array step: 0x20 */
      __IO uint16_t BITER_ELINKYES;                    /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x101E, array step: 0x20 */
    };
  } TCD[16];
} DMA_Type;

/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Register_Masks DMA Register Masks
 * @{
 */

/*! @name CR - Control Register */
#define DMA_CR_EDBG_MASK                         (0x2U)
#define DMA_CR_EDBG_SHIFT                        (1U)
#define DMA_CR_EDBG(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_EDBG_SHIFT)) & DMA_CR_EDBG_MASK)
#define DMA_CR_ERCA_MASK                         (0x4U)
#define DMA_CR_ERCA_SHIFT                        (2U)
#define DMA_CR_ERCA(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_ERCA_SHIFT)) & DMA_CR_ERCA_MASK)
#define DMA_CR_HOE_MASK                          (0x10U)
#define DMA_CR_HOE_SHIFT                         (4U)
#define DMA_CR_HOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_HOE_SHIFT)) & DMA_CR_HOE_MASK)
#define DMA_CR_HALT_MASK                         (0x20U)
#define DMA_CR_HALT_SHIFT                        (5U)
#define DMA_CR_HALT(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_HALT_SHIFT)) & DMA_CR_HALT_MASK)
#define DMA_CR_CLM_MASK                          (0x40U)
#define DMA_CR_CLM_SHIFT                         (6U)
#define DMA_CR_CLM(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_CLM_SHIFT)) & DMA_CR_CLM_MASK)
#define DMA_CR_EMLM_MASK                         (0x80U)
#define DMA_CR_EMLM_SHIFT                        (7U)
#define DMA_CR_EMLM(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_EMLM_SHIFT)) & DMA_CR_EMLM_MASK)
#define DMA_CR_ECX_MASK                          (0x10000U)
#define DMA_CR_ECX_SHIFT                         (16U)
#define DMA_CR_ECX(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_ECX_SHIFT)) & DMA_CR_ECX_MASK)
#define DMA_CR_CX_MASK                           (0x20000U)
#define DMA_CR_CX_SHIFT                          (17U)
#define DMA_CR_CX(x)                             (((uint32_t)(((uint32_t)(x)) << DMA_CR_CX_SHIFT)) & DMA_CR_CX_MASK)
#define DMA_CR_ACTIVE_MASK                       (0x80000000U)
#define DMA_CR_ACTIVE_SHIFT                      (31U)
#define DMA_CR_ACTIVE(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_CR_ACTIVE_SHIFT)) & DMA_CR_ACTIVE_MASK)

/*! @name ES - Error Status Register */
#define DMA_ES_DBE_MASK                          (0x1U)
#define DMA_ES_DBE_SHIFT                         (0U)
#define DMA_ES_DBE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DBE_SHIFT)) & DMA_ES_DBE_MASK)
#define DMA_ES_SBE_MASK                          (0x2U)
#define DMA_ES_SBE_SHIFT                         (1U)
#define DMA_ES_SBE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SBE_SHIFT)) & DMA_ES_SBE_MASK)
#define DMA_ES_SGE_MASK                          (0x4U)
#define DMA_ES_SGE_SHIFT                         (2U)
#define DMA_ES_SGE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SGE_SHIFT)) & DMA_ES_SGE_MASK)
#define DMA_ES_NCE_MASK                          (0x8U)
#define DMA_ES_NCE_SHIFT                         (3U)
#define DMA_ES_NCE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_NCE_SHIFT)) & DMA_ES_NCE_MASK)
#define DMA_ES_DOE_MASK                          (0x10U)
#define DMA_ES_DOE_SHIFT                         (4U)
#define DMA_ES_DOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DOE_SHIFT)) & DMA_ES_DOE_MASK)
#define DMA_ES_DAE_MASK                          (0x20U)
#define DMA_ES_DAE_SHIFT                         (5U)
#define DMA_ES_DAE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DAE_SHIFT)) & DMA_ES_DAE_MASK)
#define DMA_ES_SOE_MASK                          (0x40U)
#define DMA_ES_SOE_SHIFT                         (6U)
#define DMA_ES_SOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SOE_SHIFT)) & DMA_ES_SOE_MASK)
#define DMA_ES_SAE_MASK                          (0x80U)
#define DMA_ES_SAE_SHIFT                         (7U)
#define DMA_ES_SAE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SAE_SHIFT)) & DMA_ES_SAE_MASK)
#define DMA_ES_ERRCHN_MASK                       (0xF00U)
#define DMA_ES_ERRCHN_SHIFT                      (8U)
#define DMA_ES_ERRCHN(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ES_ERRCHN_SHIFT)) & DMA_ES_ERRCHN_MASK)
#define DMA_ES_CPE_MASK                          (0x4000U)
#define DMA_ES_CPE_SHIFT                         (14U)
#define DMA_ES_CPE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_CPE_SHIFT)) & DMA_ES_CPE_MASK)
#define DMA_ES_ECX_MASK                          (0x10000U)
#define DMA_ES_ECX_SHIFT                         (16U)
#define DMA_ES_ECX(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_ECX_SHIFT)) & DMA_ES_ECX_MASK)
#define DMA_ES_VLD_MASK                          (0x80000000U)
#define DMA_ES_VLD_SHIFT                         (31U)
#define DMA_ES_VLD(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_VLD_SHIFT)) & DMA_ES_VLD_MASK)

/*! @name ERQ - Enable Request Register */
#define DMA_ERQ_ERQ0_MASK                        (0x1U)
#define DMA_ERQ_ERQ0_SHIFT                       (0U)
#define DMA_ERQ_ERQ0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ0_SHIFT)) & DMA_ERQ_ERQ0_MASK)
#define DMA_ERQ_ERQ1_MASK                        (0x2U)
#define DMA_ERQ_ERQ1_SHIFT                       (1U)
#define DMA_ERQ_ERQ1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ1_SHIFT)) & DMA_ERQ_ERQ1_MASK)
#define DMA_ERQ_ERQ2_MASK                        (0x4U)
#define DMA_ERQ_ERQ2_SHIFT                       (2U)
#define DMA_ERQ_ERQ2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ2_SHIFT)) & DMA_ERQ_ERQ2_MASK)
#define DMA_ERQ_ERQ3_MASK                        (0x8U)
#define DMA_ERQ_ERQ3_SHIFT                       (3U)
#define DMA_ERQ_ERQ3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ3_SHIFT)) & DMA_ERQ_ERQ3_MASK)
#define DMA_ERQ_ERQ4_MASK                        (0x10U)
#define DMA_ERQ_ERQ4_SHIFT                       (4U)
#define DMA_ERQ_ERQ4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ4_SHIFT)) & DMA_ERQ_ERQ4_MASK)
#define DMA_ERQ_ERQ5_MASK                        (0x20U)
#define DMA_ERQ_ERQ5_SHIFT                       (5U)
#define DMA_ERQ_ERQ5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ5_SHIFT)) & DMA_ERQ_ERQ5_MASK)
#define DMA_ERQ_ERQ6_MASK                        (0x40U)
#define DMA_ERQ_ERQ6_SHIFT                       (6U)
#define DMA_ERQ_ERQ6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ6_SHIFT)) & DMA_ERQ_ERQ6_MASK)
#define DMA_ERQ_ERQ7_MASK                        (0x80U)
#define DMA_ERQ_ERQ7_SHIFT                       (7U)
#define DMA_ERQ_ERQ7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ7_SHIFT)) & DMA_ERQ_ERQ7_MASK)
#define DMA_ERQ_ERQ8_MASK                        (0x100U)
#define DMA_ERQ_ERQ8_SHIFT                       (8U)
#define DMA_ERQ_ERQ8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ8_SHIFT)) & DMA_ERQ_ERQ8_MASK)
#define DMA_ERQ_ERQ9_MASK                        (0x200U)
#define DMA_ERQ_ERQ9_SHIFT                       (9U)
#define DMA_ERQ_ERQ9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ9_SHIFT)) & DMA_ERQ_ERQ9_MASK)
#define DMA_ERQ_ERQ10_MASK                       (0x400U)
#define DMA_ERQ_ERQ10_SHIFT                      (10U)
#define DMA_ERQ_ERQ10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ10_SHIFT)) & DMA_ERQ_ERQ10_MASK)
#define DMA_ERQ_ERQ11_MASK                       (0x800U)
#define DMA_ERQ_ERQ11_SHIFT                      (11U)
#define DMA_ERQ_ERQ11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ11_SHIFT)) & DMA_ERQ_ERQ11_MASK)
#define DMA_ERQ_ERQ12_MASK                       (0x1000U)
#define DMA_ERQ_ERQ12_SHIFT                      (12U)
#define DMA_ERQ_ERQ12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ12_SHIFT)) & DMA_ERQ_ERQ12_MASK)
#define DMA_ERQ_ERQ13_MASK                       (0x2000U)
#define DMA_ERQ_ERQ13_SHIFT                      (13U)
#define DMA_ERQ_ERQ13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ13_SHIFT)) & DMA_ERQ_ERQ13_MASK)
#define DMA_ERQ_ERQ14_MASK                       (0x4000U)
#define DMA_ERQ_ERQ14_SHIFT                      (14U)
#define DMA_ERQ_ERQ14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ14_SHIFT)) & DMA_ERQ_ERQ14_MASK)
#define DMA_ERQ_ERQ15_MASK                       (0x8000U)
#define DMA_ERQ_ERQ15_SHIFT                      (15U)
#define DMA_ERQ_ERQ15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ15_SHIFT)) & DMA_ERQ_ERQ15_MASK)

/*! @name EEI - Enable Error Interrupt Register */
#define DMA_EEI_EEI0_MASK                        (0x1U)
#define DMA_EEI_EEI0_SHIFT                       (0U)
#define DMA_EEI_EEI0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI0_SHIFT)) & DMA_EEI_EEI0_MASK)
#define DMA_EEI_EEI1_MASK                        (0x2U)
#define DMA_EEI_EEI1_SHIFT                       (1U)
#define DMA_EEI_EEI1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI1_SHIFT)) & DMA_EEI_EEI1_MASK)
#define DMA_EEI_EEI2_MASK                        (0x4U)
#define DMA_EEI_EEI2_SHIFT                       (2U)
#define DMA_EEI_EEI2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI2_SHIFT)) & DMA_EEI_EEI2_MASK)
#define DMA_EEI_EEI3_MASK                        (0x8U)
#define DMA_EEI_EEI3_SHIFT                       (3U)
#define DMA_EEI_EEI3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI3_SHIFT)) & DMA_EEI_EEI3_MASK)
#define DMA_EEI_EEI4_MASK                        (0x10U)
#define DMA_EEI_EEI4_SHIFT                       (4U)
#define DMA_EEI_EEI4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI4_SHIFT)) & DMA_EEI_EEI4_MASK)
#define DMA_EEI_EEI5_MASK                        (0x20U)
#define DMA_EEI_EEI5_SHIFT                       (5U)
#define DMA_EEI_EEI5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI5_SHIFT)) & DMA_EEI_EEI5_MASK)
#define DMA_EEI_EEI6_MASK                        (0x40U)
#define DMA_EEI_EEI6_SHIFT                       (6U)
#define DMA_EEI_EEI6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI6_SHIFT)) & DMA_EEI_EEI6_MASK)
#define DMA_EEI_EEI7_MASK                        (0x80U)
#define DMA_EEI_EEI7_SHIFT                       (7U)
#define DMA_EEI_EEI7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI7_SHIFT)) & DMA_EEI_EEI7_MASK)
#define DMA_EEI_EEI8_MASK                        (0x100U)
#define DMA_EEI_EEI8_SHIFT                       (8U)
#define DMA_EEI_EEI8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI8_SHIFT)) & DMA_EEI_EEI8_MASK)
#define DMA_EEI_EEI9_MASK                        (0x200U)
#define DMA_EEI_EEI9_SHIFT                       (9U)
#define DMA_EEI_EEI9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI9_SHIFT)) & DMA_EEI_EEI9_MASK)
#define DMA_EEI_EEI10_MASK                       (0x400U)
#define DMA_EEI_EEI10_SHIFT                      (10U)
#define DMA_EEI_EEI10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI10_SHIFT)) & DMA_EEI_EEI10_MASK)
#define DMA_EEI_EEI11_MASK                       (0x800U)
#define DMA_EEI_EEI11_SHIFT                      (11U)
#define DMA_EEI_EEI11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI11_SHIFT)) & DMA_EEI_EEI11_MASK)
#define DMA_EEI_EEI12_MASK                       (0x1000U)
#define DMA_EEI_EEI12_SHIFT                      (12U)
#define DMA_EEI_EEI12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI12_SHIFT)) & DMA_EEI_EEI12_MASK)
#define DMA_EEI_EEI13_MASK                       (0x2000U)
#define DMA_EEI_EEI13_SHIFT                      (13U)
#define DMA_EEI_EEI13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI13_SHIFT)) & DMA_EEI_EEI13_MASK)
#define DMA_EEI_EEI14_MASK                       (0x4000U)
#define DMA_EEI_EEI14_SHIFT                      (14U)
#define DMA_EEI_EEI14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI14_SHIFT)) & DMA_EEI_EEI14_MASK)
#define DMA_EEI_EEI15_MASK                       (0x8000U)
#define DMA_EEI_EEI15_SHIFT                      (15U)
#define DMA_EEI_EEI15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI15_SHIFT)) & DMA_EEI_EEI15_MASK)

/*! @name CEEI - Clear Enable Error Interrupt Register */
#define DMA_CEEI_CEEI_MASK                       (0xFU)
#define DMA_CEEI_CEEI_SHIFT                      (0U)
#define DMA_CEEI_CEEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_CEEI_SHIFT)) & DMA_CEEI_CEEI_MASK)
#define DMA_CEEI_CAEE_MASK                       (0x40U)
#define DMA_CEEI_CAEE_SHIFT                      (6U)
#define DMA_CEEI_CAEE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_CAEE_SHIFT)) & DMA_CEEI_CAEE_MASK)
#define DMA_CEEI_NOP_MASK                        (0x80U)
#define DMA_CEEI_NOP_SHIFT                       (7U)
#define DMA_CEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_NOP_SHIFT)) & DMA_CEEI_NOP_MASK)

/*! @name SEEI - Set Enable Error Interrupt Register */
#define DMA_SEEI_SEEI_MASK                       (0xFU)
#define DMA_SEEI_SEEI_SHIFT                      (0U)
#define DMA_SEEI_SEEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_SEEI_SHIFT)) & DMA_SEEI_SEEI_MASK)
#define DMA_SEEI_SAEE_MASK                       (0x40U)
#define DMA_SEEI_SAEE_SHIFT                      (6U)
#define DMA_SEEI_SAEE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_SAEE_SHIFT)) & DMA_SEEI_SAEE_MASK)
#define DMA_SEEI_NOP_MASK                        (0x80U)
#define DMA_SEEI_NOP_SHIFT                       (7U)
#define DMA_SEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_NOP_SHIFT)) & DMA_SEEI_NOP_MASK)

/*! @name CERQ - Clear Enable Request Register */
#define DMA_CERQ_CERQ_MASK                       (0xFU)
#define DMA_CERQ_CERQ_SHIFT                      (0U)
#define DMA_CERQ_CERQ(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_CERQ_SHIFT)) & DMA_CERQ_CERQ_MASK)
#define DMA_CERQ_CAER_MASK                       (0x40U)
#define DMA_CERQ_CAER_SHIFT                      (6U)
#define DMA_CERQ_CAER(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_CAER_SHIFT)) & DMA_CERQ_CAER_MASK)
#define DMA_CERQ_NOP_MASK                        (0x80U)
#define DMA_CERQ_NOP_SHIFT                       (7U)
#define DMA_CERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_NOP_SHIFT)) & DMA_CERQ_NOP_MASK)

/*! @name SERQ - Set Enable Request Register */
#define DMA_SERQ_SERQ_MASK                       (0xFU)
#define DMA_SERQ_SERQ_SHIFT                      (0U)
#define DMA_SERQ_SERQ(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_SERQ_SHIFT)) & DMA_SERQ_SERQ_MASK)
#define DMA_SERQ_SAER_MASK                       (0x40U)
#define DMA_SERQ_SAER_SHIFT                      (6U)
#define DMA_SERQ_SAER(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_SAER_SHIFT)) & DMA_SERQ_SAER_MASK)
#define DMA_SERQ_NOP_MASK                        (0x80U)
#define DMA_SERQ_NOP_SHIFT                       (7U)
#define DMA_SERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_NOP_SHIFT)) & DMA_SERQ_NOP_MASK)

/*! @name CDNE - Clear DONE Status Bit Register */
#define DMA_CDNE_CDNE_MASK                       (0xFU)
#define DMA_CDNE_CDNE_SHIFT                      (0U)
#define DMA_CDNE_CDNE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_CDNE_SHIFT)) & DMA_CDNE_CDNE_MASK)
#define DMA_CDNE_CADN_MASK                       (0x40U)
#define DMA_CDNE_CADN_SHIFT                      (6U)
#define DMA_CDNE_CADN(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_CADN_SHIFT)) & DMA_CDNE_CADN_MASK)
#define DMA_CDNE_NOP_MASK                        (0x80U)
#define DMA_CDNE_NOP_SHIFT                       (7U)
#define DMA_CDNE_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_NOP_SHIFT)) & DMA_CDNE_NOP_MASK)

/*! @name SSRT - Set START Bit Register */
#define DMA_SSRT_SSRT_MASK                       (0xFU)
#define DMA_SSRT_SSRT_SHIFT                      (0U)
#define DMA_SSRT_SSRT(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_SSRT_SHIFT)) & DMA_SSRT_SSRT_MASK)
#define DMA_SSRT_SAST_MASK                       (0x40U)
#define DMA_SSRT_SAST_SHIFT                      (6U)
#define DMA_SSRT_SAST(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_SAST_SHIFT)) & DMA_SSRT_SAST_MASK)
#define DMA_SSRT_NOP_MASK                        (0x80U)
#define DMA_SSRT_NOP_SHIFT                       (7U)
#define DMA_SSRT_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_NOP_SHIFT)) & DMA_SSRT_NOP_MASK)

/*! @name CERR - Clear Error Register */
#define DMA_CERR_CERR_MASK                       (0xFU)
#define DMA_CERR_CERR_SHIFT                      (0U)
#define DMA_CERR_CERR(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERR_CERR_SHIFT)) & DMA_CERR_CERR_MASK)
#define DMA_CERR_CAEI_MASK                       (0x40U)
#define DMA_CERR_CAEI_SHIFT                      (6U)
#define DMA_CERR_CAEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERR_CAEI_SHIFT)) & DMA_CERR_CAEI_MASK)
#define DMA_CERR_NOP_MASK                        (0x80U)
#define DMA_CERR_NOP_SHIFT                       (7U)
#define DMA_CERR_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CERR_NOP_SHIFT)) & DMA_CERR_NOP_MASK)

/*! @name CINT - Clear Interrupt Request Register */
#define DMA_CINT_CINT_MASK                       (0xFU)
#define DMA_CINT_CINT_SHIFT                      (0U)
#define DMA_CINT_CINT(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CINT_CINT_SHIFT)) & DMA_CINT_CINT_MASK)
#define DMA_CINT_CAIR_MASK                       (0x40U)
#define DMA_CINT_CAIR_SHIFT                      (6U)
#define DMA_CINT_CAIR(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CINT_CAIR_SHIFT)) & DMA_CINT_CAIR_MASK)
#define DMA_CINT_NOP_MASK                        (0x80U)
#define DMA_CINT_NOP_SHIFT                       (7U)
#define DMA_CINT_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CINT_NOP_SHIFT)) & DMA_CINT_NOP_MASK)

/*! @name INT - Interrupt Request Register */
#define DMA_INT_INT0_MASK                        (0x1U)
#define DMA_INT_INT0_SHIFT                       (0U)
#define DMA_INT_INT0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT0_SHIFT)) & DMA_INT_INT0_MASK)
#define DMA_INT_INT1_MASK                        (0x2U)
#define DMA_INT_INT1_SHIFT                       (1U)
#define DMA_INT_INT1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT1_SHIFT)) & DMA_INT_INT1_MASK)
#define DMA_INT_INT2_MASK                        (0x4U)
#define DMA_INT_INT2_SHIFT                       (2U)
#define DMA_INT_INT2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT2_SHIFT)) & DMA_INT_INT2_MASK)
#define DMA_INT_INT3_MASK                        (0x8U)
#define DMA_INT_INT3_SHIFT                       (3U)
#define DMA_INT_INT3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT3_SHIFT)) & DMA_INT_INT3_MASK)
#define DMA_INT_INT4_MASK                        (0x10U)
#define DMA_INT_INT4_SHIFT                       (4U)
#define DMA_INT_INT4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT4_SHIFT)) & DMA_INT_INT4_MASK)
#define DMA_INT_INT5_MASK                        (0x20U)
#define DMA_INT_INT5_SHIFT                       (5U)
#define DMA_INT_INT5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT5_SHIFT)) & DMA_INT_INT5_MASK)
#define DMA_INT_INT6_MASK                        (0x40U)
#define DMA_INT_INT6_SHIFT                       (6U)
#define DMA_INT_INT6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT6_SHIFT)) & DMA_INT_INT6_MASK)
#define DMA_INT_INT7_MASK                        (0x80U)
#define DMA_INT_INT7_SHIFT                       (7U)
#define DMA_INT_INT7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT7_SHIFT)) & DMA_INT_INT7_MASK)
#define DMA_INT_INT8_MASK                        (0x100U)
#define DMA_INT_INT8_SHIFT                       (8U)
#define DMA_INT_INT8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT8_SHIFT)) & DMA_INT_INT8_MASK)
#define DMA_INT_INT9_MASK                        (0x200U)
#define DMA_INT_INT9_SHIFT                       (9U)
#define DMA_INT_INT9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT9_SHIFT)) & DMA_INT_INT9_MASK)
#define DMA_INT_INT10_MASK                       (0x400U)
#define DMA_INT_INT10_SHIFT                      (10U)
#define DMA_INT_INT10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT10_SHIFT)) & DMA_INT_INT10_MASK)
#define DMA_INT_INT11_MASK                       (0x800U)
#define DMA_INT_INT11_SHIFT                      (11U)
#define DMA_INT_INT11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT11_SHIFT)) & DMA_INT_INT11_MASK)
#define DMA_INT_INT12_MASK                       (0x1000U)
#define DMA_INT_INT12_SHIFT                      (12U)
#define DMA_INT_INT12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT12_SHIFT)) & DMA_INT_INT12_MASK)
#define DMA_INT_INT13_MASK                       (0x2000U)
#define DMA_INT_INT13_SHIFT                      (13U)
#define DMA_INT_INT13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT13_SHIFT)) & DMA_INT_INT13_MASK)
#define DMA_INT_INT14_MASK                       (0x4000U)
#define DMA_INT_INT14_SHIFT                      (14U)
#define DMA_INT_INT14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT14_SHIFT)) & DMA_INT_INT14_MASK)
#define DMA_INT_INT15_MASK                       (0x8000U)
#define DMA_INT_INT15_SHIFT                      (15U)
#define DMA_INT_INT15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT15_SHIFT)) & DMA_INT_INT15_MASK)

/*! @name ERR - Error Register */
#define DMA_ERR_ERR0_MASK                        (0x1U)
#define DMA_ERR_ERR0_SHIFT                       (0U)
#define DMA_ERR_ERR0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR0_SHIFT)) & DMA_ERR_ERR0_MASK)
#define DMA_ERR_ERR1_MASK                        (0x2U)
#define DMA_ERR_ERR1_SHIFT                       (1U)
#define DMA_ERR_ERR1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR1_SHIFT)) & DMA_ERR_ERR1_MASK)
#define DMA_ERR_ERR2_MASK                        (0x4U)
#define DMA_ERR_ERR2_SHIFT                       (2U)
#define DMA_ERR_ERR2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR2_SHIFT)) & DMA_ERR_ERR2_MASK)
#define DMA_ERR_ERR3_MASK                        (0x8U)
#define DMA_ERR_ERR3_SHIFT                       (3U)
#define DMA_ERR_ERR3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR3_SHIFT)) & DMA_ERR_ERR3_MASK)
#define DMA_ERR_ERR4_MASK                        (0x10U)
#define DMA_ERR_ERR4_SHIFT                       (4U)
#define DMA_ERR_ERR4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR4_SHIFT)) & DMA_ERR_ERR4_MASK)
#define DMA_ERR_ERR5_MASK                        (0x20U)
#define DMA_ERR_ERR5_SHIFT                       (5U)
#define DMA_ERR_ERR5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR5_SHIFT)) & DMA_ERR_ERR5_MASK)
#define DMA_ERR_ERR6_MASK                        (0x40U)
#define DMA_ERR_ERR6_SHIFT                       (6U)
#define DMA_ERR_ERR6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR6_SHIFT)) & DMA_ERR_ERR6_MASK)
#define DMA_ERR_ERR7_MASK                        (0x80U)
#define DMA_ERR_ERR7_SHIFT                       (7U)
#define DMA_ERR_ERR7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR7_SHIFT)) & DMA_ERR_ERR7_MASK)
#define DMA_ERR_ERR8_MASK                        (0x100U)
#define DMA_ERR_ERR8_SHIFT                       (8U)
#define DMA_ERR_ERR8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR8_SHIFT)) & DMA_ERR_ERR8_MASK)
#define DMA_ERR_ERR9_MASK                        (0x200U)
#define DMA_ERR_ERR9_SHIFT                       (9U)
#define DMA_ERR_ERR9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR9_SHIFT)) & DMA_ERR_ERR9_MASK)
#define DMA_ERR_ERR10_MASK                       (0x400U)
#define DMA_ERR_ERR10_SHIFT                      (10U)
#define DMA_ERR_ERR10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR10_SHIFT)) & DMA_ERR_ERR10_MASK)
#define DMA_ERR_ERR11_MASK                       (0x800U)
#define DMA_ERR_ERR11_SHIFT                      (11U)
#define DMA_ERR_ERR11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR11_SHIFT)) & DMA_ERR_ERR11_MASK)
#define DMA_ERR_ERR12_MASK                       (0x1000U)
#define DMA_ERR_ERR12_SHIFT                      (12U)
#define DMA_ERR_ERR12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR12_SHIFT)) & DMA_ERR_ERR12_MASK)
#define DMA_ERR_ERR13_MASK                       (0x2000U)
#define DMA_ERR_ERR13_SHIFT                      (13U)
#define DMA_ERR_ERR13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR13_SHIFT)) & DMA_ERR_ERR13_MASK)
#define DMA_ERR_ERR14_MASK                       (0x4000U)
#define DMA_ERR_ERR14_SHIFT                      (14U)
#define DMA_ERR_ERR14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR14_SHIFT)) & DMA_ERR_ERR14_MASK)
#define DMA_ERR_ERR15_MASK                       (0x8000U)
#define DMA_ERR_ERR15_SHIFT                      (15U)
#define DMA_ERR_ERR15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR15_SHIFT)) & DMA_ERR_ERR15_MASK)

/*! @name HRS - Hardware Request Status Register */
#define DMA_HRS_HRS0_MASK                        (0x1U)
#define DMA_HRS_HRS0_SHIFT                       (0U)
#define DMA_HRS_HRS0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS0_SHIFT)) & DMA_HRS_HRS0_MASK)
#define DMA_HRS_HRS1_MASK                        (0x2U)
#define DMA_HRS_HRS1_SHIFT                       (1U)
#define DMA_HRS_HRS1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS1_SHIFT)) & DMA_HRS_HRS1_MASK)
#define DMA_HRS_HRS2_MASK                        (0x4U)
#define DMA_HRS_HRS2_SHIFT                       (2U)
#define DMA_HRS_HRS2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS2_SHIFT)) & DMA_HRS_HRS2_MASK)
#define DMA_HRS_HRS3_MASK                        (0x8U)
#define DMA_HRS_HRS3_SHIFT                       (3U)
#define DMA_HRS_HRS3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS3_SHIFT)) & DMA_HRS_HRS3_MASK)
#define DMA_HRS_HRS4_MASK                        (0x10U)
#define DMA_HRS_HRS4_SHIFT                       (4U)
#define DMA_HRS_HRS4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS4_SHIFT)) & DMA_HRS_HRS4_MASK)
#define DMA_HRS_HRS5_MASK                        (0x20U)
#define DMA_HRS_HRS5_SHIFT                       (5U)
#define DMA_HRS_HRS5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS5_SHIFT)) & DMA_HRS_HRS5_MASK)
#define DMA_HRS_HRS6_MASK                        (0x40U)
#define DMA_HRS_HRS6_SHIFT                       (6U)
#define DMA_HRS_HRS6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS6_SHIFT)) & DMA_HRS_HRS6_MASK)
#define DMA_HRS_HRS7_MASK                        (0x80U)
#define DMA_HRS_HRS7_SHIFT                       (7U)
#define DMA_HRS_HRS7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS7_SHIFT)) & DMA_HRS_HRS7_MASK)
#define DMA_HRS_HRS8_MASK                        (0x100U)
#define DMA_HRS_HRS8_SHIFT                       (8U)
#define DMA_HRS_HRS8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS8_SHIFT)) & DMA_HRS_HRS8_MASK)
#define DMA_HRS_HRS9_MASK                        (0x200U)
#define DMA_HRS_HRS9_SHIFT                       (9U)
#define DMA_HRS_HRS9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS9_SHIFT)) & DMA_HRS_HRS9_MASK)
#define DMA_HRS_HRS10_MASK                       (0x400U)
#define DMA_HRS_HRS10_SHIFT                      (10U)
#define DMA_HRS_HRS10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS10_SHIFT)) & DMA_HRS_HRS10_MASK)
#define DMA_HRS_HRS11_MASK                       (0x800U)
#define DMA_HRS_HRS11_SHIFT                      (11U)
#define DMA_HRS_HRS11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS11_SHIFT)) & DMA_HRS_HRS11_MASK)
#define DMA_HRS_HRS12_MASK                       (0x1000U)
#define DMA_HRS_HRS12_SHIFT                      (12U)
#define DMA_HRS_HRS12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS12_SHIFT)) & DMA_HRS_HRS12_MASK)
#define DMA_HRS_HRS13_MASK                       (0x2000U)
#define DMA_HRS_HRS13_SHIFT                      (13U)
#define DMA_HRS_HRS13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS13_SHIFT)) & DMA_HRS_HRS13_MASK)
#define DMA_HRS_HRS14_MASK                       (0x4000U)
#define DMA_HRS_HRS14_SHIFT                      (14U)
#define DMA_HRS_HRS14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS14_SHIFT)) & DMA_HRS_HRS14_MASK)
#define DMA_HRS_HRS15_MASK                       (0x8000U)
#define DMA_HRS_HRS15_SHIFT                      (15U)
#define DMA_HRS_HRS15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS15_SHIFT)) & DMA_HRS_HRS15_MASK)

/*! @name EARS - Enable Asynchronous Request in Stop Register */
#define DMA_EARS_EDREQ_0_MASK                    (0x1U)
#define DMA_EARS_EDREQ_0_SHIFT                   (0U)
#define DMA_EARS_EDREQ_0(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_0_SHIFT)) & DMA_EARS_EDREQ_0_MASK)
#define DMA_EARS_EDREQ_1_MASK                    (0x2U)
#define DMA_EARS_EDREQ_1_SHIFT                   (1U)
#define DMA_EARS_EDREQ_1(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_1_SHIFT)) & DMA_EARS_EDREQ_1_MASK)
#define DMA_EARS_EDREQ_2_MASK                    (0x4U)
#define DMA_EARS_EDREQ_2_SHIFT                   (2U)
#define DMA_EARS_EDREQ_2(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_2_SHIFT)) & DMA_EARS_EDREQ_2_MASK)
#define DMA_EARS_EDREQ_3_MASK                    (0x8U)
#define DMA_EARS_EDREQ_3_SHIFT                   (3U)
#define DMA_EARS_EDREQ_3(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_3_SHIFT)) & DMA_EARS_EDREQ_3_MASK)
#define DMA_EARS_EDREQ_4_MASK                    (0x10U)
#define DMA_EARS_EDREQ_4_SHIFT                   (4U)
#define DMA_EARS_EDREQ_4(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_4_SHIFT)) & DMA_EARS_EDREQ_4_MASK)
#define DMA_EARS_EDREQ_5_MASK                    (0x20U)
#define DMA_EARS_EDREQ_5_SHIFT                   (5U)
#define DMA_EARS_EDREQ_5(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_5_SHIFT)) & DMA_EARS_EDREQ_5_MASK)
#define DMA_EARS_EDREQ_6_MASK                    (0x40U)
#define DMA_EARS_EDREQ_6_SHIFT                   (6U)
#define DMA_EARS_EDREQ_6(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_6_SHIFT)) & DMA_EARS_EDREQ_6_MASK)
#define DMA_EARS_EDREQ_7_MASK                    (0x80U)
#define DMA_EARS_EDREQ_7_SHIFT                   (7U)
#define DMA_EARS_EDREQ_7(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_7_SHIFT)) & DMA_EARS_EDREQ_7_MASK)
#define DMA_EARS_EDREQ_8_MASK                    (0x100U)
#define DMA_EARS_EDREQ_8_SHIFT                   (8U)
#define DMA_EARS_EDREQ_8(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_8_SHIFT)) & DMA_EARS_EDREQ_8_MASK)
#define DMA_EARS_EDREQ_9_MASK                    (0x200U)
#define DMA_EARS_EDREQ_9_SHIFT                   (9U)
#define DMA_EARS_EDREQ_9(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_9_SHIFT)) & DMA_EARS_EDREQ_9_MASK)
#define DMA_EARS_EDREQ_10_MASK                   (0x400U)
#define DMA_EARS_EDREQ_10_SHIFT                  (10U)
#define DMA_EARS_EDREQ_10(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_10_SHIFT)) & DMA_EARS_EDREQ_10_MASK)
#define DMA_EARS_EDREQ_11_MASK                   (0x800U)
#define DMA_EARS_EDREQ_11_SHIFT                  (11U)
#define DMA_EARS_EDREQ_11(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_11_SHIFT)) & DMA_EARS_EDREQ_11_MASK)
#define DMA_EARS_EDREQ_12_MASK                   (0x1000U)
#define DMA_EARS_EDREQ_12_SHIFT                  (12U)
#define DMA_EARS_EDREQ_12(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_12_SHIFT)) & DMA_EARS_EDREQ_12_MASK)
#define DMA_EARS_EDREQ_13_MASK                   (0x2000U)
#define DMA_EARS_EDREQ_13_SHIFT                  (13U)
#define DMA_EARS_EDREQ_13(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_13_SHIFT)) & DMA_EARS_EDREQ_13_MASK)
#define DMA_EARS_EDREQ_14_MASK                   (0x4000U)
#define DMA_EARS_EDREQ_14_SHIFT                  (14U)
#define DMA_EARS_EDREQ_14(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_14_SHIFT)) & DMA_EARS_EDREQ_14_MASK)
#define DMA_EARS_EDREQ_15_MASK                   (0x8000U)
#define DMA_EARS_EDREQ_15_SHIFT                  (15U)
#define DMA_EARS_EDREQ_15(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_15_SHIFT)) & DMA_EARS_EDREQ_15_MASK)

/*! @name DCHPRI3 - Channel Priority Register */
#define DMA_DCHPRI3_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI3_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI3_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_CHPRI_SHIFT)) & DMA_DCHPRI3_CHPRI_MASK)
#define DMA_DCHPRI3_DPA_MASK                     (0x40U)
#define DMA_DCHPRI3_DPA_SHIFT                    (6U)
#define DMA_DCHPRI3_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_DPA_SHIFT)) & DMA_DCHPRI3_DPA_MASK)
#define DMA_DCHPRI3_ECP_MASK                     (0x80U)
#define DMA_DCHPRI3_ECP_SHIFT                    (7U)
#define DMA_DCHPRI3_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_ECP_SHIFT)) & DMA_DCHPRI3_ECP_MASK)

/*! @name DCHPRI2 - Channel Priority Register */
#define DMA_DCHPRI2_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI2_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI2_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_CHPRI_SHIFT)) & DMA_DCHPRI2_CHPRI_MASK)
#define DMA_DCHPRI2_DPA_MASK                     (0x40U)
#define DMA_DCHPRI2_DPA_SHIFT                    (6U)
#define DMA_DCHPRI2_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_DPA_SHIFT)) & DMA_DCHPRI2_DPA_MASK)
#define DMA_DCHPRI2_ECP_MASK                     (0x80U)
#define DMA_DCHPRI2_ECP_SHIFT                    (7U)
#define DMA_DCHPRI2_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_ECP_SHIFT)) & DMA_DCHPRI2_ECP_MASK)

/*! @name DCHPRI1 - Channel Priority Register */
#define DMA_DCHPRI1_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI1_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI1_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_CHPRI_SHIFT)) & DMA_DCHPRI1_CHPRI_MASK)
#define DMA_DCHPRI1_DPA_MASK                     (0x40U)
#define DMA_DCHPRI1_DPA_SHIFT                    (6U)
#define DMA_DCHPRI1_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_DPA_SHIFT)) & DMA_DCHPRI1_DPA_MASK)
#define DMA_DCHPRI1_ECP_MASK                     (0x80U)
#define DMA_DCHPRI1_ECP_SHIFT                    (7U)
#define DMA_DCHPRI1_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_ECP_SHIFT)) & DMA_DCHPRI1_ECP_MASK)

/*! @name DCHPRI0 - Channel Priority Register */
#define DMA_DCHPRI0_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI0_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI0_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_CHPRI_SHIFT)) & DMA_DCHPRI0_CHPRI_MASK)
#define DMA_DCHPRI0_DPA_MASK                     (0x40U)
#define DMA_DCHPRI0_DPA_SHIFT                    (6U)
#define DMA_DCHPRI0_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_DPA_SHIFT)) & DMA_DCHPRI0_DPA_MASK)
#define DMA_DCHPRI0_ECP_MASK                     (0x80U)
#define DMA_DCHPRI0_ECP_SHIFT                    (7U)
#define DMA_DCHPRI0_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_ECP_SHIFT)) & DMA_DCHPRI0_ECP_MASK)

/*! @name DCHPRI7 - Channel Priority Register */
#define DMA_DCHPRI7_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI7_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI7_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_CHPRI_SHIFT)) & DMA_DCHPRI7_CHPRI_MASK)
#define DMA_DCHPRI7_DPA_MASK                     (0x40U)
#define DMA_DCHPRI7_DPA_SHIFT                    (6U)
#define DMA_DCHPRI7_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_DPA_SHIFT)) & DMA_DCHPRI7_DPA_MASK)
#define DMA_DCHPRI7_ECP_MASK                     (0x80U)
#define DMA_DCHPRI7_ECP_SHIFT                    (7U)
#define DMA_DCHPRI7_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_ECP_SHIFT)) & DMA_DCHPRI7_ECP_MASK)

/*! @name DCHPRI6 - Channel Priority Register */
#define DMA_DCHPRI6_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI6_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI6_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_CHPRI_SHIFT)) & DMA_DCHPRI6_CHPRI_MASK)
#define DMA_DCHPRI6_DPA_MASK                     (0x40U)
#define DMA_DCHPRI6_DPA_SHIFT                    (6U)
#define DMA_DCHPRI6_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_DPA_SHIFT)) & DMA_DCHPRI6_DPA_MASK)
#define DMA_DCHPRI6_ECP_MASK                     (0x80U)
#define DMA_DCHPRI6_ECP_SHIFT                    (7U)
#define DMA_DCHPRI6_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_ECP_SHIFT)) & DMA_DCHPRI6_ECP_MASK)

/*! @name DCHPRI5 - Channel Priority Register */
#define DMA_DCHPRI5_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI5_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI5_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_CHPRI_SHIFT)) & DMA_DCHPRI5_CHPRI_MASK)
#define DMA_DCHPRI5_DPA_MASK                     (0x40U)
#define DMA_DCHPRI5_DPA_SHIFT                    (6U)
#define DMA_DCHPRI5_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_DPA_SHIFT)) & DMA_DCHPRI5_DPA_MASK)
#define DMA_DCHPRI5_ECP_MASK                     (0x80U)
#define DMA_DCHPRI5_ECP_SHIFT                    (7U)
#define DMA_DCHPRI5_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_ECP_SHIFT)) & DMA_DCHPRI5_ECP_MASK)

/*! @name DCHPRI4 - Channel Priority Register */
#define DMA_DCHPRI4_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI4_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI4_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_CHPRI_SHIFT)) & DMA_DCHPRI4_CHPRI_MASK)
#define DMA_DCHPRI4_DPA_MASK                     (0x40U)
#define DMA_DCHPRI4_DPA_SHIFT                    (6U)
#define DMA_DCHPRI4_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_DPA_SHIFT)) & DMA_DCHPRI4_DPA_MASK)
#define DMA_DCHPRI4_ECP_MASK                     (0x80U)
#define DMA_DCHPRI4_ECP_SHIFT                    (7U)
#define DMA_DCHPRI4_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_ECP_SHIFT)) & DMA_DCHPRI4_ECP_MASK)

/*! @name DCHPRI11 - Channel Priority Register */
#define DMA_DCHPRI11_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI11_CHPRI_SHIFT                 (0U)
#define DMA_DCHPRI11_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_CHPRI_SHIFT)) & DMA_DCHPRI11_CHPRI_MASK)
#define DMA_DCHPRI11_DPA_MASK                    (0x40U)
#define DMA_DCHPRI11_DPA_SHIFT                   (6U)
#define DMA_DCHPRI11_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_DPA_SHIFT)) & DMA_DCHPRI11_DPA_MASK)
#define DMA_DCHPRI11_ECP_MASK                    (0x80U)
#define DMA_DCHPRI11_ECP_SHIFT                   (7U)
#define DMA_DCHPRI11_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_ECP_SHIFT)) & DMA_DCHPRI11_ECP_MASK)

/*! @name DCHPRI10 - Channel Priority Register */
#define DMA_DCHPRI10_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI10_CHPRI_SHIFT                 (0U)
#define DMA_DCHPRI10_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_CHPRI_SHIFT)) & DMA_DCHPRI10_CHPRI_MASK)
#define DMA_DCHPRI10_DPA_MASK                    (0x40U)
#define DMA_DCHPRI10_DPA_SHIFT                   (6U)
#define DMA_DCHPRI10_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_DPA_SHIFT)) & DMA_DCHPRI10_DPA_MASK)
#define DMA_DCHPRI10_ECP_MASK                    (0x80U)
#define DMA_DCHPRI10_ECP_SHIFT                   (7U)
#define DMA_DCHPRI10_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_ECP_SHIFT)) & DMA_DCHPRI10_ECP_MASK)

/*! @name DCHPRI9 - Channel Priority Register */
#define DMA_DCHPRI9_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI9_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI9_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_CHPRI_SHIFT)) & DMA_DCHPRI9_CHPRI_MASK)
#define DMA_DCHPRI9_DPA_MASK                     (0x40U)
#define DMA_DCHPRI9_DPA_SHIFT                    (6U)
#define DMA_DCHPRI9_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_DPA_SHIFT)) & DMA_DCHPRI9_DPA_MASK)
#define DMA_DCHPRI9_ECP_MASK                     (0x80U)
#define DMA_DCHPRI9_ECP_SHIFT                    (7U)
#define DMA_DCHPRI9_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_ECP_SHIFT)) & DMA_DCHPRI9_ECP_MASK)

/*! @name DCHPRI8 - Channel Priority Register */
#define DMA_DCHPRI8_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI8_CHPRI_SHIFT                  (0U)
#define DMA_DCHPRI8_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_CHPRI_SHIFT)) & DMA_DCHPRI8_CHPRI_MASK)
#define DMA_DCHPRI8_DPA_MASK                     (0x40U)
#define DMA_DCHPRI8_DPA_SHIFT                    (6U)
#define DMA_DCHPRI8_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_DPA_SHIFT)) & DMA_DCHPRI8_DPA_MASK)
#define DMA_DCHPRI8_ECP_MASK                     (0x80U)
#define DMA_DCHPRI8_ECP_SHIFT                    (7U)
#define DMA_DCHPRI8_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_ECP_SHIFT)) & DMA_DCHPRI8_ECP_MASK)

/*! @name DCHPRI15 - Channel Priority Register */
#define DMA_DCHPRI15_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI15_CHPRI_SHIFT                 (0U)
#define DMA_DCHPRI15_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_CHPRI_SHIFT)) & DMA_DCHPRI15_CHPRI_MASK)
#define DMA_DCHPRI15_DPA_MASK                    (0x40U)
#define DMA_DCHPRI15_DPA_SHIFT                   (6U)
#define DMA_DCHPRI15_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_DPA_SHIFT)) & DMA_DCHPRI15_DPA_MASK)
#define DMA_DCHPRI15_ECP_MASK                    (0x80U)
#define DMA_DCHPRI15_ECP_SHIFT                   (7U)
#define DMA_DCHPRI15_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_ECP_SHIFT)) & DMA_DCHPRI15_ECP_MASK)

/*! @name DCHPRI14 - Channel Priority Register */
#define DMA_DCHPRI14_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI14_CHPRI_SHIFT                 (0U)
#define DMA_DCHPRI14_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_CHPRI_SHIFT)) & DMA_DCHPRI14_CHPRI_MASK)
#define DMA_DCHPRI14_DPA_MASK                    (0x40U)
#define DMA_DCHPRI14_DPA_SHIFT                   (6U)
#define DMA_DCHPRI14_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_DPA_SHIFT)) & DMA_DCHPRI14_DPA_MASK)
#define DMA_DCHPRI14_ECP_MASK                    (0x80U)
#define DMA_DCHPRI14_ECP_SHIFT                   (7U)
#define DMA_DCHPRI14_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_ECP_SHIFT)) & DMA_DCHPRI14_ECP_MASK)

/*! @name DCHPRI13 - Channel Priority Register */
#define DMA_DCHPRI13_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI13_CHPRI_SHIFT                 (0U)
#define DMA_DCHPRI13_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_CHPRI_SHIFT)) & DMA_DCHPRI13_CHPRI_MASK)
#define DMA_DCHPRI13_DPA_MASK                    (0x40U)
#define DMA_DCHPRI13_DPA_SHIFT                   (6U)
#define DMA_DCHPRI13_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_DPA_SHIFT)) & DMA_DCHPRI13_DPA_MASK)
#define DMA_DCHPRI13_ECP_MASK                    (0x80U)
#define DMA_DCHPRI13_ECP_SHIFT                   (7U)
#define DMA_DCHPRI13_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_ECP_SHIFT)) & DMA_DCHPRI13_ECP_MASK)

/*! @name DCHPRI12 - Channel Priority Register */
#define DMA_DCHPRI12_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI12_CHPRI_SHIFT                 (0U)
#define DMA_DCHPRI12_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_CHPRI_SHIFT)) & DMA_DCHPRI12_CHPRI_MASK)
#define DMA_DCHPRI12_DPA_MASK                    (0x40U)
#define DMA_DCHPRI12_DPA_SHIFT                   (6U)
#define DMA_DCHPRI12_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_DPA_SHIFT)) & DMA_DCHPRI12_DPA_MASK)
#define DMA_DCHPRI12_ECP_MASK                    (0x80U)
#define DMA_DCHPRI12_ECP_SHIFT                   (7U)
#define DMA_DCHPRI12_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_ECP_SHIFT)) & DMA_DCHPRI12_ECP_MASK)

/*! @name SADDR - TCD Source Address */
#define DMA_SADDR_SADDR_MASK                     (0xFFFFFFFFU)
#define DMA_SADDR_SADDR_SHIFT                    (0U)
#define DMA_SADDR_SADDR(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_SADDR_SADDR_SHIFT)) & DMA_SADDR_SADDR_MASK)

/* The count of DMA_SADDR */
#define DMA_SADDR_COUNT                          (16U)

/*! @name SOFF - TCD Signed Source Address Offset */
#define DMA_SOFF_SOFF_MASK                       (0xFFFFU)
#define DMA_SOFF_SOFF_SHIFT                      (0U)
#define DMA_SOFF_SOFF(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_SOFF_SOFF_SHIFT)) & DMA_SOFF_SOFF_MASK)

/* The count of DMA_SOFF */
#define DMA_SOFF_COUNT                           (16U)

/*! @name ATTR - TCD Transfer Attributes */
#define DMA_ATTR_DSIZE_MASK                      (0x7U)
#define DMA_ATTR_DSIZE_SHIFT                     (0U)
#define DMA_ATTR_DSIZE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_DSIZE_SHIFT)) & DMA_ATTR_DSIZE_MASK)
#define DMA_ATTR_DMOD_MASK                       (0xF8U)
#define DMA_ATTR_DMOD_SHIFT                      (3U)
#define DMA_ATTR_DMOD(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_DMOD_SHIFT)) & DMA_ATTR_DMOD_MASK)
#define DMA_ATTR_SSIZE_MASK                      (0x700U)
#define DMA_ATTR_SSIZE_SHIFT                     (8U)
#define DMA_ATTR_SSIZE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_SSIZE_SHIFT)) & DMA_ATTR_SSIZE_MASK)
#define DMA_ATTR_SMOD_MASK                       (0xF800U)
#define DMA_ATTR_SMOD_SHIFT                      (11U)
#define DMA_ATTR_SMOD(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_SMOD_SHIFT)) & DMA_ATTR_SMOD_MASK)

/* The count of DMA_ATTR */
#define DMA_ATTR_COUNT                           (16U)

/*! @name NBYTES_MLNO - TCD Minor Byte Count (Minor Loop Mapping Disabled) */
#define DMA_NBYTES_MLNO_NBYTES_MASK              (0xFFFFFFFFU)
#define DMA_NBYTES_MLNO_NBYTES_SHIFT             (0U)
#define DMA_NBYTES_MLNO_NBYTES(x)                (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLNO_NBYTES_SHIFT)) & DMA_NBYTES_MLNO_NBYTES_MASK)

/* The count of DMA_NBYTES_MLNO */
#define DMA_NBYTES_MLNO_COUNT                    (16U)

/*! @name NBYTES_MLOFFNO - TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled) */
#define DMA_NBYTES_MLOFFNO_NBYTES_MASK           (0x3FFFFFFFU)
#define DMA_NBYTES_MLOFFNO_NBYTES_SHIFT          (0U)
#define DMA_NBYTES_MLOFFNO_NBYTES(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_NBYTES_SHIFT)) & DMA_NBYTES_MLOFFNO_NBYTES_MASK)
#define DMA_NBYTES_MLOFFNO_DMLOE_MASK            (0x40000000U)
#define DMA_NBYTES_MLOFFNO_DMLOE_SHIFT           (30U)
#define DMA_NBYTES_MLOFFNO_DMLOE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_DMLOE_SHIFT)) & DMA_NBYTES_MLOFFNO_DMLOE_MASK)
#define DMA_NBYTES_MLOFFNO_SMLOE_MASK            (0x80000000U)
#define DMA_NBYTES_MLOFFNO_SMLOE_SHIFT           (31U)
#define DMA_NBYTES_MLOFFNO_SMLOE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_SMLOE_SHIFT)) & DMA_NBYTES_MLOFFNO_SMLOE_MASK)

/* The count of DMA_NBYTES_MLOFFNO */
#define DMA_NBYTES_MLOFFNO_COUNT                 (16U)

/*! @name NBYTES_MLOFFYES - TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled) */
#define DMA_NBYTES_MLOFFYES_NBYTES_MASK          (0x3FFU)
#define DMA_NBYTES_MLOFFYES_NBYTES_SHIFT         (0U)
#define DMA_NBYTES_MLOFFYES_NBYTES(x)            (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_NBYTES_SHIFT)) & DMA_NBYTES_MLOFFYES_NBYTES_MASK)
#define DMA_NBYTES_MLOFFYES_MLOFF_MASK           (0x3FFFFC00U)
#define DMA_NBYTES_MLOFFYES_MLOFF_SHIFT          (10U)
#define DMA_NBYTES_MLOFFYES_MLOFF(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_MLOFF_SHIFT)) & DMA_NBYTES_MLOFFYES_MLOFF_MASK)
#define DMA_NBYTES_MLOFFYES_DMLOE_MASK           (0x40000000U)
#define DMA_NBYTES_MLOFFYES_DMLOE_SHIFT          (30U)
#define DMA_NBYTES_MLOFFYES_DMLOE(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_DMLOE_SHIFT)) & DMA_NBYTES_MLOFFYES_DMLOE_MASK)
#define DMA_NBYTES_MLOFFYES_SMLOE_MASK           (0x80000000U)
#define DMA_NBYTES_MLOFFYES_SMLOE_SHIFT          (31U)
#define DMA_NBYTES_MLOFFYES_SMLOE(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_SMLOE_SHIFT)) & DMA_NBYTES_MLOFFYES_SMLOE_MASK)

/* The count of DMA_NBYTES_MLOFFYES */
#define DMA_NBYTES_MLOFFYES_COUNT                (16U)

/*! @name SLAST - TCD Last Source Address Adjustment */
#define DMA_SLAST_SLAST_MASK                     (0xFFFFFFFFU)
#define DMA_SLAST_SLAST_SHIFT                    (0U)
#define DMA_SLAST_SLAST(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_SLAST_SLAST_SHIFT)) & DMA_SLAST_SLAST_MASK)

/* The count of DMA_SLAST */
#define DMA_SLAST_COUNT                          (16U)

/*! @name DADDR - TCD Destination Address */
#define DMA_DADDR_DADDR_MASK                     (0xFFFFFFFFU)
#define DMA_DADDR_DADDR_SHIFT                    (0U)
#define DMA_DADDR_DADDR(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_DADDR_DADDR_SHIFT)) & DMA_DADDR_DADDR_MASK)

/* The count of DMA_DADDR */
#define DMA_DADDR_COUNT                          (16U)

/*! @name DOFF - TCD Signed Destination Address Offset */
#define DMA_DOFF_DOFF_MASK                       (0xFFFFU)
#define DMA_DOFF_DOFF_SHIFT                      (0U)
#define DMA_DOFF_DOFF(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_DOFF_DOFF_SHIFT)) & DMA_DOFF_DOFF_MASK)

/* The count of DMA_DOFF */
#define DMA_DOFF_COUNT                           (16U)

/*! @name CITER_ELINKNO - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_CITER_ELINKNO_CITER_MASK             (0x7FFFU)
#define DMA_CITER_ELINKNO_CITER_SHIFT            (0U)
#define DMA_CITER_ELINKNO_CITER(x)               (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKNO_CITER_SHIFT)) & DMA_CITER_ELINKNO_CITER_MASK)
#define DMA_CITER_ELINKNO_ELINK_MASK             (0x8000U)
#define DMA_CITER_ELINKNO_ELINK_SHIFT            (15U)
#define DMA_CITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKNO_ELINK_SHIFT)) & DMA_CITER_ELINKNO_ELINK_MASK)

/* The count of DMA_CITER_ELINKNO */
#define DMA_CITER_ELINKNO_COUNT                  (16U)

/*! @name CITER_ELINKYES - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_CITER_ELINKYES_CITER_MASK            (0x1FFU)
#define DMA_CITER_ELINKYES_CITER_SHIFT           (0U)
#define DMA_CITER_ELINKYES_CITER(x)              (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_CITER_SHIFT)) & DMA_CITER_ELINKYES_CITER_MASK)
#define DMA_CITER_ELINKYES_LINKCH_MASK           (0x1E00U)
#define DMA_CITER_ELINKYES_LINKCH_SHIFT          (9U)
#define DMA_CITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_LINKCH_SHIFT)) & DMA_CITER_ELINKYES_LINKCH_MASK)
#define DMA_CITER_ELINKYES_ELINK_MASK            (0x8000U)
#define DMA_CITER_ELINKYES_ELINK_SHIFT           (15U)
#define DMA_CITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_ELINK_SHIFT)) & DMA_CITER_ELINKYES_ELINK_MASK)

/* The count of DMA_CITER_ELINKYES */
#define DMA_CITER_ELINKYES_COUNT                 (16U)

/*! @name DLAST_SGA - TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_DLAST_SGA_DLASTSGA_MASK              (0xFFFFFFFFU)
#define DMA_DLAST_SGA_DLASTSGA_SHIFT             (0U)
#define DMA_DLAST_SGA_DLASTSGA(x)                (((uint32_t)(((uint32_t)(x)) << DMA_DLAST_SGA_DLASTSGA_SHIFT)) & DMA_DLAST_SGA_DLASTSGA_MASK)

/* The count of DMA_DLAST_SGA */
#define DMA_DLAST_SGA_COUNT                      (16U)

/*! @name CSR - TCD Control and Status */
#define DMA_CSR_START_MASK                       (0x1U)
#define DMA_CSR_START_SHIFT                      (0U)
#define DMA_CSR_START(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_CSR_START_SHIFT)) & DMA_CSR_START_MASK)
#define DMA_CSR_INTMAJOR_MASK                    (0x2U)
#define DMA_CSR_INTMAJOR_SHIFT                   (1U)
#define DMA_CSR_INTMAJOR(x)                      (((uint16_t)(((uint16_t)(x)) << DMA_CSR_INTMAJOR_SHIFT)) & DMA_CSR_INTMAJOR_MASK)
#define DMA_CSR_INTHALF_MASK                     (0x4U)
#define DMA_CSR_INTHALF_SHIFT                    (2U)
#define DMA_CSR_INTHALF(x)                       (((uint16_t)(((uint16_t)(x)) << DMA_CSR_INTHALF_SHIFT)) & DMA_CSR_INTHALF_MASK)
#define DMA_CSR_DREQ_MASK                        (0x8U)
#define DMA_CSR_DREQ_SHIFT                       (3U)
#define DMA_CSR_DREQ(x)                          (((uint16_t)(((uint16_t)(x)) << DMA_CSR_DREQ_SHIFT)) & DMA_CSR_DREQ_MASK)
#define DMA_CSR_ESG_MASK                         (0x10U)
#define DMA_CSR_ESG_SHIFT                        (4U)
#define DMA_CSR_ESG(x)                           (((uint16_t)(((uint16_t)(x)) << DMA_CSR_ESG_SHIFT)) & DMA_CSR_ESG_MASK)
#define DMA_CSR_MAJORELINK_MASK                  (0x20U)
#define DMA_CSR_MAJORELINK_SHIFT                 (5U)
#define DMA_CSR_MAJORELINK(x)                    (((uint16_t)(((uint16_t)(x)) << DMA_CSR_MAJORELINK_SHIFT)) & DMA_CSR_MAJORELINK_MASK)
#define DMA_CSR_ACTIVE_MASK                      (0x40U)
#define DMA_CSR_ACTIVE_SHIFT                     (6U)
#define DMA_CSR_ACTIVE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_CSR_ACTIVE_SHIFT)) & DMA_CSR_ACTIVE_MASK)
#define DMA_CSR_DONE_MASK                        (0x80U)
#define DMA_CSR_DONE_SHIFT                       (7U)
#define DMA_CSR_DONE(x)                          (((uint16_t)(((uint16_t)(x)) << DMA_CSR_DONE_SHIFT)) & DMA_CSR_DONE_MASK)
#define DMA_CSR_MAJORLINKCH_MASK                 (0xF00U)
#define DMA_CSR_MAJORLINKCH_SHIFT                (8U)
#define DMA_CSR_MAJORLINKCH(x)                   (((uint16_t)(((uint16_t)(x)) << DMA_CSR_MAJORLINKCH_SHIFT)) & DMA_CSR_MAJORLINKCH_MASK)
#define DMA_CSR_BWC_MASK                         (0xC000U)
#define DMA_CSR_BWC_SHIFT                        (14U)
#define DMA_CSR_BWC(x)                           (((uint16_t)(((uint16_t)(x)) << DMA_CSR_BWC_SHIFT)) & DMA_CSR_BWC_MASK)

/* The count of DMA_CSR */
#define DMA_CSR_COUNT                            (16U)

/*! @name BITER_ELINKNO - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_BITER_ELINKNO_BITER_MASK             (0x7FFFU)
#define DMA_BITER_ELINKNO_BITER_SHIFT            (0U)
#define DMA_BITER_ELINKNO_BITER(x)               (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKNO_BITER_SHIFT)) & DMA_BITER_ELINKNO_BITER_MASK)
#define DMA_BITER_ELINKNO_ELINK_MASK             (0x8000U)
#define DMA_BITER_ELINKNO_ELINK_SHIFT            (15U)
#define DMA_BITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKNO_ELINK_SHIFT)) & DMA_BITER_ELINKNO_ELINK_MASK)

/* The count of DMA_BITER_ELINKNO */
#define DMA_BITER_ELINKNO_COUNT                  (16U)

/*! @name BITER_ELINKYES - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_BITER_ELINKYES_BITER_MASK            (0x1FFU)
#define DMA_BITER_ELINKYES_BITER_SHIFT           (0U)
#define DMA_BITER_ELINKYES_BITER(x)              (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_BITER_SHIFT)) & DMA_BITER_ELINKYES_BITER_MASK)
#define DMA_BITER_ELINKYES_LINKCH_MASK           (0x1E00U)
#define DMA_BITER_ELINKYES_LINKCH_SHIFT          (9U)
#define DMA_BITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_LINKCH_SHIFT)) & DMA_BITER_ELINKYES_LINKCH_MASK)
#define DMA_BITER_ELINKYES_ELINK_MASK            (0x8000U)
#define DMA_BITER_ELINKYES_ELINK_SHIFT           (15U)
#define DMA_BITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_ELINK_SHIFT)) & DMA_BITER_ELINKYES_ELINK_MASK)

/* The count of DMA_BITER_ELINKYES */
#define DMA_BITER_ELINKYES_COUNT                 (16U)


/*!
 * @}
 */ /* end of group DMA_Register_Masks */


/* DMA - Peripheral instance base addresses */
/** Peripheral DMA0 base address */
#define DMA0_BASE                                (0x40008000u)
/** Peripheral DMA0 base pointer */
#define DMA0                                     ((DMA_Type *)DMA0_BASE)
/** Array initializer of DMA peripheral base addresses */
#define DMA_BASE_ADDRS                           { DMA0_BASE }
/** Array initializer of DMA peripheral base pointers */
#define DMA_BASE_PTRS                            { DMA0 }
/** Interrupt vectors for the DMA peripheral type */
#define DMA_CHN_IRQS                             { { DMA0_IRQn, DMA1_IRQn, DMA2_IRQn, DMA3_IRQn, DMA4_IRQn, DMA5_IRQn, DMA6_IRQn, DMA7_IRQn, DMA8_IRQn, DMA9_IRQn, DMA10_IRQn, DMA11_IRQn, DMA12_IRQn, DMA13_IRQn, DMA14_IRQn, DMA15_IRQn } }
#define DMA_ERROR_IRQS                           { DMA0_Error_IRQn }

/*!
 * @}
 */ /* end of group DMA_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- DMAMUX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMAMUX_Peripheral_Access_Layer DMAMUX Peripheral Access Layer
 * @{
 */

/** DMAMUX - Register Layout Typedef */
typedef struct {
  __IO uint32_t CHCFG[16];                         /**< Channel 0 Configuration Register..Channel 15 Configuration Register, array offset: 0x0, array step: 0x4 */
} DMAMUX_Type;

/* ----------------------------------------------------------------------------
   -- DMAMUX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMAMUX_Register_Masks DMAMUX Register Masks
 * @{
 */

/*! @name CHCFG - Channel 0 Configuration Register..Channel 15 Configuration Register */
#define DMAMUX_CHCFG_SOURCE_MASK                 (0x3FU)
#define DMAMUX_CHCFG_SOURCE_SHIFT                (0U)
#define DMAMUX_CHCFG_SOURCE(x)                   (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_SOURCE_SHIFT)) & DMAMUX_CHCFG_SOURCE_MASK)
#define DMAMUX_CHCFG_A_ON_MASK                   (0x20000000U)
#define DMAMUX_CHCFG_A_ON_SHIFT                  (29U)
#define DMAMUX_CHCFG_A_ON(x)                     (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_A_ON_SHIFT)) & DMAMUX_CHCFG_A_ON_MASK)
#define DMAMUX_CHCFG_TRIG_MASK                   (0x40000000U)
#define DMAMUX_CHCFG_TRIG_SHIFT                  (30U)
#define DMAMUX_CHCFG_TRIG(x)                     (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_TRIG_SHIFT)) & DMAMUX_CHCFG_TRIG_MASK)
#define DMAMUX_CHCFG_ENBL_MASK                   (0x80000000U)
#define DMAMUX_CHCFG_ENBL_SHIFT                  (31U)
#define DMAMUX_CHCFG_ENBL(x)                     (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_ENBL_SHIFT)) & DMAMUX_CHCFG_ENBL_MASK)

/* The count of DMAMUX_CHCFG */
#define DMAMUX_CHCFG_COUNT                       (16U)


/*!
 * @}
 */ /* end of group DMAMUX_Register_Masks */


/* DMAMUX - Peripheral instance base addresses */
/** Peripheral DMAMUX0 base address */
#define DMAMUX0_BASE                             (0x40021000u)
/** Peripheral DMAMUX0 base pointer */
#define DMAMUX0                                  ((DMAMUX_Type *)DMAMUX0_BASE)
/** Array initializer of DMAMUX peripheral base addresses */
#define DMAMUX_BASE_ADDRS                        { DMAMUX0_BASE }
/** Array initializer of DMAMUX peripheral base pointers */
#define DMAMUX_BASE_PTRS                         { DMAMUX0 }

/*!
 * @}
 */ /* end of group DMAMUX_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- EMVSIM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EMVSIM_Peripheral_Access_Layer EMVSIM Peripheral Access Layer
 * @{
 */

/** EMVSIM - Register Layout Typedef */
typedef struct {
  __I  uint32_t VER_ID;                            /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t CLKCFG;                            /**< Clock Configuration Register, offset: 0x8 */
  __IO uint32_t DIVISOR;                           /**< Baud Rate Divisor Register, offset: 0xC */
  __IO uint32_t CTRL;                              /**< Control Register, offset: 0x10 */
  __IO uint32_t INT_MASK;                          /**< Interrupt Mask Register, offset: 0x14 */
  __IO uint32_t RX_THD;                            /**< Receiver Threshold Register, offset: 0x18 */
  __IO uint32_t TX_THD;                            /**< Transmitter Threshold Register, offset: 0x1C */
  __IO uint32_t RX_STATUS;                         /**< Receive Status Register, offset: 0x20 */
  __IO uint32_t TX_STATUS;                         /**< Transmitter Status Register, offset: 0x24 */
  __IO uint32_t PCSR;                              /**< Port Control and Status Register, offset: 0x28 */
  __I  uint32_t RX_BUF;                            /**< Receive Data Read Buffer, offset: 0x2C */
  __O  uint32_t TX_BUF;                            /**< Transmit Data Buffer, offset: 0x30 */
  __IO uint32_t TX_GETU;                           /**< Transmitter Guard ETU Value Register, offset: 0x34 */
  __IO uint32_t CWT_VAL;                           /**< Character Wait Time Value Register, offset: 0x38 */
  __IO uint32_t BWT_VAL;                           /**< Block Wait Time Value Register, offset: 0x3C */
  __IO uint32_t BGT_VAL;                           /**< Block Guard Time Value Register, offset: 0x40 */
  __IO uint32_t GPCNT0_VAL;                        /**< General Purpose Counter 0 Timeout Value Register, offset: 0x44 */
  __IO uint32_t GPCNT1_VAL;                        /**< General Purpose Counter 1 Timeout Value, offset: 0x48 */
} EMVSIM_Type;

/* ----------------------------------------------------------------------------
   -- EMVSIM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EMVSIM_Register_Masks EMVSIM Register Masks
 * @{
 */

/*! @name VER_ID - Version ID Register */
#define EMVSIM_VER_ID_VER_MASK                   (0xFFFFFFFFU)
#define EMVSIM_VER_ID_VER_SHIFT                  (0U)
#define EMVSIM_VER_ID_VER(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_VER_ID_VER_SHIFT)) & EMVSIM_VER_ID_VER_MASK)

/*! @name PARAM - Parameter Register */
#define EMVSIM_PARAM_RX_FIFO_DEPTH_MASK          (0xFFU)
#define EMVSIM_PARAM_RX_FIFO_DEPTH_SHIFT         (0U)
#define EMVSIM_PARAM_RX_FIFO_DEPTH(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_PARAM_RX_FIFO_DEPTH_SHIFT)) & EMVSIM_PARAM_RX_FIFO_DEPTH_MASK)
#define EMVSIM_PARAM_TX_FIFO_DEPTH_MASK          (0xFF00U)
#define EMVSIM_PARAM_TX_FIFO_DEPTH_SHIFT         (8U)
#define EMVSIM_PARAM_TX_FIFO_DEPTH(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_PARAM_TX_FIFO_DEPTH_SHIFT)) & EMVSIM_PARAM_TX_FIFO_DEPTH_MASK)

/*! @name CLKCFG - Clock Configuration Register */
#define EMVSIM_CLKCFG_CLK_PRSC_MASK              (0xFFU)
#define EMVSIM_CLKCFG_CLK_PRSC_SHIFT             (0U)
#define EMVSIM_CLKCFG_CLK_PRSC(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_CLKCFG_CLK_PRSC_SHIFT)) & EMVSIM_CLKCFG_CLK_PRSC_MASK)
#define EMVSIM_CLKCFG_GPCNT1_CLK_SEL_MASK        (0x300U)
#define EMVSIM_CLKCFG_GPCNT1_CLK_SEL_SHIFT       (8U)
#define EMVSIM_CLKCFG_GPCNT1_CLK_SEL(x)          (((uint32_t)(((uint32_t)(x)) << EMVSIM_CLKCFG_GPCNT1_CLK_SEL_SHIFT)) & EMVSIM_CLKCFG_GPCNT1_CLK_SEL_MASK)
#define EMVSIM_CLKCFG_GPCNT0_CLK_SEL_MASK        (0xC00U)
#define EMVSIM_CLKCFG_GPCNT0_CLK_SEL_SHIFT       (10U)
#define EMVSIM_CLKCFG_GPCNT0_CLK_SEL(x)          (((uint32_t)(((uint32_t)(x)) << EMVSIM_CLKCFG_GPCNT0_CLK_SEL_SHIFT)) & EMVSIM_CLKCFG_GPCNT0_CLK_SEL_MASK)

/*! @name DIVISOR - Baud Rate Divisor Register */
#define EMVSIM_DIVISOR_DIVISOR_VALUE_MASK        (0x1FFU)
#define EMVSIM_DIVISOR_DIVISOR_VALUE_SHIFT       (0U)
#define EMVSIM_DIVISOR_DIVISOR_VALUE(x)          (((uint32_t)(((uint32_t)(x)) << EMVSIM_DIVISOR_DIVISOR_VALUE_SHIFT)) & EMVSIM_DIVISOR_DIVISOR_VALUE_MASK)

/*! @name CTRL - Control Register */
#define EMVSIM_CTRL_IC_MASK                      (0x1U)
#define EMVSIM_CTRL_IC_SHIFT                     (0U)
#define EMVSIM_CTRL_IC(x)                        (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_IC_SHIFT)) & EMVSIM_CTRL_IC_MASK)
#define EMVSIM_CTRL_ICM_MASK                     (0x2U)
#define EMVSIM_CTRL_ICM_SHIFT                    (1U)
#define EMVSIM_CTRL_ICM(x)                       (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_ICM_SHIFT)) & EMVSIM_CTRL_ICM_MASK)
#define EMVSIM_CTRL_ANACK_MASK                   (0x4U)
#define EMVSIM_CTRL_ANACK_SHIFT                  (2U)
#define EMVSIM_CTRL_ANACK(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_ANACK_SHIFT)) & EMVSIM_CTRL_ANACK_MASK)
#define EMVSIM_CTRL_ONACK_MASK                   (0x8U)
#define EMVSIM_CTRL_ONACK_SHIFT                  (3U)
#define EMVSIM_CTRL_ONACK(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_ONACK_SHIFT)) & EMVSIM_CTRL_ONACK_MASK)
#define EMVSIM_CTRL_FLSH_RX_MASK                 (0x100U)
#define EMVSIM_CTRL_FLSH_RX_SHIFT                (8U)
#define EMVSIM_CTRL_FLSH_RX(x)                   (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_FLSH_RX_SHIFT)) & EMVSIM_CTRL_FLSH_RX_MASK)
#define EMVSIM_CTRL_FLSH_TX_MASK                 (0x200U)
#define EMVSIM_CTRL_FLSH_TX_SHIFT                (9U)
#define EMVSIM_CTRL_FLSH_TX(x)                   (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_FLSH_TX_SHIFT)) & EMVSIM_CTRL_FLSH_TX_MASK)
#define EMVSIM_CTRL_SW_RST_MASK                  (0x400U)
#define EMVSIM_CTRL_SW_RST_SHIFT                 (10U)
#define EMVSIM_CTRL_SW_RST(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_SW_RST_SHIFT)) & EMVSIM_CTRL_SW_RST_MASK)
#define EMVSIM_CTRL_KILL_CLOCKS_MASK             (0x800U)
#define EMVSIM_CTRL_KILL_CLOCKS_SHIFT            (11U)
#define EMVSIM_CTRL_KILL_CLOCKS(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_KILL_CLOCKS_SHIFT)) & EMVSIM_CTRL_KILL_CLOCKS_MASK)
#define EMVSIM_CTRL_DOZE_EN_MASK                 (0x1000U)
#define EMVSIM_CTRL_DOZE_EN_SHIFT                (12U)
#define EMVSIM_CTRL_DOZE_EN(x)                   (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_DOZE_EN_SHIFT)) & EMVSIM_CTRL_DOZE_EN_MASK)
#define EMVSIM_CTRL_STOP_EN_MASK                 (0x2000U)
#define EMVSIM_CTRL_STOP_EN_SHIFT                (13U)
#define EMVSIM_CTRL_STOP_EN(x)                   (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_STOP_EN_SHIFT)) & EMVSIM_CTRL_STOP_EN_MASK)
#define EMVSIM_CTRL_RCV_EN_MASK                  (0x10000U)
#define EMVSIM_CTRL_RCV_EN_SHIFT                 (16U)
#define EMVSIM_CTRL_RCV_EN(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_RCV_EN_SHIFT)) & EMVSIM_CTRL_RCV_EN_MASK)
#define EMVSIM_CTRL_XMT_EN_MASK                  (0x20000U)
#define EMVSIM_CTRL_XMT_EN_SHIFT                 (17U)
#define EMVSIM_CTRL_XMT_EN(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_XMT_EN_SHIFT)) & EMVSIM_CTRL_XMT_EN_MASK)
#define EMVSIM_CTRL_RCVR_11_MASK                 (0x40000U)
#define EMVSIM_CTRL_RCVR_11_SHIFT                (18U)
#define EMVSIM_CTRL_RCVR_11(x)                   (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_RCVR_11_SHIFT)) & EMVSIM_CTRL_RCVR_11_MASK)
#define EMVSIM_CTRL_RX_DMA_EN_MASK               (0x80000U)
#define EMVSIM_CTRL_RX_DMA_EN_SHIFT              (19U)
#define EMVSIM_CTRL_RX_DMA_EN(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_RX_DMA_EN_SHIFT)) & EMVSIM_CTRL_RX_DMA_EN_MASK)
#define EMVSIM_CTRL_TX_DMA_EN_MASK               (0x100000U)
#define EMVSIM_CTRL_TX_DMA_EN_SHIFT              (20U)
#define EMVSIM_CTRL_TX_DMA_EN(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_TX_DMA_EN_SHIFT)) & EMVSIM_CTRL_TX_DMA_EN_MASK)
#define EMVSIM_CTRL_INV_CRC_VAL_MASK             (0x1000000U)
#define EMVSIM_CTRL_INV_CRC_VAL_SHIFT            (24U)
#define EMVSIM_CTRL_INV_CRC_VAL(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_INV_CRC_VAL_SHIFT)) & EMVSIM_CTRL_INV_CRC_VAL_MASK)
#define EMVSIM_CTRL_CRC_OUT_FLIP_MASK            (0x2000000U)
#define EMVSIM_CTRL_CRC_OUT_FLIP_SHIFT           (25U)
#define EMVSIM_CTRL_CRC_OUT_FLIP(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_CRC_OUT_FLIP_SHIFT)) & EMVSIM_CTRL_CRC_OUT_FLIP_MASK)
#define EMVSIM_CTRL_CRC_IN_FLIP_MASK             (0x4000000U)
#define EMVSIM_CTRL_CRC_IN_FLIP_SHIFT            (26U)
#define EMVSIM_CTRL_CRC_IN_FLIP(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_CRC_IN_FLIP_SHIFT)) & EMVSIM_CTRL_CRC_IN_FLIP_MASK)
#define EMVSIM_CTRL_CWT_EN_MASK                  (0x8000000U)
#define EMVSIM_CTRL_CWT_EN_SHIFT                 (27U)
#define EMVSIM_CTRL_CWT_EN(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_CWT_EN_SHIFT)) & EMVSIM_CTRL_CWT_EN_MASK)
#define EMVSIM_CTRL_LRC_EN_MASK                  (0x10000000U)
#define EMVSIM_CTRL_LRC_EN_SHIFT                 (28U)
#define EMVSIM_CTRL_LRC_EN(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_LRC_EN_SHIFT)) & EMVSIM_CTRL_LRC_EN_MASK)
#define EMVSIM_CTRL_CRC_EN_MASK                  (0x20000000U)
#define EMVSIM_CTRL_CRC_EN_SHIFT                 (29U)
#define EMVSIM_CTRL_CRC_EN(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_CRC_EN_SHIFT)) & EMVSIM_CTRL_CRC_EN_MASK)
#define EMVSIM_CTRL_XMT_CRC_LRC_MASK             (0x40000000U)
#define EMVSIM_CTRL_XMT_CRC_LRC_SHIFT            (30U)
#define EMVSIM_CTRL_XMT_CRC_LRC(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_XMT_CRC_LRC_SHIFT)) & EMVSIM_CTRL_XMT_CRC_LRC_MASK)
#define EMVSIM_CTRL_BWT_EN_MASK                  (0x80000000U)
#define EMVSIM_CTRL_BWT_EN_SHIFT                 (31U)
#define EMVSIM_CTRL_BWT_EN(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CTRL_BWT_EN_SHIFT)) & EMVSIM_CTRL_BWT_EN_MASK)

/*! @name INT_MASK - Interrupt Mask Register */
#define EMVSIM_INT_MASK_RDT_IM_MASK              (0x1U)
#define EMVSIM_INT_MASK_RDT_IM_SHIFT             (0U)
#define EMVSIM_INT_MASK_RDT_IM(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_RDT_IM_SHIFT)) & EMVSIM_INT_MASK_RDT_IM_MASK)
#define EMVSIM_INT_MASK_TC_IM_MASK               (0x2U)
#define EMVSIM_INT_MASK_TC_IM_SHIFT              (1U)
#define EMVSIM_INT_MASK_TC_IM(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_TC_IM_SHIFT)) & EMVSIM_INT_MASK_TC_IM_MASK)
#define EMVSIM_INT_MASK_RFO_IM_MASK              (0x4U)
#define EMVSIM_INT_MASK_RFO_IM_SHIFT             (2U)
#define EMVSIM_INT_MASK_RFO_IM(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_RFO_IM_SHIFT)) & EMVSIM_INT_MASK_RFO_IM_MASK)
#define EMVSIM_INT_MASK_ETC_IM_MASK              (0x8U)
#define EMVSIM_INT_MASK_ETC_IM_SHIFT             (3U)
#define EMVSIM_INT_MASK_ETC_IM(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_ETC_IM_SHIFT)) & EMVSIM_INT_MASK_ETC_IM_MASK)
#define EMVSIM_INT_MASK_TFE_IM_MASK              (0x10U)
#define EMVSIM_INT_MASK_TFE_IM_SHIFT             (4U)
#define EMVSIM_INT_MASK_TFE_IM(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_TFE_IM_SHIFT)) & EMVSIM_INT_MASK_TFE_IM_MASK)
#define EMVSIM_INT_MASK_TNACK_IM_MASK            (0x20U)
#define EMVSIM_INT_MASK_TNACK_IM_SHIFT           (5U)
#define EMVSIM_INT_MASK_TNACK_IM(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_TNACK_IM_SHIFT)) & EMVSIM_INT_MASK_TNACK_IM_MASK)
#define EMVSIM_INT_MASK_TFF_IM_MASK              (0x40U)
#define EMVSIM_INT_MASK_TFF_IM_SHIFT             (6U)
#define EMVSIM_INT_MASK_TFF_IM(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_TFF_IM_SHIFT)) & EMVSIM_INT_MASK_TFF_IM_MASK)
#define EMVSIM_INT_MASK_TDT_IM_MASK              (0x80U)
#define EMVSIM_INT_MASK_TDT_IM_SHIFT             (7U)
#define EMVSIM_INT_MASK_TDT_IM(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_TDT_IM_SHIFT)) & EMVSIM_INT_MASK_TDT_IM_MASK)
#define EMVSIM_INT_MASK_GPCNT0_IM_MASK           (0x100U)
#define EMVSIM_INT_MASK_GPCNT0_IM_SHIFT          (8U)
#define EMVSIM_INT_MASK_GPCNT0_IM(x)             (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_GPCNT0_IM_SHIFT)) & EMVSIM_INT_MASK_GPCNT0_IM_MASK)
#define EMVSIM_INT_MASK_CWT_ERR_IM_MASK          (0x200U)
#define EMVSIM_INT_MASK_CWT_ERR_IM_SHIFT         (9U)
#define EMVSIM_INT_MASK_CWT_ERR_IM(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_CWT_ERR_IM_SHIFT)) & EMVSIM_INT_MASK_CWT_ERR_IM_MASK)
#define EMVSIM_INT_MASK_RNACK_IM_MASK            (0x400U)
#define EMVSIM_INT_MASK_RNACK_IM_SHIFT           (10U)
#define EMVSIM_INT_MASK_RNACK_IM(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_RNACK_IM_SHIFT)) & EMVSIM_INT_MASK_RNACK_IM_MASK)
#define EMVSIM_INT_MASK_BWT_ERR_IM_MASK          (0x800U)
#define EMVSIM_INT_MASK_BWT_ERR_IM_SHIFT         (11U)
#define EMVSIM_INT_MASK_BWT_ERR_IM(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_BWT_ERR_IM_SHIFT)) & EMVSIM_INT_MASK_BWT_ERR_IM_MASK)
#define EMVSIM_INT_MASK_BGT_ERR_IM_MASK          (0x1000U)
#define EMVSIM_INT_MASK_BGT_ERR_IM_SHIFT         (12U)
#define EMVSIM_INT_MASK_BGT_ERR_IM(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_BGT_ERR_IM_SHIFT)) & EMVSIM_INT_MASK_BGT_ERR_IM_MASK)
#define EMVSIM_INT_MASK_GPCNT1_IM_MASK           (0x2000U)
#define EMVSIM_INT_MASK_GPCNT1_IM_SHIFT          (13U)
#define EMVSIM_INT_MASK_GPCNT1_IM(x)             (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_GPCNT1_IM_SHIFT)) & EMVSIM_INT_MASK_GPCNT1_IM_MASK)
#define EMVSIM_INT_MASK_RX_DATA_IM_MASK          (0x4000U)
#define EMVSIM_INT_MASK_RX_DATA_IM_SHIFT         (14U)
#define EMVSIM_INT_MASK_RX_DATA_IM(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_RX_DATA_IM_SHIFT)) & EMVSIM_INT_MASK_RX_DATA_IM_MASK)
#define EMVSIM_INT_MASK_PEF_IM_MASK              (0x8000U)
#define EMVSIM_INT_MASK_PEF_IM_SHIFT             (15U)
#define EMVSIM_INT_MASK_PEF_IM(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_INT_MASK_PEF_IM_SHIFT)) & EMVSIM_INT_MASK_PEF_IM_MASK)

/*! @name RX_THD - Receiver Threshold Register */
#define EMVSIM_RX_THD_RDT_MASK                   (0xFU)
#define EMVSIM_RX_THD_RDT_SHIFT                  (0U)
#define EMVSIM_RX_THD_RDT(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_THD_RDT_SHIFT)) & EMVSIM_RX_THD_RDT_MASK)
#define EMVSIM_RX_THD_RNCK_THD_MASK              (0xF00U)
#define EMVSIM_RX_THD_RNCK_THD_SHIFT             (8U)
#define EMVSIM_RX_THD_RNCK_THD(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_THD_RNCK_THD_SHIFT)) & EMVSIM_RX_THD_RNCK_THD_MASK)

/*! @name TX_THD - Transmitter Threshold Register */
#define EMVSIM_TX_THD_TDT_MASK                   (0xFU)
#define EMVSIM_TX_THD_TDT_SHIFT                  (0U)
#define EMVSIM_TX_THD_TDT(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_THD_TDT_SHIFT)) & EMVSIM_TX_THD_TDT_MASK)
#define EMVSIM_TX_THD_TNCK_THD_MASK              (0xF00U)
#define EMVSIM_TX_THD_TNCK_THD_SHIFT             (8U)
#define EMVSIM_TX_THD_TNCK_THD(x)                (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_THD_TNCK_THD_SHIFT)) & EMVSIM_TX_THD_TNCK_THD_MASK)

/*! @name RX_STATUS - Receive Status Register */
#define EMVSIM_RX_STATUS_RFO_MASK                (0x1U)
#define EMVSIM_RX_STATUS_RFO_SHIFT               (0U)
#define EMVSIM_RX_STATUS_RFO(x)                  (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_RFO_SHIFT)) & EMVSIM_RX_STATUS_RFO_MASK)
#define EMVSIM_RX_STATUS_RX_DATA_MASK            (0x10U)
#define EMVSIM_RX_STATUS_RX_DATA_SHIFT           (4U)
#define EMVSIM_RX_STATUS_RX_DATA(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_RX_DATA_SHIFT)) & EMVSIM_RX_STATUS_RX_DATA_MASK)
#define EMVSIM_RX_STATUS_RDTF_MASK               (0x20U)
#define EMVSIM_RX_STATUS_RDTF_SHIFT              (5U)
#define EMVSIM_RX_STATUS_RDTF(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_RDTF_SHIFT)) & EMVSIM_RX_STATUS_RDTF_MASK)
#define EMVSIM_RX_STATUS_LRC_OK_MASK             (0x40U)
#define EMVSIM_RX_STATUS_LRC_OK_SHIFT            (6U)
#define EMVSIM_RX_STATUS_LRC_OK(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_LRC_OK_SHIFT)) & EMVSIM_RX_STATUS_LRC_OK_MASK)
#define EMVSIM_RX_STATUS_CRC_OK_MASK             (0x80U)
#define EMVSIM_RX_STATUS_CRC_OK_SHIFT            (7U)
#define EMVSIM_RX_STATUS_CRC_OK(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_CRC_OK_SHIFT)) & EMVSIM_RX_STATUS_CRC_OK_MASK)
#define EMVSIM_RX_STATUS_CWT_ERR_MASK            (0x100U)
#define EMVSIM_RX_STATUS_CWT_ERR_SHIFT           (8U)
#define EMVSIM_RX_STATUS_CWT_ERR(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_CWT_ERR_SHIFT)) & EMVSIM_RX_STATUS_CWT_ERR_MASK)
#define EMVSIM_RX_STATUS_RTE_MASK                (0x200U)
#define EMVSIM_RX_STATUS_RTE_SHIFT               (9U)
#define EMVSIM_RX_STATUS_RTE(x)                  (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_RTE_SHIFT)) & EMVSIM_RX_STATUS_RTE_MASK)
#define EMVSIM_RX_STATUS_BWT_ERR_MASK            (0x400U)
#define EMVSIM_RX_STATUS_BWT_ERR_SHIFT           (10U)
#define EMVSIM_RX_STATUS_BWT_ERR(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_BWT_ERR_SHIFT)) & EMVSIM_RX_STATUS_BWT_ERR_MASK)
#define EMVSIM_RX_STATUS_BGT_ERR_MASK            (0x800U)
#define EMVSIM_RX_STATUS_BGT_ERR_SHIFT           (11U)
#define EMVSIM_RX_STATUS_BGT_ERR(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_BGT_ERR_SHIFT)) & EMVSIM_RX_STATUS_BGT_ERR_MASK)
#define EMVSIM_RX_STATUS_PEF_MASK                (0x1000U)
#define EMVSIM_RX_STATUS_PEF_SHIFT               (12U)
#define EMVSIM_RX_STATUS_PEF(x)                  (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_PEF_SHIFT)) & EMVSIM_RX_STATUS_PEF_MASK)
#define EMVSIM_RX_STATUS_FEF_MASK                (0x2000U)
#define EMVSIM_RX_STATUS_FEF_SHIFT               (13U)
#define EMVSIM_RX_STATUS_FEF(x)                  (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_FEF_SHIFT)) & EMVSIM_RX_STATUS_FEF_MASK)
#define EMVSIM_RX_STATUS_RX_WPTR_MASK            (0xF0000U)
#define EMVSIM_RX_STATUS_RX_WPTR_SHIFT           (16U)
#define EMVSIM_RX_STATUS_RX_WPTR(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_RX_WPTR_SHIFT)) & EMVSIM_RX_STATUS_RX_WPTR_MASK)
#define EMVSIM_RX_STATUS_RX_CNT_MASK             (0xF000000U)
#define EMVSIM_RX_STATUS_RX_CNT_SHIFT            (24U)
#define EMVSIM_RX_STATUS_RX_CNT(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_STATUS_RX_CNT_SHIFT)) & EMVSIM_RX_STATUS_RX_CNT_MASK)

/*! @name TX_STATUS - Transmitter Status Register */
#define EMVSIM_TX_STATUS_TNTE_MASK               (0x1U)
#define EMVSIM_TX_STATUS_TNTE_SHIFT              (0U)
#define EMVSIM_TX_STATUS_TNTE(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_TNTE_SHIFT)) & EMVSIM_TX_STATUS_TNTE_MASK)
#define EMVSIM_TX_STATUS_TFE_MASK                (0x8U)
#define EMVSIM_TX_STATUS_TFE_SHIFT               (3U)
#define EMVSIM_TX_STATUS_TFE(x)                  (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_TFE_SHIFT)) & EMVSIM_TX_STATUS_TFE_MASK)
#define EMVSIM_TX_STATUS_ETCF_MASK               (0x10U)
#define EMVSIM_TX_STATUS_ETCF_SHIFT              (4U)
#define EMVSIM_TX_STATUS_ETCF(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_ETCF_SHIFT)) & EMVSIM_TX_STATUS_ETCF_MASK)
#define EMVSIM_TX_STATUS_TCF_MASK                (0x20U)
#define EMVSIM_TX_STATUS_TCF_SHIFT               (5U)
#define EMVSIM_TX_STATUS_TCF(x)                  (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_TCF_SHIFT)) & EMVSIM_TX_STATUS_TCF_MASK)
#define EMVSIM_TX_STATUS_TFF_MASK                (0x40U)
#define EMVSIM_TX_STATUS_TFF_SHIFT               (6U)
#define EMVSIM_TX_STATUS_TFF(x)                  (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_TFF_SHIFT)) & EMVSIM_TX_STATUS_TFF_MASK)
#define EMVSIM_TX_STATUS_TDTF_MASK               (0x80U)
#define EMVSIM_TX_STATUS_TDTF_SHIFT              (7U)
#define EMVSIM_TX_STATUS_TDTF(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_TDTF_SHIFT)) & EMVSIM_TX_STATUS_TDTF_MASK)
#define EMVSIM_TX_STATUS_GPCNT0_TO_MASK          (0x100U)
#define EMVSIM_TX_STATUS_GPCNT0_TO_SHIFT         (8U)
#define EMVSIM_TX_STATUS_GPCNT0_TO(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_GPCNT0_TO_SHIFT)) & EMVSIM_TX_STATUS_GPCNT0_TO_MASK)
#define EMVSIM_TX_STATUS_GPCNT1_TO_MASK          (0x200U)
#define EMVSIM_TX_STATUS_GPCNT1_TO_SHIFT         (9U)
#define EMVSIM_TX_STATUS_GPCNT1_TO(x)            (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_GPCNT1_TO_SHIFT)) & EMVSIM_TX_STATUS_GPCNT1_TO_MASK)
#define EMVSIM_TX_STATUS_TX_RPTR_MASK            (0xF0000U)
#define EMVSIM_TX_STATUS_TX_RPTR_SHIFT           (16U)
#define EMVSIM_TX_STATUS_TX_RPTR(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_TX_RPTR_SHIFT)) & EMVSIM_TX_STATUS_TX_RPTR_MASK)
#define EMVSIM_TX_STATUS_TX_CNT_MASK             (0xF000000U)
#define EMVSIM_TX_STATUS_TX_CNT_SHIFT            (24U)
#define EMVSIM_TX_STATUS_TX_CNT(x)               (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_STATUS_TX_CNT_SHIFT)) & EMVSIM_TX_STATUS_TX_CNT_MASK)

/*! @name PCSR - Port Control and Status Register */
#define EMVSIM_PCSR_SAPD_MASK                    (0x1U)
#define EMVSIM_PCSR_SAPD_SHIFT                   (0U)
#define EMVSIM_PCSR_SAPD(x)                      (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SAPD_SHIFT)) & EMVSIM_PCSR_SAPD_MASK)
#define EMVSIM_PCSR_SVCC_EN_MASK                 (0x2U)
#define EMVSIM_PCSR_SVCC_EN_SHIFT                (1U)
#define EMVSIM_PCSR_SVCC_EN(x)                   (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SVCC_EN_SHIFT)) & EMVSIM_PCSR_SVCC_EN_MASK)
#define EMVSIM_PCSR_VCCENP_MASK                  (0x4U)
#define EMVSIM_PCSR_VCCENP_SHIFT                 (2U)
#define EMVSIM_PCSR_VCCENP(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_VCCENP_SHIFT)) & EMVSIM_PCSR_VCCENP_MASK)
#define EMVSIM_PCSR_SRST_MASK                    (0x8U)
#define EMVSIM_PCSR_SRST_SHIFT                   (3U)
#define EMVSIM_PCSR_SRST(x)                      (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SRST_SHIFT)) & EMVSIM_PCSR_SRST_MASK)
#define EMVSIM_PCSR_SCEN_MASK                    (0x10U)
#define EMVSIM_PCSR_SCEN_SHIFT                   (4U)
#define EMVSIM_PCSR_SCEN(x)                      (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SCEN_SHIFT)) & EMVSIM_PCSR_SCEN_MASK)
#define EMVSIM_PCSR_SCSP_MASK                    (0x20U)
#define EMVSIM_PCSR_SCSP_SHIFT                   (5U)
#define EMVSIM_PCSR_SCSP(x)                      (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SCSP_SHIFT)) & EMVSIM_PCSR_SCSP_MASK)
#define EMVSIM_PCSR_SPD_MASK                     (0x80U)
#define EMVSIM_PCSR_SPD_SHIFT                    (7U)
#define EMVSIM_PCSR_SPD(x)                       (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SPD_SHIFT)) & EMVSIM_PCSR_SPD_MASK)
#define EMVSIM_PCSR_SPDIM_MASK                   (0x1000000U)
#define EMVSIM_PCSR_SPDIM_SHIFT                  (24U)
#define EMVSIM_PCSR_SPDIM(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SPDIM_SHIFT)) & EMVSIM_PCSR_SPDIM_MASK)
#define EMVSIM_PCSR_SPDIF_MASK                   (0x2000000U)
#define EMVSIM_PCSR_SPDIF_SHIFT                  (25U)
#define EMVSIM_PCSR_SPDIF(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SPDIF_SHIFT)) & EMVSIM_PCSR_SPDIF_MASK)
#define EMVSIM_PCSR_SPDP_MASK                    (0x4000000U)
#define EMVSIM_PCSR_SPDP_SHIFT                   (26U)
#define EMVSIM_PCSR_SPDP(x)                      (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SPDP_SHIFT)) & EMVSIM_PCSR_SPDP_MASK)
#define EMVSIM_PCSR_SPDES_MASK                   (0x8000000U)
#define EMVSIM_PCSR_SPDES_SHIFT                  (27U)
#define EMVSIM_PCSR_SPDES(x)                     (((uint32_t)(((uint32_t)(x)) << EMVSIM_PCSR_SPDES_SHIFT)) & EMVSIM_PCSR_SPDES_MASK)

/*! @name RX_BUF - Receive Data Read Buffer */
#define EMVSIM_RX_BUF_RX_BYTE_MASK               (0xFFU)
#define EMVSIM_RX_BUF_RX_BYTE_SHIFT              (0U)
#define EMVSIM_RX_BUF_RX_BYTE(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_RX_BUF_RX_BYTE_SHIFT)) & EMVSIM_RX_BUF_RX_BYTE_MASK)

/*! @name TX_BUF - Transmit Data Buffer */
#define EMVSIM_TX_BUF_TX_BYTE_MASK               (0xFFU)
#define EMVSIM_TX_BUF_TX_BYTE_SHIFT              (0U)
#define EMVSIM_TX_BUF_TX_BYTE(x)                 (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_BUF_TX_BYTE_SHIFT)) & EMVSIM_TX_BUF_TX_BYTE_MASK)

/*! @name TX_GETU - Transmitter Guard ETU Value Register */
#define EMVSIM_TX_GETU_GETU_MASK                 (0xFFU)
#define EMVSIM_TX_GETU_GETU_SHIFT                (0U)
#define EMVSIM_TX_GETU_GETU(x)                   (((uint32_t)(((uint32_t)(x)) << EMVSIM_TX_GETU_GETU_SHIFT)) & EMVSIM_TX_GETU_GETU_MASK)

/*! @name CWT_VAL - Character Wait Time Value Register */
#define EMVSIM_CWT_VAL_CWT_MASK                  (0xFFFFU)
#define EMVSIM_CWT_VAL_CWT_SHIFT                 (0U)
#define EMVSIM_CWT_VAL_CWT(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_CWT_VAL_CWT_SHIFT)) & EMVSIM_CWT_VAL_CWT_MASK)

/*! @name BWT_VAL - Block Wait Time Value Register */
#define EMVSIM_BWT_VAL_BWT_MASK                  (0xFFFFFFFFU)
#define EMVSIM_BWT_VAL_BWT_SHIFT                 (0U)
#define EMVSIM_BWT_VAL_BWT(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_BWT_VAL_BWT_SHIFT)) & EMVSIM_BWT_VAL_BWT_MASK)

/*! @name BGT_VAL - Block Guard Time Value Register */
#define EMVSIM_BGT_VAL_BGT_MASK                  (0xFFFFU)
#define EMVSIM_BGT_VAL_BGT_SHIFT                 (0U)
#define EMVSIM_BGT_VAL_BGT(x)                    (((uint32_t)(((uint32_t)(x)) << EMVSIM_BGT_VAL_BGT_SHIFT)) & EMVSIM_BGT_VAL_BGT_MASK)

/*! @name GPCNT0_VAL - General Purpose Counter 0 Timeout Value Register */
#define EMVSIM_GPCNT0_VAL_GPCNT0_MASK            (0xFFFFU)
#define EMVSIM_GPCNT0_VAL_GPCNT0_SHIFT           (0U)
#define EMVSIM_GPCNT0_VAL_GPCNT0(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_GPCNT0_VAL_GPCNT0_SHIFT)) & EMVSIM_GPCNT0_VAL_GPCNT0_MASK)

/*! @name GPCNT1_VAL - General Purpose Counter 1 Timeout Value */
#define EMVSIM_GPCNT1_VAL_GPCNT1_MASK            (0xFFFFU)
#define EMVSIM_GPCNT1_VAL_GPCNT1_SHIFT           (0U)
#define EMVSIM_GPCNT1_VAL_GPCNT1(x)              (((uint32_t)(((uint32_t)(x)) << EMVSIM_GPCNT1_VAL_GPCNT1_SHIFT)) & EMVSIM_GPCNT1_VAL_GPCNT1_MASK)


/*!
 * @}
 */ /* end of group EMVSIM_Register_Masks */


/* EMVSIM - Peripheral instance base addresses */
/** Peripheral EMVSIM0 base address */
#define EMVSIM0_BASE                             (0x40038000u)
/** Peripheral EMVSIM0 base pointer */
#define EMVSIM0                                  ((EMVSIM_Type *)EMVSIM0_BASE)
/** Array initializer of EMVSIM peripheral base addresses */
#define EMVSIM_BASE_ADDRS                        { EMVSIM0_BASE }
/** Array initializer of EMVSIM peripheral base pointers */
#define EMVSIM_BASE_PTRS                         { EMVSIM0 }
/** Interrupt vectors for the EMVSIM peripheral type */
#define EMVSIM_IRQS                              { EMVSIM0_IRQn }

/*!
 * @}
 */ /* end of group EMVSIM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- EWM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EWM_Peripheral_Access_Layer EWM Peripheral Access Layer
 * @{
 */

/** EWM - Register Layout Typedef */
typedef struct {
  __IO uint8_t CTRL;                               /**< Control Register, offset: 0x0 */
  __O  uint8_t SERV;                               /**< Service Register, offset: 0x1 */
  __IO uint8_t CMPL;                               /**< Compare Low Register, offset: 0x2 */
  __IO uint8_t CMPH;                               /**< Compare High Register, offset: 0x3 */
       uint8_t RESERVED_0[1];
  __IO uint8_t CLKPRESCALER;                       /**< Clock Prescaler Register, offset: 0x5 */
} EWM_Type;

/* ----------------------------------------------------------------------------
   -- EWM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EWM_Register_Masks EWM Register Masks
 * @{
 */

/*! @name CTRL - Control Register */
#define EWM_CTRL_EWMEN_MASK                      (0x1U)
#define EWM_CTRL_EWMEN_SHIFT                     (0U)
#define EWM_CTRL_EWMEN(x)                        (((uint8_t)(((uint8_t)(x)) << EWM_CTRL_EWMEN_SHIFT)) & EWM_CTRL_EWMEN_MASK)
#define EWM_CTRL_ASSIN_MASK                      (0x2U)
#define EWM_CTRL_ASSIN_SHIFT                     (1U)
#define EWM_CTRL_ASSIN(x)                        (((uint8_t)(((uint8_t)(x)) << EWM_CTRL_ASSIN_SHIFT)) & EWM_CTRL_ASSIN_MASK)
#define EWM_CTRL_INEN_MASK                       (0x4U)
#define EWM_CTRL_INEN_SHIFT                      (2U)
#define EWM_CTRL_INEN(x)                         (((uint8_t)(((uint8_t)(x)) << EWM_CTRL_INEN_SHIFT)) & EWM_CTRL_INEN_MASK)
#define EWM_CTRL_INTEN_MASK                      (0x8U)
#define EWM_CTRL_INTEN_SHIFT                     (3U)
#define EWM_CTRL_INTEN(x)                        (((uint8_t)(((uint8_t)(x)) << EWM_CTRL_INTEN_SHIFT)) & EWM_CTRL_INTEN_MASK)

/*! @name SERV - Service Register */
#define EWM_SERV_SERVICE_MASK                    (0xFFU)
#define EWM_SERV_SERVICE_SHIFT                   (0U)
#define EWM_SERV_SERVICE(x)                      (((uint8_t)(((uint8_t)(x)) << EWM_SERV_SERVICE_SHIFT)) & EWM_SERV_SERVICE_MASK)

/*! @name CMPL - Compare Low Register */
#define EWM_CMPL_COMPAREL_MASK                   (0xFFU)
#define EWM_CMPL_COMPAREL_SHIFT                  (0U)
#define EWM_CMPL_COMPAREL(x)                     (((uint8_t)(((uint8_t)(x)) << EWM_CMPL_COMPAREL_SHIFT)) & EWM_CMPL_COMPAREL_MASK)

/*! @name CMPH - Compare High Register */
#define EWM_CMPH_COMPAREH_MASK                   (0xFFU)
#define EWM_CMPH_COMPAREH_SHIFT                  (0U)
#define EWM_CMPH_COMPAREH(x)                     (((uint8_t)(((uint8_t)(x)) << EWM_CMPH_COMPAREH_SHIFT)) & EWM_CMPH_COMPAREH_MASK)

/*! @name CLKPRESCALER - Clock Prescaler Register */
#define EWM_CLKPRESCALER_CLK_DIV_MASK            (0xFFU)
#define EWM_CLKPRESCALER_CLK_DIV_SHIFT           (0U)
#define EWM_CLKPRESCALER_CLK_DIV(x)              (((uint8_t)(((uint8_t)(x)) << EWM_CLKPRESCALER_CLK_DIV_SHIFT)) & EWM_CLKPRESCALER_CLK_DIV_MASK)


/*!
 * @}
 */ /* end of group EWM_Register_Masks */


/* EWM - Peripheral instance base addresses */
/** Peripheral EWM base address */
#define EWM_BASE                                 (0x40022000u)
/** Peripheral EWM base pointer */
#define EWM                                      ((EWM_Type *)EWM_BASE)
/** Array initializer of EWM peripheral base addresses */
#define EWM_BASE_ADDRS                           { EWM_BASE }
/** Array initializer of EWM peripheral base pointers */
#define EWM_BASE_PTRS                            { EWM }
/** Interrupt vectors for the EWM peripheral type */
#define EWM_IRQS                                 { EWM_IRQn }

/*!
 * @}
 */ /* end of group EWM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- FB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FB_Peripheral_Access_Layer FB Peripheral Access Layer
 * @{
 */

/** FB - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0xC */
    __IO uint32_t CSAR;                              /**< Chip Select Address Register, array offset: 0x0, array step: 0xC */
    __IO uint32_t CSMR;                              /**< Chip Select Mask Register, array offset: 0x4, array step: 0xC */
    __IO uint32_t CSCR;                              /**< Chip Select Control Register, array offset: 0x8, array step: 0xC */
  } CS[6];
       uint8_t RESERVED_0[24];
  __IO uint32_t CSPMCR;                            /**< Chip Select Port Multiplexing Control Register, offset: 0x60 */
} FB_Type;

/* ----------------------------------------------------------------------------
   -- FB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FB_Register_Masks FB Register Masks
 * @{
 */

/*! @name CSAR - Chip Select Address Register */
#define FB_CSAR_BA_MASK                          (0xFFFF0000U)
#define FB_CSAR_BA_SHIFT                         (16U)
#define FB_CSAR_BA(x)                            (((uint32_t)(((uint32_t)(x)) << FB_CSAR_BA_SHIFT)) & FB_CSAR_BA_MASK)

/* The count of FB_CSAR */
#define FB_CSAR_COUNT                            (6U)

/*! @name CSMR - Chip Select Mask Register */
#define FB_CSMR_V_MASK                           (0x1U)
#define FB_CSMR_V_SHIFT                          (0U)
#define FB_CSMR_V(x)                             (((uint32_t)(((uint32_t)(x)) << FB_CSMR_V_SHIFT)) & FB_CSMR_V_MASK)
#define FB_CSMR_WP_MASK                          (0x100U)
#define FB_CSMR_WP_SHIFT                         (8U)
#define FB_CSMR_WP(x)                            (((uint32_t)(((uint32_t)(x)) << FB_CSMR_WP_SHIFT)) & FB_CSMR_WP_MASK)
#define FB_CSMR_BAM_MASK                         (0xFFFF0000U)
#define FB_CSMR_BAM_SHIFT                        (16U)
#define FB_CSMR_BAM(x)                           (((uint32_t)(((uint32_t)(x)) << FB_CSMR_BAM_SHIFT)) & FB_CSMR_BAM_MASK)

/* The count of FB_CSMR */
#define FB_CSMR_COUNT                            (6U)

/*! @name CSCR - Chip Select Control Register */
#define FB_CSCR_BSTW_MASK                        (0x8U)
#define FB_CSCR_BSTW_SHIFT                       (3U)
#define FB_CSCR_BSTW(x)                          (((uint32_t)(((uint32_t)(x)) << FB_CSCR_BSTW_SHIFT)) & FB_CSCR_BSTW_MASK)
#define FB_CSCR_BSTR_MASK                        (0x10U)
#define FB_CSCR_BSTR_SHIFT                       (4U)
#define FB_CSCR_BSTR(x)                          (((uint32_t)(((uint32_t)(x)) << FB_CSCR_BSTR_SHIFT)) & FB_CSCR_BSTR_MASK)
#define FB_CSCR_BEM_MASK                         (0x20U)
#define FB_CSCR_BEM_SHIFT                        (5U)
#define FB_CSCR_BEM(x)                           (((uint32_t)(((uint32_t)(x)) << FB_CSCR_BEM_SHIFT)) & FB_CSCR_BEM_MASK)
#define FB_CSCR_PS_MASK                          (0xC0U)
#define FB_CSCR_PS_SHIFT                         (6U)
#define FB_CSCR_PS(x)                            (((uint32_t)(((uint32_t)(x)) << FB_CSCR_PS_SHIFT)) & FB_CSCR_PS_MASK)
#define FB_CSCR_AA_MASK                          (0x100U)
#define FB_CSCR_AA_SHIFT                         (8U)
#define FB_CSCR_AA(x)                            (((uint32_t)(((uint32_t)(x)) << FB_CSCR_AA_SHIFT)) & FB_CSCR_AA_MASK)
#define FB_CSCR_BLS_MASK                         (0x200U)
#define FB_CSCR_BLS_SHIFT                        (9U)
#define FB_CSCR_BLS(x)                           (((uint32_t)(((uint32_t)(x)) << FB_CSCR_BLS_SHIFT)) & FB_CSCR_BLS_MASK)
#define FB_CSCR_WS_MASK                          (0xFC00U)
#define FB_CSCR_WS_SHIFT                         (10U)
#define FB_CSCR_WS(x)                            (((uint32_t)(((uint32_t)(x)) << FB_CSCR_WS_SHIFT)) & FB_CSCR_WS_MASK)
#define FB_CSCR_WRAH_MASK                        (0x30000U)
#define FB_CSCR_WRAH_SHIFT                       (16U)
#define FB_CSCR_WRAH(x)                          (((uint32_t)(((uint32_t)(x)) << FB_CSCR_WRAH_SHIFT)) & FB_CSCR_WRAH_MASK)
#define FB_CSCR_RDAH_MASK                        (0xC0000U)
#define FB_CSCR_RDAH_SHIFT                       (18U)
#define FB_CSCR_RDAH(x)                          (((uint32_t)(((uint32_t)(x)) << FB_CSCR_RDAH_SHIFT)) & FB_CSCR_RDAH_MASK)
#define FB_CSCR_ASET_MASK                        (0x300000U)
#define FB_CSCR_ASET_SHIFT                       (20U)
#define FB_CSCR_ASET(x)                          (((uint32_t)(((uint32_t)(x)) << FB_CSCR_ASET_SHIFT)) & FB_CSCR_ASET_MASK)
#define FB_CSCR_EXTS_MASK                        (0x400000U)
#define FB_CSCR_EXTS_SHIFT                       (22U)
#define FB_CSCR_EXTS(x)                          (((uint32_t)(((uint32_t)(x)) << FB_CSCR_EXTS_SHIFT)) & FB_CSCR_EXTS_MASK)
#define FB_CSCR_SWSEN_MASK                       (0x800000U)
#define FB_CSCR_SWSEN_SHIFT                      (23U)
#define FB_CSCR_SWSEN(x)                         (((uint32_t)(((uint32_t)(x)) << FB_CSCR_SWSEN_SHIFT)) & FB_CSCR_SWSEN_MASK)
#define FB_CSCR_SWS_MASK                         (0xFC000000U)
#define FB_CSCR_SWS_SHIFT                        (26U)
#define FB_CSCR_SWS(x)                           (((uint32_t)(((uint32_t)(x)) << FB_CSCR_SWS_SHIFT)) & FB_CSCR_SWS_MASK)

/* The count of FB_CSCR */
#define FB_CSCR_COUNT                            (6U)

/*! @name CSPMCR - Chip Select Port Multiplexing Control Register */
#define FB_CSPMCR_GROUP5_MASK                    (0xF000U)
#define FB_CSPMCR_GROUP5_SHIFT                   (12U)
#define FB_CSPMCR_GROUP5(x)                      (((uint32_t)(((uint32_t)(x)) << FB_CSPMCR_GROUP5_SHIFT)) & FB_CSPMCR_GROUP5_MASK)
#define FB_CSPMCR_GROUP4_MASK                    (0xF0000U)
#define FB_CSPMCR_GROUP4_SHIFT                   (16U)
#define FB_CSPMCR_GROUP4(x)                      (((uint32_t)(((uint32_t)(x)) << FB_CSPMCR_GROUP4_SHIFT)) & FB_CSPMCR_GROUP4_MASK)
#define FB_CSPMCR_GROUP3_MASK                    (0xF00000U)
#define FB_CSPMCR_GROUP3_SHIFT                   (20U)
#define FB_CSPMCR_GROUP3(x)                      (((uint32_t)(((uint32_t)(x)) << FB_CSPMCR_GROUP3_SHIFT)) & FB_CSPMCR_GROUP3_MASK)
#define FB_CSPMCR_GROUP2_MASK                    (0xF000000U)
#define FB_CSPMCR_GROUP2_SHIFT                   (24U)
#define FB_CSPMCR_GROUP2(x)                      (((uint32_t)(((uint32_t)(x)) << FB_CSPMCR_GROUP2_SHIFT)) & FB_CSPMCR_GROUP2_MASK)
#define FB_CSPMCR_GROUP1_MASK                    (0xF0000000U)
#define FB_CSPMCR_GROUP1_SHIFT                   (28U)
#define FB_CSPMCR_GROUP1(x)                      (((uint32_t)(((uint32_t)(x)) << FB_CSPMCR_GROUP1_SHIFT)) & FB_CSPMCR_GROUP1_MASK)


/*!
 * @}
 */ /* end of group FB_Register_Masks */


/* FB - Peripheral instance base addresses */
/** Peripheral FB base address */
#define FB_BASE                                  (0x4000C000u)
/** Peripheral FB base pointer */
#define FB                                       ((FB_Type *)FB_BASE)
/** Array initializer of FB peripheral base addresses */
#define FB_BASE_ADDRS                            { FB_BASE }
/** Array initializer of FB peripheral base pointers */
#define FB_BASE_PTRS                             { FB }

/*!
 * @}
 */ /* end of group FB_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- FLEXIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FLEXIO_Peripheral_Access_Layer FLEXIO Peripheral Access Layer
 * @{
 */

/** FLEXIO - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t CTRL;                              /**< FlexIO Control Register, offset: 0x8 */
  __I  uint32_t PIN;                               /**< Pin State Register, offset: 0xC */
  __IO uint32_t SHIFTSTAT;                         /**< Shifter Status Register, offset: 0x10 */
  __IO uint32_t SHIFTERR;                          /**< Shifter Error Register, offset: 0x14 */
  __IO uint32_t TIMSTAT;                           /**< Timer Status Register, offset: 0x18 */
       uint8_t RESERVED_0[4];
  __IO uint32_t SHIFTSIEN;                         /**< Shifter Status Interrupt Enable, offset: 0x20 */
  __IO uint32_t SHIFTEIEN;                         /**< Shifter Error Interrupt Enable, offset: 0x24 */
  __IO uint32_t TIMIEN;                            /**< Timer Interrupt Enable Register, offset: 0x28 */
       uint8_t RESERVED_1[4];
  __IO uint32_t SHIFTSDEN;                         /**< Shifter Status DMA Enable, offset: 0x30 */
       uint8_t RESERVED_2[12];
  __IO uint32_t SHIFTSTATE;                        /**< Shifter State Register, offset: 0x40 */
       uint8_t RESERVED_3[60];
  __IO uint32_t SHIFTCTL[8];                       /**< Shifter Control N Register, array offset: 0x80, array step: 0x4 */
       uint8_t RESERVED_4[96];
  __IO uint32_t SHIFTCFG[8];                       /**< Shifter Configuration N Register, array offset: 0x100, array step: 0x4 */
       uint8_t RESERVED_5[224];
  __IO uint32_t SHIFTBUF[8];                       /**< Shifter Buffer N Register, array offset: 0x200, array step: 0x4 */
       uint8_t RESERVED_6[96];
  __IO uint32_t SHIFTBUFBIS[8];                    /**< Shifter Buffer N Bit Swapped Register, array offset: 0x280, array step: 0x4 */
       uint8_t RESERVED_7[96];
  __IO uint32_t SHIFTBUFBYS[8];                    /**< Shifter Buffer N Byte Swapped Register, array offset: 0x300, array step: 0x4 */
       uint8_t RESERVED_8[96];
  __IO uint32_t SHIFTBUFBBS[8];                    /**< Shifter Buffer N Bit Byte Swapped Register, array offset: 0x380, array step: 0x4 */
       uint8_t RESERVED_9[96];
  __IO uint32_t TIMCTL[8];                         /**< Timer Control N Register, array offset: 0x400, array step: 0x4 */
       uint8_t RESERVED_10[96];
  __IO uint32_t TIMCFG[8];                         /**< Timer Configuration N Register, array offset: 0x480, array step: 0x4 */
       uint8_t RESERVED_11[96];
  __IO uint32_t TIMCMP[8];                         /**< Timer Compare N Register, array offset: 0x500, array step: 0x4 */
       uint8_t RESERVED_12[352];
  __IO uint32_t SHIFTBUFNBS[8];                    /**< Shifter Buffer N Nibble Byte Swapped Register, array offset: 0x680, array step: 0x4 */
       uint8_t RESERVED_13[96];
  __IO uint32_t SHIFTBUFHWS[8];                    /**< Shifter Buffer N Half Word Swapped Register, array offset: 0x700, array step: 0x4 */
       uint8_t RESERVED_14[96];
  __IO uint32_t SHIFTBUFNIS[8];                    /**< Shifter Buffer N Nibble Swapped Register, array offset: 0x780, array step: 0x4 */
} FLEXIO_Type;

/* ----------------------------------------------------------------------------
   -- FLEXIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FLEXIO_Register_Masks FLEXIO Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define FLEXIO_VERID_FEATURE_MASK                (0xFFFFU)
#define FLEXIO_VERID_FEATURE_SHIFT               (0U)
#define FLEXIO_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_VERID_FEATURE_SHIFT)) & FLEXIO_VERID_FEATURE_MASK)
#define FLEXIO_VERID_MINOR_MASK                  (0xFF0000U)
#define FLEXIO_VERID_MINOR_SHIFT                 (16U)
#define FLEXIO_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x)) << FLEXIO_VERID_MINOR_SHIFT)) & FLEXIO_VERID_MINOR_MASK)
#define FLEXIO_VERID_MAJOR_MASK                  (0xFF000000U)
#define FLEXIO_VERID_MAJOR_SHIFT                 (24U)
#define FLEXIO_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x)) << FLEXIO_VERID_MAJOR_SHIFT)) & FLEXIO_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define FLEXIO_PARAM_SHIFTER_MASK                (0xFFU)
#define FLEXIO_PARAM_SHIFTER_SHIFT               (0U)
#define FLEXIO_PARAM_SHIFTER(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_PARAM_SHIFTER_SHIFT)) & FLEXIO_PARAM_SHIFTER_MASK)
#define FLEXIO_PARAM_TIMER_MASK                  (0xFF00U)
#define FLEXIO_PARAM_TIMER_SHIFT                 (8U)
#define FLEXIO_PARAM_TIMER(x)                    (((uint32_t)(((uint32_t)(x)) << FLEXIO_PARAM_TIMER_SHIFT)) & FLEXIO_PARAM_TIMER_MASK)
#define FLEXIO_PARAM_PIN_MASK                    (0xFF0000U)
#define FLEXIO_PARAM_PIN_SHIFT                   (16U)
#define FLEXIO_PARAM_PIN(x)                      (((uint32_t)(((uint32_t)(x)) << FLEXIO_PARAM_PIN_SHIFT)) & FLEXIO_PARAM_PIN_MASK)
#define FLEXIO_PARAM_TRIGGER_MASK                (0xFF000000U)
#define FLEXIO_PARAM_TRIGGER_SHIFT               (24U)
#define FLEXIO_PARAM_TRIGGER(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_PARAM_TRIGGER_SHIFT)) & FLEXIO_PARAM_TRIGGER_MASK)

/*! @name CTRL - FlexIO Control Register */
#define FLEXIO_CTRL_FLEXEN_MASK                  (0x1U)
#define FLEXIO_CTRL_FLEXEN_SHIFT                 (0U)
#define FLEXIO_CTRL_FLEXEN(x)                    (((uint32_t)(((uint32_t)(x)) << FLEXIO_CTRL_FLEXEN_SHIFT)) & FLEXIO_CTRL_FLEXEN_MASK)
#define FLEXIO_CTRL_SWRST_MASK                   (0x2U)
#define FLEXIO_CTRL_SWRST_SHIFT                  (1U)
#define FLEXIO_CTRL_SWRST(x)                     (((uint32_t)(((uint32_t)(x)) << FLEXIO_CTRL_SWRST_SHIFT)) & FLEXIO_CTRL_SWRST_MASK)
#define FLEXIO_CTRL_FASTACC_MASK                 (0x4U)
#define FLEXIO_CTRL_FASTACC_SHIFT                (2U)
#define FLEXIO_CTRL_FASTACC(x)                   (((uint32_t)(((uint32_t)(x)) << FLEXIO_CTRL_FASTACC_SHIFT)) & FLEXIO_CTRL_FASTACC_MASK)
#define FLEXIO_CTRL_DBGE_MASK                    (0x40000000U)
#define FLEXIO_CTRL_DBGE_SHIFT                   (30U)
#define FLEXIO_CTRL_DBGE(x)                      (((uint32_t)(((uint32_t)(x)) << FLEXIO_CTRL_DBGE_SHIFT)) & FLEXIO_CTRL_DBGE_MASK)
#define FLEXIO_CTRL_DOZEN_MASK                   (0x80000000U)
#define FLEXIO_CTRL_DOZEN_SHIFT                  (31U)
#define FLEXIO_CTRL_DOZEN(x)                     (((uint32_t)(((uint32_t)(x)) << FLEXIO_CTRL_DOZEN_SHIFT)) & FLEXIO_CTRL_DOZEN_MASK)

/*! @name PIN - Pin State Register */
#define FLEXIO_PIN_PDI_MASK                      (0xFFFFFFFFU)
#define FLEXIO_PIN_PDI_SHIFT                     (0U)
#define FLEXIO_PIN_PDI(x)                        (((uint32_t)(((uint32_t)(x)) << FLEXIO_PIN_PDI_SHIFT)) & FLEXIO_PIN_PDI_MASK)

/*! @name SHIFTSTAT - Shifter Status Register */
#define FLEXIO_SHIFTSTAT_SSF_MASK                (0xFFU)
#define FLEXIO_SHIFTSTAT_SSF_SHIFT               (0U)
#define FLEXIO_SHIFTSTAT_SSF(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTSTAT_SSF_SHIFT)) & FLEXIO_SHIFTSTAT_SSF_MASK)

/*! @name SHIFTERR - Shifter Error Register */
#define FLEXIO_SHIFTERR_SEF_MASK                 (0xFFU)
#define FLEXIO_SHIFTERR_SEF_SHIFT                (0U)
#define FLEXIO_SHIFTERR_SEF(x)                   (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTERR_SEF_SHIFT)) & FLEXIO_SHIFTERR_SEF_MASK)

/*! @name TIMSTAT - Timer Status Register */
#define FLEXIO_TIMSTAT_TSF_MASK                  (0xFFU)
#define FLEXIO_TIMSTAT_TSF_SHIFT                 (0U)
#define FLEXIO_TIMSTAT_TSF(x)                    (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMSTAT_TSF_SHIFT)) & FLEXIO_TIMSTAT_TSF_MASK)

/*! @name SHIFTSIEN - Shifter Status Interrupt Enable */
#define FLEXIO_SHIFTSIEN_SSIE_MASK               (0xFFU)
#define FLEXIO_SHIFTSIEN_SSIE_SHIFT              (0U)
#define FLEXIO_SHIFTSIEN_SSIE(x)                 (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTSIEN_SSIE_SHIFT)) & FLEXIO_SHIFTSIEN_SSIE_MASK)

/*! @name SHIFTEIEN - Shifter Error Interrupt Enable */
#define FLEXIO_SHIFTEIEN_SEIE_MASK               (0xFFU)
#define FLEXIO_SHIFTEIEN_SEIE_SHIFT              (0U)
#define FLEXIO_SHIFTEIEN_SEIE(x)                 (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTEIEN_SEIE_SHIFT)) & FLEXIO_SHIFTEIEN_SEIE_MASK)

/*! @name TIMIEN - Timer Interrupt Enable Register */
#define FLEXIO_TIMIEN_TEIE_MASK                  (0xFFU)
#define FLEXIO_TIMIEN_TEIE_SHIFT                 (0U)
#define FLEXIO_TIMIEN_TEIE(x)                    (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMIEN_TEIE_SHIFT)) & FLEXIO_TIMIEN_TEIE_MASK)

/*! @name SHIFTSDEN - Shifter Status DMA Enable */
#define FLEXIO_SHIFTSDEN_SSDE_MASK               (0xFFU)
#define FLEXIO_SHIFTSDEN_SSDE_SHIFT              (0U)
#define FLEXIO_SHIFTSDEN_SSDE(x)                 (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTSDEN_SSDE_SHIFT)) & FLEXIO_SHIFTSDEN_SSDE_MASK)

/*! @name SHIFTSTATE - Shifter State Register */
#define FLEXIO_SHIFTSTATE_STATE_MASK             (0x7U)
#define FLEXIO_SHIFTSTATE_STATE_SHIFT            (0U)
#define FLEXIO_SHIFTSTATE_STATE(x)               (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTSTATE_STATE_SHIFT)) & FLEXIO_SHIFTSTATE_STATE_MASK)

/*! @name SHIFTCTL - Shifter Control N Register */
#define FLEXIO_SHIFTCTL_SMOD_MASK                (0x7U)
#define FLEXIO_SHIFTCTL_SMOD_SHIFT               (0U)
#define FLEXIO_SHIFTCTL_SMOD(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCTL_SMOD_SHIFT)) & FLEXIO_SHIFTCTL_SMOD_MASK)
#define FLEXIO_SHIFTCTL_PINPOL_MASK              (0x80U)
#define FLEXIO_SHIFTCTL_PINPOL_SHIFT             (7U)
#define FLEXIO_SHIFTCTL_PINPOL(x)                (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCTL_PINPOL_SHIFT)) & FLEXIO_SHIFTCTL_PINPOL_MASK)
#define FLEXIO_SHIFTCTL_PINSEL_MASK              (0x1F00U)
#define FLEXIO_SHIFTCTL_PINSEL_SHIFT             (8U)
#define FLEXIO_SHIFTCTL_PINSEL(x)                (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCTL_PINSEL_SHIFT)) & FLEXIO_SHIFTCTL_PINSEL_MASK)
#define FLEXIO_SHIFTCTL_PINCFG_MASK              (0x30000U)
#define FLEXIO_SHIFTCTL_PINCFG_SHIFT             (16U)
#define FLEXIO_SHIFTCTL_PINCFG(x)                (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCTL_PINCFG_SHIFT)) & FLEXIO_SHIFTCTL_PINCFG_MASK)
#define FLEXIO_SHIFTCTL_TIMPOL_MASK              (0x800000U)
#define FLEXIO_SHIFTCTL_TIMPOL_SHIFT             (23U)
#define FLEXIO_SHIFTCTL_TIMPOL(x)                (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCTL_TIMPOL_SHIFT)) & FLEXIO_SHIFTCTL_TIMPOL_MASK)
#define FLEXIO_SHIFTCTL_TIMSEL_MASK              (0x7000000U)
#define FLEXIO_SHIFTCTL_TIMSEL_SHIFT             (24U)
#define FLEXIO_SHIFTCTL_TIMSEL(x)                (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCTL_TIMSEL_SHIFT)) & FLEXIO_SHIFTCTL_TIMSEL_MASK)

/* The count of FLEXIO_SHIFTCTL */
#define FLEXIO_SHIFTCTL_COUNT                    (8U)

/*! @name SHIFTCFG - Shifter Configuration N Register */
#define FLEXIO_SHIFTCFG_SSTART_MASK              (0x3U)
#define FLEXIO_SHIFTCFG_SSTART_SHIFT             (0U)
#define FLEXIO_SHIFTCFG_SSTART(x)                (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCFG_SSTART_SHIFT)) & FLEXIO_SHIFTCFG_SSTART_MASK)
#define FLEXIO_SHIFTCFG_SSTOP_MASK               (0x30U)
#define FLEXIO_SHIFTCFG_SSTOP_SHIFT              (4U)
#define FLEXIO_SHIFTCFG_SSTOP(x)                 (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCFG_SSTOP_SHIFT)) & FLEXIO_SHIFTCFG_SSTOP_MASK)
#define FLEXIO_SHIFTCFG_INSRC_MASK               (0x100U)
#define FLEXIO_SHIFTCFG_INSRC_SHIFT              (8U)
#define FLEXIO_SHIFTCFG_INSRC(x)                 (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCFG_INSRC_SHIFT)) & FLEXIO_SHIFTCFG_INSRC_MASK)
#define FLEXIO_SHIFTCFG_PWIDTH_MASK              (0x1F0000U)
#define FLEXIO_SHIFTCFG_PWIDTH_SHIFT             (16U)
#define FLEXIO_SHIFTCFG_PWIDTH(x)                (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTCFG_PWIDTH_SHIFT)) & FLEXIO_SHIFTCFG_PWIDTH_MASK)

/* The count of FLEXIO_SHIFTCFG */
#define FLEXIO_SHIFTCFG_COUNT                    (8U)

/*! @name SHIFTBUF - Shifter Buffer N Register */
#define FLEXIO_SHIFTBUF_SHIFTBUF_MASK            (0xFFFFFFFFU)
#define FLEXIO_SHIFTBUF_SHIFTBUF_SHIFT           (0U)
#define FLEXIO_SHIFTBUF_SHIFTBUF(x)              (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTBUF_SHIFTBUF_SHIFT)) & FLEXIO_SHIFTBUF_SHIFTBUF_MASK)

/* The count of FLEXIO_SHIFTBUF */
#define FLEXIO_SHIFTBUF_COUNT                    (8U)

/*! @name SHIFTBUFBIS - Shifter Buffer N Bit Swapped Register */
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_MASK      (0xFFFFFFFFU)
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_SHIFT     (0U)
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS(x)        (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_SHIFT)) & FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_MASK)

/* The count of FLEXIO_SHIFTBUFBIS */
#define FLEXIO_SHIFTBUFBIS_COUNT                 (8U)

/*! @name SHIFTBUFBYS - Shifter Buffer N Byte Swapped Register */
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_MASK      (0xFFFFFFFFU)
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_SHIFT     (0U)
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS(x)        (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_SHIFT)) & FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_MASK)

/* The count of FLEXIO_SHIFTBUFBYS */
#define FLEXIO_SHIFTBUFBYS_COUNT                 (8U)

/*! @name SHIFTBUFBBS - Shifter Buffer N Bit Byte Swapped Register */
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_MASK      (0xFFFFFFFFU)
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_SHIFT     (0U)
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS(x)        (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_SHIFT)) & FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_MASK)

/* The count of FLEXIO_SHIFTBUFBBS */
#define FLEXIO_SHIFTBUFBBS_COUNT                 (8U)

/*! @name TIMCTL - Timer Control N Register */
#define FLEXIO_TIMCTL_TIMOD_MASK                 (0x3U)
#define FLEXIO_TIMCTL_TIMOD_SHIFT                (0U)
#define FLEXIO_TIMCTL_TIMOD(x)                   (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCTL_TIMOD_SHIFT)) & FLEXIO_TIMCTL_TIMOD_MASK)
#define FLEXIO_TIMCTL_PINPOL_MASK                (0x80U)
#define FLEXIO_TIMCTL_PINPOL_SHIFT               (7U)
#define FLEXIO_TIMCTL_PINPOL(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCTL_PINPOL_SHIFT)) & FLEXIO_TIMCTL_PINPOL_MASK)
#define FLEXIO_TIMCTL_PINSEL_MASK                (0x1F00U)
#define FLEXIO_TIMCTL_PINSEL_SHIFT               (8U)
#define FLEXIO_TIMCTL_PINSEL(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCTL_PINSEL_SHIFT)) & FLEXIO_TIMCTL_PINSEL_MASK)
#define FLEXIO_TIMCTL_PINCFG_MASK                (0x30000U)
#define FLEXIO_TIMCTL_PINCFG_SHIFT               (16U)
#define FLEXIO_TIMCTL_PINCFG(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCTL_PINCFG_SHIFT)) & FLEXIO_TIMCTL_PINCFG_MASK)
#define FLEXIO_TIMCTL_TRGSRC_MASK                (0x400000U)
#define FLEXIO_TIMCTL_TRGSRC_SHIFT               (22U)
#define FLEXIO_TIMCTL_TRGSRC(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCTL_TRGSRC_SHIFT)) & FLEXIO_TIMCTL_TRGSRC_MASK)
#define FLEXIO_TIMCTL_TRGPOL_MASK                (0x800000U)
#define FLEXIO_TIMCTL_TRGPOL_SHIFT               (23U)
#define FLEXIO_TIMCTL_TRGPOL(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCTL_TRGPOL_SHIFT)) & FLEXIO_TIMCTL_TRGPOL_MASK)
#define FLEXIO_TIMCTL_TRGSEL_MASK                (0x3F000000U)
#define FLEXIO_TIMCTL_TRGSEL_SHIFT               (24U)
#define FLEXIO_TIMCTL_TRGSEL(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCTL_TRGSEL_SHIFT)) & FLEXIO_TIMCTL_TRGSEL_MASK)

/* The count of FLEXIO_TIMCTL */
#define FLEXIO_TIMCTL_COUNT                      (8U)

/*! @name TIMCFG - Timer Configuration N Register */
#define FLEXIO_TIMCFG_TSTART_MASK                (0x2U)
#define FLEXIO_TIMCFG_TSTART_SHIFT               (1U)
#define FLEXIO_TIMCFG_TSTART(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCFG_TSTART_SHIFT)) & FLEXIO_TIMCFG_TSTART_MASK)
#define FLEXIO_TIMCFG_TSTOP_MASK                 (0x30U)
#define FLEXIO_TIMCFG_TSTOP_SHIFT                (4U)
#define FLEXIO_TIMCFG_TSTOP(x)                   (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCFG_TSTOP_SHIFT)) & FLEXIO_TIMCFG_TSTOP_MASK)
#define FLEXIO_TIMCFG_TIMENA_MASK                (0x700U)
#define FLEXIO_TIMCFG_TIMENA_SHIFT               (8U)
#define FLEXIO_TIMCFG_TIMENA(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCFG_TIMENA_SHIFT)) & FLEXIO_TIMCFG_TIMENA_MASK)
#define FLEXIO_TIMCFG_TIMDIS_MASK                (0x7000U)
#define FLEXIO_TIMCFG_TIMDIS_SHIFT               (12U)
#define FLEXIO_TIMCFG_TIMDIS(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCFG_TIMDIS_SHIFT)) & FLEXIO_TIMCFG_TIMDIS_MASK)
#define FLEXIO_TIMCFG_TIMRST_MASK                (0x70000U)
#define FLEXIO_TIMCFG_TIMRST_SHIFT               (16U)
#define FLEXIO_TIMCFG_TIMRST(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCFG_TIMRST_SHIFT)) & FLEXIO_TIMCFG_TIMRST_MASK)
#define FLEXIO_TIMCFG_TIMDEC_MASK                (0x300000U)
#define FLEXIO_TIMCFG_TIMDEC_SHIFT               (20U)
#define FLEXIO_TIMCFG_TIMDEC(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCFG_TIMDEC_SHIFT)) & FLEXIO_TIMCFG_TIMDEC_MASK)
#define FLEXIO_TIMCFG_TIMOUT_MASK                (0x3000000U)
#define FLEXIO_TIMCFG_TIMOUT_SHIFT               (24U)
#define FLEXIO_TIMCFG_TIMOUT(x)                  (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCFG_TIMOUT_SHIFT)) & FLEXIO_TIMCFG_TIMOUT_MASK)

/* The count of FLEXIO_TIMCFG */
#define FLEXIO_TIMCFG_COUNT                      (8U)

/*! @name TIMCMP - Timer Compare N Register */
#define FLEXIO_TIMCMP_CMP_MASK                   (0xFFFFU)
#define FLEXIO_TIMCMP_CMP_SHIFT                  (0U)
#define FLEXIO_TIMCMP_CMP(x)                     (((uint32_t)(((uint32_t)(x)) << FLEXIO_TIMCMP_CMP_SHIFT)) & FLEXIO_TIMCMP_CMP_MASK)

/* The count of FLEXIO_TIMCMP */
#define FLEXIO_TIMCMP_COUNT                      (8U)

/*! @name SHIFTBUFNBS - Shifter Buffer N Nibble Byte Swapped Register */
#define FLEXIO_SHIFTBUFNBS_SHIFTBUFNBS_MASK      (0xFFFFFFFFU)
#define FLEXIO_SHIFTBUFNBS_SHIFTBUFNBS_SHIFT     (0U)
#define FLEXIO_SHIFTBUFNBS_SHIFTBUFNBS(x)        (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTBUFNBS_SHIFTBUFNBS_SHIFT)) & FLEXIO_SHIFTBUFNBS_SHIFTBUFNBS_MASK)

/* The count of FLEXIO_SHIFTBUFNBS */
#define FLEXIO_SHIFTBUFNBS_COUNT                 (8U)

/*! @name SHIFTBUFHWS - Shifter Buffer N Half Word Swapped Register */
#define FLEXIO_SHIFTBUFHWS_SHIFTBUFHWS_MASK      (0xFFFFFFFFU)
#define FLEXIO_SHIFTBUFHWS_SHIFTBUFHWS_SHIFT     (0U)
#define FLEXIO_SHIFTBUFHWS_SHIFTBUFHWS(x)        (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTBUFHWS_SHIFTBUFHWS_SHIFT)) & FLEXIO_SHIFTBUFHWS_SHIFTBUFHWS_MASK)

/* The count of FLEXIO_SHIFTBUFHWS */
#define FLEXIO_SHIFTBUFHWS_COUNT                 (8U)

/*! @name SHIFTBUFNIS - Shifter Buffer N Nibble Swapped Register */
#define FLEXIO_SHIFTBUFNIS_SHIFTBUFNIS_MASK      (0xFFFFFFFFU)
#define FLEXIO_SHIFTBUFNIS_SHIFTBUFNIS_SHIFT     (0U)
#define FLEXIO_SHIFTBUFNIS_SHIFTBUFNIS(x)        (((uint32_t)(((uint32_t)(x)) << FLEXIO_SHIFTBUFNIS_SHIFTBUFNIS_SHIFT)) & FLEXIO_SHIFTBUFNIS_SHIFTBUFNIS_MASK)

/* The count of FLEXIO_SHIFTBUFNIS */
#define FLEXIO_SHIFTBUFNIS_COUNT                 (8U)


/*!
 * @}
 */ /* end of group FLEXIO_Register_Masks */


/* FLEXIO - Peripheral instance base addresses */
/** Peripheral FLEXIO0 base address */
#define FLEXIO0_BASE                             (0x40039000u)
/** Peripheral FLEXIO0 base pointer */
#define FLEXIO0                                  ((FLEXIO_Type *)FLEXIO0_BASE)
/** Array initializer of FLEXIO peripheral base addresses */
#define FLEXIO_BASE_ADDRS                        { FLEXIO0_BASE }
/** Array initializer of FLEXIO peripheral base pointers */
#define FLEXIO_BASE_PTRS                         { FLEXIO0 }
/** Interrupt vectors for the FLEXIO peripheral type */
#define FLEXIO_IRQS                              { FLEXIO0_IRQn }

/*!
 * @}
 */ /* end of group FLEXIO_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- FTFE Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FTFE_Peripheral_Access_Layer FTFE Peripheral Access Layer
 * @{
 */

/** FTFE - Register Layout Typedef */
typedef struct {
  __IO uint8_t FSTAT;                              /**< Flash Status Register, offset: 0x0 */
  __IO uint8_t FCNFG;                              /**< Flash Configuration Register, offset: 0x1 */
  __I  uint8_t FSEC;                               /**< Flash Security Register, offset: 0x2 */
       uint8_t RESERVED_0[1];
  __IO uint8_t FCCOB3;                             /**< Flash Common Command Object Registers, offset: 0x4 */
  __IO uint8_t FCCOB2;                             /**< Flash Common Command Object Registers, offset: 0x5 */
  __IO uint8_t FCCOB1;                             /**< Flash Common Command Object Registers, offset: 0x6 */
  __IO uint8_t FCCOB0;                             /**< Flash Common Command Object Registers, offset: 0x7 */
  __IO uint8_t FCCOB7;                             /**< Flash Common Command Object Registers, offset: 0x8 */
  __IO uint8_t FCCOB6;                             /**< Flash Common Command Object Registers, offset: 0x9 */
  __IO uint8_t FCCOB5;                             /**< Flash Common Command Object Registers, offset: 0xA */
  __IO uint8_t FCCOB4;                             /**< Flash Common Command Object Registers, offset: 0xB */
  __IO uint8_t FCCOBB;                             /**< Flash Common Command Object Registers, offset: 0xC */
  __IO uint8_t FCCOBA;                             /**< Flash Common Command Object Registers, offset: 0xD */
  __IO uint8_t FCCOB9;                             /**< Flash Common Command Object Registers, offset: 0xE */
  __IO uint8_t FCCOB8;                             /**< Flash Common Command Object Registers, offset: 0xF */
  __I  uint8_t FOPT3;                              /**< Flash Option Registers, offset: 0x10 */
  __I  uint8_t FOPT2;                              /**< Flash Option Registers, offset: 0x11 */
  __I  uint8_t FOPT1;                              /**< Flash Option Registers, offset: 0x12 */
  __I  uint8_t FOPT0;                              /**< Flash Option Registers, offset: 0x13 */
       uint8_t RESERVED_1[4];
  __IO uint8_t FPROTH3;                            /**< Primary Program Flash Protection Registers, offset: 0x18 */
  __IO uint8_t FPROTH2;                            /**< Primary Program Flash Protection Registers, offset: 0x19 */
  __IO uint8_t FPROTH1;                            /**< Primary Program Flash Protection Registers, offset: 0x1A */
  __IO uint8_t FPROTH0;                            /**< Primary Program Flash Protection Registers, offset: 0x1B */
  __IO uint8_t FPROTL3;                            /**< Primary Program Flash Protection Registers, offset: 0x1C */
  __IO uint8_t FPROTL2;                            /**< Primary Program Flash Protection Registers, offset: 0x1D */
  __IO uint8_t FPROTL1;                            /**< Primary Program Flash Protection Registers, offset: 0x1E */
  __IO uint8_t FPROTL0;                            /**< Primary Program Flash Protection Registers, offset: 0x1F */
       uint8_t RESERVED_2[4];
  __IO uint8_t FPROTSL;                            /**< Secondary Program Flash Protection Registers, offset: 0x24 */
  __IO uint8_t FPROTSH;                            /**< Secondary Program Flash Protection Registers, offset: 0x25 */
       uint8_t RESERVED_3[6];
  __I  uint8_t FACSS;                              /**< Primary Flash Access Segment Size Register, offset: 0x2C */
  __I  uint8_t FACSN;                              /**< Primary Flash Access Segment Number Register, offset: 0x2D */
  __I  uint8_t FACSSS;                             /**< Secondary Flash Access Segment Size Register, offset: 0x2E */
  __I  uint8_t FACSNS;                             /**< Secondary Flash Access Segment Number Register, offset: 0x2F */
  __I  uint8_t XACCH3;                             /**< Primary Execute-only Access Registers, offset: 0x30 */
  __I  uint8_t XACCH2;                             /**< Primary Execute-only Access Registers, offset: 0x31 */
  __I  uint8_t XACCH1;                             /**< Primary Execute-only Access Registers, offset: 0x32 */
  __I  uint8_t XACCH0;                             /**< Primary Execute-only Access Registers, offset: 0x33 */
  __I  uint8_t XACCL3;                             /**< Primary Execute-only Access Registers, offset: 0x34 */
  __I  uint8_t XACCL2;                             /**< Primary Execute-only Access Registers, offset: 0x35 */
  __I  uint8_t XACCL1;                             /**< Primary Execute-only Access Registers, offset: 0x36 */
  __I  uint8_t XACCL0;                             /**< Primary Execute-only Access Registers, offset: 0x37 */
  __I  uint8_t SACCH3;                             /**< Primary Supervisor-only Access Registers, offset: 0x38 */
  __I  uint8_t SACCH2;                             /**< Primary Supervisor-only Access Registers, offset: 0x39 */
  __I  uint8_t SACCH1;                             /**< Primary Supervisor-only Access Registers, offset: 0x3A */
  __I  uint8_t SACCH0;                             /**< Primary Supervisor-only Access Registers, offset: 0x3B */
  __I  uint8_t SACCL3;                             /**< Primary Supervisor-only Access Registers, offset: 0x3C */
  __I  uint8_t SACCL2;                             /**< Primary Supervisor-only Access Registers, offset: 0x3D */
  __I  uint8_t SACCL1;                             /**< Primary Supervisor-only Access Registers, offset: 0x3E */
  __I  uint8_t SACCL0;                             /**< Primary Supervisor-only Access Registers, offset: 0x3F */
       uint8_t RESERVED_4[4];
  __I  uint8_t XACCSL;                             /**< Secondary Execute-only Access Registers, offset: 0x44 */
  __I  uint8_t XACCSH;                             /**< Secondary Execute-only Access Registers, offset: 0x45 */
       uint8_t RESERVED_5[6];
  __I  uint8_t SACCSL;                             /**< Secondary Supervisor-only Access Registers, offset: 0x4C */
  __I  uint8_t SACCSH;                             /**< Secondary Supervisor-only Access Registers, offset: 0x4D */
       uint8_t RESERVED_6[4];
  __I  uint8_t FSTDBYCTL;                          /**< Flash Standby Control Register, offset: 0x52 */
  __IO uint8_t FSTDBY;                             /**< Flash Standby Register, offset: 0x53 */
} FTFE_Type;

/* ----------------------------------------------------------------------------
   -- FTFE Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FTFE_Register_Masks FTFE Register Masks
 * @{
 */

/*! @name FSTAT - Flash Status Register */
#define FTFE_FSTAT_MGSTAT0_MASK                  (0x1U)
#define FTFE_FSTAT_MGSTAT0_SHIFT                 (0U)
#define FTFE_FSTAT_MGSTAT0(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FSTAT_MGSTAT0_SHIFT)) & FTFE_FSTAT_MGSTAT0_MASK)
#define FTFE_FSTAT_FPVIOL_MASK                   (0x10U)
#define FTFE_FSTAT_FPVIOL_SHIFT                  (4U)
#define FTFE_FSTAT_FPVIOL(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FSTAT_FPVIOL_SHIFT)) & FTFE_FSTAT_FPVIOL_MASK)
#define FTFE_FSTAT_ACCERR_MASK                   (0x20U)
#define FTFE_FSTAT_ACCERR_SHIFT                  (5U)
#define FTFE_FSTAT_ACCERR(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FSTAT_ACCERR_SHIFT)) & FTFE_FSTAT_ACCERR_MASK)
#define FTFE_FSTAT_RDCOLERR_MASK                 (0x40U)
#define FTFE_FSTAT_RDCOLERR_SHIFT                (6U)
#define FTFE_FSTAT_RDCOLERR(x)                   (((uint8_t)(((uint8_t)(x)) << FTFE_FSTAT_RDCOLERR_SHIFT)) & FTFE_FSTAT_RDCOLERR_MASK)
#define FTFE_FSTAT_CCIF_MASK                     (0x80U)
#define FTFE_FSTAT_CCIF_SHIFT                    (7U)
#define FTFE_FSTAT_CCIF(x)                       (((uint8_t)(((uint8_t)(x)) << FTFE_FSTAT_CCIF_SHIFT)) & FTFE_FSTAT_CCIF_MASK)

/*! @name FCNFG - Flash Configuration Register */
#define FTFE_FCNFG_RAMRDY_MASK                   (0x2U)
#define FTFE_FCNFG_RAMRDY_SHIFT                  (1U)
#define FTFE_FCNFG_RAMRDY(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCNFG_RAMRDY_SHIFT)) & FTFE_FCNFG_RAMRDY_MASK)
#define FTFE_FCNFG_CRCRDY_MASK                   (0x4U)
#define FTFE_FCNFG_CRCRDY_SHIFT                  (2U)
#define FTFE_FCNFG_CRCRDY(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCNFG_CRCRDY_SHIFT)) & FTFE_FCNFG_CRCRDY_MASK)
#define FTFE_FCNFG_SWAP_MASK                     (0x8U)
#define FTFE_FCNFG_SWAP_SHIFT                    (3U)
#define FTFE_FCNFG_SWAP(x)                       (((uint8_t)(((uint8_t)(x)) << FTFE_FCNFG_SWAP_SHIFT)) & FTFE_FCNFG_SWAP_MASK)
#define FTFE_FCNFG_ERSSUSP_MASK                  (0x10U)
#define FTFE_FCNFG_ERSSUSP_SHIFT                 (4U)
#define FTFE_FCNFG_ERSSUSP(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FCNFG_ERSSUSP_SHIFT)) & FTFE_FCNFG_ERSSUSP_MASK)
#define FTFE_FCNFG_ERSAREQ_MASK                  (0x20U)
#define FTFE_FCNFG_ERSAREQ_SHIFT                 (5U)
#define FTFE_FCNFG_ERSAREQ(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FCNFG_ERSAREQ_SHIFT)) & FTFE_FCNFG_ERSAREQ_MASK)
#define FTFE_FCNFG_RDCOLLIE_MASK                 (0x40U)
#define FTFE_FCNFG_RDCOLLIE_SHIFT                (6U)
#define FTFE_FCNFG_RDCOLLIE(x)                   (((uint8_t)(((uint8_t)(x)) << FTFE_FCNFG_RDCOLLIE_SHIFT)) & FTFE_FCNFG_RDCOLLIE_MASK)
#define FTFE_FCNFG_CCIE_MASK                     (0x80U)
#define FTFE_FCNFG_CCIE_SHIFT                    (7U)
#define FTFE_FCNFG_CCIE(x)                       (((uint8_t)(((uint8_t)(x)) << FTFE_FCNFG_CCIE_SHIFT)) & FTFE_FCNFG_CCIE_MASK)

/*! @name FSEC - Flash Security Register */
#define FTFE_FSEC_SEC_MASK                       (0x3U)
#define FTFE_FSEC_SEC_SHIFT                      (0U)
#define FTFE_FSEC_SEC(x)                         (((uint8_t)(((uint8_t)(x)) << FTFE_FSEC_SEC_SHIFT)) & FTFE_FSEC_SEC_MASK)
#define FTFE_FSEC_FSLACC_MASK                    (0xCU)
#define FTFE_FSEC_FSLACC_SHIFT                   (2U)
#define FTFE_FSEC_FSLACC(x)                      (((uint8_t)(((uint8_t)(x)) << FTFE_FSEC_FSLACC_SHIFT)) & FTFE_FSEC_FSLACC_MASK)
#define FTFE_FSEC_MEEN_MASK                      (0x30U)
#define FTFE_FSEC_MEEN_SHIFT                     (4U)
#define FTFE_FSEC_MEEN(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_FSEC_MEEN_SHIFT)) & FTFE_FSEC_MEEN_MASK)
#define FTFE_FSEC_KEYEN_MASK                     (0xC0U)
#define FTFE_FSEC_KEYEN_SHIFT                    (6U)
#define FTFE_FSEC_KEYEN(x)                       (((uint8_t)(((uint8_t)(x)) << FTFE_FSEC_KEYEN_SHIFT)) & FTFE_FSEC_KEYEN_MASK)

/*! @name FCCOB3 - Flash Common Command Object Registers */
#define FTFE_FCCOB3_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB3_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB3_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB3_CCOBn_SHIFT)) & FTFE_FCCOB3_CCOBn_MASK)

/*! @name FCCOB2 - Flash Common Command Object Registers */
#define FTFE_FCCOB2_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB2_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB2_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB2_CCOBn_SHIFT)) & FTFE_FCCOB2_CCOBn_MASK)

/*! @name FCCOB1 - Flash Common Command Object Registers */
#define FTFE_FCCOB1_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB1_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB1_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB1_CCOBn_SHIFT)) & FTFE_FCCOB1_CCOBn_MASK)

/*! @name FCCOB0 - Flash Common Command Object Registers */
#define FTFE_FCCOB0_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB0_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB0_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB0_CCOBn_SHIFT)) & FTFE_FCCOB0_CCOBn_MASK)

/*! @name FCCOB7 - Flash Common Command Object Registers */
#define FTFE_FCCOB7_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB7_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB7_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB7_CCOBn_SHIFT)) & FTFE_FCCOB7_CCOBn_MASK)

/*! @name FCCOB6 - Flash Common Command Object Registers */
#define FTFE_FCCOB6_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB6_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB6_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB6_CCOBn_SHIFT)) & FTFE_FCCOB6_CCOBn_MASK)

/*! @name FCCOB5 - Flash Common Command Object Registers */
#define FTFE_FCCOB5_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB5_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB5_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB5_CCOBn_SHIFT)) & FTFE_FCCOB5_CCOBn_MASK)

/*! @name FCCOB4 - Flash Common Command Object Registers */
#define FTFE_FCCOB4_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB4_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB4_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB4_CCOBn_SHIFT)) & FTFE_FCCOB4_CCOBn_MASK)

/*! @name FCCOBB - Flash Common Command Object Registers */
#define FTFE_FCCOBB_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOBB_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOBB_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOBB_CCOBn_SHIFT)) & FTFE_FCCOBB_CCOBn_MASK)

/*! @name FCCOBA - Flash Common Command Object Registers */
#define FTFE_FCCOBA_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOBA_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOBA_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOBA_CCOBn_SHIFT)) & FTFE_FCCOBA_CCOBn_MASK)

/*! @name FCCOB9 - Flash Common Command Object Registers */
#define FTFE_FCCOB9_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB9_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB9_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB9_CCOBn_SHIFT)) & FTFE_FCCOB9_CCOBn_MASK)

/*! @name FCCOB8 - Flash Common Command Object Registers */
#define FTFE_FCCOB8_CCOBn_MASK                   (0xFFU)
#define FTFE_FCCOB8_CCOBn_SHIFT                  (0U)
#define FTFE_FCCOB8_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FCCOB8_CCOBn_SHIFT)) & FTFE_FCCOB8_CCOBn_MASK)

/*! @name FOPT3 - Flash Option Registers */
#define FTFE_FOPT3_OPT_MASK                      (0xFFU)
#define FTFE_FOPT3_OPT_SHIFT                     (0U)
#define FTFE_FOPT3_OPT(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_FOPT3_OPT_SHIFT)) & FTFE_FOPT3_OPT_MASK)

/*! @name FOPT2 - Flash Option Registers */
#define FTFE_FOPT2_OPT_MASK                      (0xFFU)
#define FTFE_FOPT2_OPT_SHIFT                     (0U)
#define FTFE_FOPT2_OPT(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_FOPT2_OPT_SHIFT)) & FTFE_FOPT2_OPT_MASK)

/*! @name FOPT1 - Flash Option Registers */
#define FTFE_FOPT1_OPT_MASK                      (0xFFU)
#define FTFE_FOPT1_OPT_SHIFT                     (0U)
#define FTFE_FOPT1_OPT(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_FOPT1_OPT_SHIFT)) & FTFE_FOPT1_OPT_MASK)

/*! @name FOPT0 - Flash Option Registers */
#define FTFE_FOPT0_OPT_MASK                      (0xFFU)
#define FTFE_FOPT0_OPT_SHIFT                     (0U)
#define FTFE_FOPT0_OPT(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_FOPT0_OPT_SHIFT)) & FTFE_FOPT0_OPT_MASK)

/*! @name FPROTH3 - Primary Program Flash Protection Registers */
#define FTFE_FPROTH3_PROT_MASK                   (0xFFU)
#define FTFE_FPROTH3_PROT_SHIFT                  (0U)
#define FTFE_FPROTH3_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTH3_PROT_SHIFT)) & FTFE_FPROTH3_PROT_MASK)

/*! @name FPROTH2 - Primary Program Flash Protection Registers */
#define FTFE_FPROTH2_PROT_MASK                   (0xFFU)
#define FTFE_FPROTH2_PROT_SHIFT                  (0U)
#define FTFE_FPROTH2_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTH2_PROT_SHIFT)) & FTFE_FPROTH2_PROT_MASK)

/*! @name FPROTH1 - Primary Program Flash Protection Registers */
#define FTFE_FPROTH1_PROT_MASK                   (0xFFU)
#define FTFE_FPROTH1_PROT_SHIFT                  (0U)
#define FTFE_FPROTH1_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTH1_PROT_SHIFT)) & FTFE_FPROTH1_PROT_MASK)

/*! @name FPROTH0 - Primary Program Flash Protection Registers */
#define FTFE_FPROTH0_PROT_MASK                   (0xFFU)
#define FTFE_FPROTH0_PROT_SHIFT                  (0U)
#define FTFE_FPROTH0_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTH0_PROT_SHIFT)) & FTFE_FPROTH0_PROT_MASK)

/*! @name FPROTL3 - Primary Program Flash Protection Registers */
#define FTFE_FPROTL3_PROT_MASK                   (0xFFU)
#define FTFE_FPROTL3_PROT_SHIFT                  (0U)
#define FTFE_FPROTL3_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTL3_PROT_SHIFT)) & FTFE_FPROTL3_PROT_MASK)

/*! @name FPROTL2 - Primary Program Flash Protection Registers */
#define FTFE_FPROTL2_PROT_MASK                   (0xFFU)
#define FTFE_FPROTL2_PROT_SHIFT                  (0U)
#define FTFE_FPROTL2_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTL2_PROT_SHIFT)) & FTFE_FPROTL2_PROT_MASK)

/*! @name FPROTL1 - Primary Program Flash Protection Registers */
#define FTFE_FPROTL1_PROT_MASK                   (0xFFU)
#define FTFE_FPROTL1_PROT_SHIFT                  (0U)
#define FTFE_FPROTL1_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTL1_PROT_SHIFT)) & FTFE_FPROTL1_PROT_MASK)

/*! @name FPROTL0 - Primary Program Flash Protection Registers */
#define FTFE_FPROTL0_PROT_MASK                   (0xFFU)
#define FTFE_FPROTL0_PROT_SHIFT                  (0U)
#define FTFE_FPROTL0_PROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTL0_PROT_SHIFT)) & FTFE_FPROTL0_PROT_MASK)

/*! @name FPROTSL - Secondary Program Flash Protection Registers */
#define FTFE_FPROTSL_PROTS_MASK                  (0xFFU)
#define FTFE_FPROTSL_PROTS_SHIFT                 (0U)
#define FTFE_FPROTSL_PROTS(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTSL_PROTS_SHIFT)) & FTFE_FPROTSL_PROTS_MASK)

/*! @name FPROTSH - Secondary Program Flash Protection Registers */
#define FTFE_FPROTSH_PROTS_MASK                  (0xFFU)
#define FTFE_FPROTSH_PROTS_SHIFT                 (0U)
#define FTFE_FPROTSH_PROTS(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FPROTSH_PROTS_SHIFT)) & FTFE_FPROTSH_PROTS_MASK)

/*! @name FACSS - Primary Flash Access Segment Size Register */
#define FTFE_FACSS_SGSIZE_MASK                   (0xFFU)
#define FTFE_FACSS_SGSIZE_SHIFT                  (0U)
#define FTFE_FACSS_SGSIZE(x)                     (((uint8_t)(((uint8_t)(x)) << FTFE_FACSS_SGSIZE_SHIFT)) & FTFE_FACSS_SGSIZE_MASK)

/*! @name FACSN - Primary Flash Access Segment Number Register */
#define FTFE_FACSN_NUMSG_MASK                    (0xFFU)
#define FTFE_FACSN_NUMSG_SHIFT                   (0U)
#define FTFE_FACSN_NUMSG(x)                      (((uint8_t)(((uint8_t)(x)) << FTFE_FACSN_NUMSG_SHIFT)) & FTFE_FACSN_NUMSG_MASK)

/*! @name FACSSS - Secondary Flash Access Segment Size Register */
#define FTFE_FACSSS_SGSIZE_S_MASK                (0xFFU)
#define FTFE_FACSSS_SGSIZE_S_SHIFT               (0U)
#define FTFE_FACSSS_SGSIZE_S(x)                  (((uint8_t)(((uint8_t)(x)) << FTFE_FACSSS_SGSIZE_S_SHIFT)) & FTFE_FACSSS_SGSIZE_S_MASK)

/*! @name FACSNS - Secondary Flash Access Segment Number Register */
#define FTFE_FACSNS_NUMSG_S_MASK                 (0xFFU)
#define FTFE_FACSNS_NUMSG_S_SHIFT                (0U)
#define FTFE_FACSNS_NUMSG_S(x)                   (((uint8_t)(((uint8_t)(x)) << FTFE_FACSNS_NUMSG_S_SHIFT)) & FTFE_FACSNS_NUMSG_S_MASK)

/*! @name XACCH3 - Primary Execute-only Access Registers */
#define FTFE_XACCH3_XA_MASK                      (0xFFU)
#define FTFE_XACCH3_XA_SHIFT                     (0U)
#define FTFE_XACCH3_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCH3_XA_SHIFT)) & FTFE_XACCH3_XA_MASK)

/*! @name XACCH2 - Primary Execute-only Access Registers */
#define FTFE_XACCH2_XA_MASK                      (0xFFU)
#define FTFE_XACCH2_XA_SHIFT                     (0U)
#define FTFE_XACCH2_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCH2_XA_SHIFT)) & FTFE_XACCH2_XA_MASK)

/*! @name XACCH1 - Primary Execute-only Access Registers */
#define FTFE_XACCH1_XA_MASK                      (0xFFU)
#define FTFE_XACCH1_XA_SHIFT                     (0U)
#define FTFE_XACCH1_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCH1_XA_SHIFT)) & FTFE_XACCH1_XA_MASK)

/*! @name XACCH0 - Primary Execute-only Access Registers */
#define FTFE_XACCH0_XA_MASK                      (0xFFU)
#define FTFE_XACCH0_XA_SHIFT                     (0U)
#define FTFE_XACCH0_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCH0_XA_SHIFT)) & FTFE_XACCH0_XA_MASK)

/*! @name XACCL3 - Primary Execute-only Access Registers */
#define FTFE_XACCL3_XA_MASK                      (0xFFU)
#define FTFE_XACCL3_XA_SHIFT                     (0U)
#define FTFE_XACCL3_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCL3_XA_SHIFT)) & FTFE_XACCL3_XA_MASK)

/*! @name XACCL2 - Primary Execute-only Access Registers */
#define FTFE_XACCL2_XA_MASK                      (0xFFU)
#define FTFE_XACCL2_XA_SHIFT                     (0U)
#define FTFE_XACCL2_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCL2_XA_SHIFT)) & FTFE_XACCL2_XA_MASK)

/*! @name XACCL1 - Primary Execute-only Access Registers */
#define FTFE_XACCL1_XA_MASK                      (0xFFU)
#define FTFE_XACCL1_XA_SHIFT                     (0U)
#define FTFE_XACCL1_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCL1_XA_SHIFT)) & FTFE_XACCL1_XA_MASK)

/*! @name XACCL0 - Primary Execute-only Access Registers */
#define FTFE_XACCL0_XA_MASK                      (0xFFU)
#define FTFE_XACCL0_XA_SHIFT                     (0U)
#define FTFE_XACCL0_XA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_XACCL0_XA_SHIFT)) & FTFE_XACCL0_XA_MASK)

/*! @name SACCH3 - Primary Supervisor-only Access Registers */
#define FTFE_SACCH3_SA_MASK                      (0xFFU)
#define FTFE_SACCH3_SA_SHIFT                     (0U)
#define FTFE_SACCH3_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCH3_SA_SHIFT)) & FTFE_SACCH3_SA_MASK)

/*! @name SACCH2 - Primary Supervisor-only Access Registers */
#define FTFE_SACCH2_SA_MASK                      (0xFFU)
#define FTFE_SACCH2_SA_SHIFT                     (0U)
#define FTFE_SACCH2_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCH2_SA_SHIFT)) & FTFE_SACCH2_SA_MASK)

/*! @name SACCH1 - Primary Supervisor-only Access Registers */
#define FTFE_SACCH1_SA_MASK                      (0xFFU)
#define FTFE_SACCH1_SA_SHIFT                     (0U)
#define FTFE_SACCH1_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCH1_SA_SHIFT)) & FTFE_SACCH1_SA_MASK)

/*! @name SACCH0 - Primary Supervisor-only Access Registers */
#define FTFE_SACCH0_SA_MASK                      (0xFFU)
#define FTFE_SACCH0_SA_SHIFT                     (0U)
#define FTFE_SACCH0_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCH0_SA_SHIFT)) & FTFE_SACCH0_SA_MASK)

/*! @name SACCL3 - Primary Supervisor-only Access Registers */
#define FTFE_SACCL3_SA_MASK                      (0xFFU)
#define FTFE_SACCL3_SA_SHIFT                     (0U)
#define FTFE_SACCL3_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCL3_SA_SHIFT)) & FTFE_SACCL3_SA_MASK)

/*! @name SACCL2 - Primary Supervisor-only Access Registers */
#define FTFE_SACCL2_SA_MASK                      (0xFFU)
#define FTFE_SACCL2_SA_SHIFT                     (0U)
#define FTFE_SACCL2_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCL2_SA_SHIFT)) & FTFE_SACCL2_SA_MASK)

/*! @name SACCL1 - Primary Supervisor-only Access Registers */
#define FTFE_SACCL1_SA_MASK                      (0xFFU)
#define FTFE_SACCL1_SA_SHIFT                     (0U)
#define FTFE_SACCL1_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCL1_SA_SHIFT)) & FTFE_SACCL1_SA_MASK)

/*! @name SACCL0 - Primary Supervisor-only Access Registers */
#define FTFE_SACCL0_SA_MASK                      (0xFFU)
#define FTFE_SACCL0_SA_SHIFT                     (0U)
#define FTFE_SACCL0_SA(x)                        (((uint8_t)(((uint8_t)(x)) << FTFE_SACCL0_SA_SHIFT)) & FTFE_SACCL0_SA_MASK)

/*! @name XACCSL - Secondary Execute-only Access Registers */
#define FTFE_XACCSL_XA_S_MASK                    (0xFFU)
#define FTFE_XACCSL_XA_S_SHIFT                   (0U)
#define FTFE_XACCSL_XA_S(x)                      (((uint8_t)(((uint8_t)(x)) << FTFE_XACCSL_XA_S_SHIFT)) & FTFE_XACCSL_XA_S_MASK)

/*! @name XACCSH - Secondary Execute-only Access Registers */
#define FTFE_XACCSH_XA_S_MASK                    (0xFFU)
#define FTFE_XACCSH_XA_S_SHIFT                   (0U)
#define FTFE_XACCSH_XA_S(x)                      (((uint8_t)(((uint8_t)(x)) << FTFE_XACCSH_XA_S_SHIFT)) & FTFE_XACCSH_XA_S_MASK)

/*! @name SACCSL - Secondary Supervisor-only Access Registers */
#define FTFE_SACCSL_SA_S_MASK                    (0xFFU)
#define FTFE_SACCSL_SA_S_SHIFT                   (0U)
#define FTFE_SACCSL_SA_S(x)                      (((uint8_t)(((uint8_t)(x)) << FTFE_SACCSL_SA_S_SHIFT)) & FTFE_SACCSL_SA_S_MASK)

/*! @name SACCSH - Secondary Supervisor-only Access Registers */
#define FTFE_SACCSH_SA_S_MASK                    (0xFFU)
#define FTFE_SACCSH_SA_S_SHIFT                   (0U)
#define FTFE_SACCSH_SA_S(x)                      (((uint8_t)(((uint8_t)(x)) << FTFE_SACCSH_SA_S_SHIFT)) & FTFE_SACCSH_SA_S_MASK)

/*! @name FSTDBYCTL - Flash Standby Control Register */
#define FTFE_FSTDBYCTL_STDBYDIS_MASK             (0x1U)
#define FTFE_FSTDBYCTL_STDBYDIS_SHIFT            (0U)
#define FTFE_FSTDBYCTL_STDBYDIS(x)               (((uint8_t)(((uint8_t)(x)) << FTFE_FSTDBYCTL_STDBYDIS_SHIFT)) & FTFE_FSTDBYCTL_STDBYDIS_MASK)

/*! @name FSTDBY - Flash Standby Register */
#define FTFE_FSTDBY_STDBY0_MASK                  (0x1U)
#define FTFE_FSTDBY_STDBY0_SHIFT                 (0U)
#define FTFE_FSTDBY_STDBY0(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FSTDBY_STDBY0_SHIFT)) & FTFE_FSTDBY_STDBY0_MASK)
#define FTFE_FSTDBY_STDBY1_MASK                  (0x2U)
#define FTFE_FSTDBY_STDBY1_SHIFT                 (1U)
#define FTFE_FSTDBY_STDBY1(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FSTDBY_STDBY1_SHIFT)) & FTFE_FSTDBY_STDBY1_MASK)
#define FTFE_FSTDBY_STDBY2_MASK                  (0x4U)
#define FTFE_FSTDBY_STDBY2_SHIFT                 (2U)
#define FTFE_FSTDBY_STDBY2(x)                    (((uint8_t)(((uint8_t)(x)) << FTFE_FSTDBY_STDBY2_SHIFT)) & FTFE_FSTDBY_STDBY2_MASK)


/*!
 * @}
 */ /* end of group FTFE_Register_Masks */


/* FTFE - Peripheral instance base addresses */
/** Peripheral FTFE base address */
#define FTFE_BASE                                (0x40023000u)
/** Peripheral FTFE base pointer */
#define FTFE                                     ((FTFE_Type *)FTFE_BASE)
/** Array initializer of FTFE peripheral base addresses */
#define FTFE_BASE_ADDRS                          { FTFE_BASE }
/** Array initializer of FTFE peripheral base pointers */
#define FTFE_BASE_PTRS                           { FTFE }
/** Interrupt vectors for the FTFE peripheral type */
#define FTFE_COMMAND_COMPLETE_IRQS               { FTFE_Command_Complete_IRQn }
#define FTFE_READ_COLLISION_IRQS                 { FTFE_Read_Collision_IRQn }

/*!
 * @}
 */ /* end of group FTFE_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- GPIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Peripheral_Access_Layer GPIO Peripheral Access Layer
 * @{
 */

/** GPIO - Register Layout Typedef */
typedef struct {
  __IO uint32_t PDOR;                              /**< Port Data Output Register, offset: 0x0 */
  __O  uint32_t PSOR;                              /**< Port Set Output Register, offset: 0x4 */
  __O  uint32_t PCOR;                              /**< Port Clear Output Register, offset: 0x8 */
  __O  uint32_t PTOR;                              /**< Port Toggle Output Register, offset: 0xC */
  __I  uint32_t PDIR;                              /**< Port Data Input Register, offset: 0x10 */
  __IO uint32_t PDDR;                              /**< Port Data Direction Register, offset: 0x14 */
} GPIO_Type;

/* ----------------------------------------------------------------------------
   -- GPIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Register_Masks GPIO Register Masks
 * @{
 */

/*! @name PDOR - Port Data Output Register */
#define GPIO_PDOR_PDO_MASK                       (0xFFFFFFFFU)
#define GPIO_PDOR_PDO_SHIFT                      (0U)
#define GPIO_PDOR_PDO(x)                         (((uint32_t)(((uint32_t)(x)) << GPIO_PDOR_PDO_SHIFT)) & GPIO_PDOR_PDO_MASK)

/*! @name PSOR - Port Set Output Register */
#define GPIO_PSOR_PTSO_MASK                      (0xFFFFFFFFU)
#define GPIO_PSOR_PTSO_SHIFT                     (0U)
#define GPIO_PSOR_PTSO(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_PSOR_PTSO_SHIFT)) & GPIO_PSOR_PTSO_MASK)

/*! @name PCOR - Port Clear Output Register */
#define GPIO_PCOR_PTCO_MASK                      (0xFFFFFFFFU)
#define GPIO_PCOR_PTCO_SHIFT                     (0U)
#define GPIO_PCOR_PTCO(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_PCOR_PTCO_SHIFT)) & GPIO_PCOR_PTCO_MASK)

/*! @name PTOR - Port Toggle Output Register */
#define GPIO_PTOR_PTTO_MASK                      (0xFFFFFFFFU)
#define GPIO_PTOR_PTTO_SHIFT                     (0U)
#define GPIO_PTOR_PTTO(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_PTOR_PTTO_SHIFT)) & GPIO_PTOR_PTTO_MASK)

/*! @name PDIR - Port Data Input Register */
#define GPIO_PDIR_PDI_MASK                       (0xFFFFFFFFU)
#define GPIO_PDIR_PDI_SHIFT                      (0U)
#define GPIO_PDIR_PDI(x)                         (((uint32_t)(((uint32_t)(x)) << GPIO_PDIR_PDI_SHIFT)) & GPIO_PDIR_PDI_MASK)

/*! @name PDDR - Port Data Direction Register */
#define GPIO_PDDR_PDD_MASK                       (0xFFFFFFFFU)
#define GPIO_PDDR_PDD_SHIFT                      (0U)
#define GPIO_PDDR_PDD(x)                         (((uint32_t)(((uint32_t)(x)) << GPIO_PDDR_PDD_SHIFT)) & GPIO_PDDR_PDD_MASK)


/*!
 * @}
 */ /* end of group GPIO_Register_Masks */


/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIOA base address */
#define GPIOA_BASE                               (0x48020000u)
/** Peripheral GPIOA base pointer */
#define GPIOA                                    ((GPIO_Type *)GPIOA_BASE)
/** Peripheral GPIOB base address */
#define GPIOB_BASE                               (0x48020040u)
/** Peripheral GPIOB base pointer */
#define GPIOB                                    ((GPIO_Type *)GPIOB_BASE)
/** Peripheral GPIOC base address */
#define GPIOC_BASE                               (0x48020080u)
/** Peripheral GPIOC base pointer */
#define GPIOC                                    ((GPIO_Type *)GPIOC_BASE)
/** Peripheral GPIOD base address */
#define GPIOD_BASE                               (0x480200C0u)
/** Peripheral GPIOD base pointer */
#define GPIOD                                    ((GPIO_Type *)GPIOD_BASE)
/** Peripheral GPIOE base address */
#define GPIOE_BASE                               (0x4100F000u)
/** Peripheral GPIOE base pointer */
#define GPIOE                                    ((GPIO_Type *)GPIOE_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { GPIOA_BASE, GPIOB_BASE, GPIOC_BASE, GPIOD_BASE, GPIOE_BASE }
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                           { GPIOA, GPIOB, GPIOC, GPIOD, GPIOE }

/*!
 * @}
 */ /* end of group GPIO_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- I2S Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup I2S_Peripheral_Access_Layer I2S Peripheral Access Layer
 * @{
 */

/** I2S - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t TCSR;                              /**< SAI Transmit Control Register, offset: 0x8 */
  __IO uint32_t TCR1;                              /**< SAI Transmit Configuration 1 Register, offset: 0xC */
  __IO uint32_t TCR2;                              /**< SAI Transmit Configuration 2 Register, offset: 0x10 */
  __IO uint32_t TCR3;                              /**< SAI Transmit Configuration 3 Register, offset: 0x14 */
  __IO uint32_t TCR4;                              /**< SAI Transmit Configuration 4 Register, offset: 0x18 */
  __IO uint32_t TCR5;                              /**< SAI Transmit Configuration 5 Register, offset: 0x1C */
  __O  uint32_t TDR[2];                            /**< SAI Transmit Data Register, array offset: 0x20, array step: 0x4 */
       uint8_t RESERVED_0[24];
  __I  uint32_t TFR[2];                            /**< SAI Transmit FIFO Register, array offset: 0x40, array step: 0x4 */
       uint8_t RESERVED_1[24];
  __IO uint32_t TMR;                               /**< SAI Transmit Mask Register, offset: 0x60 */
       uint8_t RESERVED_2[36];
  __IO uint32_t RCSR;                              /**< SAI Receive Control Register, offset: 0x88 */
  __IO uint32_t RCR1;                              /**< SAI Receive Configuration 1 Register, offset: 0x8C */
  __IO uint32_t RCR2;                              /**< SAI Receive Configuration 2 Register, offset: 0x90 */
  __IO uint32_t RCR3;                              /**< SAI Receive Configuration 3 Register, offset: 0x94 */
  __IO uint32_t RCR4;                              /**< SAI Receive Configuration 4 Register, offset: 0x98 */
  __IO uint32_t RCR5;                              /**< SAI Receive Configuration 5 Register, offset: 0x9C */
  __I  uint32_t RDR[2];                            /**< SAI Receive Data Register, array offset: 0xA0, array step: 0x4 */
       uint8_t RESERVED_3[24];
  __I  uint32_t RFR[2];                            /**< SAI Receive FIFO Register, array offset: 0xC0, array step: 0x4 */
       uint8_t RESERVED_4[24];
  __IO uint32_t RMR;                               /**< SAI Receive Mask Register, offset: 0xE0 */
} I2S_Type;

/* ----------------------------------------------------------------------------
   -- I2S Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup I2S_Register_Masks I2S Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define I2S_VERID_FEATURE_MASK                   (0xFFFFU)
#define I2S_VERID_FEATURE_SHIFT                  (0U)
#define I2S_VERID_FEATURE(x)                     (((uint32_t)(((uint32_t)(x)) << I2S_VERID_FEATURE_SHIFT)) & I2S_VERID_FEATURE_MASK)
#define I2S_VERID_MINOR_MASK                     (0xFF0000U)
#define I2S_VERID_MINOR_SHIFT                    (16U)
#define I2S_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << I2S_VERID_MINOR_SHIFT)) & I2S_VERID_MINOR_MASK)
#define I2S_VERID_MAJOR_MASK                     (0xFF000000U)
#define I2S_VERID_MAJOR_SHIFT                    (24U)
#define I2S_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << I2S_VERID_MAJOR_SHIFT)) & I2S_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define I2S_PARAM_DATALINE_MASK                  (0xFU)
#define I2S_PARAM_DATALINE_SHIFT                 (0U)
#define I2S_PARAM_DATALINE(x)                    (((uint32_t)(((uint32_t)(x)) << I2S_PARAM_DATALINE_SHIFT)) & I2S_PARAM_DATALINE_MASK)
#define I2S_PARAM_FIFO_MASK                      (0xF00U)
#define I2S_PARAM_FIFO_SHIFT                     (8U)
#define I2S_PARAM_FIFO(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_PARAM_FIFO_SHIFT)) & I2S_PARAM_FIFO_MASK)
#define I2S_PARAM_FRAME_MASK                     (0xF0000U)
#define I2S_PARAM_FRAME_SHIFT                    (16U)
#define I2S_PARAM_FRAME(x)                       (((uint32_t)(((uint32_t)(x)) << I2S_PARAM_FRAME_SHIFT)) & I2S_PARAM_FRAME_MASK)

/*! @name TCSR - SAI Transmit Control Register */
#define I2S_TCSR_FRDE_MASK                       (0x1U)
#define I2S_TCSR_FRDE_SHIFT                      (0U)
#define I2S_TCSR_FRDE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FRDE_SHIFT)) & I2S_TCSR_FRDE_MASK)
#define I2S_TCSR_FWDE_MASK                       (0x2U)
#define I2S_TCSR_FWDE_SHIFT                      (1U)
#define I2S_TCSR_FWDE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FWDE_SHIFT)) & I2S_TCSR_FWDE_MASK)
#define I2S_TCSR_FRIE_MASK                       (0x100U)
#define I2S_TCSR_FRIE_SHIFT                      (8U)
#define I2S_TCSR_FRIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FRIE_SHIFT)) & I2S_TCSR_FRIE_MASK)
#define I2S_TCSR_FWIE_MASK                       (0x200U)
#define I2S_TCSR_FWIE_SHIFT                      (9U)
#define I2S_TCSR_FWIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FWIE_SHIFT)) & I2S_TCSR_FWIE_MASK)
#define I2S_TCSR_FEIE_MASK                       (0x400U)
#define I2S_TCSR_FEIE_SHIFT                      (10U)
#define I2S_TCSR_FEIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FEIE_SHIFT)) & I2S_TCSR_FEIE_MASK)
#define I2S_TCSR_SEIE_MASK                       (0x800U)
#define I2S_TCSR_SEIE_SHIFT                      (11U)
#define I2S_TCSR_SEIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_SEIE_SHIFT)) & I2S_TCSR_SEIE_MASK)
#define I2S_TCSR_WSIE_MASK                       (0x1000U)
#define I2S_TCSR_WSIE_SHIFT                      (12U)
#define I2S_TCSR_WSIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_WSIE_SHIFT)) & I2S_TCSR_WSIE_MASK)
#define I2S_TCSR_FRF_MASK                        (0x10000U)
#define I2S_TCSR_FRF_SHIFT                       (16U)
#define I2S_TCSR_FRF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FRF_SHIFT)) & I2S_TCSR_FRF_MASK)
#define I2S_TCSR_FWF_MASK                        (0x20000U)
#define I2S_TCSR_FWF_SHIFT                       (17U)
#define I2S_TCSR_FWF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FWF_SHIFT)) & I2S_TCSR_FWF_MASK)
#define I2S_TCSR_FEF_MASK                        (0x40000U)
#define I2S_TCSR_FEF_SHIFT                       (18U)
#define I2S_TCSR_FEF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FEF_SHIFT)) & I2S_TCSR_FEF_MASK)
#define I2S_TCSR_SEF_MASK                        (0x80000U)
#define I2S_TCSR_SEF_SHIFT                       (19U)
#define I2S_TCSR_SEF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_SEF_SHIFT)) & I2S_TCSR_SEF_MASK)
#define I2S_TCSR_WSF_MASK                        (0x100000U)
#define I2S_TCSR_WSF_SHIFT                       (20U)
#define I2S_TCSR_WSF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_WSF_SHIFT)) & I2S_TCSR_WSF_MASK)
#define I2S_TCSR_SR_MASK                         (0x1000000U)
#define I2S_TCSR_SR_SHIFT                        (24U)
#define I2S_TCSR_SR(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_SR_SHIFT)) & I2S_TCSR_SR_MASK)
#define I2S_TCSR_FR_MASK                         (0x2000000U)
#define I2S_TCSR_FR_SHIFT                        (25U)
#define I2S_TCSR_FR(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_FR_SHIFT)) & I2S_TCSR_FR_MASK)
#define I2S_TCSR_BCE_MASK                        (0x10000000U)
#define I2S_TCSR_BCE_SHIFT                       (28U)
#define I2S_TCSR_BCE(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_BCE_SHIFT)) & I2S_TCSR_BCE_MASK)
#define I2S_TCSR_DBGE_MASK                       (0x20000000U)
#define I2S_TCSR_DBGE_SHIFT                      (29U)
#define I2S_TCSR_DBGE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_DBGE_SHIFT)) & I2S_TCSR_DBGE_MASK)
#define I2S_TCSR_STOPE_MASK                      (0x40000000U)
#define I2S_TCSR_STOPE_SHIFT                     (30U)
#define I2S_TCSR_STOPE(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_STOPE_SHIFT)) & I2S_TCSR_STOPE_MASK)
#define I2S_TCSR_TE_MASK                         (0x80000000U)
#define I2S_TCSR_TE_SHIFT                        (31U)
#define I2S_TCSR_TE(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TCSR_TE_SHIFT)) & I2S_TCSR_TE_MASK)

/*! @name TCR1 - SAI Transmit Configuration 1 Register */
#define I2S_TCR1_TFW_MASK                        (0x7U)
#define I2S_TCR1_TFW_SHIFT                       (0U)
#define I2S_TCR1_TFW(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR1_TFW_SHIFT)) & I2S_TCR1_TFW_MASK)

/*! @name TCR2 - SAI Transmit Configuration 2 Register */
#define I2S_TCR2_DIV_MASK                        (0xFFU)
#define I2S_TCR2_DIV_SHIFT                       (0U)
#define I2S_TCR2_DIV(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR2_DIV_SHIFT)) & I2S_TCR2_DIV_MASK)
#define I2S_TCR2_BCD_MASK                        (0x1000000U)
#define I2S_TCR2_BCD_SHIFT                       (24U)
#define I2S_TCR2_BCD(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR2_BCD_SHIFT)) & I2S_TCR2_BCD_MASK)
#define I2S_TCR2_BCP_MASK                        (0x2000000U)
#define I2S_TCR2_BCP_SHIFT                       (25U)
#define I2S_TCR2_BCP(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR2_BCP_SHIFT)) & I2S_TCR2_BCP_MASK)
#define I2S_TCR2_MSEL_MASK                       (0xC000000U)
#define I2S_TCR2_MSEL_SHIFT                      (26U)
#define I2S_TCR2_MSEL(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCR2_MSEL_SHIFT)) & I2S_TCR2_MSEL_MASK)
#define I2S_TCR2_BCI_MASK                        (0x10000000U)
#define I2S_TCR2_BCI_SHIFT                       (28U)
#define I2S_TCR2_BCI(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR2_BCI_SHIFT)) & I2S_TCR2_BCI_MASK)
#define I2S_TCR2_BCS_MASK                        (0x20000000U)
#define I2S_TCR2_BCS_SHIFT                       (29U)
#define I2S_TCR2_BCS(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR2_BCS_SHIFT)) & I2S_TCR2_BCS_MASK)
#define I2S_TCR2_SYNC_MASK                       (0xC0000000U)
#define I2S_TCR2_SYNC_SHIFT                      (30U)
#define I2S_TCR2_SYNC(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCR2_SYNC_SHIFT)) & I2S_TCR2_SYNC_MASK)

/*! @name TCR3 - SAI Transmit Configuration 3 Register */
#define I2S_TCR3_WDFL_MASK                       (0x1FU)
#define I2S_TCR3_WDFL_SHIFT                      (0U)
#define I2S_TCR3_WDFL(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCR3_WDFL_SHIFT)) & I2S_TCR3_WDFL_MASK)
#define I2S_TCR3_TCE_MASK                        (0x30000U)
#define I2S_TCR3_TCE_SHIFT                       (16U)
#define I2S_TCR3_TCE(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR3_TCE_SHIFT)) & I2S_TCR3_TCE_MASK)
#define I2S_TCR3_CFR_MASK                        (0x3000000U)
#define I2S_TCR3_CFR_SHIFT                       (24U)
#define I2S_TCR3_CFR(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR3_CFR_SHIFT)) & I2S_TCR3_CFR_MASK)

/*! @name TCR4 - SAI Transmit Configuration 4 Register */
#define I2S_TCR4_FSD_MASK                        (0x1U)
#define I2S_TCR4_FSD_SHIFT                       (0U)
#define I2S_TCR4_FSD(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_FSD_SHIFT)) & I2S_TCR4_FSD_MASK)
#define I2S_TCR4_FSP_MASK                        (0x2U)
#define I2S_TCR4_FSP_SHIFT                       (1U)
#define I2S_TCR4_FSP(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_FSP_SHIFT)) & I2S_TCR4_FSP_MASK)
#define I2S_TCR4_ONDEM_MASK                      (0x4U)
#define I2S_TCR4_ONDEM_SHIFT                     (2U)
#define I2S_TCR4_ONDEM(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_ONDEM_SHIFT)) & I2S_TCR4_ONDEM_MASK)
#define I2S_TCR4_FSE_MASK                        (0x8U)
#define I2S_TCR4_FSE_SHIFT                       (3U)
#define I2S_TCR4_FSE(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_FSE_SHIFT)) & I2S_TCR4_FSE_MASK)
#define I2S_TCR4_MF_MASK                         (0x10U)
#define I2S_TCR4_MF_SHIFT                        (4U)
#define I2S_TCR4_MF(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_MF_SHIFT)) & I2S_TCR4_MF_MASK)
#define I2S_TCR4_CHMOD_MASK                      (0x20U)
#define I2S_TCR4_CHMOD_SHIFT                     (5U)
#define I2S_TCR4_CHMOD(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_CHMOD_SHIFT)) & I2S_TCR4_CHMOD_MASK)
#define I2S_TCR4_SYWD_MASK                       (0x1F00U)
#define I2S_TCR4_SYWD_SHIFT                      (8U)
#define I2S_TCR4_SYWD(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_SYWD_SHIFT)) & I2S_TCR4_SYWD_MASK)
#define I2S_TCR4_FRSZ_MASK                       (0x1F0000U)
#define I2S_TCR4_FRSZ_SHIFT                      (16U)
#define I2S_TCR4_FRSZ(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_FRSZ_SHIFT)) & I2S_TCR4_FRSZ_MASK)
#define I2S_TCR4_FPACK_MASK                      (0x3000000U)
#define I2S_TCR4_FPACK_SHIFT                     (24U)
#define I2S_TCR4_FPACK(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_FPACK_SHIFT)) & I2S_TCR4_FPACK_MASK)
#define I2S_TCR4_FCOMB_MASK                      (0xC000000U)
#define I2S_TCR4_FCOMB_SHIFT                     (26U)
#define I2S_TCR4_FCOMB(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_FCOMB_SHIFT)) & I2S_TCR4_FCOMB_MASK)
#define I2S_TCR4_FCONT_MASK                      (0x10000000U)
#define I2S_TCR4_FCONT_SHIFT                     (28U)
#define I2S_TCR4_FCONT(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_TCR4_FCONT_SHIFT)) & I2S_TCR4_FCONT_MASK)

/*! @name TCR5 - SAI Transmit Configuration 5 Register */
#define I2S_TCR5_FBT_MASK                        (0x1F00U)
#define I2S_TCR5_FBT_SHIFT                       (8U)
#define I2S_TCR5_FBT(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR5_FBT_SHIFT)) & I2S_TCR5_FBT_MASK)
#define I2S_TCR5_W0W_MASK                        (0x1F0000U)
#define I2S_TCR5_W0W_SHIFT                       (16U)
#define I2S_TCR5_W0W(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR5_W0W_SHIFT)) & I2S_TCR5_W0W_MASK)
#define I2S_TCR5_WNW_MASK                        (0x1F000000U)
#define I2S_TCR5_WNW_SHIFT                       (24U)
#define I2S_TCR5_WNW(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_TCR5_WNW_SHIFT)) & I2S_TCR5_WNW_MASK)

/*! @name TDR - SAI Transmit Data Register */
#define I2S_TDR_TDR_MASK                         (0xFFFFFFFFU)
#define I2S_TDR_TDR_SHIFT                        (0U)
#define I2S_TDR_TDR(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TDR_TDR_SHIFT)) & I2S_TDR_TDR_MASK)

/* The count of I2S_TDR */
#define I2S_TDR_COUNT                            (2U)

/*! @name TFR - SAI Transmit FIFO Register */
#define I2S_TFR_RFP_MASK                         (0xFU)
#define I2S_TFR_RFP_SHIFT                        (0U)
#define I2S_TFR_RFP(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TFR_RFP_SHIFT)) & I2S_TFR_RFP_MASK)
#define I2S_TFR_WFP_MASK                         (0xF0000U)
#define I2S_TFR_WFP_SHIFT                        (16U)
#define I2S_TFR_WFP(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TFR_WFP_SHIFT)) & I2S_TFR_WFP_MASK)
#define I2S_TFR_WCP_MASK                         (0x80000000U)
#define I2S_TFR_WCP_SHIFT                        (31U)
#define I2S_TFR_WCP(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TFR_WCP_SHIFT)) & I2S_TFR_WCP_MASK)

/* The count of I2S_TFR */
#define I2S_TFR_COUNT                            (2U)

/*! @name TMR - SAI Transmit Mask Register */
#define I2S_TMR_TWM_MASK                         (0xFFFFFFFFU)
#define I2S_TMR_TWM_SHIFT                        (0U)
#define I2S_TMR_TWM(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_TMR_TWM_SHIFT)) & I2S_TMR_TWM_MASK)

/*! @name RCSR - SAI Receive Control Register */
#define I2S_RCSR_FRDE_MASK                       (0x1U)
#define I2S_RCSR_FRDE_SHIFT                      (0U)
#define I2S_RCSR_FRDE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FRDE_SHIFT)) & I2S_RCSR_FRDE_MASK)
#define I2S_RCSR_FWDE_MASK                       (0x2U)
#define I2S_RCSR_FWDE_SHIFT                      (1U)
#define I2S_RCSR_FWDE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FWDE_SHIFT)) & I2S_RCSR_FWDE_MASK)
#define I2S_RCSR_FRIE_MASK                       (0x100U)
#define I2S_RCSR_FRIE_SHIFT                      (8U)
#define I2S_RCSR_FRIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FRIE_SHIFT)) & I2S_RCSR_FRIE_MASK)
#define I2S_RCSR_FWIE_MASK                       (0x200U)
#define I2S_RCSR_FWIE_SHIFT                      (9U)
#define I2S_RCSR_FWIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FWIE_SHIFT)) & I2S_RCSR_FWIE_MASK)
#define I2S_RCSR_FEIE_MASK                       (0x400U)
#define I2S_RCSR_FEIE_SHIFT                      (10U)
#define I2S_RCSR_FEIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FEIE_SHIFT)) & I2S_RCSR_FEIE_MASK)
#define I2S_RCSR_SEIE_MASK                       (0x800U)
#define I2S_RCSR_SEIE_SHIFT                      (11U)
#define I2S_RCSR_SEIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_SEIE_SHIFT)) & I2S_RCSR_SEIE_MASK)
#define I2S_RCSR_WSIE_MASK                       (0x1000U)
#define I2S_RCSR_WSIE_SHIFT                      (12U)
#define I2S_RCSR_WSIE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_WSIE_SHIFT)) & I2S_RCSR_WSIE_MASK)
#define I2S_RCSR_FRF_MASK                        (0x10000U)
#define I2S_RCSR_FRF_SHIFT                       (16U)
#define I2S_RCSR_FRF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FRF_SHIFT)) & I2S_RCSR_FRF_MASK)
#define I2S_RCSR_FWF_MASK                        (0x20000U)
#define I2S_RCSR_FWF_SHIFT                       (17U)
#define I2S_RCSR_FWF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FWF_SHIFT)) & I2S_RCSR_FWF_MASK)
#define I2S_RCSR_FEF_MASK                        (0x40000U)
#define I2S_RCSR_FEF_SHIFT                       (18U)
#define I2S_RCSR_FEF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FEF_SHIFT)) & I2S_RCSR_FEF_MASK)
#define I2S_RCSR_SEF_MASK                        (0x80000U)
#define I2S_RCSR_SEF_SHIFT                       (19U)
#define I2S_RCSR_SEF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_SEF_SHIFT)) & I2S_RCSR_SEF_MASK)
#define I2S_RCSR_WSF_MASK                        (0x100000U)
#define I2S_RCSR_WSF_SHIFT                       (20U)
#define I2S_RCSR_WSF(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_WSF_SHIFT)) & I2S_RCSR_WSF_MASK)
#define I2S_RCSR_SR_MASK                         (0x1000000U)
#define I2S_RCSR_SR_SHIFT                        (24U)
#define I2S_RCSR_SR(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_SR_SHIFT)) & I2S_RCSR_SR_MASK)
#define I2S_RCSR_FR_MASK                         (0x2000000U)
#define I2S_RCSR_FR_SHIFT                        (25U)
#define I2S_RCSR_FR(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_FR_SHIFT)) & I2S_RCSR_FR_MASK)
#define I2S_RCSR_BCE_MASK                        (0x10000000U)
#define I2S_RCSR_BCE_SHIFT                       (28U)
#define I2S_RCSR_BCE(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_BCE_SHIFT)) & I2S_RCSR_BCE_MASK)
#define I2S_RCSR_DBGE_MASK                       (0x20000000U)
#define I2S_RCSR_DBGE_SHIFT                      (29U)
#define I2S_RCSR_DBGE(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_DBGE_SHIFT)) & I2S_RCSR_DBGE_MASK)
#define I2S_RCSR_STOPE_MASK                      (0x40000000U)
#define I2S_RCSR_STOPE_SHIFT                     (30U)
#define I2S_RCSR_STOPE(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_STOPE_SHIFT)) & I2S_RCSR_STOPE_MASK)
#define I2S_RCSR_RE_MASK                         (0x80000000U)
#define I2S_RCSR_RE_SHIFT                        (31U)
#define I2S_RCSR_RE(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RCSR_RE_SHIFT)) & I2S_RCSR_RE_MASK)

/*! @name RCR1 - SAI Receive Configuration 1 Register */
#define I2S_RCR1_RFW_MASK                        (0x7U)
#define I2S_RCR1_RFW_SHIFT                       (0U)
#define I2S_RCR1_RFW(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR1_RFW_SHIFT)) & I2S_RCR1_RFW_MASK)

/*! @name RCR2 - SAI Receive Configuration 2 Register */
#define I2S_RCR2_DIV_MASK                        (0xFFU)
#define I2S_RCR2_DIV_SHIFT                       (0U)
#define I2S_RCR2_DIV(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR2_DIV_SHIFT)) & I2S_RCR2_DIV_MASK)
#define I2S_RCR2_BCD_MASK                        (0x1000000U)
#define I2S_RCR2_BCD_SHIFT                       (24U)
#define I2S_RCR2_BCD(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR2_BCD_SHIFT)) & I2S_RCR2_BCD_MASK)
#define I2S_RCR2_BCP_MASK                        (0x2000000U)
#define I2S_RCR2_BCP_SHIFT                       (25U)
#define I2S_RCR2_BCP(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR2_BCP_SHIFT)) & I2S_RCR2_BCP_MASK)
#define I2S_RCR2_MSEL_MASK                       (0xC000000U)
#define I2S_RCR2_MSEL_SHIFT                      (26U)
#define I2S_RCR2_MSEL(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCR2_MSEL_SHIFT)) & I2S_RCR2_MSEL_MASK)
#define I2S_RCR2_BCI_MASK                        (0x10000000U)
#define I2S_RCR2_BCI_SHIFT                       (28U)
#define I2S_RCR2_BCI(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR2_BCI_SHIFT)) & I2S_RCR2_BCI_MASK)
#define I2S_RCR2_BCS_MASK                        (0x20000000U)
#define I2S_RCR2_BCS_SHIFT                       (29U)
#define I2S_RCR2_BCS(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR2_BCS_SHIFT)) & I2S_RCR2_BCS_MASK)
#define I2S_RCR2_SYNC_MASK                       (0xC0000000U)
#define I2S_RCR2_SYNC_SHIFT                      (30U)
#define I2S_RCR2_SYNC(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCR2_SYNC_SHIFT)) & I2S_RCR2_SYNC_MASK)

/*! @name RCR3 - SAI Receive Configuration 3 Register */
#define I2S_RCR3_WDFL_MASK                       (0x1FU)
#define I2S_RCR3_WDFL_SHIFT                      (0U)
#define I2S_RCR3_WDFL(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCR3_WDFL_SHIFT)) & I2S_RCR3_WDFL_MASK)
#define I2S_RCR3_RCE_MASK                        (0x30000U)
#define I2S_RCR3_RCE_SHIFT                       (16U)
#define I2S_RCR3_RCE(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR3_RCE_SHIFT)) & I2S_RCR3_RCE_MASK)
#define I2S_RCR3_CFR_MASK                        (0x3000000U)
#define I2S_RCR3_CFR_SHIFT                       (24U)
#define I2S_RCR3_CFR(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR3_CFR_SHIFT)) & I2S_RCR3_CFR_MASK)

/*! @name RCR4 - SAI Receive Configuration 4 Register */
#define I2S_RCR4_FSD_MASK                        (0x1U)
#define I2S_RCR4_FSD_SHIFT                       (0U)
#define I2S_RCR4_FSD(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_FSD_SHIFT)) & I2S_RCR4_FSD_MASK)
#define I2S_RCR4_FSP_MASK                        (0x2U)
#define I2S_RCR4_FSP_SHIFT                       (1U)
#define I2S_RCR4_FSP(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_FSP_SHIFT)) & I2S_RCR4_FSP_MASK)
#define I2S_RCR4_ONDEM_MASK                      (0x4U)
#define I2S_RCR4_ONDEM_SHIFT                     (2U)
#define I2S_RCR4_ONDEM(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_ONDEM_SHIFT)) & I2S_RCR4_ONDEM_MASK)
#define I2S_RCR4_FSE_MASK                        (0x8U)
#define I2S_RCR4_FSE_SHIFT                       (3U)
#define I2S_RCR4_FSE(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_FSE_SHIFT)) & I2S_RCR4_FSE_MASK)
#define I2S_RCR4_MF_MASK                         (0x10U)
#define I2S_RCR4_MF_SHIFT                        (4U)
#define I2S_RCR4_MF(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_MF_SHIFT)) & I2S_RCR4_MF_MASK)
#define I2S_RCR4_SYWD_MASK                       (0x1F00U)
#define I2S_RCR4_SYWD_SHIFT                      (8U)
#define I2S_RCR4_SYWD(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_SYWD_SHIFT)) & I2S_RCR4_SYWD_MASK)
#define I2S_RCR4_FRSZ_MASK                       (0x1F0000U)
#define I2S_RCR4_FRSZ_SHIFT                      (16U)
#define I2S_RCR4_FRSZ(x)                         (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_FRSZ_SHIFT)) & I2S_RCR4_FRSZ_MASK)
#define I2S_RCR4_FPACK_MASK                      (0x3000000U)
#define I2S_RCR4_FPACK_SHIFT                     (24U)
#define I2S_RCR4_FPACK(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_FPACK_SHIFT)) & I2S_RCR4_FPACK_MASK)
#define I2S_RCR4_FCOMB_MASK                      (0xC000000U)
#define I2S_RCR4_FCOMB_SHIFT                     (26U)
#define I2S_RCR4_FCOMB(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_FCOMB_SHIFT)) & I2S_RCR4_FCOMB_MASK)
#define I2S_RCR4_FCONT_MASK                      (0x10000000U)
#define I2S_RCR4_FCONT_SHIFT                     (28U)
#define I2S_RCR4_FCONT(x)                        (((uint32_t)(((uint32_t)(x)) << I2S_RCR4_FCONT_SHIFT)) & I2S_RCR4_FCONT_MASK)

/*! @name RCR5 - SAI Receive Configuration 5 Register */
#define I2S_RCR5_FBT_MASK                        (0x1F00U)
#define I2S_RCR5_FBT_SHIFT                       (8U)
#define I2S_RCR5_FBT(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR5_FBT_SHIFT)) & I2S_RCR5_FBT_MASK)
#define I2S_RCR5_W0W_MASK                        (0x1F0000U)
#define I2S_RCR5_W0W_SHIFT                       (16U)
#define I2S_RCR5_W0W(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR5_W0W_SHIFT)) & I2S_RCR5_W0W_MASK)
#define I2S_RCR5_WNW_MASK                        (0x1F000000U)
#define I2S_RCR5_WNW_SHIFT                       (24U)
#define I2S_RCR5_WNW(x)                          (((uint32_t)(((uint32_t)(x)) << I2S_RCR5_WNW_SHIFT)) & I2S_RCR5_WNW_MASK)

/*! @name RDR - SAI Receive Data Register */
#define I2S_RDR_RDR_MASK                         (0xFFFFFFFFU)
#define I2S_RDR_RDR_SHIFT                        (0U)
#define I2S_RDR_RDR(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RDR_RDR_SHIFT)) & I2S_RDR_RDR_MASK)

/* The count of I2S_RDR */
#define I2S_RDR_COUNT                            (2U)

/*! @name RFR - SAI Receive FIFO Register */
#define I2S_RFR_RFP_MASK                         (0xFU)
#define I2S_RFR_RFP_SHIFT                        (0U)
#define I2S_RFR_RFP(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RFR_RFP_SHIFT)) & I2S_RFR_RFP_MASK)
#define I2S_RFR_RCP_MASK                         (0x8000U)
#define I2S_RFR_RCP_SHIFT                        (15U)
#define I2S_RFR_RCP(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RFR_RCP_SHIFT)) & I2S_RFR_RCP_MASK)
#define I2S_RFR_WFP_MASK                         (0xF0000U)
#define I2S_RFR_WFP_SHIFT                        (16U)
#define I2S_RFR_WFP(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RFR_WFP_SHIFT)) & I2S_RFR_WFP_MASK)

/* The count of I2S_RFR */
#define I2S_RFR_COUNT                            (2U)

/*! @name RMR - SAI Receive Mask Register */
#define I2S_RMR_RWM_MASK                         (0xFFFFFFFFU)
#define I2S_RMR_RWM_SHIFT                        (0U)
#define I2S_RMR_RWM(x)                           (((uint32_t)(((uint32_t)(x)) << I2S_RMR_RWM_SHIFT)) & I2S_RMR_RWM_MASK)


/*!
 * @}
 */ /* end of group I2S_Register_Masks */


/* I2S - Peripheral instance base addresses */
/** Peripheral I2S0 base address */
#define I2S0_BASE                                (0x4003D000u)
/** Peripheral I2S0 base pointer */
#define I2S0                                     ((I2S_Type *)I2S0_BASE)
/** Array initializer of I2S peripheral base addresses */
#define I2S_BASE_ADDRS                           { I2S0_BASE }
/** Array initializer of I2S peripheral base pointers */
#define I2S_BASE_PTRS                            { I2S0 }
/** Interrupt vectors for the I2S peripheral type */
#define I2S_RX_IRQS                              { I2S0_IRQn }
#define I2S_TX_IRQS                              { I2S0_IRQn }

/*!
 * @}
 */ /* end of group I2S_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LLWU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LLWU_Peripheral_Access_Layer LLWU Peripheral Access Layer
 * @{
 */

/** LLWU - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t PE1;                               /**< Pin Enable 1 register, offset: 0x8 */
  __IO uint32_t PE2;                               /**< Pin Enable 2 register, offset: 0xC */
       uint8_t RESERVED_0[8];
  __IO uint32_t ME;                                /**< Module Interrupt Enable register, offset: 0x18 */
  __IO uint32_t DE;                                /**< Module DMA/Trigger Enable register, offset: 0x1C */
  __IO uint32_t PF;                                /**< Pin Flag register, offset: 0x20 */
       uint8_t RESERVED_1[12];
  __IO uint32_t FILT;                              /**< Pin Filter register, offset: 0x30 */
       uint8_t RESERVED_2[4];
  __IO uint32_t PDC1;                              /**< Pin DMA/Trigger Configuration 1 register, offset: 0x38 */
  __IO uint32_t PDC2;                              /**< Pin DMA/Trigger Configuration 2 register, offset: 0x3C */
       uint8_t RESERVED_3[8];
  __IO uint32_t FDC;                               /**< Pin Filter DMA/Trigger Configuration register, offset: 0x48 */
       uint8_t RESERVED_4[4];
  __IO uint32_t PMC;                               /**< Pin Mode Configuration register, offset: 0x50 */
       uint8_t RESERVED_5[4];
  __IO uint32_t FMC;                               /**< Pin Filter Mode Configuration register, offset: 0x58 */
} LLWU_Type;

/* ----------------------------------------------------------------------------
   -- LLWU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LLWU_Register_Masks LLWU Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define LLWU_VERID_FEATURE_MASK                  (0xFFFFU)
#define LLWU_VERID_FEATURE_SHIFT                 (0U)
#define LLWU_VERID_FEATURE(x)                    (((uint32_t)(((uint32_t)(x)) << LLWU_VERID_FEATURE_SHIFT)) & LLWU_VERID_FEATURE_MASK)
#define LLWU_VERID_MINOR_MASK                    (0xFF0000U)
#define LLWU_VERID_MINOR_SHIFT                   (16U)
#define LLWU_VERID_MINOR(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_VERID_MINOR_SHIFT)) & LLWU_VERID_MINOR_MASK)
#define LLWU_VERID_MAJOR_MASK                    (0xFF000000U)
#define LLWU_VERID_MAJOR_SHIFT                   (24U)
#define LLWU_VERID_MAJOR(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_VERID_MAJOR_SHIFT)) & LLWU_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define LLWU_PARAM_FILTERS_MASK                  (0xFFU)
#define LLWU_PARAM_FILTERS_SHIFT                 (0U)
#define LLWU_PARAM_FILTERS(x)                    (((uint32_t)(((uint32_t)(x)) << LLWU_PARAM_FILTERS_SHIFT)) & LLWU_PARAM_FILTERS_MASK)
#define LLWU_PARAM_DMAS_MASK                     (0xFF00U)
#define LLWU_PARAM_DMAS_SHIFT                    (8U)
#define LLWU_PARAM_DMAS(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PARAM_DMAS_SHIFT)) & LLWU_PARAM_DMAS_MASK)
#define LLWU_PARAM_MODULES_MASK                  (0xFF0000U)
#define LLWU_PARAM_MODULES_SHIFT                 (16U)
#define LLWU_PARAM_MODULES(x)                    (((uint32_t)(((uint32_t)(x)) << LLWU_PARAM_MODULES_SHIFT)) & LLWU_PARAM_MODULES_MASK)
#define LLWU_PARAM_PINS_MASK                     (0xFF000000U)
#define LLWU_PARAM_PINS_SHIFT                    (24U)
#define LLWU_PARAM_PINS(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PARAM_PINS_SHIFT)) & LLWU_PARAM_PINS_MASK)

/*! @name PE1 - Pin Enable 1 register */
#define LLWU_PE1_WUPE0_MASK                      (0x3U)
#define LLWU_PE1_WUPE0_SHIFT                     (0U)
#define LLWU_PE1_WUPE0(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE0_SHIFT)) & LLWU_PE1_WUPE0_MASK)
#define LLWU_PE1_WUPE1_MASK                      (0xCU)
#define LLWU_PE1_WUPE1_SHIFT                     (2U)
#define LLWU_PE1_WUPE1(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE1_SHIFT)) & LLWU_PE1_WUPE1_MASK)
#define LLWU_PE1_WUPE2_MASK                      (0x30U)
#define LLWU_PE1_WUPE2_SHIFT                     (4U)
#define LLWU_PE1_WUPE2(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE2_SHIFT)) & LLWU_PE1_WUPE2_MASK)
#define LLWU_PE1_WUPE3_MASK                      (0xC0U)
#define LLWU_PE1_WUPE3_SHIFT                     (6U)
#define LLWU_PE1_WUPE3(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE3_SHIFT)) & LLWU_PE1_WUPE3_MASK)
#define LLWU_PE1_WUPE4_MASK                      (0x300U)
#define LLWU_PE1_WUPE4_SHIFT                     (8U)
#define LLWU_PE1_WUPE4(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE4_SHIFT)) & LLWU_PE1_WUPE4_MASK)
#define LLWU_PE1_WUPE5_MASK                      (0xC00U)
#define LLWU_PE1_WUPE5_SHIFT                     (10U)
#define LLWU_PE1_WUPE5(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE5_SHIFT)) & LLWU_PE1_WUPE5_MASK)
#define LLWU_PE1_WUPE6_MASK                      (0x3000U)
#define LLWU_PE1_WUPE6_SHIFT                     (12U)
#define LLWU_PE1_WUPE6(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE6_SHIFT)) & LLWU_PE1_WUPE6_MASK)
#define LLWU_PE1_WUPE7_MASK                      (0xC000U)
#define LLWU_PE1_WUPE7_SHIFT                     (14U)
#define LLWU_PE1_WUPE7(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE7_SHIFT)) & LLWU_PE1_WUPE7_MASK)
#define LLWU_PE1_WUPE8_MASK                      (0x30000U)
#define LLWU_PE1_WUPE8_SHIFT                     (16U)
#define LLWU_PE1_WUPE8(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE8_SHIFT)) & LLWU_PE1_WUPE8_MASK)
#define LLWU_PE1_WUPE9_MASK                      (0xC0000U)
#define LLWU_PE1_WUPE9_SHIFT                     (18U)
#define LLWU_PE1_WUPE9(x)                        (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE9_SHIFT)) & LLWU_PE1_WUPE9_MASK)
#define LLWU_PE1_WUPE10_MASK                     (0x300000U)
#define LLWU_PE1_WUPE10_SHIFT                    (20U)
#define LLWU_PE1_WUPE10(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE10_SHIFT)) & LLWU_PE1_WUPE10_MASK)
#define LLWU_PE1_WUPE11_MASK                     (0xC00000U)
#define LLWU_PE1_WUPE11_SHIFT                    (22U)
#define LLWU_PE1_WUPE11(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE11_SHIFT)) & LLWU_PE1_WUPE11_MASK)
#define LLWU_PE1_WUPE12_MASK                     (0x3000000U)
#define LLWU_PE1_WUPE12_SHIFT                    (24U)
#define LLWU_PE1_WUPE12(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE12_SHIFT)) & LLWU_PE1_WUPE12_MASK)
#define LLWU_PE1_WUPE13_MASK                     (0xC000000U)
#define LLWU_PE1_WUPE13_SHIFT                    (26U)
#define LLWU_PE1_WUPE13(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE13_SHIFT)) & LLWU_PE1_WUPE13_MASK)
#define LLWU_PE1_WUPE14_MASK                     (0x30000000U)
#define LLWU_PE1_WUPE14_SHIFT                    (28U)
#define LLWU_PE1_WUPE14(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE14_SHIFT)) & LLWU_PE1_WUPE14_MASK)
#define LLWU_PE1_WUPE15_MASK                     (0xC0000000U)
#define LLWU_PE1_WUPE15_SHIFT                    (30U)
#define LLWU_PE1_WUPE15(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE1_WUPE15_SHIFT)) & LLWU_PE1_WUPE15_MASK)

/*! @name PE2 - Pin Enable 2 register */
#define LLWU_PE2_WUPE16_MASK                     (0x3U)
#define LLWU_PE2_WUPE16_SHIFT                    (0U)
#define LLWU_PE2_WUPE16(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE16_SHIFT)) & LLWU_PE2_WUPE16_MASK)
#define LLWU_PE2_WUPE17_MASK                     (0xCU)
#define LLWU_PE2_WUPE17_SHIFT                    (2U)
#define LLWU_PE2_WUPE17(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE17_SHIFT)) & LLWU_PE2_WUPE17_MASK)
#define LLWU_PE2_WUPE18_MASK                     (0x30U)
#define LLWU_PE2_WUPE18_SHIFT                    (4U)
#define LLWU_PE2_WUPE18(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE18_SHIFT)) & LLWU_PE2_WUPE18_MASK)
#define LLWU_PE2_WUPE19_MASK                     (0xC0U)
#define LLWU_PE2_WUPE19_SHIFT                    (6U)
#define LLWU_PE2_WUPE19(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE19_SHIFT)) & LLWU_PE2_WUPE19_MASK)
#define LLWU_PE2_WUPE20_MASK                     (0x300U)
#define LLWU_PE2_WUPE20_SHIFT                    (8U)
#define LLWU_PE2_WUPE20(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE20_SHIFT)) & LLWU_PE2_WUPE20_MASK)
#define LLWU_PE2_WUPE21_MASK                     (0xC00U)
#define LLWU_PE2_WUPE21_SHIFT                    (10U)
#define LLWU_PE2_WUPE21(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE21_SHIFT)) & LLWU_PE2_WUPE21_MASK)
#define LLWU_PE2_WUPE22_MASK                     (0x3000U)
#define LLWU_PE2_WUPE22_SHIFT                    (12U)
#define LLWU_PE2_WUPE22(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE22_SHIFT)) & LLWU_PE2_WUPE22_MASK)
#define LLWU_PE2_WUPE23_MASK                     (0xC000U)
#define LLWU_PE2_WUPE23_SHIFT                    (14U)
#define LLWU_PE2_WUPE23(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE23_SHIFT)) & LLWU_PE2_WUPE23_MASK)
#define LLWU_PE2_WUPE24_MASK                     (0x30000U)
#define LLWU_PE2_WUPE24_SHIFT                    (16U)
#define LLWU_PE2_WUPE24(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE24_SHIFT)) & LLWU_PE2_WUPE24_MASK)
#define LLWU_PE2_WUPE25_MASK                     (0xC0000U)
#define LLWU_PE2_WUPE25_SHIFT                    (18U)
#define LLWU_PE2_WUPE25(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE25_SHIFT)) & LLWU_PE2_WUPE25_MASK)
#define LLWU_PE2_WUPE26_MASK                     (0x300000U)
#define LLWU_PE2_WUPE26_SHIFT                    (20U)
#define LLWU_PE2_WUPE26(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE26_SHIFT)) & LLWU_PE2_WUPE26_MASK)
#define LLWU_PE2_Reserved27_MASK                 (0xC00000U)
#define LLWU_PE2_Reserved27_SHIFT                (22U)
#define LLWU_PE2_Reserved27(x)                   (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_Reserved27_SHIFT)) & LLWU_PE2_Reserved27_MASK)
#define LLWU_PE2_Reserved28_MASK                 (0x3000000U)
#define LLWU_PE2_Reserved28_SHIFT                (24U)
#define LLWU_PE2_Reserved28(x)                   (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_Reserved28_SHIFT)) & LLWU_PE2_Reserved28_MASK)
#define LLWU_PE2_WUPE29_MASK                     (0xC000000U)
#define LLWU_PE2_WUPE29_SHIFT                    (26U)
#define LLWU_PE2_WUPE29(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE29_SHIFT)) & LLWU_PE2_WUPE29_MASK)
#define LLWU_PE2_WUPE30_MASK                     (0x30000000U)
#define LLWU_PE2_WUPE30_SHIFT                    (28U)
#define LLWU_PE2_WUPE30(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE30_SHIFT)) & LLWU_PE2_WUPE30_MASK)
#define LLWU_PE2_WUPE31_MASK                     (0xC0000000U)
#define LLWU_PE2_WUPE31_SHIFT                    (30U)
#define LLWU_PE2_WUPE31(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PE2_WUPE31_SHIFT)) & LLWU_PE2_WUPE31_MASK)

/*! @name ME - Module Interrupt Enable register */
#define LLWU_ME_WUME0_MASK                       (0x1U)
#define LLWU_ME_WUME0_SHIFT                      (0U)
#define LLWU_ME_WUME0(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_ME_WUME0_SHIFT)) & LLWU_ME_WUME0_MASK)
#define LLWU_ME_WUME1_MASK                       (0x2U)
#define LLWU_ME_WUME1_SHIFT                      (1U)
#define LLWU_ME_WUME1(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_ME_WUME1_SHIFT)) & LLWU_ME_WUME1_MASK)
#define LLWU_ME_WUME2_MASK                       (0x4U)
#define LLWU_ME_WUME2_SHIFT                      (2U)
#define LLWU_ME_WUME2(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_ME_WUME2_SHIFT)) & LLWU_ME_WUME2_MASK)
#define LLWU_ME_Reserved3_MASK                   (0x8U)
#define LLWU_ME_Reserved3_SHIFT                  (3U)
#define LLWU_ME_Reserved3(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_ME_Reserved3_SHIFT)) & LLWU_ME_Reserved3_MASK)
#define LLWU_ME_WUME3_MASK                       (0x8U)
#define LLWU_ME_WUME3_SHIFT                      (3U)
#define LLWU_ME_WUME3(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_ME_WUME3_SHIFT)) & LLWU_ME_WUME3_MASK)
#define LLWU_ME_Reserved4_MASK                   (0x10U)
#define LLWU_ME_Reserved4_SHIFT                  (4U)
#define LLWU_ME_Reserved4(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_ME_Reserved4_SHIFT)) & LLWU_ME_Reserved4_MASK)
#define LLWU_ME_WUME5_MASK                       (0x20U)
#define LLWU_ME_WUME5_SHIFT                      (5U)
#define LLWU_ME_WUME5(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_ME_WUME5_SHIFT)) & LLWU_ME_WUME5_MASK)
#define LLWU_ME_WUME6_MASK                       (0x40U)
#define LLWU_ME_WUME6_SHIFT                      (6U)
#define LLWU_ME_WUME6(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_ME_WUME6_SHIFT)) & LLWU_ME_WUME6_MASK)
#define LLWU_ME_WUME7_MASK                       (0x80U)
#define LLWU_ME_WUME7_SHIFT                      (7U)
#define LLWU_ME_WUME7(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_ME_WUME7_SHIFT)) & LLWU_ME_WUME7_MASK)

/*! @name DE - Module DMA/Trigger Enable register */
#define LLWU_DE_WUDE0_MASK                       (0x1U)
#define LLWU_DE_WUDE0_SHIFT                      (0U)
#define LLWU_DE_WUDE0(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_DE_WUDE0_SHIFT)) & LLWU_DE_WUDE0_MASK)
#define LLWU_DE_WUDE1_MASK                       (0x2U)
#define LLWU_DE_WUDE1_SHIFT                      (1U)
#define LLWU_DE_WUDE1(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_DE_WUDE1_SHIFT)) & LLWU_DE_WUDE1_MASK)
#define LLWU_DE_WUDE2_MASK                       (0x4U)
#define LLWU_DE_WUDE2_SHIFT                      (2U)
#define LLWU_DE_WUDE2(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_DE_WUDE2_SHIFT)) & LLWU_DE_WUDE2_MASK)
#define LLWU_DE_Reserved3_MASK                   (0x8U)
#define LLWU_DE_Reserved3_SHIFT                  (3U)
#define LLWU_DE_Reserved3(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_DE_Reserved3_SHIFT)) & LLWU_DE_Reserved3_MASK)
#define LLWU_DE_WUDE4_MASK                       (0x10U)
#define LLWU_DE_WUDE4_SHIFT                      (4U)
#define LLWU_DE_WUDE4(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_DE_WUDE4_SHIFT)) & LLWU_DE_WUDE4_MASK)
#define LLWU_DE_WUDE5_MASK                       (0x20U)
#define LLWU_DE_WUDE5_SHIFT                      (5U)
#define LLWU_DE_WUDE5(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_DE_WUDE5_SHIFT)) & LLWU_DE_WUDE5_MASK)
#define LLWU_DE_WUDE6_MASK                       (0x40U)
#define LLWU_DE_WUDE6_SHIFT                      (6U)
#define LLWU_DE_WUDE6(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_DE_WUDE6_SHIFT)) & LLWU_DE_WUDE6_MASK)
#define LLWU_DE_Reserved7_MASK                   (0x80U)
#define LLWU_DE_Reserved7_SHIFT                  (7U)
#define LLWU_DE_Reserved7(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_DE_Reserved7_SHIFT)) & LLWU_DE_Reserved7_MASK)

/*! @name PF - Pin Flag register */
#define LLWU_PF_WUF0_MASK                        (0x1U)
#define LLWU_PF_WUF0_SHIFT                       (0U)
#define LLWU_PF_WUF0(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF0_SHIFT)) & LLWU_PF_WUF0_MASK)
#define LLWU_PF_WUF1_MASK                        (0x2U)
#define LLWU_PF_WUF1_SHIFT                       (1U)
#define LLWU_PF_WUF1(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF1_SHIFT)) & LLWU_PF_WUF1_MASK)
#define LLWU_PF_WUF2_MASK                        (0x4U)
#define LLWU_PF_WUF2_SHIFT                       (2U)
#define LLWU_PF_WUF2(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF2_SHIFT)) & LLWU_PF_WUF2_MASK)
#define LLWU_PF_WUF3_MASK                        (0x8U)
#define LLWU_PF_WUF3_SHIFT                       (3U)
#define LLWU_PF_WUF3(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF3_SHIFT)) & LLWU_PF_WUF3_MASK)
#define LLWU_PF_WUF4_MASK                        (0x10U)
#define LLWU_PF_WUF4_SHIFT                       (4U)
#define LLWU_PF_WUF4(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF4_SHIFT)) & LLWU_PF_WUF4_MASK)
#define LLWU_PF_WUF5_MASK                        (0x20U)
#define LLWU_PF_WUF5_SHIFT                       (5U)
#define LLWU_PF_WUF5(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF5_SHIFT)) & LLWU_PF_WUF5_MASK)
#define LLWU_PF_WUF6_MASK                        (0x40U)
#define LLWU_PF_WUF6_SHIFT                       (6U)
#define LLWU_PF_WUF6(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF6_SHIFT)) & LLWU_PF_WUF6_MASK)
#define LLWU_PF_WUF7_MASK                        (0x80U)
#define LLWU_PF_WUF7_SHIFT                       (7U)
#define LLWU_PF_WUF7(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF7_SHIFT)) & LLWU_PF_WUF7_MASK)
#define LLWU_PF_WUF8_MASK                        (0x100U)
#define LLWU_PF_WUF8_SHIFT                       (8U)
#define LLWU_PF_WUF8(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF8_SHIFT)) & LLWU_PF_WUF8_MASK)
#define LLWU_PF_WUF9_MASK                        (0x200U)
#define LLWU_PF_WUF9_SHIFT                       (9U)
#define LLWU_PF_WUF9(x)                          (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF9_SHIFT)) & LLWU_PF_WUF9_MASK)
#define LLWU_PF_WUF10_MASK                       (0x400U)
#define LLWU_PF_WUF10_SHIFT                      (10U)
#define LLWU_PF_WUF10(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF10_SHIFT)) & LLWU_PF_WUF10_MASK)
#define LLWU_PF_WUF11_MASK                       (0x800U)
#define LLWU_PF_WUF11_SHIFT                      (11U)
#define LLWU_PF_WUF11(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF11_SHIFT)) & LLWU_PF_WUF11_MASK)
#define LLWU_PF_WUF12_MASK                       (0x1000U)
#define LLWU_PF_WUF12_SHIFT                      (12U)
#define LLWU_PF_WUF12(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF12_SHIFT)) & LLWU_PF_WUF12_MASK)
#define LLWU_PF_WUF13_MASK                       (0x2000U)
#define LLWU_PF_WUF13_SHIFT                      (13U)
#define LLWU_PF_WUF13(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF13_SHIFT)) & LLWU_PF_WUF13_MASK)
#define LLWU_PF_WUF14_MASK                       (0x4000U)
#define LLWU_PF_WUF14_SHIFT                      (14U)
#define LLWU_PF_WUF14(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF14_SHIFT)) & LLWU_PF_WUF14_MASK)
#define LLWU_PF_WUF15_MASK                       (0x8000U)
#define LLWU_PF_WUF15_SHIFT                      (15U)
#define LLWU_PF_WUF15(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF15_SHIFT)) & LLWU_PF_WUF15_MASK)
#define LLWU_PF_WUF16_MASK                       (0x10000U)
#define LLWU_PF_WUF16_SHIFT                      (16U)
#define LLWU_PF_WUF16(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF16_SHIFT)) & LLWU_PF_WUF16_MASK)
#define LLWU_PF_WUF17_MASK                       (0x20000U)
#define LLWU_PF_WUF17_SHIFT                      (17U)
#define LLWU_PF_WUF17(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF17_SHIFT)) & LLWU_PF_WUF17_MASK)
#define LLWU_PF_WUF18_MASK                       (0x40000U)
#define LLWU_PF_WUF18_SHIFT                      (18U)
#define LLWU_PF_WUF18(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF18_SHIFT)) & LLWU_PF_WUF18_MASK)
#define LLWU_PF_WUF19_MASK                       (0x80000U)
#define LLWU_PF_WUF19_SHIFT                      (19U)
#define LLWU_PF_WUF19(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF19_SHIFT)) & LLWU_PF_WUF19_MASK)
#define LLWU_PF_WUF20_MASK                       (0x100000U)
#define LLWU_PF_WUF20_SHIFT                      (20U)
#define LLWU_PF_WUF20(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF20_SHIFT)) & LLWU_PF_WUF20_MASK)
#define LLWU_PF_WUF21_MASK                       (0x200000U)
#define LLWU_PF_WUF21_SHIFT                      (21U)
#define LLWU_PF_WUF21(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF21_SHIFT)) & LLWU_PF_WUF21_MASK)
#define LLWU_PF_WUF22_MASK                       (0x400000U)
#define LLWU_PF_WUF22_SHIFT                      (22U)
#define LLWU_PF_WUF22(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF22_SHIFT)) & LLWU_PF_WUF22_MASK)
#define LLWU_PF_WUF23_MASK                       (0x800000U)
#define LLWU_PF_WUF23_SHIFT                      (23U)
#define LLWU_PF_WUF23(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF23_SHIFT)) & LLWU_PF_WUF23_MASK)
#define LLWU_PF_WUF24_MASK                       (0x1000000U)
#define LLWU_PF_WUF24_SHIFT                      (24U)
#define LLWU_PF_WUF24(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF24_SHIFT)) & LLWU_PF_WUF24_MASK)
#define LLWU_PF_WUF25_MASK                       (0x2000000U)
#define LLWU_PF_WUF25_SHIFT                      (25U)
#define LLWU_PF_WUF25(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF25_SHIFT)) & LLWU_PF_WUF25_MASK)
#define LLWU_PF_WUF26_MASK                       (0x4000000U)
#define LLWU_PF_WUF26_SHIFT                      (26U)
#define LLWU_PF_WUF26(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF26_SHIFT)) & LLWU_PF_WUF26_MASK)
#define LLWU_PF_Reserved27_MASK                  (0x8000000U)
#define LLWU_PF_Reserved27_SHIFT                 (27U)
#define LLWU_PF_Reserved27(x)                    (((uint32_t)(((uint32_t)(x)) << LLWU_PF_Reserved27_SHIFT)) & LLWU_PF_Reserved27_MASK)
#define LLWU_PF_Reserved28_MASK                  (0x10000000U)
#define LLWU_PF_Reserved28_SHIFT                 (28U)
#define LLWU_PF_Reserved28(x)                    (((uint32_t)(((uint32_t)(x)) << LLWU_PF_Reserved28_SHIFT)) & LLWU_PF_Reserved28_MASK)
#define LLWU_PF_WUF29_MASK                       (0x20000000U)
#define LLWU_PF_WUF29_SHIFT                      (29U)
#define LLWU_PF_WUF29(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF29_SHIFT)) & LLWU_PF_WUF29_MASK)
#define LLWU_PF_WUF30_MASK                       (0x40000000U)
#define LLWU_PF_WUF30_SHIFT                      (30U)
#define LLWU_PF_WUF30(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF30_SHIFT)) & LLWU_PF_WUF30_MASK)
#define LLWU_PF_WUF31_MASK                       (0x80000000U)
#define LLWU_PF_WUF31_SHIFT                      (31U)
#define LLWU_PF_WUF31(x)                         (((uint32_t)(((uint32_t)(x)) << LLWU_PF_WUF31_SHIFT)) & LLWU_PF_WUF31_MASK)

/*! @name FILT - Pin Filter register */
#define LLWU_FILT_FILTSEL1_MASK                  (0x1FU)
#define LLWU_FILT_FILTSEL1_SHIFT                 (0U)
#define LLWU_FILT_FILTSEL1(x)                    (((uint32_t)(((uint32_t)(x)) << LLWU_FILT_FILTSEL1_SHIFT)) & LLWU_FILT_FILTSEL1_MASK)
#define LLWU_FILT_FILTE1_MASK                    (0x60U)
#define LLWU_FILT_FILTE1_SHIFT                   (5U)
#define LLWU_FILT_FILTE1(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_FILT_FILTE1_SHIFT)) & LLWU_FILT_FILTE1_MASK)
#define LLWU_FILT_FILTF1_MASK                    (0x80U)
#define LLWU_FILT_FILTF1_SHIFT                   (7U)
#define LLWU_FILT_FILTF1(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_FILT_FILTF1_SHIFT)) & LLWU_FILT_FILTF1_MASK)
#define LLWU_FILT_FILTSEL2_MASK                  (0x1F00U)
#define LLWU_FILT_FILTSEL2_SHIFT                 (8U)
#define LLWU_FILT_FILTSEL2(x)                    (((uint32_t)(((uint32_t)(x)) << LLWU_FILT_FILTSEL2_SHIFT)) & LLWU_FILT_FILTSEL2_MASK)
#define LLWU_FILT_FILTE2_MASK                    (0x6000U)
#define LLWU_FILT_FILTE2_SHIFT                   (13U)
#define LLWU_FILT_FILTE2(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_FILT_FILTE2_SHIFT)) & LLWU_FILT_FILTE2_MASK)
#define LLWU_FILT_FILTF2_MASK                    (0x8000U)
#define LLWU_FILT_FILTF2_SHIFT                   (15U)
#define LLWU_FILT_FILTF2(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_FILT_FILTF2_SHIFT)) & LLWU_FILT_FILTF2_MASK)

/*! @name PDC1 - Pin DMA/Trigger Configuration 1 register */
#define LLWU_PDC1_WUPDC0_MASK                    (0x3U)
#define LLWU_PDC1_WUPDC0_SHIFT                   (0U)
#define LLWU_PDC1_WUPDC0(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC0_SHIFT)) & LLWU_PDC1_WUPDC0_MASK)
#define LLWU_PDC1_WUPDC1_MASK                    (0xCU)
#define LLWU_PDC1_WUPDC1_SHIFT                   (2U)
#define LLWU_PDC1_WUPDC1(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC1_SHIFT)) & LLWU_PDC1_WUPDC1_MASK)
#define LLWU_PDC1_WUPDC2_MASK                    (0x30U)
#define LLWU_PDC1_WUPDC2_SHIFT                   (4U)
#define LLWU_PDC1_WUPDC2(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC2_SHIFT)) & LLWU_PDC1_WUPDC2_MASK)
#define LLWU_PDC1_WUPDC3_MASK                    (0xC0U)
#define LLWU_PDC1_WUPDC3_SHIFT                   (6U)
#define LLWU_PDC1_WUPDC3(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC3_SHIFT)) & LLWU_PDC1_WUPDC3_MASK)
#define LLWU_PDC1_WUPDC4_MASK                    (0x300U)
#define LLWU_PDC1_WUPDC4_SHIFT                   (8U)
#define LLWU_PDC1_WUPDC4(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC4_SHIFT)) & LLWU_PDC1_WUPDC4_MASK)
#define LLWU_PDC1_WUPDC5_MASK                    (0xC00U)
#define LLWU_PDC1_WUPDC5_SHIFT                   (10U)
#define LLWU_PDC1_WUPDC5(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC5_SHIFT)) & LLWU_PDC1_WUPDC5_MASK)
#define LLWU_PDC1_WUPDC6_MASK                    (0x3000U)
#define LLWU_PDC1_WUPDC6_SHIFT                   (12U)
#define LLWU_PDC1_WUPDC6(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC6_SHIFT)) & LLWU_PDC1_WUPDC6_MASK)
#define LLWU_PDC1_WUPDC7_MASK                    (0xC000U)
#define LLWU_PDC1_WUPDC7_SHIFT                   (14U)
#define LLWU_PDC1_WUPDC7(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC7_SHIFT)) & LLWU_PDC1_WUPDC7_MASK)
#define LLWU_PDC1_WUPDC8_MASK                    (0x30000U)
#define LLWU_PDC1_WUPDC8_SHIFT                   (16U)
#define LLWU_PDC1_WUPDC8(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC8_SHIFT)) & LLWU_PDC1_WUPDC8_MASK)
#define LLWU_PDC1_WUPDC9_MASK                    (0xC0000U)
#define LLWU_PDC1_WUPDC9_SHIFT                   (18U)
#define LLWU_PDC1_WUPDC9(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC9_SHIFT)) & LLWU_PDC1_WUPDC9_MASK)
#define LLWU_PDC1_WUPDC10_MASK                   (0x300000U)
#define LLWU_PDC1_WUPDC10_SHIFT                  (20U)
#define LLWU_PDC1_WUPDC10(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC10_SHIFT)) & LLWU_PDC1_WUPDC10_MASK)
#define LLWU_PDC1_WUPDC11_MASK                   (0xC00000U)
#define LLWU_PDC1_WUPDC11_SHIFT                  (22U)
#define LLWU_PDC1_WUPDC11(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC11_SHIFT)) & LLWU_PDC1_WUPDC11_MASK)
#define LLWU_PDC1_WUPDC12_MASK                   (0x3000000U)
#define LLWU_PDC1_WUPDC12_SHIFT                  (24U)
#define LLWU_PDC1_WUPDC12(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC12_SHIFT)) & LLWU_PDC1_WUPDC12_MASK)
#define LLWU_PDC1_WUPDC13_MASK                   (0xC000000U)
#define LLWU_PDC1_WUPDC13_SHIFT                  (26U)
#define LLWU_PDC1_WUPDC13(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC13_SHIFT)) & LLWU_PDC1_WUPDC13_MASK)
#define LLWU_PDC1_WUPDC14_MASK                   (0x30000000U)
#define LLWU_PDC1_WUPDC14_SHIFT                  (28U)
#define LLWU_PDC1_WUPDC14(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC14_SHIFT)) & LLWU_PDC1_WUPDC14_MASK)
#define LLWU_PDC1_WUPDC15_MASK                   (0xC0000000U)
#define LLWU_PDC1_WUPDC15_SHIFT                  (30U)
#define LLWU_PDC1_WUPDC15(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC1_WUPDC15_SHIFT)) & LLWU_PDC1_WUPDC15_MASK)

/*! @name PDC2 - Pin DMA/Trigger Configuration 2 register */
#define LLWU_PDC2_WUPDC16_MASK                   (0x3U)
#define LLWU_PDC2_WUPDC16_SHIFT                  (0U)
#define LLWU_PDC2_WUPDC16(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC16_SHIFT)) & LLWU_PDC2_WUPDC16_MASK)
#define LLWU_PDC2_WUPDC17_MASK                   (0xCU)
#define LLWU_PDC2_WUPDC17_SHIFT                  (2U)
#define LLWU_PDC2_WUPDC17(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC17_SHIFT)) & LLWU_PDC2_WUPDC17_MASK)
#define LLWU_PDC2_WUPDC18_MASK                   (0x30U)
#define LLWU_PDC2_WUPDC18_SHIFT                  (4U)
#define LLWU_PDC2_WUPDC18(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC18_SHIFT)) & LLWU_PDC2_WUPDC18_MASK)
#define LLWU_PDC2_WUPDC19_MASK                   (0xC0U)
#define LLWU_PDC2_WUPDC19_SHIFT                  (6U)
#define LLWU_PDC2_WUPDC19(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC19_SHIFT)) & LLWU_PDC2_WUPDC19_MASK)
#define LLWU_PDC2_WUPDC20_MASK                   (0x300U)
#define LLWU_PDC2_WUPDC20_SHIFT                  (8U)
#define LLWU_PDC2_WUPDC20(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC20_SHIFT)) & LLWU_PDC2_WUPDC20_MASK)
#define LLWU_PDC2_WUPDC21_MASK                   (0xC00U)
#define LLWU_PDC2_WUPDC21_SHIFT                  (10U)
#define LLWU_PDC2_WUPDC21(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC21_SHIFT)) & LLWU_PDC2_WUPDC21_MASK)
#define LLWU_PDC2_WUPDC22_MASK                   (0x3000U)
#define LLWU_PDC2_WUPDC22_SHIFT                  (12U)
#define LLWU_PDC2_WUPDC22(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC22_SHIFT)) & LLWU_PDC2_WUPDC22_MASK)
#define LLWU_PDC2_WUPDC23_MASK                   (0xC000U)
#define LLWU_PDC2_WUPDC23_SHIFT                  (14U)
#define LLWU_PDC2_WUPDC23(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC23_SHIFT)) & LLWU_PDC2_WUPDC23_MASK)
#define LLWU_PDC2_WUPDC24_MASK                   (0x30000U)
#define LLWU_PDC2_WUPDC24_SHIFT                  (16U)
#define LLWU_PDC2_WUPDC24(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC24_SHIFT)) & LLWU_PDC2_WUPDC24_MASK)
#define LLWU_PDC2_WUPDC25_MASK                   (0xC0000U)
#define LLWU_PDC2_WUPDC25_SHIFT                  (18U)
#define LLWU_PDC2_WUPDC25(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC25_SHIFT)) & LLWU_PDC2_WUPDC25_MASK)
#define LLWU_PDC2_WUPDC26_MASK                   (0x300000U)
#define LLWU_PDC2_WUPDC26_SHIFT                  (20U)
#define LLWU_PDC2_WUPDC26(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC26_SHIFT)) & LLWU_PDC2_WUPDC26_MASK)
#define LLWU_PDC2_Reserved27_MASK                (0xC00000U)
#define LLWU_PDC2_Reserved27_SHIFT               (22U)
#define LLWU_PDC2_Reserved27(x)                  (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_Reserved27_SHIFT)) & LLWU_PDC2_Reserved27_MASK)
#define LLWU_PDC2_Reserved28_MASK                (0x3000000U)
#define LLWU_PDC2_Reserved28_SHIFT               (24U)
#define LLWU_PDC2_Reserved28(x)                  (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_Reserved28_SHIFT)) & LLWU_PDC2_Reserved28_MASK)
#define LLWU_PDC2_WUPDC29_MASK                   (0xC000000U)
#define LLWU_PDC2_WUPDC29_SHIFT                  (26U)
#define LLWU_PDC2_WUPDC29(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC29_SHIFT)) & LLWU_PDC2_WUPDC29_MASK)
#define LLWU_PDC2_WUPDC30_MASK                   (0x30000000U)
#define LLWU_PDC2_WUPDC30_SHIFT                  (28U)
#define LLWU_PDC2_WUPDC30(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC30_SHIFT)) & LLWU_PDC2_WUPDC30_MASK)
#define LLWU_PDC2_WUPDC31_MASK                   (0xC0000000U)
#define LLWU_PDC2_WUPDC31_SHIFT                  (30U)
#define LLWU_PDC2_WUPDC31(x)                     (((uint32_t)(((uint32_t)(x)) << LLWU_PDC2_WUPDC31_SHIFT)) & LLWU_PDC2_WUPDC31_MASK)

/*! @name FDC - Pin Filter DMA/Trigger Configuration register */
#define LLWU_FDC_FILTC1_MASK                     (0x3U)
#define LLWU_FDC_FILTC1_SHIFT                    (0U)
#define LLWU_FDC_FILTC1(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_FDC_FILTC1_SHIFT)) & LLWU_FDC_FILTC1_MASK)
#define LLWU_FDC_FILTC2_MASK                     (0xCU)
#define LLWU_FDC_FILTC2_SHIFT                    (2U)
#define LLWU_FDC_FILTC2(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_FDC_FILTC2_SHIFT)) & LLWU_FDC_FILTC2_MASK)

/*! @name PMC - Pin Mode Configuration register */
#define LLWU_PMC_WUPMC0_MASK                     (0x1U)
#define LLWU_PMC_WUPMC0_SHIFT                    (0U)
#define LLWU_PMC_WUPMC0(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC0_SHIFT)) & LLWU_PMC_WUPMC0_MASK)
#define LLWU_PMC_WUPMC1_MASK                     (0x2U)
#define LLWU_PMC_WUPMC1_SHIFT                    (1U)
#define LLWU_PMC_WUPMC1(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC1_SHIFT)) & LLWU_PMC_WUPMC1_MASK)
#define LLWU_PMC_WUPMC2_MASK                     (0x4U)
#define LLWU_PMC_WUPMC2_SHIFT                    (2U)
#define LLWU_PMC_WUPMC2(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC2_SHIFT)) & LLWU_PMC_WUPMC2_MASK)
#define LLWU_PMC_WUPMC3_MASK                     (0x8U)
#define LLWU_PMC_WUPMC3_SHIFT                    (3U)
#define LLWU_PMC_WUPMC3(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC3_SHIFT)) & LLWU_PMC_WUPMC3_MASK)
#define LLWU_PMC_WUPMC4_MASK                     (0x10U)
#define LLWU_PMC_WUPMC4_SHIFT                    (4U)
#define LLWU_PMC_WUPMC4(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC4_SHIFT)) & LLWU_PMC_WUPMC4_MASK)
#define LLWU_PMC_WUPMC5_MASK                     (0x20U)
#define LLWU_PMC_WUPMC5_SHIFT                    (5U)
#define LLWU_PMC_WUPMC5(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC5_SHIFT)) & LLWU_PMC_WUPMC5_MASK)
#define LLWU_PMC_WUPMC6_MASK                     (0x40U)
#define LLWU_PMC_WUPMC6_SHIFT                    (6U)
#define LLWU_PMC_WUPMC6(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC6_SHIFT)) & LLWU_PMC_WUPMC6_MASK)
#define LLWU_PMC_WUPMC7_MASK                     (0x80U)
#define LLWU_PMC_WUPMC7_SHIFT                    (7U)
#define LLWU_PMC_WUPMC7(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC7_SHIFT)) & LLWU_PMC_WUPMC7_MASK)
#define LLWU_PMC_WUPMC8_MASK                     (0x100U)
#define LLWU_PMC_WUPMC8_SHIFT                    (8U)
#define LLWU_PMC_WUPMC8(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC8_SHIFT)) & LLWU_PMC_WUPMC8_MASK)
#define LLWU_PMC_WUPMC9_MASK                     (0x200U)
#define LLWU_PMC_WUPMC9_SHIFT                    (9U)
#define LLWU_PMC_WUPMC9(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC9_SHIFT)) & LLWU_PMC_WUPMC9_MASK)
#define LLWU_PMC_WUPMC10_MASK                    (0x400U)
#define LLWU_PMC_WUPMC10_SHIFT                   (10U)
#define LLWU_PMC_WUPMC10(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC10_SHIFT)) & LLWU_PMC_WUPMC10_MASK)
#define LLWU_PMC_WUPMC11_MASK                    (0x800U)
#define LLWU_PMC_WUPMC11_SHIFT                   (11U)
#define LLWU_PMC_WUPMC11(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC11_SHIFT)) & LLWU_PMC_WUPMC11_MASK)
#define LLWU_PMC_WUPMC12_MASK                    (0x1000U)
#define LLWU_PMC_WUPMC12_SHIFT                   (12U)
#define LLWU_PMC_WUPMC12(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC12_SHIFT)) & LLWU_PMC_WUPMC12_MASK)
#define LLWU_PMC_WUPMC13_MASK                    (0x2000U)
#define LLWU_PMC_WUPMC13_SHIFT                   (13U)
#define LLWU_PMC_WUPMC13(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC13_SHIFT)) & LLWU_PMC_WUPMC13_MASK)
#define LLWU_PMC_WUPMC14_MASK                    (0x4000U)
#define LLWU_PMC_WUPMC14_SHIFT                   (14U)
#define LLWU_PMC_WUPMC14(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC14_SHIFT)) & LLWU_PMC_WUPMC14_MASK)
#define LLWU_PMC_WUPMC15_MASK                    (0x8000U)
#define LLWU_PMC_WUPMC15_SHIFT                   (15U)
#define LLWU_PMC_WUPMC15(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC15_SHIFT)) & LLWU_PMC_WUPMC15_MASK)
#define LLWU_PMC_WUPMC16_MASK                    (0x10000U)
#define LLWU_PMC_WUPMC16_SHIFT                   (16U)
#define LLWU_PMC_WUPMC16(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC16_SHIFT)) & LLWU_PMC_WUPMC16_MASK)
#define LLWU_PMC_WUPMC17_MASK                    (0x20000U)
#define LLWU_PMC_WUPMC17_SHIFT                   (17U)
#define LLWU_PMC_WUPMC17(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC17_SHIFT)) & LLWU_PMC_WUPMC17_MASK)
#define LLWU_PMC_WUPMC18_MASK                    (0x40000U)
#define LLWU_PMC_WUPMC18_SHIFT                   (18U)
#define LLWU_PMC_WUPMC18(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC18_SHIFT)) & LLWU_PMC_WUPMC18_MASK)
#define LLWU_PMC_WUPMC19_MASK                    (0x80000U)
#define LLWU_PMC_WUPMC19_SHIFT                   (19U)
#define LLWU_PMC_WUPMC19(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC19_SHIFT)) & LLWU_PMC_WUPMC19_MASK)
#define LLWU_PMC_WUPMC20_MASK                    (0x100000U)
#define LLWU_PMC_WUPMC20_SHIFT                   (20U)
#define LLWU_PMC_WUPMC20(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC20_SHIFT)) & LLWU_PMC_WUPMC20_MASK)
#define LLWU_PMC_WUPMC21_MASK                    (0x200000U)
#define LLWU_PMC_WUPMC21_SHIFT                   (21U)
#define LLWU_PMC_WUPMC21(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC21_SHIFT)) & LLWU_PMC_WUPMC21_MASK)
#define LLWU_PMC_WUPMC22_MASK                    (0x400000U)
#define LLWU_PMC_WUPMC22_SHIFT                   (22U)
#define LLWU_PMC_WUPMC22(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC22_SHIFT)) & LLWU_PMC_WUPMC22_MASK)
#define LLWU_PMC_WUPMC23_MASK                    (0x800000U)
#define LLWU_PMC_WUPMC23_SHIFT                   (23U)
#define LLWU_PMC_WUPMC23(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC23_SHIFT)) & LLWU_PMC_WUPMC23_MASK)
#define LLWU_PMC_WUPMC24_MASK                    (0x1000000U)
#define LLWU_PMC_WUPMC24_SHIFT                   (24U)
#define LLWU_PMC_WUPMC24(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC24_SHIFT)) & LLWU_PMC_WUPMC24_MASK)
#define LLWU_PMC_WUPMC25_MASK                    (0x2000000U)
#define LLWU_PMC_WUPMC25_SHIFT                   (25U)
#define LLWU_PMC_WUPMC25(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC25_SHIFT)) & LLWU_PMC_WUPMC25_MASK)
#define LLWU_PMC_WUPMC26_MASK                    (0x4000000U)
#define LLWU_PMC_WUPMC26_SHIFT                   (26U)
#define LLWU_PMC_WUPMC26(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC26_SHIFT)) & LLWU_PMC_WUPMC26_MASK)
#define LLWU_PMC_Reserved27_MASK                 (0x8000000U)
#define LLWU_PMC_Reserved27_SHIFT                (27U)
#define LLWU_PMC_Reserved27(x)                   (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_Reserved27_SHIFT)) & LLWU_PMC_Reserved27_MASK)
#define LLWU_PMC_Reserved28_MASK                 (0x10000000U)
#define LLWU_PMC_Reserved28_SHIFT                (28U)
#define LLWU_PMC_Reserved28(x)                   (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_Reserved28_SHIFT)) & LLWU_PMC_Reserved28_MASK)
#define LLWU_PMC_WUPMC29_MASK                    (0x20000000U)
#define LLWU_PMC_WUPMC29_SHIFT                   (29U)
#define LLWU_PMC_WUPMC29(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC29_SHIFT)) & LLWU_PMC_WUPMC29_MASK)
#define LLWU_PMC_WUPMC30_MASK                    (0x40000000U)
#define LLWU_PMC_WUPMC30_SHIFT                   (30U)
#define LLWU_PMC_WUPMC30(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC30_SHIFT)) & LLWU_PMC_WUPMC30_MASK)
#define LLWU_PMC_WUPMC31_MASK                    (0x80000000U)
#define LLWU_PMC_WUPMC31_SHIFT                   (31U)
#define LLWU_PMC_WUPMC31(x)                      (((uint32_t)(((uint32_t)(x)) << LLWU_PMC_WUPMC31_SHIFT)) & LLWU_PMC_WUPMC31_MASK)

/*! @name FMC - Pin Filter Mode Configuration register */
#define LLWU_FMC_FILTM1_MASK                     (0x1U)
#define LLWU_FMC_FILTM1_SHIFT                    (0U)
#define LLWU_FMC_FILTM1(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_FMC_FILTM1_SHIFT)) & LLWU_FMC_FILTM1_MASK)
#define LLWU_FMC_FILTM2_MASK                     (0x2U)
#define LLWU_FMC_FILTM2_SHIFT                    (1U)
#define LLWU_FMC_FILTM2(x)                       (((uint32_t)(((uint32_t)(x)) << LLWU_FMC_FILTM2_SHIFT)) & LLWU_FMC_FILTM2_MASK)


/*!
 * @}
 */ /* end of group LLWU_Register_Masks */


/* LLWU - Peripheral instance base addresses */
/** Peripheral LLWU0 base address */
#define LLWU0_BASE                               (0x40024000u)
/** Peripheral LLWU0 base pointer */
#define LLWU0                                    ((LLWU_Type *)LLWU0_BASE)
/** Peripheral LLWU1 base address */
#define LLWU1_BASE                               (0x41023000u)
/** Peripheral LLWU1 base pointer */
#define LLWU1                                    ((LLWU_Type *)LLWU1_BASE)
/** Array initializer of LLWU peripheral base addresses */
#define LLWU_BASE_ADDRS                          { LLWU0_BASE, LLWU1_BASE }
/** Array initializer of LLWU peripheral base pointers */
#define LLWU_BASE_PTRS                           { LLWU0, LLWU1 }
/** Interrupt vectors for the LLWU peripheral type */
#define LLWU_IRQS                                { LLWU0_IRQn, NotAvail_IRQn }

/*!
 * @}
 */ /* end of group LLWU_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LPCMP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPCMP_Peripheral_Access_Layer LPCMP Peripheral Access Layer
 * @{
 */

/** LPCMP - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t CCR0;                              /**< Comparator Control Register 0, offset: 0x8 */
  __IO uint32_t CCR1;                              /**< Comparator Control Register 1, offset: 0xC */
  __IO uint32_t CCR2;                              /**< Comparator Control Register 2, offset: 0x10 */
       uint8_t RESERVED_0[4];
  __IO uint32_t DCR;                               /**< DAC Control Register, offset: 0x18 */
  __IO uint32_t IER;                               /**< Interrupt Enable Register, offset: 0x1C */
  __IO uint32_t CSR;                               /**< Comparator Status Register, offset: 0x20 */
} LPCMP_Type;

/* ----------------------------------------------------------------------------
   -- LPCMP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPCMP_Register_Masks LPCMP Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define LPCMP_VERID_FEATURE_MASK                 (0xFFFFU)
#define LPCMP_VERID_FEATURE_SHIFT                (0U)
#define LPCMP_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_VERID_FEATURE_SHIFT)) & LPCMP_VERID_FEATURE_MASK)
#define LPCMP_VERID_MINOR_MASK                   (0xFF0000U)
#define LPCMP_VERID_MINOR_SHIFT                  (16U)
#define LPCMP_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPCMP_VERID_MINOR_SHIFT)) & LPCMP_VERID_MINOR_MASK)
#define LPCMP_VERID_MAJOR_MASK                   (0xFF000000U)
#define LPCMP_VERID_MAJOR_SHIFT                  (24U)
#define LPCMP_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPCMP_VERID_MAJOR_SHIFT)) & LPCMP_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define LPCMP_PARAM_DAC_RES_MASK                 (0xFU)
#define LPCMP_PARAM_DAC_RES_SHIFT                (0U)
#define LPCMP_PARAM_DAC_RES(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_PARAM_DAC_RES_SHIFT)) & LPCMP_PARAM_DAC_RES_MASK)

/*! @name CCR0 - Comparator Control Register 0 */
#define LPCMP_CCR0_CMP_EN_MASK                   (0x1U)
#define LPCMP_CCR0_CMP_EN_SHIFT                  (0U)
#define LPCMP_CCR0_CMP_EN(x)                     (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR0_CMP_EN_SHIFT)) & LPCMP_CCR0_CMP_EN_MASK)
#define LPCMP_CCR0_CMP_STOP_EN_MASK              (0x2U)
#define LPCMP_CCR0_CMP_STOP_EN_SHIFT             (1U)
#define LPCMP_CCR0_CMP_STOP_EN(x)                (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR0_CMP_STOP_EN_SHIFT)) & LPCMP_CCR0_CMP_STOP_EN_MASK)

/*! @name CCR1 - Comparator Control Register 1 */
#define LPCMP_CCR1_WINDOW_EN_MASK                (0x1U)
#define LPCMP_CCR1_WINDOW_EN_SHIFT               (0U)
#define LPCMP_CCR1_WINDOW_EN(x)                  (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_WINDOW_EN_SHIFT)) & LPCMP_CCR1_WINDOW_EN_MASK)
#define LPCMP_CCR1_SAMPLE_EN_MASK                (0x2U)
#define LPCMP_CCR1_SAMPLE_EN_SHIFT               (1U)
#define LPCMP_CCR1_SAMPLE_EN(x)                  (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_SAMPLE_EN_SHIFT)) & LPCMP_CCR1_SAMPLE_EN_MASK)
#define LPCMP_CCR1_DMA_EN_MASK                   (0x4U)
#define LPCMP_CCR1_DMA_EN_SHIFT                  (2U)
#define LPCMP_CCR1_DMA_EN(x)                     (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_DMA_EN_SHIFT)) & LPCMP_CCR1_DMA_EN_MASK)
#define LPCMP_CCR1_COUT_INV_MASK                 (0x8U)
#define LPCMP_CCR1_COUT_INV_SHIFT                (3U)
#define LPCMP_CCR1_COUT_INV(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_COUT_INV_SHIFT)) & LPCMP_CCR1_COUT_INV_MASK)
#define LPCMP_CCR1_COUT_SEL_MASK                 (0x10U)
#define LPCMP_CCR1_COUT_SEL_SHIFT                (4U)
#define LPCMP_CCR1_COUT_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_COUT_SEL_SHIFT)) & LPCMP_CCR1_COUT_SEL_MASK)
#define LPCMP_CCR1_COUT_PEN_MASK                 (0x20U)
#define LPCMP_CCR1_COUT_PEN_SHIFT                (5U)
#define LPCMP_CCR1_COUT_PEN(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_COUT_PEN_SHIFT)) & LPCMP_CCR1_COUT_PEN_MASK)
#define LPCMP_CCR1_FILT_CNT_MASK                 (0x70000U)
#define LPCMP_CCR1_FILT_CNT_SHIFT                (16U)
#define LPCMP_CCR1_FILT_CNT(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_FILT_CNT_SHIFT)) & LPCMP_CCR1_FILT_CNT_MASK)
#define LPCMP_CCR1_FILT_PER_MASK                 (0xFF000000U)
#define LPCMP_CCR1_FILT_PER_SHIFT                (24U)
#define LPCMP_CCR1_FILT_PER(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR1_FILT_PER_SHIFT)) & LPCMP_CCR1_FILT_PER_MASK)

/*! @name CCR2 - Comparator Control Register 2 */
#define LPCMP_CCR2_CMP_HPMD_MASK                 (0x1U)
#define LPCMP_CCR2_CMP_HPMD_SHIFT                (0U)
#define LPCMP_CCR2_CMP_HPMD(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR2_CMP_HPMD_SHIFT)) & LPCMP_CCR2_CMP_HPMD_MASK)
#define LPCMP_CCR2_CMP_NPMD_MASK                 (0x2U)
#define LPCMP_CCR2_CMP_NPMD_SHIFT                (1U)
#define LPCMP_CCR2_CMP_NPMD(x)                   (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR2_CMP_NPMD_SHIFT)) & LPCMP_CCR2_CMP_NPMD_MASK)
#define LPCMP_CCR2_HYSTCTR_MASK                  (0x30U)
#define LPCMP_CCR2_HYSTCTR_SHIFT                 (4U)
#define LPCMP_CCR2_HYSTCTR(x)                    (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR2_HYSTCTR_SHIFT)) & LPCMP_CCR2_HYSTCTR_MASK)
#define LPCMP_CCR2_PSEL_MASK                     (0x70000U)
#define LPCMP_CCR2_PSEL_SHIFT                    (16U)
#define LPCMP_CCR2_PSEL(x)                       (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR2_PSEL_SHIFT)) & LPCMP_CCR2_PSEL_MASK)
#define LPCMP_CCR2_MSEL_MASK                     (0x700000U)
#define LPCMP_CCR2_MSEL_SHIFT                    (20U)
#define LPCMP_CCR2_MSEL(x)                       (((uint32_t)(((uint32_t)(x)) << LPCMP_CCR2_MSEL_SHIFT)) & LPCMP_CCR2_MSEL_MASK)

/*! @name DCR - DAC Control Register */
#define LPCMP_DCR_DAC_EN_MASK                    (0x1U)
#define LPCMP_DCR_DAC_EN_SHIFT                   (0U)
#define LPCMP_DCR_DAC_EN(x)                      (((uint32_t)(((uint32_t)(x)) << LPCMP_DCR_DAC_EN_SHIFT)) & LPCMP_DCR_DAC_EN_MASK)
#define LPCMP_DCR_DAC_HPMD_MASK                  (0x2U)
#define LPCMP_DCR_DAC_HPMD_SHIFT                 (1U)
#define LPCMP_DCR_DAC_HPMD(x)                    (((uint32_t)(((uint32_t)(x)) << LPCMP_DCR_DAC_HPMD_SHIFT)) & LPCMP_DCR_DAC_HPMD_MASK)
#define LPCMP_DCR_VRSEL_MASK                     (0x100U)
#define LPCMP_DCR_VRSEL_SHIFT                    (8U)
#define LPCMP_DCR_VRSEL(x)                       (((uint32_t)(((uint32_t)(x)) << LPCMP_DCR_VRSEL_SHIFT)) & LPCMP_DCR_VRSEL_MASK)
#define LPCMP_DCR_DAC_DATA_MASK                  (0x3F0000U)
#define LPCMP_DCR_DAC_DATA_SHIFT                 (16U)
#define LPCMP_DCR_DAC_DATA(x)                    (((uint32_t)(((uint32_t)(x)) << LPCMP_DCR_DAC_DATA_SHIFT)) & LPCMP_DCR_DAC_DATA_MASK)

/*! @name IER - Interrupt Enable Register */
#define LPCMP_IER_CFR_IE_MASK                    (0x1U)
#define LPCMP_IER_CFR_IE_SHIFT                   (0U)
#define LPCMP_IER_CFR_IE(x)                      (((uint32_t)(((uint32_t)(x)) << LPCMP_IER_CFR_IE_SHIFT)) & LPCMP_IER_CFR_IE_MASK)
#define LPCMP_IER_CFF_IE_MASK                    (0x2U)
#define LPCMP_IER_CFF_IE_SHIFT                   (1U)
#define LPCMP_IER_CFF_IE(x)                      (((uint32_t)(((uint32_t)(x)) << LPCMP_IER_CFF_IE_SHIFT)) & LPCMP_IER_CFF_IE_MASK)

/*! @name CSR - Comparator Status Register */
#define LPCMP_CSR_CFR_MASK                       (0x1U)
#define LPCMP_CSR_CFR_SHIFT                      (0U)
#define LPCMP_CSR_CFR(x)                         (((uint32_t)(((uint32_t)(x)) << LPCMP_CSR_CFR_SHIFT)) & LPCMP_CSR_CFR_MASK)
#define LPCMP_CSR_CFF_MASK                       (0x2U)
#define LPCMP_CSR_CFF_SHIFT                      (1U)
#define LPCMP_CSR_CFF(x)                         (((uint32_t)(((uint32_t)(x)) << LPCMP_CSR_CFF_SHIFT)) & LPCMP_CSR_CFF_MASK)
#define LPCMP_CSR_COUT_MASK                      (0x100U)
#define LPCMP_CSR_COUT_SHIFT                     (8U)
#define LPCMP_CSR_COUT(x)                        (((uint32_t)(((uint32_t)(x)) << LPCMP_CSR_COUT_SHIFT)) & LPCMP_CSR_COUT_MASK)


/*!
 * @}
 */ /* end of group LPCMP_Register_Masks */


/* LPCMP - Peripheral instance base addresses */
/** Peripheral LPCMP0 base address */
#define LPCMP0_BASE                              (0x4004B000u)
/** Peripheral LPCMP0 base pointer */
#define LPCMP0                                   ((LPCMP_Type *)LPCMP0_BASE)
/** Peripheral LPCMP1 base address */
#define LPCMP1_BASE                              (0x41038000u)
/** Peripheral LPCMP1 base pointer */
#define LPCMP1                                   ((LPCMP_Type *)LPCMP1_BASE)
/** Array initializer of LPCMP peripheral base addresses */
#define LPCMP_BASE_ADDRS                         { LPCMP0_BASE, LPCMP1_BASE }
/** Array initializer of LPCMP peripheral base pointers */
#define LPCMP_BASE_PTRS                          { LPCMP0, LPCMP1 }
/** Interrupt vectors for the LPCMP peripheral type */
#define LPCMP_IRQS                               { LPCMP0_IRQn, LPCMP1_IRQn }

/*!
 * @}
 */ /* end of group LPCMP_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LPDAC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPDAC_Peripheral_Access_Layer LPDAC Peripheral Access Layer
 * @{
 */

/** LPDAC - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version Identifier Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __O  uint32_t DATA;                              /**< DAC Data Register, offset: 0x8 */
  __IO uint32_t GCR;                               /**< DAC Global Control Register, offset: 0xC */
  __IO uint32_t FCR;                               /**< DAC FIFO Control Register, offset: 0x10 */
  __I  uint32_t FPR;                               /**< DAC FIFO Pointer Register, offset: 0x14 */
  __IO uint32_t FSR;                               /**< FIFO Status Register, offset: 0x18 */
  __IO uint32_t IER;                               /**< DAC Interrupt Enable Register, offset: 0x1C */
  __IO uint32_t DER;                               /**< DAC DMA Enable Register, offset: 0x20 */
  __IO uint32_t RCR;                               /**< DAC Reset Control Register, offset: 0x24 */
  __O  uint32_t TCR;                               /**< DAC Trigger Control Register, offset: 0x28 */
} LPDAC_Type;

/* ----------------------------------------------------------------------------
   -- LPDAC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPDAC_Register_Masks LPDAC Register Masks
 * @{
 */

/*! @name VERID - Version Identifier Register */
#define LPDAC_VERID_FEATURE_MASK                 (0xFFFFU)
#define LPDAC_VERID_FEATURE_SHIFT                (0U)
#define LPDAC_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x)) << LPDAC_VERID_FEATURE_SHIFT)) & LPDAC_VERID_FEATURE_MASK)
#define LPDAC_VERID_MINOR_MASK                   (0xFF0000U)
#define LPDAC_VERID_MINOR_SHIFT                  (16U)
#define LPDAC_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPDAC_VERID_MINOR_SHIFT)) & LPDAC_VERID_MINOR_MASK)
#define LPDAC_VERID_MAJOR_MASK                   (0xFF000000U)
#define LPDAC_VERID_MAJOR_SHIFT                  (24U)
#define LPDAC_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPDAC_VERID_MAJOR_SHIFT)) & LPDAC_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define LPDAC_PARAM_FIFOSZ_MASK                  (0x7U)
#define LPDAC_PARAM_FIFOSZ_SHIFT                 (0U)
#define LPDAC_PARAM_FIFOSZ(x)                    (((uint32_t)(((uint32_t)(x)) << LPDAC_PARAM_FIFOSZ_SHIFT)) & LPDAC_PARAM_FIFOSZ_MASK)

/*! @name DATA - DAC Data Register */
#define LPDAC_DATA_DATA_MASK                     (0xFFFU)
#define LPDAC_DATA_DATA_SHIFT                    (0U)
#define LPDAC_DATA_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_DATA_DATA_SHIFT)) & LPDAC_DATA_DATA_MASK)

/*! @name GCR - DAC Global Control Register */
#define LPDAC_GCR_DACEN_MASK                     (0x1U)
#define LPDAC_GCR_DACEN_SHIFT                    (0U)
#define LPDAC_GCR_DACEN(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_GCR_DACEN_SHIFT)) & LPDAC_GCR_DACEN_MASK)
#define LPDAC_GCR_DACRFS_MASK                    (0x2U)
#define LPDAC_GCR_DACRFS_SHIFT                   (1U)
#define LPDAC_GCR_DACRFS(x)                      (((uint32_t)(((uint32_t)(x)) << LPDAC_GCR_DACRFS_SHIFT)) & LPDAC_GCR_DACRFS_MASK)
#define LPDAC_GCR_LPEN_MASK                      (0x4U)
#define LPDAC_GCR_LPEN_SHIFT                     (2U)
#define LPDAC_GCR_LPEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPDAC_GCR_LPEN_SHIFT)) & LPDAC_GCR_LPEN_MASK)
#define LPDAC_GCR_FIFOEN_MASK                    (0x8U)
#define LPDAC_GCR_FIFOEN_SHIFT                   (3U)
#define LPDAC_GCR_FIFOEN(x)                      (((uint32_t)(((uint32_t)(x)) << LPDAC_GCR_FIFOEN_SHIFT)) & LPDAC_GCR_FIFOEN_MASK)
#define LPDAC_GCR_SWMD_MASK                      (0x10U)
#define LPDAC_GCR_SWMD_SHIFT                     (4U)
#define LPDAC_GCR_SWMD(x)                        (((uint32_t)(((uint32_t)(x)) << LPDAC_GCR_SWMD_SHIFT)) & LPDAC_GCR_SWMD_MASK)
#define LPDAC_GCR_TRGSEL_MASK                    (0x20U)
#define LPDAC_GCR_TRGSEL_SHIFT                   (5U)
#define LPDAC_GCR_TRGSEL(x)                      (((uint32_t)(((uint32_t)(x)) << LPDAC_GCR_TRGSEL_SHIFT)) & LPDAC_GCR_TRGSEL_MASK)

/*! @name FCR - DAC FIFO Control Register */
#define LPDAC_FCR_WML_MASK                       (0xFU)
#define LPDAC_FCR_WML_SHIFT                      (0U)
#define LPDAC_FCR_WML(x)                         (((uint32_t)(((uint32_t)(x)) << LPDAC_FCR_WML_SHIFT)) & LPDAC_FCR_WML_MASK)

/*! @name FPR - DAC FIFO Pointer Register */
#define LPDAC_FPR_FIFO_RPT_MASK                  (0xFU)
#define LPDAC_FPR_FIFO_RPT_SHIFT                 (0U)
#define LPDAC_FPR_FIFO_RPT(x)                    (((uint32_t)(((uint32_t)(x)) << LPDAC_FPR_FIFO_RPT_SHIFT)) & LPDAC_FPR_FIFO_RPT_MASK)
#define LPDAC_FPR_FIFO_WPT_MASK                  (0xF0000U)
#define LPDAC_FPR_FIFO_WPT_SHIFT                 (16U)
#define LPDAC_FPR_FIFO_WPT(x)                    (((uint32_t)(((uint32_t)(x)) << LPDAC_FPR_FIFO_WPT_SHIFT)) & LPDAC_FPR_FIFO_WPT_MASK)

/*! @name FSR - FIFO Status Register */
#define LPDAC_FSR_FULL_MASK                      (0x1U)
#define LPDAC_FSR_FULL_SHIFT                     (0U)
#define LPDAC_FSR_FULL(x)                        (((uint32_t)(((uint32_t)(x)) << LPDAC_FSR_FULL_SHIFT)) & LPDAC_FSR_FULL_MASK)
#define LPDAC_FSR_EMPTY_MASK                     (0x2U)
#define LPDAC_FSR_EMPTY_SHIFT                    (1U)
#define LPDAC_FSR_EMPTY(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_FSR_EMPTY_SHIFT)) & LPDAC_FSR_EMPTY_MASK)
#define LPDAC_FSR_WM_MASK                        (0x4U)
#define LPDAC_FSR_WM_SHIFT                       (2U)
#define LPDAC_FSR_WM(x)                          (((uint32_t)(((uint32_t)(x)) << LPDAC_FSR_WM_SHIFT)) & LPDAC_FSR_WM_MASK)
#define LPDAC_FSR_SWBK_MASK                      (0x8U)
#define LPDAC_FSR_SWBK_SHIFT                     (3U)
#define LPDAC_FSR_SWBK(x)                        (((uint32_t)(((uint32_t)(x)) << LPDAC_FSR_SWBK_SHIFT)) & LPDAC_FSR_SWBK_MASK)
#define LPDAC_FSR_OF_MASK                        (0x40U)
#define LPDAC_FSR_OF_SHIFT                       (6U)
#define LPDAC_FSR_OF(x)                          (((uint32_t)(((uint32_t)(x)) << LPDAC_FSR_OF_SHIFT)) & LPDAC_FSR_OF_MASK)
#define LPDAC_FSR_UF_MASK                        (0x80U)
#define LPDAC_FSR_UF_SHIFT                       (7U)
#define LPDAC_FSR_UF(x)                          (((uint32_t)(((uint32_t)(x)) << LPDAC_FSR_UF_SHIFT)) & LPDAC_FSR_UF_MASK)

/*! @name IER - DAC Interrupt Enable Register */
#define LPDAC_IER_FULL_IE_MASK                   (0x1U)
#define LPDAC_IER_FULL_IE_SHIFT                  (0U)
#define LPDAC_IER_FULL_IE(x)                     (((uint32_t)(((uint32_t)(x)) << LPDAC_IER_FULL_IE_SHIFT)) & LPDAC_IER_FULL_IE_MASK)
#define LPDAC_IER_EMPTY_IE_MASK                  (0x2U)
#define LPDAC_IER_EMPTY_IE_SHIFT                 (1U)
#define LPDAC_IER_EMPTY_IE(x)                    (((uint32_t)(((uint32_t)(x)) << LPDAC_IER_EMPTY_IE_SHIFT)) & LPDAC_IER_EMPTY_IE_MASK)
#define LPDAC_IER_WM_IE_MASK                     (0x4U)
#define LPDAC_IER_WM_IE_SHIFT                    (2U)
#define LPDAC_IER_WM_IE(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_IER_WM_IE_SHIFT)) & LPDAC_IER_WM_IE_MASK)
#define LPDAC_IER_SWBK_IE_MASK                   (0x8U)
#define LPDAC_IER_SWBK_IE_SHIFT                  (3U)
#define LPDAC_IER_SWBK_IE(x)                     (((uint32_t)(((uint32_t)(x)) << LPDAC_IER_SWBK_IE_SHIFT)) & LPDAC_IER_SWBK_IE_MASK)
#define LPDAC_IER_OF_IE_MASK                     (0x40U)
#define LPDAC_IER_OF_IE_SHIFT                    (6U)
#define LPDAC_IER_OF_IE(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_IER_OF_IE_SHIFT)) & LPDAC_IER_OF_IE_MASK)
#define LPDAC_IER_UF_IE_MASK                     (0x80U)
#define LPDAC_IER_UF_IE_SHIFT                    (7U)
#define LPDAC_IER_UF_IE(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_IER_UF_IE_SHIFT)) & LPDAC_IER_UF_IE_MASK)

/*! @name DER - DAC DMA Enable Register */
#define LPDAC_DER_EMPTY_DMAEN_MASK               (0x2U)
#define LPDAC_DER_EMPTY_DMAEN_SHIFT              (1U)
#define LPDAC_DER_EMPTY_DMAEN(x)                 (((uint32_t)(((uint32_t)(x)) << LPDAC_DER_EMPTY_DMAEN_SHIFT)) & LPDAC_DER_EMPTY_DMAEN_MASK)
#define LPDAC_DER_WM_DMAEN_MASK                  (0x4U)
#define LPDAC_DER_WM_DMAEN_SHIFT                 (2U)
#define LPDAC_DER_WM_DMAEN(x)                    (((uint32_t)(((uint32_t)(x)) << LPDAC_DER_WM_DMAEN_SHIFT)) & LPDAC_DER_WM_DMAEN_MASK)

/*! @name RCR - DAC Reset Control Register */
#define LPDAC_RCR_SWRST_MASK                     (0x1U)
#define LPDAC_RCR_SWRST_SHIFT                    (0U)
#define LPDAC_RCR_SWRST(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_RCR_SWRST_SHIFT)) & LPDAC_RCR_SWRST_MASK)
#define LPDAC_RCR_FIFORST_MASK                   (0x2U)
#define LPDAC_RCR_FIFORST_SHIFT                  (1U)
#define LPDAC_RCR_FIFORST(x)                     (((uint32_t)(((uint32_t)(x)) << LPDAC_RCR_FIFORST_SHIFT)) & LPDAC_RCR_FIFORST_MASK)

/*! @name TCR - DAC Trigger Control Register */
#define LPDAC_TCR_SWTRG_MASK                     (0x1U)
#define LPDAC_TCR_SWTRG_SHIFT                    (0U)
#define LPDAC_TCR_SWTRG(x)                       (((uint32_t)(((uint32_t)(x)) << LPDAC_TCR_SWTRG_SHIFT)) & LPDAC_TCR_SWTRG_MASK)


/*!
 * @}
 */ /* end of group LPDAC_Register_Masks */


/* LPDAC - Peripheral instance base addresses */
/** Peripheral LPDAC0 base address */
#define LPDAC0_BASE                              (0x4004C000u)
/** Peripheral LPDAC0 base pointer */
#define LPDAC0                                   ((LPDAC_Type *)LPDAC0_BASE)
/** Array initializer of LPDAC peripheral base addresses */
#define LPDAC_BASE_ADDRS                         { LPDAC0_BASE }
/** Array initializer of LPDAC peripheral base pointers */
#define LPDAC_BASE_PTRS                          { LPDAC0 }
/** Interrupt vectors for the LPDAC peripheral type */
#define LPDAC_IRQS                               { LPDAC0_IRQn }

/*!
 * @}
 */ /* end of group LPDAC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LPI2C Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPI2C_Peripheral_Access_Layer LPI2C Peripheral Access Layer
 * @{
 */

/** LPI2C - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t MCR;                               /**< Master Control Register, offset: 0x10 */
  __IO uint32_t MSR;                               /**< Master Status Register, offset: 0x14 */
  __IO uint32_t MIER;                              /**< Master Interrupt Enable Register, offset: 0x18 */
  __IO uint32_t MDER;                              /**< Master DMA Enable Register, offset: 0x1C */
  __IO uint32_t MCFGR0;                            /**< Master Configuration Register 0, offset: 0x20 */
  __IO uint32_t MCFGR1;                            /**< Master Configuration Register 1, offset: 0x24 */
  __IO uint32_t MCFGR2;                            /**< Master Configuration Register 2, offset: 0x28 */
  __IO uint32_t MCFGR3;                            /**< Master Configuration Register 3, offset: 0x2C */
       uint8_t RESERVED_1[16];
  __IO uint32_t MDMR;                              /**< Master Data Match Register, offset: 0x40 */
       uint8_t RESERVED_2[4];
  __IO uint32_t MCCR0;                             /**< Master Clock Configuration Register 0, offset: 0x48 */
       uint8_t RESERVED_3[4];
  __IO uint32_t MCCR1;                             /**< Master Clock Configuration Register 1, offset: 0x50 */
       uint8_t RESERVED_4[4];
  __IO uint32_t MFCR;                              /**< Master FIFO Control Register, offset: 0x58 */
  __I  uint32_t MFSR;                              /**< Master FIFO Status Register, offset: 0x5C */
  __O  uint32_t MTDR;                              /**< Master Transmit Data Register, offset: 0x60 */
       uint8_t RESERVED_5[12];
  __I  uint32_t MRDR;                              /**< Master Receive Data Register, offset: 0x70 */
       uint8_t RESERVED_6[156];
  __IO uint32_t SCR;                               /**< Slave Control Register, offset: 0x110 */
  __IO uint32_t SSR;                               /**< Slave Status Register, offset: 0x114 */
  __IO uint32_t SIER;                              /**< Slave Interrupt Enable Register, offset: 0x118 */
  __IO uint32_t SDER;                              /**< Slave DMA Enable Register, offset: 0x11C */
       uint8_t RESERVED_7[4];
  __IO uint32_t SCFGR1;                            /**< Slave Configuration Register 1, offset: 0x124 */
  __IO uint32_t SCFGR2;                            /**< Slave Configuration Register 2, offset: 0x128 */
       uint8_t RESERVED_8[20];
  __IO uint32_t SAMR;                              /**< Slave Address Match Register, offset: 0x140 */
       uint8_t RESERVED_9[12];
  __I  uint32_t SASR;                              /**< Slave Address Status Register, offset: 0x150 */
  __IO uint32_t STAR;                              /**< Slave Transmit ACK Register, offset: 0x154 */
       uint8_t RESERVED_10[8];
  __O  uint32_t STDR;                              /**< Slave Transmit Data Register, offset: 0x160 */
       uint8_t RESERVED_11[12];
  __I  uint32_t SRDR;                              /**< Slave Receive Data Register, offset: 0x170 */
} LPI2C_Type;

/* ----------------------------------------------------------------------------
   -- LPI2C Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPI2C_Register_Masks LPI2C Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define LPI2C_VERID_FEATURE_MASK                 (0xFFFFU)
#define LPI2C_VERID_FEATURE_SHIFT                (0U)
#define LPI2C_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_VERID_FEATURE_SHIFT)) & LPI2C_VERID_FEATURE_MASK)
#define LPI2C_VERID_MINOR_MASK                   (0xFF0000U)
#define LPI2C_VERID_MINOR_SHIFT                  (16U)
#define LPI2C_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_VERID_MINOR_SHIFT)) & LPI2C_VERID_MINOR_MASK)
#define LPI2C_VERID_MAJOR_MASK                   (0xFF000000U)
#define LPI2C_VERID_MAJOR_SHIFT                  (24U)
#define LPI2C_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_VERID_MAJOR_SHIFT)) & LPI2C_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define LPI2C_PARAM_MTXFIFO_MASK                 (0xFU)
#define LPI2C_PARAM_MTXFIFO_SHIFT                (0U)
#define LPI2C_PARAM_MTXFIFO(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_PARAM_MTXFIFO_SHIFT)) & LPI2C_PARAM_MTXFIFO_MASK)
#define LPI2C_PARAM_MRXFIFO_MASK                 (0xF00U)
#define LPI2C_PARAM_MRXFIFO_SHIFT                (8U)
#define LPI2C_PARAM_MRXFIFO(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_PARAM_MRXFIFO_SHIFT)) & LPI2C_PARAM_MRXFIFO_MASK)

/*! @name MCR - Master Control Register */
#define LPI2C_MCR_MEN_MASK                       (0x1U)
#define LPI2C_MCR_MEN_SHIFT                      (0U)
#define LPI2C_MCR_MEN(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MCR_MEN_SHIFT)) & LPI2C_MCR_MEN_MASK)
#define LPI2C_MCR_RST_MASK                       (0x2U)
#define LPI2C_MCR_RST_SHIFT                      (1U)
#define LPI2C_MCR_RST(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MCR_RST_SHIFT)) & LPI2C_MCR_RST_MASK)
#define LPI2C_MCR_DOZEN_MASK                     (0x4U)
#define LPI2C_MCR_DOZEN_SHIFT                    (2U)
#define LPI2C_MCR_DOZEN(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MCR_DOZEN_SHIFT)) & LPI2C_MCR_DOZEN_MASK)
#define LPI2C_MCR_DBGEN_MASK                     (0x8U)
#define LPI2C_MCR_DBGEN_SHIFT                    (3U)
#define LPI2C_MCR_DBGEN(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MCR_DBGEN_SHIFT)) & LPI2C_MCR_DBGEN_MASK)
#define LPI2C_MCR_RTF_MASK                       (0x100U)
#define LPI2C_MCR_RTF_SHIFT                      (8U)
#define LPI2C_MCR_RTF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MCR_RTF_SHIFT)) & LPI2C_MCR_RTF_MASK)
#define LPI2C_MCR_RRF_MASK                       (0x200U)
#define LPI2C_MCR_RRF_SHIFT                      (9U)
#define LPI2C_MCR_RRF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MCR_RRF_SHIFT)) & LPI2C_MCR_RRF_MASK)

/*! @name MSR - Master Status Register */
#define LPI2C_MSR_TDF_MASK                       (0x1U)
#define LPI2C_MSR_TDF_SHIFT                      (0U)
#define LPI2C_MSR_TDF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_TDF_SHIFT)) & LPI2C_MSR_TDF_MASK)
#define LPI2C_MSR_RDF_MASK                       (0x2U)
#define LPI2C_MSR_RDF_SHIFT                      (1U)
#define LPI2C_MSR_RDF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_RDF_SHIFT)) & LPI2C_MSR_RDF_MASK)
#define LPI2C_MSR_EPF_MASK                       (0x100U)
#define LPI2C_MSR_EPF_SHIFT                      (8U)
#define LPI2C_MSR_EPF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_EPF_SHIFT)) & LPI2C_MSR_EPF_MASK)
#define LPI2C_MSR_SDF_MASK                       (0x200U)
#define LPI2C_MSR_SDF_SHIFT                      (9U)
#define LPI2C_MSR_SDF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_SDF_SHIFT)) & LPI2C_MSR_SDF_MASK)
#define LPI2C_MSR_NDF_MASK                       (0x400U)
#define LPI2C_MSR_NDF_SHIFT                      (10U)
#define LPI2C_MSR_NDF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_NDF_SHIFT)) & LPI2C_MSR_NDF_MASK)
#define LPI2C_MSR_ALF_MASK                       (0x800U)
#define LPI2C_MSR_ALF_SHIFT                      (11U)
#define LPI2C_MSR_ALF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_ALF_SHIFT)) & LPI2C_MSR_ALF_MASK)
#define LPI2C_MSR_FEF_MASK                       (0x1000U)
#define LPI2C_MSR_FEF_SHIFT                      (12U)
#define LPI2C_MSR_FEF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_FEF_SHIFT)) & LPI2C_MSR_FEF_MASK)
#define LPI2C_MSR_PLTF_MASK                      (0x2000U)
#define LPI2C_MSR_PLTF_SHIFT                     (13U)
#define LPI2C_MSR_PLTF(x)                        (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_PLTF_SHIFT)) & LPI2C_MSR_PLTF_MASK)
#define LPI2C_MSR_DMF_MASK                       (0x4000U)
#define LPI2C_MSR_DMF_SHIFT                      (14U)
#define LPI2C_MSR_DMF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_DMF_SHIFT)) & LPI2C_MSR_DMF_MASK)
#define LPI2C_MSR_MBF_MASK                       (0x1000000U)
#define LPI2C_MSR_MBF_SHIFT                      (24U)
#define LPI2C_MSR_MBF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_MBF_SHIFT)) & LPI2C_MSR_MBF_MASK)
#define LPI2C_MSR_BBF_MASK                       (0x2000000U)
#define LPI2C_MSR_BBF_SHIFT                      (25U)
#define LPI2C_MSR_BBF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_MSR_BBF_SHIFT)) & LPI2C_MSR_BBF_MASK)

/*! @name MIER - Master Interrupt Enable Register */
#define LPI2C_MIER_TDIE_MASK                     (0x1U)
#define LPI2C_MIER_TDIE_SHIFT                    (0U)
#define LPI2C_MIER_TDIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_TDIE_SHIFT)) & LPI2C_MIER_TDIE_MASK)
#define LPI2C_MIER_RDIE_MASK                     (0x2U)
#define LPI2C_MIER_RDIE_SHIFT                    (1U)
#define LPI2C_MIER_RDIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_RDIE_SHIFT)) & LPI2C_MIER_RDIE_MASK)
#define LPI2C_MIER_EPIE_MASK                     (0x100U)
#define LPI2C_MIER_EPIE_SHIFT                    (8U)
#define LPI2C_MIER_EPIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_EPIE_SHIFT)) & LPI2C_MIER_EPIE_MASK)
#define LPI2C_MIER_SDIE_MASK                     (0x200U)
#define LPI2C_MIER_SDIE_SHIFT                    (9U)
#define LPI2C_MIER_SDIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_SDIE_SHIFT)) & LPI2C_MIER_SDIE_MASK)
#define LPI2C_MIER_NDIE_MASK                     (0x400U)
#define LPI2C_MIER_NDIE_SHIFT                    (10U)
#define LPI2C_MIER_NDIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_NDIE_SHIFT)) & LPI2C_MIER_NDIE_MASK)
#define LPI2C_MIER_ALIE_MASK                     (0x800U)
#define LPI2C_MIER_ALIE_SHIFT                    (11U)
#define LPI2C_MIER_ALIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_ALIE_SHIFT)) & LPI2C_MIER_ALIE_MASK)
#define LPI2C_MIER_FEIE_MASK                     (0x1000U)
#define LPI2C_MIER_FEIE_SHIFT                    (12U)
#define LPI2C_MIER_FEIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_FEIE_SHIFT)) & LPI2C_MIER_FEIE_MASK)
#define LPI2C_MIER_PLTIE_MASK                    (0x2000U)
#define LPI2C_MIER_PLTIE_SHIFT                   (13U)
#define LPI2C_MIER_PLTIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_PLTIE_SHIFT)) & LPI2C_MIER_PLTIE_MASK)
#define LPI2C_MIER_DMIE_MASK                     (0x4000U)
#define LPI2C_MIER_DMIE_SHIFT                    (14U)
#define LPI2C_MIER_DMIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MIER_DMIE_SHIFT)) & LPI2C_MIER_DMIE_MASK)

/*! @name MDER - Master DMA Enable Register */
#define LPI2C_MDER_TDDE_MASK                     (0x1U)
#define LPI2C_MDER_TDDE_SHIFT                    (0U)
#define LPI2C_MDER_TDDE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MDER_TDDE_SHIFT)) & LPI2C_MDER_TDDE_MASK)
#define LPI2C_MDER_RDDE_MASK                     (0x2U)
#define LPI2C_MDER_RDDE_SHIFT                    (1U)
#define LPI2C_MDER_RDDE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MDER_RDDE_SHIFT)) & LPI2C_MDER_RDDE_MASK)

/*! @name MCFGR0 - Master Configuration Register 0 */
#define LPI2C_MCFGR0_HREN_MASK                   (0x1U)
#define LPI2C_MCFGR0_HREN_SHIFT                  (0U)
#define LPI2C_MCFGR0_HREN(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR0_HREN_SHIFT)) & LPI2C_MCFGR0_HREN_MASK)
#define LPI2C_MCFGR0_HRPOL_MASK                  (0x2U)
#define LPI2C_MCFGR0_HRPOL_SHIFT                 (1U)
#define LPI2C_MCFGR0_HRPOL(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR0_HRPOL_SHIFT)) & LPI2C_MCFGR0_HRPOL_MASK)
#define LPI2C_MCFGR0_HRSEL_MASK                  (0x4U)
#define LPI2C_MCFGR0_HRSEL_SHIFT                 (2U)
#define LPI2C_MCFGR0_HRSEL(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR0_HRSEL_SHIFT)) & LPI2C_MCFGR0_HRSEL_MASK)
#define LPI2C_MCFGR0_CIRFIFO_MASK                (0x100U)
#define LPI2C_MCFGR0_CIRFIFO_SHIFT               (8U)
#define LPI2C_MCFGR0_CIRFIFO(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR0_CIRFIFO_SHIFT)) & LPI2C_MCFGR0_CIRFIFO_MASK)
#define LPI2C_MCFGR0_RDMO_MASK                   (0x200U)
#define LPI2C_MCFGR0_RDMO_SHIFT                  (9U)
#define LPI2C_MCFGR0_RDMO(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR0_RDMO_SHIFT)) & LPI2C_MCFGR0_RDMO_MASK)

/*! @name MCFGR1 - Master Configuration Register 1 */
#define LPI2C_MCFGR1_PRESCALE_MASK               (0x7U)
#define LPI2C_MCFGR1_PRESCALE_SHIFT              (0U)
#define LPI2C_MCFGR1_PRESCALE(x)                 (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR1_PRESCALE_SHIFT)) & LPI2C_MCFGR1_PRESCALE_MASK)
#define LPI2C_MCFGR1_AUTOSTOP_MASK               (0x100U)
#define LPI2C_MCFGR1_AUTOSTOP_SHIFT              (8U)
#define LPI2C_MCFGR1_AUTOSTOP(x)                 (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR1_AUTOSTOP_SHIFT)) & LPI2C_MCFGR1_AUTOSTOP_MASK)
#define LPI2C_MCFGR1_IGNACK_MASK                 (0x200U)
#define LPI2C_MCFGR1_IGNACK_SHIFT                (9U)
#define LPI2C_MCFGR1_IGNACK(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR1_IGNACK_SHIFT)) & LPI2C_MCFGR1_IGNACK_MASK)
#define LPI2C_MCFGR1_TIMECFG_MASK                (0x400U)
#define LPI2C_MCFGR1_TIMECFG_SHIFT               (10U)
#define LPI2C_MCFGR1_TIMECFG(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR1_TIMECFG_SHIFT)) & LPI2C_MCFGR1_TIMECFG_MASK)
#define LPI2C_MCFGR1_MATCFG_MASK                 (0x70000U)
#define LPI2C_MCFGR1_MATCFG_SHIFT                (16U)
#define LPI2C_MCFGR1_MATCFG(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR1_MATCFG_SHIFT)) & LPI2C_MCFGR1_MATCFG_MASK)
#define LPI2C_MCFGR1_PINCFG_MASK                 (0x7000000U)
#define LPI2C_MCFGR1_PINCFG_SHIFT                (24U)
#define LPI2C_MCFGR1_PINCFG(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR1_PINCFG_SHIFT)) & LPI2C_MCFGR1_PINCFG_MASK)

/*! @name MCFGR2 - Master Configuration Register 2 */
#define LPI2C_MCFGR2_BUSIDLE_MASK                (0xFFFU)
#define LPI2C_MCFGR2_BUSIDLE_SHIFT               (0U)
#define LPI2C_MCFGR2_BUSIDLE(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR2_BUSIDLE_SHIFT)) & LPI2C_MCFGR2_BUSIDLE_MASK)
#define LPI2C_MCFGR2_FILTSCL_MASK                (0xF0000U)
#define LPI2C_MCFGR2_FILTSCL_SHIFT               (16U)
#define LPI2C_MCFGR2_FILTSCL(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR2_FILTSCL_SHIFT)) & LPI2C_MCFGR2_FILTSCL_MASK)
#define LPI2C_MCFGR2_FILTSDA_MASK                (0xF000000U)
#define LPI2C_MCFGR2_FILTSDA_SHIFT               (24U)
#define LPI2C_MCFGR2_FILTSDA(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR2_FILTSDA_SHIFT)) & LPI2C_MCFGR2_FILTSDA_MASK)

/*! @name MCFGR3 - Master Configuration Register 3 */
#define LPI2C_MCFGR3_PINLOW_MASK                 (0xFFF00U)
#define LPI2C_MCFGR3_PINLOW_SHIFT                (8U)
#define LPI2C_MCFGR3_PINLOW(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_MCFGR3_PINLOW_SHIFT)) & LPI2C_MCFGR3_PINLOW_MASK)

/*! @name MDMR - Master Data Match Register */
#define LPI2C_MDMR_MATCH0_MASK                   (0xFFU)
#define LPI2C_MDMR_MATCH0_SHIFT                  (0U)
#define LPI2C_MDMR_MATCH0(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MDMR_MATCH0_SHIFT)) & LPI2C_MDMR_MATCH0_MASK)
#define LPI2C_MDMR_MATCH1_MASK                   (0xFF0000U)
#define LPI2C_MDMR_MATCH1_SHIFT                  (16U)
#define LPI2C_MDMR_MATCH1(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MDMR_MATCH1_SHIFT)) & LPI2C_MDMR_MATCH1_MASK)

/*! @name MCCR0 - Master Clock Configuration Register 0 */
#define LPI2C_MCCR0_CLKLO_MASK                   (0x3FU)
#define LPI2C_MCCR0_CLKLO_SHIFT                  (0U)
#define LPI2C_MCCR0_CLKLO(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR0_CLKLO_SHIFT)) & LPI2C_MCCR0_CLKLO_MASK)
#define LPI2C_MCCR0_CLKHI_MASK                   (0x3F00U)
#define LPI2C_MCCR0_CLKHI_SHIFT                  (8U)
#define LPI2C_MCCR0_CLKHI(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR0_CLKHI_SHIFT)) & LPI2C_MCCR0_CLKHI_MASK)
#define LPI2C_MCCR0_SETHOLD_MASK                 (0x3F0000U)
#define LPI2C_MCCR0_SETHOLD_SHIFT                (16U)
#define LPI2C_MCCR0_SETHOLD(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR0_SETHOLD_SHIFT)) & LPI2C_MCCR0_SETHOLD_MASK)
#define LPI2C_MCCR0_DATAVD_MASK                  (0x3F000000U)
#define LPI2C_MCCR0_DATAVD_SHIFT                 (24U)
#define LPI2C_MCCR0_DATAVD(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR0_DATAVD_SHIFT)) & LPI2C_MCCR0_DATAVD_MASK)

/*! @name MCCR1 - Master Clock Configuration Register 1 */
#define LPI2C_MCCR1_CLKLO_MASK                   (0x3FU)
#define LPI2C_MCCR1_CLKLO_SHIFT                  (0U)
#define LPI2C_MCCR1_CLKLO(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR1_CLKLO_SHIFT)) & LPI2C_MCCR1_CLKLO_MASK)
#define LPI2C_MCCR1_CLKHI_MASK                   (0x3F00U)
#define LPI2C_MCCR1_CLKHI_SHIFT                  (8U)
#define LPI2C_MCCR1_CLKHI(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR1_CLKHI_SHIFT)) & LPI2C_MCCR1_CLKHI_MASK)
#define LPI2C_MCCR1_SETHOLD_MASK                 (0x3F0000U)
#define LPI2C_MCCR1_SETHOLD_SHIFT                (16U)
#define LPI2C_MCCR1_SETHOLD(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR1_SETHOLD_SHIFT)) & LPI2C_MCCR1_SETHOLD_MASK)
#define LPI2C_MCCR1_DATAVD_MASK                  (0x3F000000U)
#define LPI2C_MCCR1_DATAVD_SHIFT                 (24U)
#define LPI2C_MCCR1_DATAVD(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MCCR1_DATAVD_SHIFT)) & LPI2C_MCCR1_DATAVD_MASK)

/*! @name MFCR - Master FIFO Control Register */
#define LPI2C_MFCR_TXWATER_MASK                  (0x3U)
#define LPI2C_MFCR_TXWATER_SHIFT                 (0U)
#define LPI2C_MFCR_TXWATER(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MFCR_TXWATER_SHIFT)) & LPI2C_MFCR_TXWATER_MASK)
#define LPI2C_MFCR_RXWATER_MASK                  (0x30000U)
#define LPI2C_MFCR_RXWATER_SHIFT                 (16U)
#define LPI2C_MFCR_RXWATER(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MFCR_RXWATER_SHIFT)) & LPI2C_MFCR_RXWATER_MASK)

/*! @name MFSR - Master FIFO Status Register */
#define LPI2C_MFSR_TXCOUNT_MASK                  (0x7U)
#define LPI2C_MFSR_TXCOUNT_SHIFT                 (0U)
#define LPI2C_MFSR_TXCOUNT(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MFSR_TXCOUNT_SHIFT)) & LPI2C_MFSR_TXCOUNT_MASK)
#define LPI2C_MFSR_RXCOUNT_MASK                  (0x70000U)
#define LPI2C_MFSR_RXCOUNT_SHIFT                 (16U)
#define LPI2C_MFSR_RXCOUNT(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MFSR_RXCOUNT_SHIFT)) & LPI2C_MFSR_RXCOUNT_MASK)

/*! @name MTDR - Master Transmit Data Register */
#define LPI2C_MTDR_DATA_MASK                     (0xFFU)
#define LPI2C_MTDR_DATA_SHIFT                    (0U)
#define LPI2C_MTDR_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MTDR_DATA_SHIFT)) & LPI2C_MTDR_DATA_MASK)
#define LPI2C_MTDR_CMD_MASK                      (0x700U)
#define LPI2C_MTDR_CMD_SHIFT                     (8U)
#define LPI2C_MTDR_CMD(x)                        (((uint32_t)(((uint32_t)(x)) << LPI2C_MTDR_CMD_SHIFT)) & LPI2C_MTDR_CMD_MASK)

/*! @name MRDR - Master Receive Data Register */
#define LPI2C_MRDR_DATA_MASK                     (0xFFU)
#define LPI2C_MRDR_DATA_SHIFT                    (0U)
#define LPI2C_MRDR_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_MRDR_DATA_SHIFT)) & LPI2C_MRDR_DATA_MASK)
#define LPI2C_MRDR_RXEMPTY_MASK                  (0x4000U)
#define LPI2C_MRDR_RXEMPTY_SHIFT                 (14U)
#define LPI2C_MRDR_RXEMPTY(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_MRDR_RXEMPTY_SHIFT)) & LPI2C_MRDR_RXEMPTY_MASK)

/*! @name SCR - Slave Control Register */
#define LPI2C_SCR_SEN_MASK                       (0x1U)
#define LPI2C_SCR_SEN_SHIFT                      (0U)
#define LPI2C_SCR_SEN(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SCR_SEN_SHIFT)) & LPI2C_SCR_SEN_MASK)
#define LPI2C_SCR_RST_MASK                       (0x2U)
#define LPI2C_SCR_RST_SHIFT                      (1U)
#define LPI2C_SCR_RST(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SCR_RST_SHIFT)) & LPI2C_SCR_RST_MASK)
#define LPI2C_SCR_FILTEN_MASK                    (0x10U)
#define LPI2C_SCR_FILTEN_SHIFT                   (4U)
#define LPI2C_SCR_FILTEN(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_SCR_FILTEN_SHIFT)) & LPI2C_SCR_FILTEN_MASK)
#define LPI2C_SCR_FILTDZ_MASK                    (0x20U)
#define LPI2C_SCR_FILTDZ_SHIFT                   (5U)
#define LPI2C_SCR_FILTDZ(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_SCR_FILTDZ_SHIFT)) & LPI2C_SCR_FILTDZ_MASK)
#define LPI2C_SCR_RTF_MASK                       (0x100U)
#define LPI2C_SCR_RTF_SHIFT                      (8U)
#define LPI2C_SCR_RTF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SCR_RTF_SHIFT)) & LPI2C_SCR_RTF_MASK)
#define LPI2C_SCR_RRF_MASK                       (0x200U)
#define LPI2C_SCR_RRF_SHIFT                      (9U)
#define LPI2C_SCR_RRF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SCR_RRF_SHIFT)) & LPI2C_SCR_RRF_MASK)

/*! @name SSR - Slave Status Register */
#define LPI2C_SSR_TDF_MASK                       (0x1U)
#define LPI2C_SSR_TDF_SHIFT                      (0U)
#define LPI2C_SSR_TDF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_TDF_SHIFT)) & LPI2C_SSR_TDF_MASK)
#define LPI2C_SSR_RDF_MASK                       (0x2U)
#define LPI2C_SSR_RDF_SHIFT                      (1U)
#define LPI2C_SSR_RDF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_RDF_SHIFT)) & LPI2C_SSR_RDF_MASK)
#define LPI2C_SSR_AVF_MASK                       (0x4U)
#define LPI2C_SSR_AVF_SHIFT                      (2U)
#define LPI2C_SSR_AVF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_AVF_SHIFT)) & LPI2C_SSR_AVF_MASK)
#define LPI2C_SSR_TAF_MASK                       (0x8U)
#define LPI2C_SSR_TAF_SHIFT                      (3U)
#define LPI2C_SSR_TAF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_TAF_SHIFT)) & LPI2C_SSR_TAF_MASK)
#define LPI2C_SSR_RSF_MASK                       (0x100U)
#define LPI2C_SSR_RSF_SHIFT                      (8U)
#define LPI2C_SSR_RSF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_RSF_SHIFT)) & LPI2C_SSR_RSF_MASK)
#define LPI2C_SSR_SDF_MASK                       (0x200U)
#define LPI2C_SSR_SDF_SHIFT                      (9U)
#define LPI2C_SSR_SDF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_SDF_SHIFT)) & LPI2C_SSR_SDF_MASK)
#define LPI2C_SSR_BEF_MASK                       (0x400U)
#define LPI2C_SSR_BEF_SHIFT                      (10U)
#define LPI2C_SSR_BEF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_BEF_SHIFT)) & LPI2C_SSR_BEF_MASK)
#define LPI2C_SSR_FEF_MASK                       (0x800U)
#define LPI2C_SSR_FEF_SHIFT                      (11U)
#define LPI2C_SSR_FEF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_FEF_SHIFT)) & LPI2C_SSR_FEF_MASK)
#define LPI2C_SSR_AM0F_MASK                      (0x1000U)
#define LPI2C_SSR_AM0F_SHIFT                     (12U)
#define LPI2C_SSR_AM0F(x)                        (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_AM0F_SHIFT)) & LPI2C_SSR_AM0F_MASK)
#define LPI2C_SSR_AM1F_MASK                      (0x2000U)
#define LPI2C_SSR_AM1F_SHIFT                     (13U)
#define LPI2C_SSR_AM1F(x)                        (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_AM1F_SHIFT)) & LPI2C_SSR_AM1F_MASK)
#define LPI2C_SSR_GCF_MASK                       (0x4000U)
#define LPI2C_SSR_GCF_SHIFT                      (14U)
#define LPI2C_SSR_GCF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_GCF_SHIFT)) & LPI2C_SSR_GCF_MASK)
#define LPI2C_SSR_SARF_MASK                      (0x8000U)
#define LPI2C_SSR_SARF_SHIFT                     (15U)
#define LPI2C_SSR_SARF(x)                        (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_SARF_SHIFT)) & LPI2C_SSR_SARF_MASK)
#define LPI2C_SSR_SBF_MASK                       (0x1000000U)
#define LPI2C_SSR_SBF_SHIFT                      (24U)
#define LPI2C_SSR_SBF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_SBF_SHIFT)) & LPI2C_SSR_SBF_MASK)
#define LPI2C_SSR_BBF_MASK                       (0x2000000U)
#define LPI2C_SSR_BBF_SHIFT                      (25U)
#define LPI2C_SSR_BBF(x)                         (((uint32_t)(((uint32_t)(x)) << LPI2C_SSR_BBF_SHIFT)) & LPI2C_SSR_BBF_MASK)

/*! @name SIER - Slave Interrupt Enable Register */
#define LPI2C_SIER_TDIE_MASK                     (0x1U)
#define LPI2C_SIER_TDIE_SHIFT                    (0U)
#define LPI2C_SIER_TDIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_TDIE_SHIFT)) & LPI2C_SIER_TDIE_MASK)
#define LPI2C_SIER_RDIE_MASK                     (0x2U)
#define LPI2C_SIER_RDIE_SHIFT                    (1U)
#define LPI2C_SIER_RDIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_RDIE_SHIFT)) & LPI2C_SIER_RDIE_MASK)
#define LPI2C_SIER_AVIE_MASK                     (0x4U)
#define LPI2C_SIER_AVIE_SHIFT                    (2U)
#define LPI2C_SIER_AVIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_AVIE_SHIFT)) & LPI2C_SIER_AVIE_MASK)
#define LPI2C_SIER_TAIE_MASK                     (0x8U)
#define LPI2C_SIER_TAIE_SHIFT                    (3U)
#define LPI2C_SIER_TAIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_TAIE_SHIFT)) & LPI2C_SIER_TAIE_MASK)
#define LPI2C_SIER_RSIE_MASK                     (0x100U)
#define LPI2C_SIER_RSIE_SHIFT                    (8U)
#define LPI2C_SIER_RSIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_RSIE_SHIFT)) & LPI2C_SIER_RSIE_MASK)
#define LPI2C_SIER_SDIE_MASK                     (0x200U)
#define LPI2C_SIER_SDIE_SHIFT                    (9U)
#define LPI2C_SIER_SDIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_SDIE_SHIFT)) & LPI2C_SIER_SDIE_MASK)
#define LPI2C_SIER_BEIE_MASK                     (0x400U)
#define LPI2C_SIER_BEIE_SHIFT                    (10U)
#define LPI2C_SIER_BEIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_BEIE_SHIFT)) & LPI2C_SIER_BEIE_MASK)
#define LPI2C_SIER_FEIE_MASK                     (0x800U)
#define LPI2C_SIER_FEIE_SHIFT                    (11U)
#define LPI2C_SIER_FEIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_FEIE_SHIFT)) & LPI2C_SIER_FEIE_MASK)
#define LPI2C_SIER_AM0IE_MASK                    (0x1000U)
#define LPI2C_SIER_AM0IE_SHIFT                   (12U)
#define LPI2C_SIER_AM0IE(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_AM0IE_SHIFT)) & LPI2C_SIER_AM0IE_MASK)
#define LPI2C_SIER_AM1F_MASK                     (0x2000U)
#define LPI2C_SIER_AM1F_SHIFT                    (13U)
#define LPI2C_SIER_AM1F(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_AM1F_SHIFT)) & LPI2C_SIER_AM1F_MASK)
#define LPI2C_SIER_GCIE_MASK                     (0x4000U)
#define LPI2C_SIER_GCIE_SHIFT                    (14U)
#define LPI2C_SIER_GCIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_GCIE_SHIFT)) & LPI2C_SIER_GCIE_MASK)
#define LPI2C_SIER_SARIE_MASK                    (0x8000U)
#define LPI2C_SIER_SARIE_SHIFT                   (15U)
#define LPI2C_SIER_SARIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_SIER_SARIE_SHIFT)) & LPI2C_SIER_SARIE_MASK)

/*! @name SDER - Slave DMA Enable Register */
#define LPI2C_SDER_TDDE_MASK                     (0x1U)
#define LPI2C_SDER_TDDE_SHIFT                    (0U)
#define LPI2C_SDER_TDDE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SDER_TDDE_SHIFT)) & LPI2C_SDER_TDDE_MASK)
#define LPI2C_SDER_RDDE_MASK                     (0x2U)
#define LPI2C_SDER_RDDE_SHIFT                    (1U)
#define LPI2C_SDER_RDDE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SDER_RDDE_SHIFT)) & LPI2C_SDER_RDDE_MASK)
#define LPI2C_SDER_AVDE_MASK                     (0x4U)
#define LPI2C_SDER_AVDE_SHIFT                    (2U)
#define LPI2C_SDER_AVDE(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SDER_AVDE_SHIFT)) & LPI2C_SDER_AVDE_MASK)

/*! @name SCFGR1 - Slave Configuration Register 1 */
#define LPI2C_SCFGR1_ADRSTALL_MASK               (0x1U)
#define LPI2C_SCFGR1_ADRSTALL_SHIFT              (0U)
#define LPI2C_SCFGR1_ADRSTALL(x)                 (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_ADRSTALL_SHIFT)) & LPI2C_SCFGR1_ADRSTALL_MASK)
#define LPI2C_SCFGR1_RXSTALL_MASK                (0x2U)
#define LPI2C_SCFGR1_RXSTALL_SHIFT               (1U)
#define LPI2C_SCFGR1_RXSTALL(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_RXSTALL_SHIFT)) & LPI2C_SCFGR1_RXSTALL_MASK)
#define LPI2C_SCFGR1_TXDSTALL_MASK               (0x4U)
#define LPI2C_SCFGR1_TXDSTALL_SHIFT              (2U)
#define LPI2C_SCFGR1_TXDSTALL(x)                 (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_TXDSTALL_SHIFT)) & LPI2C_SCFGR1_TXDSTALL_MASK)
#define LPI2C_SCFGR1_ACKSTALL_MASK               (0x8U)
#define LPI2C_SCFGR1_ACKSTALL_SHIFT              (3U)
#define LPI2C_SCFGR1_ACKSTALL(x)                 (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_ACKSTALL_SHIFT)) & LPI2C_SCFGR1_ACKSTALL_MASK)
#define LPI2C_SCFGR1_GCEN_MASK                   (0x100U)
#define LPI2C_SCFGR1_GCEN_SHIFT                  (8U)
#define LPI2C_SCFGR1_GCEN(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_GCEN_SHIFT)) & LPI2C_SCFGR1_GCEN_MASK)
#define LPI2C_SCFGR1_SAEN_MASK                   (0x200U)
#define LPI2C_SCFGR1_SAEN_SHIFT                  (9U)
#define LPI2C_SCFGR1_SAEN(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_SAEN_SHIFT)) & LPI2C_SCFGR1_SAEN_MASK)
#define LPI2C_SCFGR1_TXCFG_MASK                  (0x400U)
#define LPI2C_SCFGR1_TXCFG_SHIFT                 (10U)
#define LPI2C_SCFGR1_TXCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_TXCFG_SHIFT)) & LPI2C_SCFGR1_TXCFG_MASK)
#define LPI2C_SCFGR1_RXCFG_MASK                  (0x800U)
#define LPI2C_SCFGR1_RXCFG_SHIFT                 (11U)
#define LPI2C_SCFGR1_RXCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_RXCFG_SHIFT)) & LPI2C_SCFGR1_RXCFG_MASK)
#define LPI2C_SCFGR1_IGNACK_MASK                 (0x1000U)
#define LPI2C_SCFGR1_IGNACK_SHIFT                (12U)
#define LPI2C_SCFGR1_IGNACK(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_IGNACK_SHIFT)) & LPI2C_SCFGR1_IGNACK_MASK)
#define LPI2C_SCFGR1_HSMEN_MASK                  (0x2000U)
#define LPI2C_SCFGR1_HSMEN_SHIFT                 (13U)
#define LPI2C_SCFGR1_HSMEN(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_HSMEN_SHIFT)) & LPI2C_SCFGR1_HSMEN_MASK)
#define LPI2C_SCFGR1_ADDRCFG_MASK                (0x70000U)
#define LPI2C_SCFGR1_ADDRCFG_SHIFT               (16U)
#define LPI2C_SCFGR1_ADDRCFG(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR1_ADDRCFG_SHIFT)) & LPI2C_SCFGR1_ADDRCFG_MASK)

/*! @name SCFGR2 - Slave Configuration Register 2 */
#define LPI2C_SCFGR2_CLKHOLD_MASK                (0xFU)
#define LPI2C_SCFGR2_CLKHOLD_SHIFT               (0U)
#define LPI2C_SCFGR2_CLKHOLD(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR2_CLKHOLD_SHIFT)) & LPI2C_SCFGR2_CLKHOLD_MASK)
#define LPI2C_SCFGR2_DATAVD_MASK                 (0x3F00U)
#define LPI2C_SCFGR2_DATAVD_SHIFT                (8U)
#define LPI2C_SCFGR2_DATAVD(x)                   (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR2_DATAVD_SHIFT)) & LPI2C_SCFGR2_DATAVD_MASK)
#define LPI2C_SCFGR2_FILTSCL_MASK                (0xF0000U)
#define LPI2C_SCFGR2_FILTSCL_SHIFT               (16U)
#define LPI2C_SCFGR2_FILTSCL(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR2_FILTSCL_SHIFT)) & LPI2C_SCFGR2_FILTSCL_MASK)
#define LPI2C_SCFGR2_FILTSDA_MASK                (0xF000000U)
#define LPI2C_SCFGR2_FILTSDA_SHIFT               (24U)
#define LPI2C_SCFGR2_FILTSDA(x)                  (((uint32_t)(((uint32_t)(x)) << LPI2C_SCFGR2_FILTSDA_SHIFT)) & LPI2C_SCFGR2_FILTSDA_MASK)

/*! @name SAMR - Slave Address Match Register */
#define LPI2C_SAMR_ADDR0_MASK                    (0x7FEU)
#define LPI2C_SAMR_ADDR0_SHIFT                   (1U)
#define LPI2C_SAMR_ADDR0(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_SAMR_ADDR0_SHIFT)) & LPI2C_SAMR_ADDR0_MASK)
#define LPI2C_SAMR_ADDR1_MASK                    (0x7FE0000U)
#define LPI2C_SAMR_ADDR1_SHIFT                   (17U)
#define LPI2C_SAMR_ADDR1(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_SAMR_ADDR1_SHIFT)) & LPI2C_SAMR_ADDR1_MASK)

/*! @name SASR - Slave Address Status Register */
#define LPI2C_SASR_RADDR_MASK                    (0x7FFU)
#define LPI2C_SASR_RADDR_SHIFT                   (0U)
#define LPI2C_SASR_RADDR(x)                      (((uint32_t)(((uint32_t)(x)) << LPI2C_SASR_RADDR_SHIFT)) & LPI2C_SASR_RADDR_MASK)
#define LPI2C_SASR_ANV_MASK                      (0x4000U)
#define LPI2C_SASR_ANV_SHIFT                     (14U)
#define LPI2C_SASR_ANV(x)                        (((uint32_t)(((uint32_t)(x)) << LPI2C_SASR_ANV_SHIFT)) & LPI2C_SASR_ANV_MASK)

/*! @name STAR - Slave Transmit ACK Register */
#define LPI2C_STAR_TXNACK_MASK                   (0x1U)
#define LPI2C_STAR_TXNACK_SHIFT                  (0U)
#define LPI2C_STAR_TXNACK(x)                     (((uint32_t)(((uint32_t)(x)) << LPI2C_STAR_TXNACK_SHIFT)) & LPI2C_STAR_TXNACK_MASK)

/*! @name STDR - Slave Transmit Data Register */
#define LPI2C_STDR_DATA_MASK                     (0xFFU)
#define LPI2C_STDR_DATA_SHIFT                    (0U)
#define LPI2C_STDR_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_STDR_DATA_SHIFT)) & LPI2C_STDR_DATA_MASK)

/*! @name SRDR - Slave Receive Data Register */
#define LPI2C_SRDR_DATA_MASK                     (0xFFU)
#define LPI2C_SRDR_DATA_SHIFT                    (0U)
#define LPI2C_SRDR_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPI2C_SRDR_DATA_SHIFT)) & LPI2C_SRDR_DATA_MASK)
#define LPI2C_SRDR_RXEMPTY_MASK                  (0x4000U)
#define LPI2C_SRDR_RXEMPTY_SHIFT                 (14U)
#define LPI2C_SRDR_RXEMPTY(x)                    (((uint32_t)(((uint32_t)(x)) << LPI2C_SRDR_RXEMPTY_SHIFT)) & LPI2C_SRDR_RXEMPTY_MASK)
#define LPI2C_SRDR_SOF_MASK                      (0x8000U)
#define LPI2C_SRDR_SOF_SHIFT                     (15U)
#define LPI2C_SRDR_SOF(x)                        (((uint32_t)(((uint32_t)(x)) << LPI2C_SRDR_SOF_SHIFT)) & LPI2C_SRDR_SOF_MASK)


/*!
 * @}
 */ /* end of group LPI2C_Register_Masks */


/* LPI2C - Peripheral instance base addresses */
/** Peripheral LPI2C0 base address */
#define LPI2C0_BASE                              (0x4003A000u)
/** Peripheral LPI2C0 base pointer */
#define LPI2C0                                   ((LPI2C_Type *)LPI2C0_BASE)
/** Peripheral LPI2C1 base address */
#define LPI2C1_BASE                              (0x4003B000u)
/** Peripheral LPI2C1 base pointer */
#define LPI2C1                                   ((LPI2C_Type *)LPI2C1_BASE)
/** Peripheral LPI2C2 base address */
#define LPI2C2_BASE                              (0x4003C000u)
/** Peripheral LPI2C2 base pointer */
#define LPI2C2                                   ((LPI2C_Type *)LPI2C2_BASE)
/** Peripheral LPI2C3 base address */
#define LPI2C3_BASE                              (0x4102E000u)
/** Peripheral LPI2C3 base pointer */
#define LPI2C3                                   ((LPI2C_Type *)LPI2C3_BASE)
/** Array initializer of LPI2C peripheral base addresses */
#define LPI2C_BASE_ADDRS                         { LPI2C0_BASE, LPI2C1_BASE, LPI2C2_BASE, LPI2C3_BASE }
/** Array initializer of LPI2C peripheral base pointers */
#define LPI2C_BASE_PTRS                          { LPI2C0, LPI2C1, LPI2C2, LPI2C3 }
/** Interrupt vectors for the LPI2C peripheral type */
#define LPI2C_IRQS                               { LPI2C0_IRQn, LPI2C1_IRQn, LPI2C2_IRQn, LPI2C3_IRQn }

/*!
 * @}
 */ /* end of group LPI2C_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LPIT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPIT_Peripheral_Access_Layer LPIT Peripheral Access Layer
 * @{
 */

/** LPIT - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t MCR;                               /**< Module Control Register, offset: 0x8 */
  __IO uint32_t MSR;                               /**< Module Status Register, offset: 0xC */
  __IO uint32_t MIER;                              /**< Module Interrupt Enable Register, offset: 0x10 */
  __IO uint32_t SETTEN;                            /**< Set Timer Enable Register, offset: 0x14 */
  __O  uint32_t CLRTEN;                            /**< Clear Timer Enable Register, offset: 0x18 */
       uint8_t RESERVED_0[4];
  struct {                                         /* offset: 0x20, array step: 0x10 */
    __IO uint32_t TVAL;                              /**< Timer Value Register, array offset: 0x20, array step: 0x10 */
    __I  uint32_t CVAL;                              /**< Current Timer Value, array offset: 0x24, array step: 0x10 */
    __IO uint32_t TCTRL;                             /**< Timer Control Register, array offset: 0x28, array step: 0x10 */
         uint8_t RESERVED_0[4];
  } CHANNEL[4];
} LPIT_Type;

/* ----------------------------------------------------------------------------
   -- LPIT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPIT_Register_Masks LPIT Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define LPIT_VERID_FEATURE_MASK                  (0xFFFFU)
#define LPIT_VERID_FEATURE_SHIFT                 (0U)
#define LPIT_VERID_FEATURE(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_VERID_FEATURE_SHIFT)) & LPIT_VERID_FEATURE_MASK)
#define LPIT_VERID_MINOR_MASK                    (0xFF0000U)
#define LPIT_VERID_MINOR_SHIFT                   (16U)
#define LPIT_VERID_MINOR(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_VERID_MINOR_SHIFT)) & LPIT_VERID_MINOR_MASK)
#define LPIT_VERID_MAJOR_MASK                    (0xFF000000U)
#define LPIT_VERID_MAJOR_SHIFT                   (24U)
#define LPIT_VERID_MAJOR(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_VERID_MAJOR_SHIFT)) & LPIT_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define LPIT_PARAM_CHANNEL_MASK                  (0xFFU)
#define LPIT_PARAM_CHANNEL_SHIFT                 (0U)
#define LPIT_PARAM_CHANNEL(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_PARAM_CHANNEL_SHIFT)) & LPIT_PARAM_CHANNEL_MASK)
#define LPIT_PARAM_EXT_TRIG_MASK                 (0xFF00U)
#define LPIT_PARAM_EXT_TRIG_SHIFT                (8U)
#define LPIT_PARAM_EXT_TRIG(x)                   (((uint32_t)(((uint32_t)(x)) << LPIT_PARAM_EXT_TRIG_SHIFT)) & LPIT_PARAM_EXT_TRIG_MASK)

/*! @name MCR - Module Control Register */
#define LPIT_MCR_M_CEN_MASK                      (0x1U)
#define LPIT_MCR_M_CEN_SHIFT                     (0U)
#define LPIT_MCR_M_CEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_M_CEN_SHIFT)) & LPIT_MCR_M_CEN_MASK)
#define LPIT_MCR_SW_RST_MASK                     (0x2U)
#define LPIT_MCR_SW_RST_SHIFT                    (1U)
#define LPIT_MCR_SW_RST(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_SW_RST_SHIFT)) & LPIT_MCR_SW_RST_MASK)
#define LPIT_MCR_DOZE_EN_MASK                    (0x4U)
#define LPIT_MCR_DOZE_EN_SHIFT                   (2U)
#define LPIT_MCR_DOZE_EN(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_DOZE_EN_SHIFT)) & LPIT_MCR_DOZE_EN_MASK)
#define LPIT_MCR_DBG_EN_MASK                     (0x8U)
#define LPIT_MCR_DBG_EN_SHIFT                    (3U)
#define LPIT_MCR_DBG_EN(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_DBG_EN_SHIFT)) & LPIT_MCR_DBG_EN_MASK)

/*! @name MSR - Module Status Register */
#define LPIT_MSR_TIF0_MASK                       (0x1U)
#define LPIT_MSR_TIF0_SHIFT                      (0U)
#define LPIT_MSR_TIF0(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF0_SHIFT)) & LPIT_MSR_TIF0_MASK)
#define LPIT_MSR_TIF1_MASK                       (0x2U)
#define LPIT_MSR_TIF1_SHIFT                      (1U)
#define LPIT_MSR_TIF1(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF1_SHIFT)) & LPIT_MSR_TIF1_MASK)
#define LPIT_MSR_TIF2_MASK                       (0x4U)
#define LPIT_MSR_TIF2_SHIFT                      (2U)
#define LPIT_MSR_TIF2(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF2_SHIFT)) & LPIT_MSR_TIF2_MASK)
#define LPIT_MSR_TIF3_MASK                       (0x8U)
#define LPIT_MSR_TIF3_SHIFT                      (3U)
#define LPIT_MSR_TIF3(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF3_SHIFT)) & LPIT_MSR_TIF3_MASK)

/*! @name MIER - Module Interrupt Enable Register */
#define LPIT_MIER_TIE0_MASK                      (0x1U)
#define LPIT_MIER_TIE0_SHIFT                     (0U)
#define LPIT_MIER_TIE0(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE0_SHIFT)) & LPIT_MIER_TIE0_MASK)
#define LPIT_MIER_TIE1_MASK                      (0x2U)
#define LPIT_MIER_TIE1_SHIFT                     (1U)
#define LPIT_MIER_TIE1(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE1_SHIFT)) & LPIT_MIER_TIE1_MASK)
#define LPIT_MIER_TIE2_MASK                      (0x4U)
#define LPIT_MIER_TIE2_SHIFT                     (2U)
#define LPIT_MIER_TIE2(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE2_SHIFT)) & LPIT_MIER_TIE2_MASK)
#define LPIT_MIER_TIE3_MASK                      (0x8U)
#define LPIT_MIER_TIE3_SHIFT                     (3U)
#define LPIT_MIER_TIE3(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE3_SHIFT)) & LPIT_MIER_TIE3_MASK)

/*! @name SETTEN - Set Timer Enable Register */
#define LPIT_SETTEN_SET_T_EN_0_MASK              (0x1U)
#define LPIT_SETTEN_SET_T_EN_0_SHIFT             (0U)
#define LPIT_SETTEN_SET_T_EN_0(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_0_SHIFT)) & LPIT_SETTEN_SET_T_EN_0_MASK)
#define LPIT_SETTEN_SET_T_EN_1_MASK              (0x2U)
#define LPIT_SETTEN_SET_T_EN_1_SHIFT             (1U)
#define LPIT_SETTEN_SET_T_EN_1(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_1_SHIFT)) & LPIT_SETTEN_SET_T_EN_1_MASK)
#define LPIT_SETTEN_SET_T_EN_2_MASK              (0x4U)
#define LPIT_SETTEN_SET_T_EN_2_SHIFT             (2U)
#define LPIT_SETTEN_SET_T_EN_2(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_2_SHIFT)) & LPIT_SETTEN_SET_T_EN_2_MASK)
#define LPIT_SETTEN_SET_T_EN_3_MASK              (0x8U)
#define LPIT_SETTEN_SET_T_EN_3_SHIFT             (3U)
#define LPIT_SETTEN_SET_T_EN_3(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_3_SHIFT)) & LPIT_SETTEN_SET_T_EN_3_MASK)

/*! @name CLRTEN - Clear Timer Enable Register */
#define LPIT_CLRTEN_CLR_T_EN_0_MASK              (0x1U)
#define LPIT_CLRTEN_CLR_T_EN_0_SHIFT             (0U)
#define LPIT_CLRTEN_CLR_T_EN_0(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_0_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_0_MASK)
#define LPIT_CLRTEN_CLR_T_EN_1_MASK              (0x2U)
#define LPIT_CLRTEN_CLR_T_EN_1_SHIFT             (1U)
#define LPIT_CLRTEN_CLR_T_EN_1(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_1_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_1_MASK)
#define LPIT_CLRTEN_CLR_T_EN_2_MASK              (0x4U)
#define LPIT_CLRTEN_CLR_T_EN_2_SHIFT             (2U)
#define LPIT_CLRTEN_CLR_T_EN_2(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_2_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_2_MASK)
#define LPIT_CLRTEN_CLR_T_EN_3_MASK              (0x8U)
#define LPIT_CLRTEN_CLR_T_EN_3_SHIFT             (3U)
#define LPIT_CLRTEN_CLR_T_EN_3(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_3_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_3_MASK)

/*! @name TVAL - Timer Value Register */
#define LPIT_TVAL_TMR_VAL_MASK                   (0xFFFFFFFFU)
#define LPIT_TVAL_TMR_VAL_SHIFT                  (0U)
#define LPIT_TVAL_TMR_VAL(x)                     (((uint32_t)(((uint32_t)(x)) << LPIT_TVAL_TMR_VAL_SHIFT)) & LPIT_TVAL_TMR_VAL_MASK)

/* The count of LPIT_TVAL */
#define LPIT_TVAL_COUNT                          (4U)

/*! @name CVAL - Current Timer Value */
#define LPIT_CVAL_TMR_CUR_VAL_MASK               (0xFFFFFFFFU)
#define LPIT_CVAL_TMR_CUR_VAL_SHIFT              (0U)
#define LPIT_CVAL_TMR_CUR_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << LPIT_CVAL_TMR_CUR_VAL_SHIFT)) & LPIT_CVAL_TMR_CUR_VAL_MASK)

/* The count of LPIT_CVAL */
#define LPIT_CVAL_COUNT                          (4U)

/*! @name TCTRL - Timer Control Register */
#define LPIT_TCTRL_T_EN_MASK                     (0x1U)
#define LPIT_TCTRL_T_EN_SHIFT                    (0U)
#define LPIT_TCTRL_T_EN(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_T_EN_SHIFT)) & LPIT_TCTRL_T_EN_MASK)
#define LPIT_TCTRL_CHAIN_MASK                    (0x2U)
#define LPIT_TCTRL_CHAIN_SHIFT                   (1U)
#define LPIT_TCTRL_CHAIN(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_CHAIN_SHIFT)) & LPIT_TCTRL_CHAIN_MASK)
#define LPIT_TCTRL_MODE_MASK                     (0xCU)
#define LPIT_TCTRL_MODE_SHIFT                    (2U)
#define LPIT_TCTRL_MODE(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_MODE_SHIFT)) & LPIT_TCTRL_MODE_MASK)
#define LPIT_TCTRL_TSOT_MASK                     (0x10000U)
#define LPIT_TCTRL_TSOT_SHIFT                    (16U)
#define LPIT_TCTRL_TSOT(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TSOT_SHIFT)) & LPIT_TCTRL_TSOT_MASK)
#define LPIT_TCTRL_TSOI_MASK                     (0x20000U)
#define LPIT_TCTRL_TSOI_SHIFT                    (17U)
#define LPIT_TCTRL_TSOI(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TSOI_SHIFT)) & LPIT_TCTRL_TSOI_MASK)
#define LPIT_TCTRL_TROT_MASK                     (0x40000U)
#define LPIT_TCTRL_TROT_SHIFT                    (18U)
#define LPIT_TCTRL_TROT(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TROT_SHIFT)) & LPIT_TCTRL_TROT_MASK)
#define LPIT_TCTRL_TRG_SRC_MASK                  (0x800000U)
#define LPIT_TCTRL_TRG_SRC_SHIFT                 (23U)
#define LPIT_TCTRL_TRG_SRC(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TRG_SRC_SHIFT)) & LPIT_TCTRL_TRG_SRC_MASK)
#define LPIT_TCTRL_TRG_SEL_MASK                  (0xF000000U)
#define LPIT_TCTRL_TRG_SEL_SHIFT                 (24U)
#define LPIT_TCTRL_TRG_SEL(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TRG_SEL_SHIFT)) & LPIT_TCTRL_TRG_SEL_MASK)

/* The count of LPIT_TCTRL */
#define LPIT_TCTRL_COUNT                         (4U)


/*!
 * @}
 */ /* end of group LPIT_Register_Masks */


/* LPIT - Peripheral instance base addresses */
/** Peripheral LPIT0 base address */
#define LPIT0_BASE                               (0x40030000u)
/** Peripheral LPIT0 base pointer */
#define LPIT0                                    ((LPIT_Type *)LPIT0_BASE)
/** Peripheral LPIT1 base address */
#define LPIT1_BASE                               (0x4102A000u)
/** Peripheral LPIT1 base pointer */
#define LPIT1                                    ((LPIT_Type *)LPIT1_BASE)
/** Array initializer of LPIT peripheral base addresses */
#define LPIT_BASE_ADDRS                          { LPIT0_BASE, LPIT1_BASE }
/** Array initializer of LPIT peripheral base pointers */
#define LPIT_BASE_PTRS                           { LPIT0, LPIT1 }
/** Interrupt vectors for the LPIT peripheral type */
#define LPIT_IRQS                                { { LPIT0_IRQn, LPIT0_IRQn, LPIT0_IRQn, LPIT0_IRQn }, { LPIT1_IRQn, LPIT1_IRQn, LPIT1_IRQn, LPIT1_IRQn } }

/*!
 * @}
 */ /* end of group LPIT_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LPSPI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPSPI_Peripheral_Access_Layer LPSPI Peripheral Access Layer
 * @{
 */

/** LPSPI - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t CR;                                /**< Control Register, offset: 0x10 */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x14 */
  __IO uint32_t IER;                               /**< Interrupt Enable Register, offset: 0x18 */
  __IO uint32_t DER;                               /**< DMA Enable Register, offset: 0x1C */
  __IO uint32_t CFGR0;                             /**< Configuration Register 0, offset: 0x20 */
  __IO uint32_t CFGR1;                             /**< Configuration Register 1, offset: 0x24 */
       uint8_t RESERVED_1[8];
  __IO uint32_t DMR0;                              /**< Data Match Register 0, offset: 0x30 */
  __IO uint32_t DMR1;                              /**< Data Match Register 1, offset: 0x34 */
       uint8_t RESERVED_2[8];
  __IO uint32_t CCR;                               /**< Clock Configuration Register, offset: 0x40 */
       uint8_t RESERVED_3[20];
  __IO uint32_t FCR;                               /**< FIFO Control Register, offset: 0x58 */
  __I  uint32_t FSR;                               /**< FIFO Status Register, offset: 0x5C */
  __IO uint32_t TCR;                               /**< Transmit Command Register, offset: 0x60 */
  __O  uint32_t TDR;                               /**< Transmit Data Register, offset: 0x64 */
       uint8_t RESERVED_4[8];
  __I  uint32_t RSR;                               /**< Receive Status Register, offset: 0x70 */
  __I  uint32_t RDR;                               /**< Receive Data Register, offset: 0x74 */
} LPSPI_Type;

/* ----------------------------------------------------------------------------
   -- LPSPI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPSPI_Register_Masks LPSPI Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define LPSPI_VERID_FEATURE_MASK                 (0xFFFFU)
#define LPSPI_VERID_FEATURE_SHIFT                (0U)
#define LPSPI_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_FEATURE_SHIFT)) & LPSPI_VERID_FEATURE_MASK)
#define LPSPI_VERID_MINOR_MASK                   (0xFF0000U)
#define LPSPI_VERID_MINOR_SHIFT                  (16U)
#define LPSPI_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_MINOR_SHIFT)) & LPSPI_VERID_MINOR_MASK)
#define LPSPI_VERID_MAJOR_MASK                   (0xFF000000U)
#define LPSPI_VERID_MAJOR_SHIFT                  (24U)
#define LPSPI_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_MAJOR_SHIFT)) & LPSPI_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define LPSPI_PARAM_TXFIFO_MASK                  (0xFFU)
#define LPSPI_PARAM_TXFIFO_SHIFT                 (0U)
#define LPSPI_PARAM_TXFIFO(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_TXFIFO_SHIFT)) & LPSPI_PARAM_TXFIFO_MASK)
#define LPSPI_PARAM_RXFIFO_MASK                  (0xFF00U)
#define LPSPI_PARAM_RXFIFO_SHIFT                 (8U)
#define LPSPI_PARAM_RXFIFO(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_RXFIFO_SHIFT)) & LPSPI_PARAM_RXFIFO_MASK)

/*! @name CR - Control Register */
#define LPSPI_CR_MEN_MASK                        (0x1U)
#define LPSPI_CR_MEN_SHIFT                       (0U)
#define LPSPI_CR_MEN(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_MEN_SHIFT)) & LPSPI_CR_MEN_MASK)
#define LPSPI_CR_RST_MASK                        (0x2U)
#define LPSPI_CR_RST_SHIFT                       (1U)
#define LPSPI_CR_RST(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RST_SHIFT)) & LPSPI_CR_RST_MASK)
#define LPSPI_CR_DOZEN_MASK                      (0x4U)
#define LPSPI_CR_DOZEN_SHIFT                     (2U)
#define LPSPI_CR_DOZEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_DOZEN_SHIFT)) & LPSPI_CR_DOZEN_MASK)
#define LPSPI_CR_DBGEN_MASK                      (0x8U)
#define LPSPI_CR_DBGEN_SHIFT                     (3U)
#define LPSPI_CR_DBGEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_DBGEN_SHIFT)) & LPSPI_CR_DBGEN_MASK)
#define LPSPI_CR_RTF_MASK                        (0x100U)
#define LPSPI_CR_RTF_SHIFT                       (8U)
#define LPSPI_CR_RTF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RTF_SHIFT)) & LPSPI_CR_RTF_MASK)
#define LPSPI_CR_RRF_MASK                        (0x200U)
#define LPSPI_CR_RRF_SHIFT                       (9U)
#define LPSPI_CR_RRF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RRF_SHIFT)) & LPSPI_CR_RRF_MASK)

/*! @name SR - Status Register */
#define LPSPI_SR_TDF_MASK                        (0x1U)
#define LPSPI_SR_TDF_SHIFT                       (0U)
#define LPSPI_SR_TDF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TDF_SHIFT)) & LPSPI_SR_TDF_MASK)
#define LPSPI_SR_RDF_MASK                        (0x2U)
#define LPSPI_SR_RDF_SHIFT                       (1U)
#define LPSPI_SR_RDF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_RDF_SHIFT)) & LPSPI_SR_RDF_MASK)
#define LPSPI_SR_WCF_MASK                        (0x100U)
#define LPSPI_SR_WCF_SHIFT                       (8U)
#define LPSPI_SR_WCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_WCF_SHIFT)) & LPSPI_SR_WCF_MASK)
#define LPSPI_SR_FCF_MASK                        (0x200U)
#define LPSPI_SR_FCF_SHIFT                       (9U)
#define LPSPI_SR_FCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_FCF_SHIFT)) & LPSPI_SR_FCF_MASK)
#define LPSPI_SR_TCF_MASK                        (0x400U)
#define LPSPI_SR_TCF_SHIFT                       (10U)
#define LPSPI_SR_TCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TCF_SHIFT)) & LPSPI_SR_TCF_MASK)
#define LPSPI_SR_TEF_MASK                        (0x800U)
#define LPSPI_SR_TEF_SHIFT                       (11U)
#define LPSPI_SR_TEF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TEF_SHIFT)) & LPSPI_SR_TEF_MASK)
#define LPSPI_SR_REF_MASK                        (0x1000U)
#define LPSPI_SR_REF_SHIFT                       (12U)
#define LPSPI_SR_REF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_REF_SHIFT)) & LPSPI_SR_REF_MASK)
#define LPSPI_SR_DMF_MASK                        (0x2000U)
#define LPSPI_SR_DMF_SHIFT                       (13U)
#define LPSPI_SR_DMF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_DMF_SHIFT)) & LPSPI_SR_DMF_MASK)
#define LPSPI_SR_MBF_MASK                        (0x1000000U)
#define LPSPI_SR_MBF_SHIFT                       (24U)
#define LPSPI_SR_MBF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_MBF_SHIFT)) & LPSPI_SR_MBF_MASK)

/*! @name IER - Interrupt Enable Register */
#define LPSPI_IER_TDIE_MASK                      (0x1U)
#define LPSPI_IER_TDIE_SHIFT                     (0U)
#define LPSPI_IER_TDIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TDIE_SHIFT)) & LPSPI_IER_TDIE_MASK)
#define LPSPI_IER_RDIE_MASK                      (0x2U)
#define LPSPI_IER_RDIE_SHIFT                     (1U)
#define LPSPI_IER_RDIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_RDIE_SHIFT)) & LPSPI_IER_RDIE_MASK)
#define LPSPI_IER_WCIE_MASK                      (0x100U)
#define LPSPI_IER_WCIE_SHIFT                     (8U)
#define LPSPI_IER_WCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_WCIE_SHIFT)) & LPSPI_IER_WCIE_MASK)
#define LPSPI_IER_FCIE_MASK                      (0x200U)
#define LPSPI_IER_FCIE_SHIFT                     (9U)
#define LPSPI_IER_FCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_FCIE_SHIFT)) & LPSPI_IER_FCIE_MASK)
#define LPSPI_IER_TCIE_MASK                      (0x400U)
#define LPSPI_IER_TCIE_SHIFT                     (10U)
#define LPSPI_IER_TCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TCIE_SHIFT)) & LPSPI_IER_TCIE_MASK)
#define LPSPI_IER_TEIE_MASK                      (0x800U)
#define LPSPI_IER_TEIE_SHIFT                     (11U)
#define LPSPI_IER_TEIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TEIE_SHIFT)) & LPSPI_IER_TEIE_MASK)
#define LPSPI_IER_REIE_MASK                      (0x1000U)
#define LPSPI_IER_REIE_SHIFT                     (12U)
#define LPSPI_IER_REIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_REIE_SHIFT)) & LPSPI_IER_REIE_MASK)
#define LPSPI_IER_DMIE_MASK                      (0x2000U)
#define LPSPI_IER_DMIE_SHIFT                     (13U)
#define LPSPI_IER_DMIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_DMIE_SHIFT)) & LPSPI_IER_DMIE_MASK)

/*! @name DER - DMA Enable Register */
#define LPSPI_DER_TDDE_MASK                      (0x1U)
#define LPSPI_DER_TDDE_SHIFT                     (0U)
#define LPSPI_DER_TDDE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_DER_TDDE_SHIFT)) & LPSPI_DER_TDDE_MASK)
#define LPSPI_DER_RDDE_MASK                      (0x2U)
#define LPSPI_DER_RDDE_SHIFT                     (1U)
#define LPSPI_DER_RDDE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_DER_RDDE_SHIFT)) & LPSPI_DER_RDDE_MASK)

/*! @name CFGR0 - Configuration Register 0 */
#define LPSPI_CFGR0_HREN_MASK                    (0x1U)
#define LPSPI_CFGR0_HREN_SHIFT                   (0U)
#define LPSPI_CFGR0_HREN(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HREN_SHIFT)) & LPSPI_CFGR0_HREN_MASK)
#define LPSPI_CFGR0_HRPOL_MASK                   (0x2U)
#define LPSPI_CFGR0_HRPOL_SHIFT                  (1U)
#define LPSPI_CFGR0_HRPOL(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HRPOL_SHIFT)) & LPSPI_CFGR0_HRPOL_MASK)
#define LPSPI_CFGR0_HRSEL_MASK                   (0x4U)
#define LPSPI_CFGR0_HRSEL_SHIFT                  (2U)
#define LPSPI_CFGR0_HRSEL(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HRSEL_SHIFT)) & LPSPI_CFGR0_HRSEL_MASK)
#define LPSPI_CFGR0_CIRFIFO_MASK                 (0x100U)
#define LPSPI_CFGR0_CIRFIFO_SHIFT                (8U)
#define LPSPI_CFGR0_CIRFIFO(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_CIRFIFO_SHIFT)) & LPSPI_CFGR0_CIRFIFO_MASK)
#define LPSPI_CFGR0_RDMO_MASK                    (0x200U)
#define LPSPI_CFGR0_RDMO_SHIFT                   (9U)
#define LPSPI_CFGR0_RDMO(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_RDMO_SHIFT)) & LPSPI_CFGR0_RDMO_MASK)

/*! @name CFGR1 - Configuration Register 1 */
#define LPSPI_CFGR1_MASTER_MASK                  (0x1U)
#define LPSPI_CFGR1_MASTER_SHIFT                 (0U)
#define LPSPI_CFGR1_MASTER(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_MASTER_SHIFT)) & LPSPI_CFGR1_MASTER_MASK)
#define LPSPI_CFGR1_SAMPLE_MASK                  (0x2U)
#define LPSPI_CFGR1_SAMPLE_SHIFT                 (1U)
#define LPSPI_CFGR1_SAMPLE(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_SAMPLE_SHIFT)) & LPSPI_CFGR1_SAMPLE_MASK)
#define LPSPI_CFGR1_AUTOPCS_MASK                 (0x4U)
#define LPSPI_CFGR1_AUTOPCS_SHIFT                (2U)
#define LPSPI_CFGR1_AUTOPCS(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_AUTOPCS_SHIFT)) & LPSPI_CFGR1_AUTOPCS_MASK)
#define LPSPI_CFGR1_NOSTALL_MASK                 (0x8U)
#define LPSPI_CFGR1_NOSTALL_SHIFT                (3U)
#define LPSPI_CFGR1_NOSTALL(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_NOSTALL_SHIFT)) & LPSPI_CFGR1_NOSTALL_MASK)
#define LPSPI_CFGR1_PCSPOL_MASK                  (0xF00U)
#define LPSPI_CFGR1_PCSPOL_SHIFT                 (8U)
#define LPSPI_CFGR1_PCSPOL(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PCSPOL_SHIFT)) & LPSPI_CFGR1_PCSPOL_MASK)
#define LPSPI_CFGR1_MATCFG_MASK                  (0x70000U)
#define LPSPI_CFGR1_MATCFG_SHIFT                 (16U)
#define LPSPI_CFGR1_MATCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_MATCFG_SHIFT)) & LPSPI_CFGR1_MATCFG_MASK)
#define LPSPI_CFGR1_PINCFG_MASK                  (0x3000000U)
#define LPSPI_CFGR1_PINCFG_SHIFT                 (24U)
#define LPSPI_CFGR1_PINCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PINCFG_SHIFT)) & LPSPI_CFGR1_PINCFG_MASK)
#define LPSPI_CFGR1_OUTCFG_MASK                  (0x4000000U)
#define LPSPI_CFGR1_OUTCFG_SHIFT                 (26U)
#define LPSPI_CFGR1_OUTCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_OUTCFG_SHIFT)) & LPSPI_CFGR1_OUTCFG_MASK)
#define LPSPI_CFGR1_PCSCFG_MASK                  (0x8000000U)
#define LPSPI_CFGR1_PCSCFG_SHIFT                 (27U)
#define LPSPI_CFGR1_PCSCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PCSCFG_SHIFT)) & LPSPI_CFGR1_PCSCFG_MASK)

/*! @name DMR0 - Data Match Register 0 */
#define LPSPI_DMR0_MATCH0_MASK                   (0xFFFFFFFFU)
#define LPSPI_DMR0_MATCH0_SHIFT                  (0U)
#define LPSPI_DMR0_MATCH0(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_DMR0_MATCH0_SHIFT)) & LPSPI_DMR0_MATCH0_MASK)

/*! @name DMR1 - Data Match Register 1 */
#define LPSPI_DMR1_MATCH1_MASK                   (0xFFFFFFFFU)
#define LPSPI_DMR1_MATCH1_SHIFT                  (0U)
#define LPSPI_DMR1_MATCH1(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_DMR1_MATCH1_SHIFT)) & LPSPI_DMR1_MATCH1_MASK)

/*! @name CCR - Clock Configuration Register */
#define LPSPI_CCR_SCKDIV_MASK                    (0xFFU)
#define LPSPI_CCR_SCKDIV_SHIFT                   (0U)
#define LPSPI_CCR_SCKDIV(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_SCKDIV_SHIFT)) & LPSPI_CCR_SCKDIV_MASK)
#define LPSPI_CCR_DBT_MASK                       (0xFF00U)
#define LPSPI_CCR_DBT_SHIFT                      (8U)
#define LPSPI_CCR_DBT(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_DBT_SHIFT)) & LPSPI_CCR_DBT_MASK)
#define LPSPI_CCR_PCSSCK_MASK                    (0xFF0000U)
#define LPSPI_CCR_PCSSCK_SHIFT                   (16U)
#define LPSPI_CCR_PCSSCK(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_PCSSCK_SHIFT)) & LPSPI_CCR_PCSSCK_MASK)
#define LPSPI_CCR_SCKPCS_MASK                    (0xFF000000U)
#define LPSPI_CCR_SCKPCS_SHIFT                   (24U)
#define LPSPI_CCR_SCKPCS(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_SCKPCS_SHIFT)) & LPSPI_CCR_SCKPCS_MASK)

/*! @name FCR - FIFO Control Register */
#define LPSPI_FCR_TXWATER_MASK                   (0x3U)
#define LPSPI_FCR_TXWATER_SHIFT                  (0U)
#define LPSPI_FCR_TXWATER(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FCR_TXWATER_SHIFT)) & LPSPI_FCR_TXWATER_MASK)
#define LPSPI_FCR_RXWATER_MASK                   (0x30000U)
#define LPSPI_FCR_RXWATER_SHIFT                  (16U)
#define LPSPI_FCR_RXWATER(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FCR_RXWATER_SHIFT)) & LPSPI_FCR_RXWATER_MASK)

/*! @name FSR - FIFO Status Register */
#define LPSPI_FSR_TXCOUNT_MASK                   (0x7U)
#define LPSPI_FSR_TXCOUNT_SHIFT                  (0U)
#define LPSPI_FSR_TXCOUNT(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FSR_TXCOUNT_SHIFT)) & LPSPI_FSR_TXCOUNT_MASK)
#define LPSPI_FSR_RXCOUNT_MASK                   (0x70000U)
#define LPSPI_FSR_RXCOUNT_SHIFT                  (16U)
#define LPSPI_FSR_RXCOUNT(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FSR_RXCOUNT_SHIFT)) & LPSPI_FSR_RXCOUNT_MASK)

/*! @name TCR - Transmit Command Register */
#define LPSPI_TCR_FRAMESZ_MASK                   (0xFFFU)
#define LPSPI_TCR_FRAMESZ_SHIFT                  (0U)
#define LPSPI_TCR_FRAMESZ(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_FRAMESZ_SHIFT)) & LPSPI_TCR_FRAMESZ_MASK)
#define LPSPI_TCR_WIDTH_MASK                     (0x30000U)
#define LPSPI_TCR_WIDTH_SHIFT                    (16U)
#define LPSPI_TCR_WIDTH(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_WIDTH_SHIFT)) & LPSPI_TCR_WIDTH_MASK)
#define LPSPI_TCR_TXMSK_MASK                     (0x40000U)
#define LPSPI_TCR_TXMSK_SHIFT                    (18U)
#define LPSPI_TCR_TXMSK(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_TXMSK_SHIFT)) & LPSPI_TCR_TXMSK_MASK)
#define LPSPI_TCR_RXMSK_MASK                     (0x80000U)
#define LPSPI_TCR_RXMSK_SHIFT                    (19U)
#define LPSPI_TCR_RXMSK(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_RXMSK_SHIFT)) & LPSPI_TCR_RXMSK_MASK)
#define LPSPI_TCR_CONTC_MASK                     (0x100000U)
#define LPSPI_TCR_CONTC_SHIFT                    (20U)
#define LPSPI_TCR_CONTC(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CONTC_SHIFT)) & LPSPI_TCR_CONTC_MASK)
#define LPSPI_TCR_CONT_MASK                      (0x200000U)
#define LPSPI_TCR_CONT_SHIFT                     (21U)
#define LPSPI_TCR_CONT(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CONT_SHIFT)) & LPSPI_TCR_CONT_MASK)
#define LPSPI_TCR_BYSW_MASK                      (0x400000U)
#define LPSPI_TCR_BYSW_SHIFT                     (22U)
#define LPSPI_TCR_BYSW(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_BYSW_SHIFT)) & LPSPI_TCR_BYSW_MASK)
#define LPSPI_TCR_LSBF_MASK                      (0x800000U)
#define LPSPI_TCR_LSBF_SHIFT                     (23U)
#define LPSPI_TCR_LSBF(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_LSBF_SHIFT)) & LPSPI_TCR_LSBF_MASK)
#define LPSPI_TCR_PCS_MASK                       (0x3000000U)
#define LPSPI_TCR_PCS_SHIFT                      (24U)
#define LPSPI_TCR_PCS(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_PCS_SHIFT)) & LPSPI_TCR_PCS_MASK)
#define LPSPI_TCR_PRESCALE_MASK                  (0x38000000U)
#define LPSPI_TCR_PRESCALE_SHIFT                 (27U)
#define LPSPI_TCR_PRESCALE(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_PRESCALE_SHIFT)) & LPSPI_TCR_PRESCALE_MASK)
#define LPSPI_TCR_CPHA_MASK                      (0x40000000U)
#define LPSPI_TCR_CPHA_SHIFT                     (30U)
#define LPSPI_TCR_CPHA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CPHA_SHIFT)) & LPSPI_TCR_CPHA_MASK)
#define LPSPI_TCR_CPOL_MASK                      (0x80000000U)
#define LPSPI_TCR_CPOL_SHIFT                     (31U)
#define LPSPI_TCR_CPOL(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CPOL_SHIFT)) & LPSPI_TCR_CPOL_MASK)

/*! @name TDR - Transmit Data Register */
#define LPSPI_TDR_DATA_MASK                      (0xFFFFFFFFU)
#define LPSPI_TDR_DATA_SHIFT                     (0U)
#define LPSPI_TDR_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TDR_DATA_SHIFT)) & LPSPI_TDR_DATA_MASK)

/*! @name RSR - Receive Status Register */
#define LPSPI_RSR_SOF_MASK                       (0x1U)
#define LPSPI_RSR_SOF_SHIFT                      (0U)
#define LPSPI_RSR_SOF(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_RSR_SOF_SHIFT)) & LPSPI_RSR_SOF_MASK)
#define LPSPI_RSR_RXEMPTY_MASK                   (0x2U)
#define LPSPI_RSR_RXEMPTY_SHIFT                  (1U)
#define LPSPI_RSR_RXEMPTY(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_RSR_RXEMPTY_SHIFT)) & LPSPI_RSR_RXEMPTY_MASK)

/*! @name RDR - Receive Data Register */
#define LPSPI_RDR_DATA_MASK                      (0xFFFFFFFFU)
#define LPSPI_RDR_DATA_SHIFT                     (0U)
#define LPSPI_RDR_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_RDR_DATA_SHIFT)) & LPSPI_RDR_DATA_MASK)


/*!
 * @}
 */ /* end of group LPSPI_Register_Masks */


/* LPSPI - Peripheral instance base addresses */
/** Peripheral LPSPI0 base address */
#define LPSPI0_BASE                              (0x4003F000u)
/** Peripheral LPSPI0 base pointer */
#define LPSPI0                                   ((LPSPI_Type *)LPSPI0_BASE)
/** Peripheral LPSPI1 base address */
#define LPSPI1_BASE                              (0x40040000u)
/** Peripheral LPSPI1 base pointer */
#define LPSPI1                                   ((LPSPI_Type *)LPSPI1_BASE)
/** Peripheral LPSPI2 base address */
#define LPSPI2_BASE                              (0x40041000u)
/** Peripheral LPSPI2 base pointer */
#define LPSPI2                                   ((LPSPI_Type *)LPSPI2_BASE)
/** Peripheral LPSPI3 base address */
#define LPSPI3_BASE                              (0x41035000u)
/** Peripheral LPSPI3 base pointer */
#define LPSPI3                                   ((LPSPI_Type *)LPSPI3_BASE)
/** Array initializer of LPSPI peripheral base addresses */
#define LPSPI_BASE_ADDRS                         { LPSPI0_BASE, LPSPI1_BASE, LPSPI2_BASE, LPSPI3_BASE }
/** Array initializer of LPSPI peripheral base pointers */
#define LPSPI_BASE_PTRS                          { LPSPI0, LPSPI1, LPSPI2, LPSPI3 }
/** Interrupt vectors for the LPSPI peripheral type */
#define LPSPI_IRQS                               { LPSPI0_IRQn, LPSPI1_IRQn, LPSPI2_IRQn, LPSPI3_IRQn }

/*!
 * @}
 */ /* end of group LPSPI_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LPTMR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPTMR_Peripheral_Access_Layer LPTMR Peripheral Access Layer
 * @{
 */

/** LPTMR - Register Layout Typedef */
typedef struct {
  __IO uint32_t CSR;                               /**< Low Power Timer Control Status Register, offset: 0x0 */
  __IO uint32_t PSR;                               /**< Low Power Timer Prescale Register, offset: 0x4 */
  __IO uint32_t CMR;                               /**< Low Power Timer Compare Register, offset: 0x8 */
  __IO uint32_t CNR;                               /**< Low Power Timer Counter Register, offset: 0xC */
} LPTMR_Type;

/* ----------------------------------------------------------------------------
   -- LPTMR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPTMR_Register_Masks LPTMR Register Masks
 * @{
 */

/*! @name CSR - Low Power Timer Control Status Register */
#define LPTMR_CSR_TEN_MASK                       (0x1U)
#define LPTMR_CSR_TEN_SHIFT                      (0U)
#define LPTMR_CSR_TEN(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TEN_SHIFT)) & LPTMR_CSR_TEN_MASK)
#define LPTMR_CSR_TMS_MASK                       (0x2U)
#define LPTMR_CSR_TMS_SHIFT                      (1U)
#define LPTMR_CSR_TMS(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TMS_SHIFT)) & LPTMR_CSR_TMS_MASK)
#define LPTMR_CSR_TFC_MASK                       (0x4U)
#define LPTMR_CSR_TFC_SHIFT                      (2U)
#define LPTMR_CSR_TFC(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TFC_SHIFT)) & LPTMR_CSR_TFC_MASK)
#define LPTMR_CSR_TPP_MASK                       (0x8U)
#define LPTMR_CSR_TPP_SHIFT                      (3U)
#define LPTMR_CSR_TPP(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TPP_SHIFT)) & LPTMR_CSR_TPP_MASK)
#define LPTMR_CSR_TPS_MASK                       (0x30U)
#define LPTMR_CSR_TPS_SHIFT                      (4U)
#define LPTMR_CSR_TPS(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TPS_SHIFT)) & LPTMR_CSR_TPS_MASK)
#define LPTMR_CSR_TIE_MASK                       (0x40U)
#define LPTMR_CSR_TIE_SHIFT                      (6U)
#define LPTMR_CSR_TIE(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TIE_SHIFT)) & LPTMR_CSR_TIE_MASK)
#define LPTMR_CSR_TCF_MASK                       (0x80U)
#define LPTMR_CSR_TCF_SHIFT                      (7U)
#define LPTMR_CSR_TCF(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TCF_SHIFT)) & LPTMR_CSR_TCF_MASK)
#define LPTMR_CSR_TDRE_MASK                      (0x100U)
#define LPTMR_CSR_TDRE_SHIFT                     (8U)
#define LPTMR_CSR_TDRE(x)                        (((uint32_t)(((uint32_t)(x)) << LPTMR_CSR_TDRE_SHIFT)) & LPTMR_CSR_TDRE_MASK)

/*! @name PSR - Low Power Timer Prescale Register */
#define LPTMR_PSR_PCS_MASK                       (0x3U)
#define LPTMR_PSR_PCS_SHIFT                      (0U)
#define LPTMR_PSR_PCS(x)                         (((uint32_t)(((uint32_t)(x)) << LPTMR_PSR_PCS_SHIFT)) & LPTMR_PSR_PCS_MASK)
#define LPTMR_PSR_PBYP_MASK                      (0x4U)
#define LPTMR_PSR_PBYP_SHIFT                     (2U)
#define LPTMR_PSR_PBYP(x)                        (((uint32_t)(((uint32_t)(x)) << LPTMR_PSR_PBYP_SHIFT)) & LPTMR_PSR_PBYP_MASK)
#define LPTMR_PSR_PRESCALE_MASK                  (0x78U)
#define LPTMR_PSR_PRESCALE_SHIFT                 (3U)
#define LPTMR_PSR_PRESCALE(x)                    (((uint32_t)(((uint32_t)(x)) << LPTMR_PSR_PRESCALE_SHIFT)) & LPTMR_PSR_PRESCALE_MASK)

/*! @name CMR - Low Power Timer Compare Register */
#define LPTMR_CMR_COMPARE_MASK                   (0xFFFFFFFFU)
#define LPTMR_CMR_COMPARE_SHIFT                  (0U)
#define LPTMR_CMR_COMPARE(x)                     (((uint32_t)(((uint32_t)(x)) << LPTMR_CMR_COMPARE_SHIFT)) & LPTMR_CMR_COMPARE_MASK)

/*! @name CNR - Low Power Timer Counter Register */
#define LPTMR_CNR_COUNTER_MASK                   (0xFFFFFFFFU)
#define LPTMR_CNR_COUNTER_SHIFT                  (0U)
#define LPTMR_CNR_COUNTER(x)                     (((uint32_t)(((uint32_t)(x)) << LPTMR_CNR_COUNTER_SHIFT)) & LPTMR_CNR_COUNTER_MASK)


/*!
 * @}
 */ /* end of group LPTMR_Register_Masks */


/* LPTMR - Peripheral instance base addresses */
/** Peripheral LPTMR0 base address */
#define LPTMR0_BASE                              (0x40032000u)
/** Peripheral LPTMR0 base pointer */
#define LPTMR0                                   ((LPTMR_Type *)LPTMR0_BASE)
/** Peripheral LPTMR1 base address */
#define LPTMR1_BASE                              (0x40033000u)
/** Peripheral LPTMR1 base pointer */
#define LPTMR1                                   ((LPTMR_Type *)LPTMR1_BASE)
/** Peripheral LPTMR2 base address */
#define LPTMR2_BASE                              (0x4102B000u)
/** Peripheral LPTMR2 base pointer */
#define LPTMR2                                   ((LPTMR_Type *)LPTMR2_BASE)
/** Array initializer of LPTMR peripheral base addresses */
#define LPTMR_BASE_ADDRS                         { LPTMR0_BASE, LPTMR1_BASE, LPTMR2_BASE }
/** Array initializer of LPTMR peripheral base pointers */
#define LPTMR_BASE_PTRS                          { LPTMR0, LPTMR1, LPTMR2 }
/** Interrupt vectors for the LPTMR peripheral type */
#define LPTMR_IRQS                               { LPTMR0_IRQn, LPTMR1_IRQn, LPTMR2_IRQn }

/*!
 * @}
 */ /* end of group LPTMR_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- LPUART Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPUART_Peripheral_Access_Layer LPUART Peripheral Access Layer
 * @{
 */

/** LPUART - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t GLOBAL;                            /**< LPUART Global Register, offset: 0x8 */
  __IO uint32_t PINCFG;                            /**< LPUART Pin Configuration Register, offset: 0xC */
  __IO uint32_t BAUD;                              /**< LPUART Baud Rate Register, offset: 0x10 */
  __IO uint32_t STAT;                              /**< LPUART Status Register, offset: 0x14 */
  __IO uint32_t CTRL;                              /**< LPUART Control Register, offset: 0x18 */
  __IO uint32_t DATA;                              /**< LPUART Data Register, offset: 0x1C */
  __IO uint32_t MATCH;                             /**< LPUART Match Address Register, offset: 0x20 */
  __IO uint32_t MODIR;                             /**< LPUART Modem IrDA Register, offset: 0x24 */
  __IO uint32_t FIFO;                              /**< LPUART FIFO Register, offset: 0x28 */
  __IO uint32_t WATER;                             /**< LPUART Watermark Register, offset: 0x2C */
} LPUART_Type;

/* ----------------------------------------------------------------------------
   -- LPUART Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPUART_Register_Masks LPUART Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define LPUART_VERID_FEATURE_MASK                (0xFFFFU)
#define LPUART_VERID_FEATURE_SHIFT               (0U)
#define LPUART_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x)) << LPUART_VERID_FEATURE_SHIFT)) & LPUART_VERID_FEATURE_MASK)
#define LPUART_VERID_MINOR_MASK                  (0xFF0000U)
#define LPUART_VERID_MINOR_SHIFT                 (16U)
#define LPUART_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_VERID_MINOR_SHIFT)) & LPUART_VERID_MINOR_MASK)
#define LPUART_VERID_MAJOR_MASK                  (0xFF000000U)
#define LPUART_VERID_MAJOR_SHIFT                 (24U)
#define LPUART_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_VERID_MAJOR_SHIFT)) & LPUART_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define LPUART_PARAM_TXFIFO_MASK                 (0xFFU)
#define LPUART_PARAM_TXFIFO_SHIFT                (0U)
#define LPUART_PARAM_TXFIFO(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_PARAM_TXFIFO_SHIFT)) & LPUART_PARAM_TXFIFO_MASK)
#define LPUART_PARAM_RXFIFO_MASK                 (0xFF00U)
#define LPUART_PARAM_RXFIFO_SHIFT                (8U)
#define LPUART_PARAM_RXFIFO(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_PARAM_RXFIFO_SHIFT)) & LPUART_PARAM_RXFIFO_MASK)

/*! @name GLOBAL - LPUART Global Register */
#define LPUART_GLOBAL_RST_MASK                   (0x2U)
#define LPUART_GLOBAL_RST_SHIFT                  (1U)
#define LPUART_GLOBAL_RST(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_GLOBAL_RST_SHIFT)) & LPUART_GLOBAL_RST_MASK)

/*! @name PINCFG - LPUART Pin Configuration Register */
#define LPUART_PINCFG_TRGSEL_MASK                (0x3U)
#define LPUART_PINCFG_TRGSEL_SHIFT               (0U)
#define LPUART_PINCFG_TRGSEL(x)                  (((uint32_t)(((uint32_t)(x)) << LPUART_PINCFG_TRGSEL_SHIFT)) & LPUART_PINCFG_TRGSEL_MASK)

/*! @name BAUD - LPUART Baud Rate Register */
#define LPUART_BAUD_SBR_MASK                     (0x1FFFU)
#define LPUART_BAUD_SBR_SHIFT                    (0U)
#define LPUART_BAUD_SBR(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_SBR_SHIFT)) & LPUART_BAUD_SBR_MASK)
#define LPUART_BAUD_SBNS_MASK                    (0x2000U)
#define LPUART_BAUD_SBNS_SHIFT                   (13U)
#define LPUART_BAUD_SBNS(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_SBNS_SHIFT)) & LPUART_BAUD_SBNS_MASK)
#define LPUART_BAUD_RXEDGIE_MASK                 (0x4000U)
#define LPUART_BAUD_RXEDGIE_SHIFT                (14U)
#define LPUART_BAUD_RXEDGIE(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_RXEDGIE_SHIFT)) & LPUART_BAUD_RXEDGIE_MASK)
#define LPUART_BAUD_LBKDIE_MASK                  (0x8000U)
#define LPUART_BAUD_LBKDIE_SHIFT                 (15U)
#define LPUART_BAUD_LBKDIE(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_LBKDIE_SHIFT)) & LPUART_BAUD_LBKDIE_MASK)
#define LPUART_BAUD_RESYNCDIS_MASK               (0x10000U)
#define LPUART_BAUD_RESYNCDIS_SHIFT              (16U)
#define LPUART_BAUD_RESYNCDIS(x)                 (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_RESYNCDIS_SHIFT)) & LPUART_BAUD_RESYNCDIS_MASK)
#define LPUART_BAUD_BOTHEDGE_MASK                (0x20000U)
#define LPUART_BAUD_BOTHEDGE_SHIFT               (17U)
#define LPUART_BAUD_BOTHEDGE(x)                  (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_BOTHEDGE_SHIFT)) & LPUART_BAUD_BOTHEDGE_MASK)
#define LPUART_BAUD_MATCFG_MASK                  (0xC0000U)
#define LPUART_BAUD_MATCFG_SHIFT                 (18U)
#define LPUART_BAUD_MATCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_MATCFG_SHIFT)) & LPUART_BAUD_MATCFG_MASK)
#define LPUART_BAUD_RIDMAE_MASK                  (0x100000U)
#define LPUART_BAUD_RIDMAE_SHIFT                 (20U)
#define LPUART_BAUD_RIDMAE(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_RIDMAE_SHIFT)) & LPUART_BAUD_RIDMAE_MASK)
#define LPUART_BAUD_RDMAE_MASK                   (0x200000U)
#define LPUART_BAUD_RDMAE_SHIFT                  (21U)
#define LPUART_BAUD_RDMAE(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_RDMAE_SHIFT)) & LPUART_BAUD_RDMAE_MASK)
#define LPUART_BAUD_TDMAE_MASK                   (0x800000U)
#define LPUART_BAUD_TDMAE_SHIFT                  (23U)
#define LPUART_BAUD_TDMAE(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_TDMAE_SHIFT)) & LPUART_BAUD_TDMAE_MASK)
#define LPUART_BAUD_OSR_MASK                     (0x1F000000U)
#define LPUART_BAUD_OSR_SHIFT                    (24U)
#define LPUART_BAUD_OSR(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_OSR_SHIFT)) & LPUART_BAUD_OSR_MASK)
#define LPUART_BAUD_M10_MASK                     (0x20000000U)
#define LPUART_BAUD_M10_SHIFT                    (29U)
#define LPUART_BAUD_M10(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_M10_SHIFT)) & LPUART_BAUD_M10_MASK)
#define LPUART_BAUD_MAEN2_MASK                   (0x40000000U)
#define LPUART_BAUD_MAEN2_SHIFT                  (30U)
#define LPUART_BAUD_MAEN2(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_MAEN2_SHIFT)) & LPUART_BAUD_MAEN2_MASK)
#define LPUART_BAUD_MAEN1_MASK                   (0x80000000U)
#define LPUART_BAUD_MAEN1_SHIFT                  (31U)
#define LPUART_BAUD_MAEN1(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_MAEN1_SHIFT)) & LPUART_BAUD_MAEN1_MASK)

/*! @name STAT - LPUART Status Register */
#define LPUART_STAT_MA2F_MASK                    (0x4000U)
#define LPUART_STAT_MA2F_SHIFT                   (14U)
#define LPUART_STAT_MA2F(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_MA2F_SHIFT)) & LPUART_STAT_MA2F_MASK)
#define LPUART_STAT_MA1F_MASK                    (0x8000U)
#define LPUART_STAT_MA1F_SHIFT                   (15U)
#define LPUART_STAT_MA1F(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_MA1F_SHIFT)) & LPUART_STAT_MA1F_MASK)
#define LPUART_STAT_PF_MASK                      (0x10000U)
#define LPUART_STAT_PF_SHIFT                     (16U)
#define LPUART_STAT_PF(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_PF_SHIFT)) & LPUART_STAT_PF_MASK)
#define LPUART_STAT_FE_MASK                      (0x20000U)
#define LPUART_STAT_FE_SHIFT                     (17U)
#define LPUART_STAT_FE(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_FE_SHIFT)) & LPUART_STAT_FE_MASK)
#define LPUART_STAT_NF_MASK                      (0x40000U)
#define LPUART_STAT_NF_SHIFT                     (18U)
#define LPUART_STAT_NF(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_NF_SHIFT)) & LPUART_STAT_NF_MASK)
#define LPUART_STAT_OR_MASK                      (0x80000U)
#define LPUART_STAT_OR_SHIFT                     (19U)
#define LPUART_STAT_OR(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_OR_SHIFT)) & LPUART_STAT_OR_MASK)
#define LPUART_STAT_IDLE_MASK                    (0x100000U)
#define LPUART_STAT_IDLE_SHIFT                   (20U)
#define LPUART_STAT_IDLE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_IDLE_SHIFT)) & LPUART_STAT_IDLE_MASK)
#define LPUART_STAT_RDRF_MASK                    (0x200000U)
#define LPUART_STAT_RDRF_SHIFT                   (21U)
#define LPUART_STAT_RDRF(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_RDRF_SHIFT)) & LPUART_STAT_RDRF_MASK)
#define LPUART_STAT_TC_MASK                      (0x400000U)
#define LPUART_STAT_TC_SHIFT                     (22U)
#define LPUART_STAT_TC(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_TC_SHIFT)) & LPUART_STAT_TC_MASK)
#define LPUART_STAT_TDRE_MASK                    (0x800000U)
#define LPUART_STAT_TDRE_SHIFT                   (23U)
#define LPUART_STAT_TDRE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_TDRE_SHIFT)) & LPUART_STAT_TDRE_MASK)
#define LPUART_STAT_RAF_MASK                     (0x1000000U)
#define LPUART_STAT_RAF_SHIFT                    (24U)
#define LPUART_STAT_RAF(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_RAF_SHIFT)) & LPUART_STAT_RAF_MASK)
#define LPUART_STAT_LBKDE_MASK                   (0x2000000U)
#define LPUART_STAT_LBKDE_SHIFT                  (25U)
#define LPUART_STAT_LBKDE(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_LBKDE_SHIFT)) & LPUART_STAT_LBKDE_MASK)
#define LPUART_STAT_BRK13_MASK                   (0x4000000U)
#define LPUART_STAT_BRK13_SHIFT                  (26U)
#define LPUART_STAT_BRK13(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_BRK13_SHIFT)) & LPUART_STAT_BRK13_MASK)
#define LPUART_STAT_RWUID_MASK                   (0x8000000U)
#define LPUART_STAT_RWUID_SHIFT                  (27U)
#define LPUART_STAT_RWUID(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_RWUID_SHIFT)) & LPUART_STAT_RWUID_MASK)
#define LPUART_STAT_RXINV_MASK                   (0x10000000U)
#define LPUART_STAT_RXINV_SHIFT                  (28U)
#define LPUART_STAT_RXINV(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_RXINV_SHIFT)) & LPUART_STAT_RXINV_MASK)
#define LPUART_STAT_MSBF_MASK                    (0x20000000U)
#define LPUART_STAT_MSBF_SHIFT                   (29U)
#define LPUART_STAT_MSBF(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_MSBF_SHIFT)) & LPUART_STAT_MSBF_MASK)
#define LPUART_STAT_RXEDGIF_MASK                 (0x40000000U)
#define LPUART_STAT_RXEDGIF_SHIFT                (30U)
#define LPUART_STAT_RXEDGIF(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_RXEDGIF_SHIFT)) & LPUART_STAT_RXEDGIF_MASK)
#define LPUART_STAT_LBKDIF_MASK                  (0x80000000U)
#define LPUART_STAT_LBKDIF_SHIFT                 (31U)
#define LPUART_STAT_LBKDIF(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_STAT_LBKDIF_SHIFT)) & LPUART_STAT_LBKDIF_MASK)

/*! @name CTRL - LPUART Control Register */
#define LPUART_CTRL_PT_MASK                      (0x1U)
#define LPUART_CTRL_PT_SHIFT                     (0U)
#define LPUART_CTRL_PT(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_PT_SHIFT)) & LPUART_CTRL_PT_MASK)
#define LPUART_CTRL_PE_MASK                      (0x2U)
#define LPUART_CTRL_PE_SHIFT                     (1U)
#define LPUART_CTRL_PE(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_PE_SHIFT)) & LPUART_CTRL_PE_MASK)
#define LPUART_CTRL_ILT_MASK                     (0x4U)
#define LPUART_CTRL_ILT_SHIFT                    (2U)
#define LPUART_CTRL_ILT(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_ILT_SHIFT)) & LPUART_CTRL_ILT_MASK)
#define LPUART_CTRL_WAKE_MASK                    (0x8U)
#define LPUART_CTRL_WAKE_SHIFT                   (3U)
#define LPUART_CTRL_WAKE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_WAKE_SHIFT)) & LPUART_CTRL_WAKE_MASK)
#define LPUART_CTRL_M_MASK                       (0x10U)
#define LPUART_CTRL_M_SHIFT                      (4U)
#define LPUART_CTRL_M(x)                         (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_M_SHIFT)) & LPUART_CTRL_M_MASK)
#define LPUART_CTRL_RSRC_MASK                    (0x20U)
#define LPUART_CTRL_RSRC_SHIFT                   (5U)
#define LPUART_CTRL_RSRC(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_RSRC_SHIFT)) & LPUART_CTRL_RSRC_MASK)
#define LPUART_CTRL_DOZEEN_MASK                  (0x40U)
#define LPUART_CTRL_DOZEEN_SHIFT                 (6U)
#define LPUART_CTRL_DOZEEN(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_DOZEEN_SHIFT)) & LPUART_CTRL_DOZEEN_MASK)
#define LPUART_CTRL_LOOPS_MASK                   (0x80U)
#define LPUART_CTRL_LOOPS_SHIFT                  (7U)
#define LPUART_CTRL_LOOPS(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_LOOPS_SHIFT)) & LPUART_CTRL_LOOPS_MASK)
#define LPUART_CTRL_IDLECFG_MASK                 (0x700U)
#define LPUART_CTRL_IDLECFG_SHIFT                (8U)
#define LPUART_CTRL_IDLECFG(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_IDLECFG_SHIFT)) & LPUART_CTRL_IDLECFG_MASK)
#define LPUART_CTRL_M7_MASK                      (0x800U)
#define LPUART_CTRL_M7_SHIFT                     (11U)
#define LPUART_CTRL_M7(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_M7_SHIFT)) & LPUART_CTRL_M7_MASK)
#define LPUART_CTRL_MA2IE_MASK                   (0x4000U)
#define LPUART_CTRL_MA2IE_SHIFT                  (14U)
#define LPUART_CTRL_MA2IE(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_MA2IE_SHIFT)) & LPUART_CTRL_MA2IE_MASK)
#define LPUART_CTRL_MA1IE_MASK                   (0x8000U)
#define LPUART_CTRL_MA1IE_SHIFT                  (15U)
#define LPUART_CTRL_MA1IE(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_MA1IE_SHIFT)) & LPUART_CTRL_MA1IE_MASK)
#define LPUART_CTRL_SBK_MASK                     (0x10000U)
#define LPUART_CTRL_SBK_SHIFT                    (16U)
#define LPUART_CTRL_SBK(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_SBK_SHIFT)) & LPUART_CTRL_SBK_MASK)
#define LPUART_CTRL_RWU_MASK                     (0x20000U)
#define LPUART_CTRL_RWU_SHIFT                    (17U)
#define LPUART_CTRL_RWU(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_RWU_SHIFT)) & LPUART_CTRL_RWU_MASK)
#define LPUART_CTRL_RE_MASK                      (0x40000U)
#define LPUART_CTRL_RE_SHIFT                     (18U)
#define LPUART_CTRL_RE(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_RE_SHIFT)) & LPUART_CTRL_RE_MASK)
#define LPUART_CTRL_TE_MASK                      (0x80000U)
#define LPUART_CTRL_TE_SHIFT                     (19U)
#define LPUART_CTRL_TE(x)                        (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_TE_SHIFT)) & LPUART_CTRL_TE_MASK)
#define LPUART_CTRL_ILIE_MASK                    (0x100000U)
#define LPUART_CTRL_ILIE_SHIFT                   (20U)
#define LPUART_CTRL_ILIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_ILIE_SHIFT)) & LPUART_CTRL_ILIE_MASK)
#define LPUART_CTRL_RIE_MASK                     (0x200000U)
#define LPUART_CTRL_RIE_SHIFT                    (21U)
#define LPUART_CTRL_RIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_RIE_SHIFT)) & LPUART_CTRL_RIE_MASK)
#define LPUART_CTRL_TCIE_MASK                    (0x400000U)
#define LPUART_CTRL_TCIE_SHIFT                   (22U)
#define LPUART_CTRL_TCIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_TCIE_SHIFT)) & LPUART_CTRL_TCIE_MASK)
#define LPUART_CTRL_TIE_MASK                     (0x800000U)
#define LPUART_CTRL_TIE_SHIFT                    (23U)
#define LPUART_CTRL_TIE(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_TIE_SHIFT)) & LPUART_CTRL_TIE_MASK)
#define LPUART_CTRL_PEIE_MASK                    (0x1000000U)
#define LPUART_CTRL_PEIE_SHIFT                   (24U)
#define LPUART_CTRL_PEIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_PEIE_SHIFT)) & LPUART_CTRL_PEIE_MASK)
#define LPUART_CTRL_FEIE_MASK                    (0x2000000U)
#define LPUART_CTRL_FEIE_SHIFT                   (25U)
#define LPUART_CTRL_FEIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_FEIE_SHIFT)) & LPUART_CTRL_FEIE_MASK)
#define LPUART_CTRL_NEIE_MASK                    (0x4000000U)
#define LPUART_CTRL_NEIE_SHIFT                   (26U)
#define LPUART_CTRL_NEIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_NEIE_SHIFT)) & LPUART_CTRL_NEIE_MASK)
#define LPUART_CTRL_ORIE_MASK                    (0x8000000U)
#define LPUART_CTRL_ORIE_SHIFT                   (27U)
#define LPUART_CTRL_ORIE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_ORIE_SHIFT)) & LPUART_CTRL_ORIE_MASK)
#define LPUART_CTRL_TXINV_MASK                   (0x10000000U)
#define LPUART_CTRL_TXINV_SHIFT                  (28U)
#define LPUART_CTRL_TXINV(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_TXINV_SHIFT)) & LPUART_CTRL_TXINV_MASK)
#define LPUART_CTRL_TXDIR_MASK                   (0x20000000U)
#define LPUART_CTRL_TXDIR_SHIFT                  (29U)
#define LPUART_CTRL_TXDIR(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_TXDIR_SHIFT)) & LPUART_CTRL_TXDIR_MASK)
#define LPUART_CTRL_R9T8_MASK                    (0x40000000U)
#define LPUART_CTRL_R9T8_SHIFT                   (30U)
#define LPUART_CTRL_R9T8(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_R9T8_SHIFT)) & LPUART_CTRL_R9T8_MASK)
#define LPUART_CTRL_R8T9_MASK                    (0x80000000U)
#define LPUART_CTRL_R8T9_SHIFT                   (31U)
#define LPUART_CTRL_R8T9(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_CTRL_R8T9_SHIFT)) & LPUART_CTRL_R8T9_MASK)

/*! @name DATA - LPUART Data Register */
#define LPUART_DATA_R0T0_MASK                    (0x1U)
#define LPUART_DATA_R0T0_SHIFT                   (0U)
#define LPUART_DATA_R0T0(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R0T0_SHIFT)) & LPUART_DATA_R0T0_MASK)
#define LPUART_DATA_R1T1_MASK                    (0x2U)
#define LPUART_DATA_R1T1_SHIFT                   (1U)
#define LPUART_DATA_R1T1(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R1T1_SHIFT)) & LPUART_DATA_R1T1_MASK)
#define LPUART_DATA_R2T2_MASK                    (0x4U)
#define LPUART_DATA_R2T2_SHIFT                   (2U)
#define LPUART_DATA_R2T2(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R2T2_SHIFT)) & LPUART_DATA_R2T2_MASK)
#define LPUART_DATA_R3T3_MASK                    (0x8U)
#define LPUART_DATA_R3T3_SHIFT                   (3U)
#define LPUART_DATA_R3T3(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R3T3_SHIFT)) & LPUART_DATA_R3T3_MASK)
#define LPUART_DATA_R4T4_MASK                    (0x10U)
#define LPUART_DATA_R4T4_SHIFT                   (4U)
#define LPUART_DATA_R4T4(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R4T4_SHIFT)) & LPUART_DATA_R4T4_MASK)
#define LPUART_DATA_R5T5_MASK                    (0x20U)
#define LPUART_DATA_R5T5_SHIFT                   (5U)
#define LPUART_DATA_R5T5(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R5T5_SHIFT)) & LPUART_DATA_R5T5_MASK)
#define LPUART_DATA_R6T6_MASK                    (0x40U)
#define LPUART_DATA_R6T6_SHIFT                   (6U)
#define LPUART_DATA_R6T6(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R6T6_SHIFT)) & LPUART_DATA_R6T6_MASK)
#define LPUART_DATA_R7T7_MASK                    (0x80U)
#define LPUART_DATA_R7T7_SHIFT                   (7U)
#define LPUART_DATA_R7T7(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R7T7_SHIFT)) & LPUART_DATA_R7T7_MASK)
#define LPUART_DATA_R8T8_MASK                    (0x100U)
#define LPUART_DATA_R8T8_SHIFT                   (8U)
#define LPUART_DATA_R8T8(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R8T8_SHIFT)) & LPUART_DATA_R8T8_MASK)
#define LPUART_DATA_R9T9_MASK                    (0x200U)
#define LPUART_DATA_R9T9_SHIFT                   (9U)
#define LPUART_DATA_R9T9(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_R9T9_SHIFT)) & LPUART_DATA_R9T9_MASK)
#define LPUART_DATA_IDLINE_MASK                  (0x800U)
#define LPUART_DATA_IDLINE_SHIFT                 (11U)
#define LPUART_DATA_IDLINE(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_IDLINE_SHIFT)) & LPUART_DATA_IDLINE_MASK)
#define LPUART_DATA_RXEMPT_MASK                  (0x1000U)
#define LPUART_DATA_RXEMPT_SHIFT                 (12U)
#define LPUART_DATA_RXEMPT(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_RXEMPT_SHIFT)) & LPUART_DATA_RXEMPT_MASK)
#define LPUART_DATA_FRETSC_MASK                  (0x2000U)
#define LPUART_DATA_FRETSC_SHIFT                 (13U)
#define LPUART_DATA_FRETSC(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_FRETSC_SHIFT)) & LPUART_DATA_FRETSC_MASK)
#define LPUART_DATA_PARITYE_MASK                 (0x4000U)
#define LPUART_DATA_PARITYE_SHIFT                (14U)
#define LPUART_DATA_PARITYE(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_PARITYE_SHIFT)) & LPUART_DATA_PARITYE_MASK)
#define LPUART_DATA_NOISY_MASK                   (0x8000U)
#define LPUART_DATA_NOISY_SHIFT                  (15U)
#define LPUART_DATA_NOISY(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_DATA_NOISY_SHIFT)) & LPUART_DATA_NOISY_MASK)

/*! @name MATCH - LPUART Match Address Register */
#define LPUART_MATCH_MA1_MASK                    (0x3FFU)
#define LPUART_MATCH_MA1_SHIFT                   (0U)
#define LPUART_MATCH_MA1(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_MATCH_MA1_SHIFT)) & LPUART_MATCH_MA1_MASK)
#define LPUART_MATCH_MA2_MASK                    (0x3FF0000U)
#define LPUART_MATCH_MA2_SHIFT                   (16U)
#define LPUART_MATCH_MA2(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_MATCH_MA2_SHIFT)) & LPUART_MATCH_MA2_MASK)

/*! @name MODIR - LPUART Modem IrDA Register */
#define LPUART_MODIR_TXCTSE_MASK                 (0x1U)
#define LPUART_MODIR_TXCTSE_SHIFT                (0U)
#define LPUART_MODIR_TXCTSE(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_TXCTSE_SHIFT)) & LPUART_MODIR_TXCTSE_MASK)
#define LPUART_MODIR_TXRTSE_MASK                 (0x2U)
#define LPUART_MODIR_TXRTSE_SHIFT                (1U)
#define LPUART_MODIR_TXRTSE(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_TXRTSE_SHIFT)) & LPUART_MODIR_TXRTSE_MASK)
#define LPUART_MODIR_TXRTSPOL_MASK               (0x4U)
#define LPUART_MODIR_TXRTSPOL_SHIFT              (2U)
#define LPUART_MODIR_TXRTSPOL(x)                 (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_TXRTSPOL_SHIFT)) & LPUART_MODIR_TXRTSPOL_MASK)
#define LPUART_MODIR_RXRTSE_MASK                 (0x8U)
#define LPUART_MODIR_RXRTSE_SHIFT                (3U)
#define LPUART_MODIR_RXRTSE(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_RXRTSE_SHIFT)) & LPUART_MODIR_RXRTSE_MASK)
#define LPUART_MODIR_TXCTSC_MASK                 (0x10U)
#define LPUART_MODIR_TXCTSC_SHIFT                (4U)
#define LPUART_MODIR_TXCTSC(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_TXCTSC_SHIFT)) & LPUART_MODIR_TXCTSC_MASK)
#define LPUART_MODIR_TXCTSSRC_MASK               (0x20U)
#define LPUART_MODIR_TXCTSSRC_SHIFT              (5U)
#define LPUART_MODIR_TXCTSSRC(x)                 (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_TXCTSSRC_SHIFT)) & LPUART_MODIR_TXCTSSRC_MASK)
#define LPUART_MODIR_RTSWATER_MASK               (0x700U)
#define LPUART_MODIR_RTSWATER_SHIFT              (8U)
#define LPUART_MODIR_RTSWATER(x)                 (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_RTSWATER_SHIFT)) & LPUART_MODIR_RTSWATER_MASK)
#define LPUART_MODIR_TNP_MASK                    (0x30000U)
#define LPUART_MODIR_TNP_SHIFT                   (16U)
#define LPUART_MODIR_TNP(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_TNP_SHIFT)) & LPUART_MODIR_TNP_MASK)
#define LPUART_MODIR_IREN_MASK                   (0x40000U)
#define LPUART_MODIR_IREN_SHIFT                  (18U)
#define LPUART_MODIR_IREN(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_MODIR_IREN_SHIFT)) & LPUART_MODIR_IREN_MASK)

/*! @name FIFO - LPUART FIFO Register */
#define LPUART_FIFO_RXFIFOSIZE_MASK              (0x7U)
#define LPUART_FIFO_RXFIFOSIZE_SHIFT             (0U)
#define LPUART_FIFO_RXFIFOSIZE(x)                (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_RXFIFOSIZE_SHIFT)) & LPUART_FIFO_RXFIFOSIZE_MASK)
#define LPUART_FIFO_RXFE_MASK                    (0x8U)
#define LPUART_FIFO_RXFE_SHIFT                   (3U)
#define LPUART_FIFO_RXFE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_RXFE_SHIFT)) & LPUART_FIFO_RXFE_MASK)
#define LPUART_FIFO_TXFIFOSIZE_MASK              (0x70U)
#define LPUART_FIFO_TXFIFOSIZE_SHIFT             (4U)
#define LPUART_FIFO_TXFIFOSIZE(x)                (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_TXFIFOSIZE_SHIFT)) & LPUART_FIFO_TXFIFOSIZE_MASK)
#define LPUART_FIFO_TXFE_MASK                    (0x80U)
#define LPUART_FIFO_TXFE_SHIFT                   (7U)
#define LPUART_FIFO_TXFE(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_TXFE_SHIFT)) & LPUART_FIFO_TXFE_MASK)
#define LPUART_FIFO_RXUFE_MASK                   (0x100U)
#define LPUART_FIFO_RXUFE_SHIFT                  (8U)
#define LPUART_FIFO_RXUFE(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_RXUFE_SHIFT)) & LPUART_FIFO_RXUFE_MASK)
#define LPUART_FIFO_TXOFE_MASK                   (0x200U)
#define LPUART_FIFO_TXOFE_SHIFT                  (9U)
#define LPUART_FIFO_TXOFE(x)                     (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_TXOFE_SHIFT)) & LPUART_FIFO_TXOFE_MASK)
#define LPUART_FIFO_RXIDEN_MASK                  (0x1C00U)
#define LPUART_FIFO_RXIDEN_SHIFT                 (10U)
#define LPUART_FIFO_RXIDEN(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_RXIDEN_SHIFT)) & LPUART_FIFO_RXIDEN_MASK)
#define LPUART_FIFO_RXFLUSH_MASK                 (0x4000U)
#define LPUART_FIFO_RXFLUSH_SHIFT                (14U)
#define LPUART_FIFO_RXFLUSH(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_RXFLUSH_SHIFT)) & LPUART_FIFO_RXFLUSH_MASK)
#define LPUART_FIFO_TXFLUSH_MASK                 (0x8000U)
#define LPUART_FIFO_TXFLUSH_SHIFT                (15U)
#define LPUART_FIFO_TXFLUSH(x)                   (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_TXFLUSH_SHIFT)) & LPUART_FIFO_TXFLUSH_MASK)
#define LPUART_FIFO_RXUF_MASK                    (0x10000U)
#define LPUART_FIFO_RXUF_SHIFT                   (16U)
#define LPUART_FIFO_RXUF(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_RXUF_SHIFT)) & LPUART_FIFO_RXUF_MASK)
#define LPUART_FIFO_TXOF_MASK                    (0x20000U)
#define LPUART_FIFO_TXOF_SHIFT                   (17U)
#define LPUART_FIFO_TXOF(x)                      (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_TXOF_SHIFT)) & LPUART_FIFO_TXOF_MASK)
#define LPUART_FIFO_RXEMPT_MASK                  (0x400000U)
#define LPUART_FIFO_RXEMPT_SHIFT                 (22U)
#define LPUART_FIFO_RXEMPT(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_RXEMPT_SHIFT)) & LPUART_FIFO_RXEMPT_MASK)
#define LPUART_FIFO_TXEMPT_MASK                  (0x800000U)
#define LPUART_FIFO_TXEMPT_SHIFT                 (23U)
#define LPUART_FIFO_TXEMPT(x)                    (((uint32_t)(((uint32_t)(x)) << LPUART_FIFO_TXEMPT_SHIFT)) & LPUART_FIFO_TXEMPT_MASK)

/*! @name WATER - LPUART Watermark Register */
#define LPUART_WATER_TXWATER_MASK                (0x7U)
#define LPUART_WATER_TXWATER_SHIFT               (0U)
#define LPUART_WATER_TXWATER(x)                  (((uint32_t)(((uint32_t)(x)) << LPUART_WATER_TXWATER_SHIFT)) & LPUART_WATER_TXWATER_MASK)
#define LPUART_WATER_TXCOUNT_MASK                (0xF00U)
#define LPUART_WATER_TXCOUNT_SHIFT               (8U)
#define LPUART_WATER_TXCOUNT(x)                  (((uint32_t)(((uint32_t)(x)) << LPUART_WATER_TXCOUNT_SHIFT)) & LPUART_WATER_TXCOUNT_MASK)
#define LPUART_WATER_RXWATER_MASK                (0x70000U)
#define LPUART_WATER_RXWATER_SHIFT               (16U)
#define LPUART_WATER_RXWATER(x)                  (((uint32_t)(((uint32_t)(x)) << LPUART_WATER_RXWATER_SHIFT)) & LPUART_WATER_RXWATER_MASK)
#define LPUART_WATER_RXCOUNT_MASK                (0xF000000U)
#define LPUART_WATER_RXCOUNT_SHIFT               (24U)
#define LPUART_WATER_RXCOUNT(x)                  (((uint32_t)(((uint32_t)(x)) << LPUART_WATER_RXCOUNT_SHIFT)) & LPUART_WATER_RXCOUNT_MASK)


/*!
 * @}
 */ /* end of group LPUART_Register_Masks */


/* LPUART - Peripheral instance base addresses */
/** Peripheral LPUART0 base address */
#define LPUART0_BASE                             (0x40042000u)
/** Peripheral LPUART0 base pointer */
#define LPUART0                                  ((LPUART_Type *)LPUART0_BASE)
/** Peripheral LPUART1 base address */
#define LPUART1_BASE                             (0x40043000u)
/** Peripheral LPUART1 base pointer */
#define LPUART1                                  ((LPUART_Type *)LPUART1_BASE)
/** Peripheral LPUART2 base address */
#define LPUART2_BASE                             (0x40044000u)
/** Peripheral LPUART2 base pointer */
#define LPUART2                                  ((LPUART_Type *)LPUART2_BASE)
/** Peripheral LPUART3 base address */
#define LPUART3_BASE                             (0x41036000u)
/** Peripheral LPUART3 base pointer */
#define LPUART3                                  ((LPUART_Type *)LPUART3_BASE)
/** Array initializer of LPUART peripheral base addresses */
#define LPUART_BASE_ADDRS                        { LPUART0_BASE, LPUART1_BASE, LPUART2_BASE, LPUART3_BASE }
/** Array initializer of LPUART peripheral base pointers */
#define LPUART_BASE_PTRS                         { LPUART0, LPUART1, LPUART2, LPUART3 }
/** Interrupt vectors for the LPUART peripheral type */
#define LPUART_RX_TX_IRQS                        { LPUART0_IRQn, LPUART1_IRQn, LPUART2_IRQn, LPUART3_IRQn }
#define LPUART_ERR_IRQS                          { LPUART0_IRQn, LPUART1_IRQn, LPUART2_IRQn, LPUART3_IRQn }

/*!
 * @}
 */ /* end of group LPUART_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- MCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MCM_Peripheral_Access_Layer MCM Peripheral Access Layer
 * @{
 */

/** MCM - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[8];
  __I  uint16_t PLASC;                             /**< Crossbar Switch (AXBS) Slave Configuration, offset: 0x8 */
  __I  uint16_t PLAMC;                             /**< Crossbar Switch (AXBS) Master Configuration, offset: 0xA */
  __IO uint32_t CPCR;                              /**< Core Platform Control Register, offset: 0xC */
  __IO uint32_t ISCR;                              /**< Interrupt Status and Control Register, offset: 0x10 */
       uint8_t RESERVED_1[32];
  __IO uint32_t CPCR2;                             /**< Core Platform Control Register 2, offset: 0x34 */
       uint8_t RESERVED_2[8];
  __IO uint32_t CPO;                               /**< Compute Operation Control Register, offset: 0x40 */
} MCM_Type;

/* ----------------------------------------------------------------------------
   -- MCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MCM_Register_Masks MCM Register Masks
 * @{
 */

/*! @name PLASC - Crossbar Switch (AXBS) Slave Configuration */
#define MCM_PLASC_ASC_MASK                       (0xFFU)
#define MCM_PLASC_ASC_SHIFT                      (0U)
#define MCM_PLASC_ASC(x)                         (((uint16_t)(((uint16_t)(x)) << MCM_PLASC_ASC_SHIFT)) & MCM_PLASC_ASC_MASK)

/*! @name PLAMC - Crossbar Switch (AXBS) Master Configuration */
#define MCM_PLAMC_AMC_MASK                       (0xFFU)
#define MCM_PLAMC_AMC_SHIFT                      (0U)
#define MCM_PLAMC_AMC(x)                         (((uint16_t)(((uint16_t)(x)) << MCM_PLAMC_AMC_SHIFT)) & MCM_PLAMC_AMC_MASK)

/*! @name CPCR - Core Platform Control Register */
#define MCM_CPCR_CBRR_MASK                       (0x200U)
#define MCM_CPCR_CBRR_SHIFT                      (9U)
#define MCM_CPCR_CBRR(x)                         (((uint32_t)(((uint32_t)(x)) << MCM_CPCR_CBRR_SHIFT)) & MCM_CPCR_CBRR_MASK)

/*! @name ISCR - Interrupt Status and Control Register */
#define MCM_ISCR_FIOC_MASK                       (0x100U)
#define MCM_ISCR_FIOC_SHIFT                      (8U)
#define MCM_ISCR_FIOC(x)                         (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FIOC_SHIFT)) & MCM_ISCR_FIOC_MASK)
#define MCM_ISCR_FDZC_MASK                       (0x200U)
#define MCM_ISCR_FDZC_SHIFT                      (9U)
#define MCM_ISCR_FDZC(x)                         (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FDZC_SHIFT)) & MCM_ISCR_FDZC_MASK)
#define MCM_ISCR_FOFC_MASK                       (0x400U)
#define MCM_ISCR_FOFC_SHIFT                      (10U)
#define MCM_ISCR_FOFC(x)                         (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FOFC_SHIFT)) & MCM_ISCR_FOFC_MASK)
#define MCM_ISCR_FUFC_MASK                       (0x800U)
#define MCM_ISCR_FUFC_SHIFT                      (11U)
#define MCM_ISCR_FUFC(x)                         (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FUFC_SHIFT)) & MCM_ISCR_FUFC_MASK)
#define MCM_ISCR_FIXC_MASK                       (0x1000U)
#define MCM_ISCR_FIXC_SHIFT                      (12U)
#define MCM_ISCR_FIXC(x)                         (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FIXC_SHIFT)) & MCM_ISCR_FIXC_MASK)
#define MCM_ISCR_FIDC_MASK                       (0x8000U)
#define MCM_ISCR_FIDC_SHIFT                      (15U)
#define MCM_ISCR_FIDC(x)                         (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FIDC_SHIFT)) & MCM_ISCR_FIDC_MASK)
#define MCM_ISCR_FIOCE_MASK                      (0x1000000U)
#define MCM_ISCR_FIOCE_SHIFT                     (24U)
#define MCM_ISCR_FIOCE(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FIOCE_SHIFT)) & MCM_ISCR_FIOCE_MASK)
#define MCM_ISCR_FDZCE_MASK                      (0x2000000U)
#define MCM_ISCR_FDZCE_SHIFT                     (25U)
#define MCM_ISCR_FDZCE(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FDZCE_SHIFT)) & MCM_ISCR_FDZCE_MASK)
#define MCM_ISCR_FOFCE_MASK                      (0x4000000U)
#define MCM_ISCR_FOFCE_SHIFT                     (26U)
#define MCM_ISCR_FOFCE(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FOFCE_SHIFT)) & MCM_ISCR_FOFCE_MASK)
#define MCM_ISCR_FUFCE_MASK                      (0x8000000U)
#define MCM_ISCR_FUFCE_SHIFT                     (27U)
#define MCM_ISCR_FUFCE(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FUFCE_SHIFT)) & MCM_ISCR_FUFCE_MASK)
#define MCM_ISCR_FIXCE_MASK                      (0x10000000U)
#define MCM_ISCR_FIXCE_SHIFT                     (28U)
#define MCM_ISCR_FIXCE(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FIXCE_SHIFT)) & MCM_ISCR_FIXCE_MASK)
#define MCM_ISCR_FIDCE_MASK                      (0x80000000U)
#define MCM_ISCR_FIDCE_SHIFT                     (31U)
#define MCM_ISCR_FIDCE(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_ISCR_FIDCE_SHIFT)) & MCM_ISCR_FIDCE_MASK)

/*! @name CPCR2 - Core Platform Control Register 2 */
#define MCM_CPCR2_CCBC_MASK                      (0x1U)
#define MCM_CPCR2_CCBC_SHIFT                     (0U)
#define MCM_CPCR2_CCBC(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPCR2_CCBC_SHIFT)) & MCM_CPCR2_CCBC_MASK)
#define MCM_CPCR2_DCBC_MASK                      (0x8U)
#define MCM_CPCR2_DCBC_SHIFT                     (3U)
#define MCM_CPCR2_DCBC(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPCR2_DCBC_SHIFT)) & MCM_CPCR2_DCBC_MASK)
#define MCM_CPCR2_CBCS_MASK                      (0xF0U)
#define MCM_CPCR2_CBCS_SHIFT                     (4U)
#define MCM_CPCR2_CBCS(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPCR2_CBCS_SHIFT)) & MCM_CPCR2_CBCS_MASK)
#define MCM_CPCR2_PCCMCTRL_MASK                  (0x10000U)
#define MCM_CPCR2_PCCMCTRL_SHIFT                 (16U)
#define MCM_CPCR2_PCCMCTRL(x)                    (((uint32_t)(((uint32_t)(x)) << MCM_CPCR2_PCCMCTRL_SHIFT)) & MCM_CPCR2_PCCMCTRL_MASK)
#define MCM_CPCR2_LCCPWB_MASK                    (0x20000U)
#define MCM_CPCR2_LCCPWB_SHIFT                   (17U)
#define MCM_CPCR2_LCCPWB(x)                      (((uint32_t)(((uint32_t)(x)) << MCM_CPCR2_LCCPWB_SHIFT)) & MCM_CPCR2_LCCPWB_MASK)

/*! @name CPO - Compute Operation Control Register */
#define MCM_CPO_CPOREQ_MASK                      (0x1U)
#define MCM_CPO_CPOREQ_SHIFT                     (0U)
#define MCM_CPO_CPOREQ(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPO_CPOREQ_SHIFT)) & MCM_CPO_CPOREQ_MASK)
#define MCM_CPO_CPOACK_MASK                      (0x2U)
#define MCM_CPO_CPOACK_SHIFT                     (1U)
#define MCM_CPO_CPOACK(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPO_CPOACK_SHIFT)) & MCM_CPO_CPOACK_MASK)
#define MCM_CPO_CPOWOI_MASK                      (0x4U)
#define MCM_CPO_CPOWOI_SHIFT                     (2U)
#define MCM_CPO_CPOWOI(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPO_CPOWOI_SHIFT)) & MCM_CPO_CPOWOI_MASK)


/*!
 * @}
 */ /* end of group MCM_Register_Masks */


/* MCM - Peripheral instance base addresses */
/** Peripheral MCM0 base address */
#define MCM0_BASE                                (0xE0080000u)
/** Peripheral MCM0 base pointer */
#define MCM0                                     ((MCM_Type *)MCM0_BASE)
/** Array initializer of MCM peripheral base addresses */
#define MCM_BASE_ADDRS                           { MCM0_BASE }
/** Array initializer of MCM peripheral base pointers */
#define MCM_BASE_PTRS                            { MCM0 }
/** Interrupt vectors for the MCM peripheral type */
#define MCM_IRQS                                 { CTI0_MCM0_IRQn }
/* MCM compatibility definitions */
#define MCM_BASE                  MCM0_BASE
#define MCM                       MCM0


/*!
 * @}
 */ /* end of group MCM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- MSCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MSCM_Peripheral_Access_Layer MSCM Peripheral Access Layer
 * @{
 */

/** MSCM - Register Layout Typedef */
typedef struct {
  __I  uint32_t CPXTYPE;                           /**< Processor X Type Register, offset: 0x0 */
  __I  uint32_t CPXNUM;                            /**< Processor X Number Register, offset: 0x4 */
  __I  uint32_t CPXMASTER;                         /**< Processor X Master Register, offset: 0x8 */
  __I  uint32_t CPXCOUNT;                          /**< Processor X Count Register, offset: 0xC */
  __I  uint32_t CPXCFG0;                           /**< Processor X Configuration Register 0, offset: 0x10 */
  __I  uint32_t CPXCFG1;                           /**< Processor X Configuration Register 1, offset: 0x14 */
  __I  uint32_t CPXCFG2;                           /**< Processor X Configuration Register 2, offset: 0x18 */
  __I  uint32_t CPXCFG3;                           /**< Processor X Configuration Register 3, offset: 0x1C */
  struct {                                         /* offset: 0x20, array step: 0x20 */
    __I  uint32_t TYPE;                              /**< Processor 0 Type Register..Processor 1 Type Register, array offset: 0x20, array step: 0x20 */
    __I  uint32_t NUM;                               /**< Processor 0 Number Register..Processor 1 Number Register, array offset: 0x24, array step: 0x20 */
    __I  uint32_t MASTER;                            /**< Processor 0 Master Register..Processor 1 Master Register, array offset: 0x28, array step: 0x20 */
    __I  uint32_t COUNT;                             /**< Processor 0 Count Register..Processor 1 Count Register, array offset: 0x2C, array step: 0x20 */
    __I  uint32_t CFG0;                              /**< Processor 0 Configuration Register 0..Processor 1 Configuration Register 0, array offset: 0x30, array step: 0x20 */
    __I  uint32_t CFG1;                              /**< Processor 0 Configuration Register 1..Processor 1 Configuration Register 1, array offset: 0x34, array step: 0x20 */
    __I  uint32_t CFG2;                              /**< Processor 0 Configuration Register 2..Processor 1 Configuration Register 2, array offset: 0x38, array step: 0x20 */
    __I  uint32_t CFG3;                              /**< Processor 0 Configuration Register 3..Processor 1 Configuration Register 3, array offset: 0x3C, array step: 0x20 */
  } CP[2];
       uint8_t RESERVED_0[928];
  __IO uint32_t OCMDR0;                            /**< On-Chip Memory Descriptor Register, offset: 0x400 */
  __IO uint32_t OCMDR1;                            /**< On-Chip Memory Descriptor Register, offset: 0x404 */
  __IO uint32_t OCMDR2;                            /**< On-Chip Memory Descriptor Register, offset: 0x408 */
  __IO uint32_t OCMDR3;                            /**< On-Chip Memory Descriptor Register, offset: 0x40C */
} MSCM_Type;

/* ----------------------------------------------------------------------------
   -- MSCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MSCM_Register_Masks MSCM Register Masks
 * @{
 */

/*! @name CPXTYPE - Processor X Type Register */
#define MSCM_CPXTYPE_RYPZ_MASK                   (0xFFU)
#define MSCM_CPXTYPE_RYPZ_SHIFT                  (0U)
#define MSCM_CPXTYPE_RYPZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXTYPE_RYPZ_SHIFT)) & MSCM_CPXTYPE_RYPZ_MASK)
#define MSCM_CPXTYPE_PERSONALITY_MASK            (0xFFFFFF00U)
#define MSCM_CPXTYPE_PERSONALITY_SHIFT           (8U)
#define MSCM_CPXTYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CPXTYPE_PERSONALITY_SHIFT)) & MSCM_CPXTYPE_PERSONALITY_MASK)

/*! @name CPXNUM - Processor X Number Register */
#define MSCM_CPXNUM_CPN_MASK                     (0x1U)
#define MSCM_CPXNUM_CPN_SHIFT                    (0U)
#define MSCM_CPXNUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CPXNUM_CPN_SHIFT)) & MSCM_CPXNUM_CPN_MASK)

/*! @name CPXMASTER - Processor X Master Register */
#define MSCM_CPXMASTER_PPMN_MASK                 (0x3FU)
#define MSCM_CPXMASTER_PPMN_SHIFT                (0U)
#define MSCM_CPXMASTER_PPMN(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CPXMASTER_PPMN_SHIFT)) & MSCM_CPXMASTER_PPMN_MASK)

/*! @name CPXCOUNT - Processor X Count Register */
#define MSCM_CPXCOUNT_PCNT_MASK                  (0x3U)
#define MSCM_CPXCOUNT_PCNT_SHIFT                 (0U)
#define MSCM_CPXCOUNT_PCNT(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCOUNT_PCNT_SHIFT)) & MSCM_CPXCOUNT_PCNT_MASK)

/*! @name CPXCFG0 - Processor X Configuration Register 0 */
#define MSCM_CPXCFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CPXCFG0_DCWY_SHIFT                  (0U)
#define MSCM_CPXCFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_DCWY_SHIFT)) & MSCM_CPXCFG0_DCWY_MASK)
#define MSCM_CPXCFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CPXCFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CPXCFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_DCSZ_SHIFT)) & MSCM_CPXCFG0_DCSZ_MASK)
#define MSCM_CPXCFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CPXCFG0_ICWY_SHIFT                  (16U)
#define MSCM_CPXCFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_ICWY_SHIFT)) & MSCM_CPXCFG0_ICWY_MASK)
#define MSCM_CPXCFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CPXCFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CPXCFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_ICSZ_SHIFT)) & MSCM_CPXCFG0_ICSZ_MASK)

/*! @name CPXCFG1 - Processor X Configuration Register 1 */
#define MSCM_CPXCFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CPXCFG1_L2WY_SHIFT                  (16U)
#define MSCM_CPXCFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG1_L2WY_SHIFT)) & MSCM_CPXCFG1_L2WY_MASK)
#define MSCM_CPXCFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CPXCFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CPXCFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG1_L2SZ_SHIFT)) & MSCM_CPXCFG1_L2SZ_MASK)

/*! @name CPXCFG2 - Processor X Configuration Register 2 */
#define MSCM_CPXCFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CPXCFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CPXCFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG2_TMUSZ_SHIFT)) & MSCM_CPXCFG2_TMUSZ_MASK)
#define MSCM_CPXCFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CPXCFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CPXCFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG2_TMLSZ_SHIFT)) & MSCM_CPXCFG2_TMLSZ_MASK)

/*! @name CPXCFG3 - Processor X Configuration Register 3 */
#define MSCM_CPXCFG3_FPU_MASK                    (0x1U)
#define MSCM_CPXCFG3_FPU_SHIFT                   (0U)
#define MSCM_CPXCFG3_FPU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_FPU_SHIFT)) & MSCM_CPXCFG3_FPU_MASK)
#define MSCM_CPXCFG3_SIMD_MASK                   (0x2U)
#define MSCM_CPXCFG3_SIMD_SHIFT                  (1U)
#define MSCM_CPXCFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_SIMD_SHIFT)) & MSCM_CPXCFG3_SIMD_MASK)
#define MSCM_CPXCFG3_JAZ_MASK                    (0x4U)
#define MSCM_CPXCFG3_JAZ_SHIFT                   (2U)
#define MSCM_CPXCFG3_JAZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_JAZ_SHIFT)) & MSCM_CPXCFG3_JAZ_MASK)
#define MSCM_CPXCFG3_MMU_MASK                    (0x8U)
#define MSCM_CPXCFG3_MMU_SHIFT                   (3U)
#define MSCM_CPXCFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_MMU_SHIFT)) & MSCM_CPXCFG3_MMU_MASK)
#define MSCM_CPXCFG3_TZ_MASK                     (0x10U)
#define MSCM_CPXCFG3_TZ_SHIFT                    (4U)
#define MSCM_CPXCFG3_TZ(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_TZ_SHIFT)) & MSCM_CPXCFG3_TZ_MASK)
#define MSCM_CPXCFG3_CMP_MASK                    (0x20U)
#define MSCM_CPXCFG3_CMP_SHIFT                   (5U)
#define MSCM_CPXCFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_CMP_SHIFT)) & MSCM_CPXCFG3_CMP_MASK)
#define MSCM_CPXCFG3_BB_MASK                     (0x40U)
#define MSCM_CPXCFG3_BB_SHIFT                    (6U)
#define MSCM_CPXCFG3_BB(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_BB_SHIFT)) & MSCM_CPXCFG3_BB_MASK)
#define MSCM_CPXCFG3_SBP_MASK                    (0x300U)
#define MSCM_CPXCFG3_SBP_SHIFT                   (8U)
#define MSCM_CPXCFG3_SBP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_SBP_SHIFT)) & MSCM_CPXCFG3_SBP_MASK)

/*! @name TYPE - Processor 0 Type Register..Processor 1 Type Register */
#define MSCM_TYPE_RYPZ_MASK                      (0xFFU)
#define MSCM_TYPE_RYPZ_SHIFT                     (0U)
#define MSCM_TYPE_RYPZ(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_TYPE_RYPZ_SHIFT)) & MSCM_TYPE_RYPZ_MASK)
#define MSCM_TYPE_PERSONALITY_MASK               (0xFFFFFF00U)
#define MSCM_TYPE_PERSONALITY_SHIFT              (8U)
#define MSCM_TYPE_PERSONALITY(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_TYPE_PERSONALITY_SHIFT)) & MSCM_TYPE_PERSONALITY_MASK)

/* The count of MSCM_TYPE */
#define MSCM_TYPE_COUNT                          (2U)

/*! @name NUM - Processor 0 Number Register..Processor 1 Number Register */
#define MSCM_NUM_CPN_MASK                        (0x1U)
#define MSCM_NUM_CPN_SHIFT                       (0U)
#define MSCM_NUM_CPN(x)                          (((uint32_t)(((uint32_t)(x)) << MSCM_NUM_CPN_SHIFT)) & MSCM_NUM_CPN_MASK)

/* The count of MSCM_NUM */
#define MSCM_NUM_COUNT                           (2U)

/*! @name MASTER - Processor 0 Master Register..Processor 1 Master Register */
#define MSCM_MASTER_PPMN_MASK                    (0x3FU)
#define MSCM_MASTER_PPMN_SHIFT                   (0U)
#define MSCM_MASTER_PPMN(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_MASTER_PPMN_SHIFT)) & MSCM_MASTER_PPMN_MASK)

/* The count of MSCM_MASTER */
#define MSCM_MASTER_COUNT                        (2U)

/*! @name COUNT - Processor 0 Count Register..Processor 1 Count Register */
#define MSCM_COUNT_PCNT_MASK                     (0x3U)
#define MSCM_COUNT_PCNT_SHIFT                    (0U)
#define MSCM_COUNT_PCNT(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_COUNT_PCNT_SHIFT)) & MSCM_COUNT_PCNT_MASK)

/* The count of MSCM_COUNT */
#define MSCM_COUNT_COUNT                         (2U)

/*! @name CFG0 - Processor 0 Configuration Register 0..Processor 1 Configuration Register 0 */
#define MSCM_CFG0_DCWY_MASK                      (0xFFU)
#define MSCM_CFG0_DCWY_SHIFT                     (0U)
#define MSCM_CFG0_DCWY(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_CFG0_DCWY_SHIFT)) & MSCM_CFG0_DCWY_MASK)
#define MSCM_CFG0_DCSZ_MASK                      (0xFF00U)
#define MSCM_CFG0_DCSZ_SHIFT                     (8U)
#define MSCM_CFG0_DCSZ(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_CFG0_DCSZ_SHIFT)) & MSCM_CFG0_DCSZ_MASK)
#define MSCM_CFG0_ICWY_MASK                      (0xFF0000U)
#define MSCM_CFG0_ICWY_SHIFT                     (16U)
#define MSCM_CFG0_ICWY(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_CFG0_ICWY_SHIFT)) & MSCM_CFG0_ICWY_MASK)
#define MSCM_CFG0_ICSZ_MASK                      (0xFF000000U)
#define MSCM_CFG0_ICSZ_SHIFT                     (24U)
#define MSCM_CFG0_ICSZ(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_CFG0_ICSZ_SHIFT)) & MSCM_CFG0_ICSZ_MASK)

/* The count of MSCM_CFG0 */
#define MSCM_CFG0_COUNT                          (2U)

/*! @name CFG1 - Processor 0 Configuration Register 1..Processor 1 Configuration Register 1 */
#define MSCM_CFG1_L2WY_MASK                      (0xFF0000U)
#define MSCM_CFG1_L2WY_SHIFT                     (16U)
#define MSCM_CFG1_L2WY(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_CFG1_L2WY_SHIFT)) & MSCM_CFG1_L2WY_MASK)
#define MSCM_CFG1_L2SZ_MASK                      (0xFF000000U)
#define MSCM_CFG1_L2SZ_SHIFT                     (24U)
#define MSCM_CFG1_L2SZ(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_CFG1_L2SZ_SHIFT)) & MSCM_CFG1_L2SZ_MASK)

/* The count of MSCM_CFG1 */
#define MSCM_CFG1_COUNT                          (2U)

/*! @name CFG2 - Processor 0 Configuration Register 2..Processor 1 Configuration Register 2 */
#define MSCM_CFG2_TMUSZ_MASK                     (0xFF00U)
#define MSCM_CFG2_TMUSZ_SHIFT                    (8U)
#define MSCM_CFG2_TMUSZ(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CFG2_TMUSZ_SHIFT)) & MSCM_CFG2_TMUSZ_MASK)
#define MSCM_CFG2_TMLSZ_MASK                     (0xFF000000U)
#define MSCM_CFG2_TMLSZ_SHIFT                    (24U)
#define MSCM_CFG2_TMLSZ(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CFG2_TMLSZ_SHIFT)) & MSCM_CFG2_TMLSZ_MASK)

/* The count of MSCM_CFG2 */
#define MSCM_CFG2_COUNT                          (2U)

/*! @name CFG3 - Processor 0 Configuration Register 3..Processor 1 Configuration Register 3 */
#define MSCM_CFG3_FPU_MASK                       (0x1U)
#define MSCM_CFG3_FPU_SHIFT                      (0U)
#define MSCM_CFG3_FPU(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_FPU_SHIFT)) & MSCM_CFG3_FPU_MASK)
#define MSCM_CFG3_SIMD_MASK                      (0x2U)
#define MSCM_CFG3_SIMD_SHIFT                     (1U)
#define MSCM_CFG3_SIMD(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_SIMD_SHIFT)) & MSCM_CFG3_SIMD_MASK)
#define MSCM_CFG3_JAZ_MASK                       (0x4U)
#define MSCM_CFG3_JAZ_SHIFT                      (2U)
#define MSCM_CFG3_JAZ(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_JAZ_SHIFT)) & MSCM_CFG3_JAZ_MASK)
#define MSCM_CFG3_MMU_MASK                       (0x8U)
#define MSCM_CFG3_MMU_SHIFT                      (3U)
#define MSCM_CFG3_MMU(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_MMU_SHIFT)) & MSCM_CFG3_MMU_MASK)
#define MSCM_CFG3_TZ_MASK                        (0x10U)
#define MSCM_CFG3_TZ_SHIFT                       (4U)
#define MSCM_CFG3_TZ(x)                          (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_TZ_SHIFT)) & MSCM_CFG3_TZ_MASK)
#define MSCM_CFG3_CMP_MASK                       (0x20U)
#define MSCM_CFG3_CMP_SHIFT                      (5U)
#define MSCM_CFG3_CMP(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_CMP_SHIFT)) & MSCM_CFG3_CMP_MASK)
#define MSCM_CFG3_BB_MASK                        (0x40U)
#define MSCM_CFG3_BB_SHIFT                       (6U)
#define MSCM_CFG3_BB(x)                          (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_BB_SHIFT)) & MSCM_CFG3_BB_MASK)
#define MSCM_CFG3_SBP_MASK                       (0x300U)
#define MSCM_CFG3_SBP_SHIFT                      (8U)
#define MSCM_CFG3_SBP(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_CFG3_SBP_SHIFT)) & MSCM_CFG3_SBP_MASK)

/* The count of MSCM_CFG3 */
#define MSCM_CFG3_COUNT                          (2U)

/*! @name OCMDR0 - On-Chip Memory Descriptor Register */
#define MSCM_OCMDR0_OCM1_MASK                    (0x30U)
#define MSCM_OCMDR0_OCM1_SHIFT                   (4U)
#define MSCM_OCMDR0_OCM1(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_OCM1_SHIFT)) & MSCM_OCMDR0_OCM1_MASK)
#define MSCM_OCMDR0_OCMPU_MASK                   (0x1000U)
#define MSCM_OCMDR0_OCMPU_SHIFT                  (12U)
#define MSCM_OCMDR0_OCMPU(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_OCMPU_SHIFT)) & MSCM_OCMDR0_OCMPU_MASK)
#define MSCM_OCMDR0_OCMT_MASK                    (0xE000U)
#define MSCM_OCMDR0_OCMT_SHIFT                   (13U)
#define MSCM_OCMDR0_OCMT(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_OCMT_SHIFT)) & MSCM_OCMDR0_OCMT_MASK)
#define MSCM_OCMDR0_RO_MASK                      (0x10000U)
#define MSCM_OCMDR0_RO_SHIFT                     (16U)
#define MSCM_OCMDR0_RO(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_RO_SHIFT)) & MSCM_OCMDR0_RO_MASK)
#define MSCM_OCMDR0_OCMW_MASK                    (0xE0000U)
#define MSCM_OCMDR0_OCMW_SHIFT                   (17U)
#define MSCM_OCMDR0_OCMW(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_OCMW_SHIFT)) & MSCM_OCMDR0_OCMW_MASK)
#define MSCM_OCMDR0_OCMSZ_MASK                   (0xF000000U)
#define MSCM_OCMDR0_OCMSZ_SHIFT                  (24U)
#define MSCM_OCMDR0_OCMSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_OCMSZ_SHIFT)) & MSCM_OCMDR0_OCMSZ_MASK)
#define MSCM_OCMDR0_OCMSZH_MASK                  (0x10000000U)
#define MSCM_OCMDR0_OCMSZH_SHIFT                 (28U)
#define MSCM_OCMDR0_OCMSZH(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_OCMSZH_SHIFT)) & MSCM_OCMDR0_OCMSZH_MASK)
#define MSCM_OCMDR0_V_MASK                       (0x80000000U)
#define MSCM_OCMDR0_V_SHIFT                      (31U)
#define MSCM_OCMDR0_V(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR0_V_SHIFT)) & MSCM_OCMDR0_V_MASK)

/*! @name OCMDR1 - On-Chip Memory Descriptor Register */
#define MSCM_OCMDR1_OCM1_MASK                    (0x30U)
#define MSCM_OCMDR1_OCM1_SHIFT                   (4U)
#define MSCM_OCMDR1_OCM1(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_OCM1_SHIFT)) & MSCM_OCMDR1_OCM1_MASK)
#define MSCM_OCMDR1_OCMPU_MASK                   (0x1000U)
#define MSCM_OCMDR1_OCMPU_SHIFT                  (12U)
#define MSCM_OCMDR1_OCMPU(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_OCMPU_SHIFT)) & MSCM_OCMDR1_OCMPU_MASK)
#define MSCM_OCMDR1_OCMT_MASK                    (0xE000U)
#define MSCM_OCMDR1_OCMT_SHIFT                   (13U)
#define MSCM_OCMDR1_OCMT(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_OCMT_SHIFT)) & MSCM_OCMDR1_OCMT_MASK)
#define MSCM_OCMDR1_RO_MASK                      (0x10000U)
#define MSCM_OCMDR1_RO_SHIFT                     (16U)
#define MSCM_OCMDR1_RO(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_RO_SHIFT)) & MSCM_OCMDR1_RO_MASK)
#define MSCM_OCMDR1_OCMW_MASK                    (0xE0000U)
#define MSCM_OCMDR1_OCMW_SHIFT                   (17U)
#define MSCM_OCMDR1_OCMW(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_OCMW_SHIFT)) & MSCM_OCMDR1_OCMW_MASK)
#define MSCM_OCMDR1_OCMSZ_MASK                   (0xF000000U)
#define MSCM_OCMDR1_OCMSZ_SHIFT                  (24U)
#define MSCM_OCMDR1_OCMSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_OCMSZ_SHIFT)) & MSCM_OCMDR1_OCMSZ_MASK)
#define MSCM_OCMDR1_OCMSZH_MASK                  (0x10000000U)
#define MSCM_OCMDR1_OCMSZH_SHIFT                 (28U)
#define MSCM_OCMDR1_OCMSZH(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_OCMSZH_SHIFT)) & MSCM_OCMDR1_OCMSZH_MASK)
#define MSCM_OCMDR1_V_MASK                       (0x80000000U)
#define MSCM_OCMDR1_V_SHIFT                      (31U)
#define MSCM_OCMDR1_V(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR1_V_SHIFT)) & MSCM_OCMDR1_V_MASK)

/*! @name OCMDR2 - On-Chip Memory Descriptor Register */
#define MSCM_OCMDR2_OCMPU_MASK                   (0x1000U)
#define MSCM_OCMDR2_OCMPU_SHIFT                  (12U)
#define MSCM_OCMDR2_OCMPU(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR2_OCMPU_SHIFT)) & MSCM_OCMDR2_OCMPU_MASK)
#define MSCM_OCMDR2_OCMT_MASK                    (0xE000U)
#define MSCM_OCMDR2_OCMT_SHIFT                   (13U)
#define MSCM_OCMDR2_OCMT(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR2_OCMT_SHIFT)) & MSCM_OCMDR2_OCMT_MASK)
#define MSCM_OCMDR2_RO_MASK                      (0x10000U)
#define MSCM_OCMDR2_RO_SHIFT                     (16U)
#define MSCM_OCMDR2_RO(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR2_RO_SHIFT)) & MSCM_OCMDR2_RO_MASK)
#define MSCM_OCMDR2_OCMW_MASK                    (0xE0000U)
#define MSCM_OCMDR2_OCMW_SHIFT                   (17U)
#define MSCM_OCMDR2_OCMW(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR2_OCMW_SHIFT)) & MSCM_OCMDR2_OCMW_MASK)
#define MSCM_OCMDR2_OCMSZ_MASK                   (0xF000000U)
#define MSCM_OCMDR2_OCMSZ_SHIFT                  (24U)
#define MSCM_OCMDR2_OCMSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR2_OCMSZ_SHIFT)) & MSCM_OCMDR2_OCMSZ_MASK)
#define MSCM_OCMDR2_OCMSZH_MASK                  (0x10000000U)
#define MSCM_OCMDR2_OCMSZH_SHIFT                 (28U)
#define MSCM_OCMDR2_OCMSZH(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR2_OCMSZH_SHIFT)) & MSCM_OCMDR2_OCMSZH_MASK)
#define MSCM_OCMDR2_V_MASK                       (0x80000000U)
#define MSCM_OCMDR2_V_SHIFT                      (31U)
#define MSCM_OCMDR2_V(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR2_V_SHIFT)) & MSCM_OCMDR2_V_MASK)

/*! @name OCMDR3 - On-Chip Memory Descriptor Register */
#define MSCM_OCMDR3_OCMPU_MASK                   (0x1000U)
#define MSCM_OCMDR3_OCMPU_SHIFT                  (12U)
#define MSCM_OCMDR3_OCMPU(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR3_OCMPU_SHIFT)) & MSCM_OCMDR3_OCMPU_MASK)
#define MSCM_OCMDR3_OCMT_MASK                    (0xE000U)
#define MSCM_OCMDR3_OCMT_SHIFT                   (13U)
#define MSCM_OCMDR3_OCMT(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR3_OCMT_SHIFT)) & MSCM_OCMDR3_OCMT_MASK)
#define MSCM_OCMDR3_RO_MASK                      (0x10000U)
#define MSCM_OCMDR3_RO_SHIFT                     (16U)
#define MSCM_OCMDR3_RO(x)                        (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR3_RO_SHIFT)) & MSCM_OCMDR3_RO_MASK)
#define MSCM_OCMDR3_OCMW_MASK                    (0xE0000U)
#define MSCM_OCMDR3_OCMW_SHIFT                   (17U)
#define MSCM_OCMDR3_OCMW(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR3_OCMW_SHIFT)) & MSCM_OCMDR3_OCMW_MASK)
#define MSCM_OCMDR3_OCMSZ_MASK                   (0xF000000U)
#define MSCM_OCMDR3_OCMSZ_SHIFT                  (24U)
#define MSCM_OCMDR3_OCMSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR3_OCMSZ_SHIFT)) & MSCM_OCMDR3_OCMSZ_MASK)
#define MSCM_OCMDR3_OCMSZH_MASK                  (0x10000000U)
#define MSCM_OCMDR3_OCMSZH_SHIFT                 (28U)
#define MSCM_OCMDR3_OCMSZH(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR3_OCMSZH_SHIFT)) & MSCM_OCMDR3_OCMSZH_MASK)
#define MSCM_OCMDR3_V_MASK                       (0x80000000U)
#define MSCM_OCMDR3_V_SHIFT                      (31U)
#define MSCM_OCMDR3_V(x)                         (((uint32_t)(((uint32_t)(x)) << MSCM_OCMDR3_V_SHIFT)) & MSCM_OCMDR3_V_MASK)


/*!
 * @}
 */ /* end of group MSCM_Register_Masks */


/* MSCM - Peripheral instance base addresses */
/** Peripheral MSCM base address */
#define MSCM_BASE                                (0x40001000u)
/** Peripheral MSCM base pointer */
#define MSCM                                     ((MSCM_Type *)MSCM_BASE)
/** Array initializer of MSCM peripheral base addresses */
#define MSCM_BASE_ADDRS                          { MSCM_BASE }
/** Array initializer of MSCM peripheral base pointers */
#define MSCM_BASE_PTRS                           { MSCM }

/*!
 * @}
 */ /* end of group MSCM_Peripheral_Access_Layer */

/*!
 * @brief Core boot mode.
 */
typedef enum _mu_core_boot_mode
{
    kMU_CoreBootFromDflashBase = 0x00U, /*!< Boot from Dflash base.  */
    kMU_CoreBootFromCM0PRamBase = 0x02U, /*!< Boot from CM0+ RAM base. */
} mu_core_boot_mode_t;
/*!
 * @brief Power mode on the other side definition.
 */
typedef enum _mu_power_mode
{
    kMU_PowerModeRun = 0x00U,  /*!< Run mode.           */
    kMU_PowerModeCoo = 0x01U,  /*!< COO mode.           */
    kMU_PowerModeWait = 0x02U, /*!< WAIT mode.          */
    kMU_PowerModeStop = 0x03U, /*!< STOP/VLPS mode.     */
    kMU_PowerModeDsm = 0x04U   /*!< DSM: LLS/VLLS mode. */
} mu_power_mode_t;


/* ----------------------------------------------------------------------------
   -- MU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MU_Peripheral_Access_Layer MU Peripheral Access Layer
 * @{
 */

/** MU - Register Layout Typedef */
typedef struct {
  __I  uint32_t VER;                               /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PAR;                               /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[24];
  __IO uint32_t TR[4];                             /**< Transmit Register, array offset: 0x20, array step: 0x4 */
       uint8_t RESERVED_1[16];
  __I  uint32_t RR[4];                             /**< Receive Register, array offset: 0x40, array step: 0x4 */
       uint8_t RESERVED_2[16];
  __IO uint32_t SR;                                /**< Status Register, offset: 0x60 */
  __IO uint32_t CR;                                /**< Control Register, offset: 0x64 */
  __IO uint32_t CCR;                               /**< Core Control Register, offset: 0x68 */
} MU_Type;

/* ----------------------------------------------------------------------------
   -- MU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MU_Register_Masks MU Register Masks
 * @{
 */

/*! @name VER - Version ID Register */
#define MU_VER_FEATURE_MASK                      (0xFFFFU)
#define MU_VER_FEATURE_SHIFT                     (0U)
#define MU_VER_FEATURE(x)                        (((uint32_t)(((uint32_t)(x)) << MU_VER_FEATURE_SHIFT)) & MU_VER_FEATURE_MASK)
#define MU_VER_MINOR_MASK                        (0xFF0000U)
#define MU_VER_MINOR_SHIFT                       (16U)
#define MU_VER_MINOR(x)                          (((uint32_t)(((uint32_t)(x)) << MU_VER_MINOR_SHIFT)) & MU_VER_MINOR_MASK)
#define MU_VER_MAJOR_MASK                        (0xFF000000U)
#define MU_VER_MAJOR_SHIFT                       (24U)
#define MU_VER_MAJOR(x)                          (((uint32_t)(((uint32_t)(x)) << MU_VER_MAJOR_SHIFT)) & MU_VER_MAJOR_MASK)

/*! @name PAR - Parameter Register */
#define MU_PAR_PARAMETER_MASK                    (0xFFFFFFFFU)
#define MU_PAR_PARAMETER_SHIFT                   (0U)
#define MU_PAR_PARAMETER(x)                      (((uint32_t)(((uint32_t)(x)) << MU_PAR_PARAMETER_SHIFT)) & MU_PAR_PARAMETER_MASK)

/*! @name TR - Transmit Register */
#define MU_TR_DATA_MASK                          (0xFFFFFFFFU)
#define MU_TR_DATA_SHIFT                         (0U)
#define MU_TR_DATA(x)                            (((uint32_t)(((uint32_t)(x)) << MU_TR_DATA_SHIFT)) & MU_TR_DATA_MASK)

/* The count of MU_TR */
#define MU_TR_COUNT                              (4U)

/*! @name RR - Receive Register */
#define MU_RR_DATA_MASK                          (0xFFFFFFFFU)
#define MU_RR_DATA_SHIFT                         (0U)
#define MU_RR_DATA(x)                            (((uint32_t)(((uint32_t)(x)) << MU_RR_DATA_SHIFT)) & MU_RR_DATA_MASK)

/* The count of MU_RR */
#define MU_RR_COUNT                              (4U)

/*! @name SR - Status Register */
#define MU_SR_Fn_MASK                            (0x7U)
#define MU_SR_Fn_SHIFT                           (0U)
#define MU_SR_Fn(x)                              (((uint32_t)(((uint32_t)(x)) << MU_SR_Fn_SHIFT)) & MU_SR_Fn_MASK)
#define MU_SR_NMIC_MASK                          (0x8U)
#define MU_SR_NMIC_SHIFT                         (3U)
#define MU_SR_NMIC(x)                            (((uint32_t)(((uint32_t)(x)) << MU_SR_NMIC_SHIFT)) & MU_SR_NMIC_MASK)
#define MU_SR_EP_MASK                            (0x10U)
#define MU_SR_EP_SHIFT                           (4U)
#define MU_SR_EP(x)                              (((uint32_t)(((uint32_t)(x)) << MU_SR_EP_SHIFT)) & MU_SR_EP_MASK)
#define MU_SR_HRIP_MASK                          (0x80U)
#define MU_SR_HRIP_SHIFT                         (7U)
#define MU_SR_HRIP(x)                            (((uint32_t)(((uint32_t)(x)) << MU_SR_HRIP_SHIFT)) & MU_SR_HRIP_MASK)
#define MU_SR_FUP_MASK                           (0x100U)
#define MU_SR_FUP_SHIFT                          (8U)
#define MU_SR_FUP(x)                             (((uint32_t)(((uint32_t)(x)) << MU_SR_FUP_SHIFT)) & MU_SR_FUP_MASK)
#define MU_SR_RDIP_MASK                          (0x200U)
#define MU_SR_RDIP_SHIFT                         (9U)
#define MU_SR_RDIP(x)                            (((uint32_t)(((uint32_t)(x)) << MU_SR_RDIP_SHIFT)) & MU_SR_RDIP_MASK)
#define MU_SR_RAIP_MASK                          (0x400U)
#define MU_SR_RAIP_SHIFT                         (10U)
#define MU_SR_RAIP(x)                            (((uint32_t)(((uint32_t)(x)) << MU_SR_RAIP_SHIFT)) & MU_SR_RAIP_MASK)
#define MU_SR_MURIP_MASK                         (0x800U)
#define MU_SR_MURIP_SHIFT                        (11U)
#define MU_SR_MURIP(x)                           (((uint32_t)(((uint32_t)(x)) << MU_SR_MURIP_SHIFT)) & MU_SR_MURIP_MASK)
#define MU_SR_PM_MASK                            (0x7000U)
#define MU_SR_PM_SHIFT                           (12U)
#define MU_SR_PM(x)                              (((uint32_t)(((uint32_t)(x)) << MU_SR_PM_SHIFT)) & MU_SR_PM_MASK)
#define MU_SR_TEn_MASK                           (0xF00000U)
#define MU_SR_TEn_SHIFT                          (20U)
#define MU_SR_TEn(x)                             (((uint32_t)(((uint32_t)(x)) << MU_SR_TEn_SHIFT)) & MU_SR_TEn_MASK)
#define MU_SR_RFn_MASK                           (0xF000000U)
#define MU_SR_RFn_SHIFT                          (24U)
#define MU_SR_RFn(x)                             (((uint32_t)(((uint32_t)(x)) << MU_SR_RFn_SHIFT)) & MU_SR_RFn_MASK)
#define MU_SR_GIPn_MASK                          (0xF0000000U)
#define MU_SR_GIPn_SHIFT                         (28U)
#define MU_SR_GIPn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_SR_GIPn_SHIFT)) & MU_SR_GIPn_MASK)

/*! @name CR - Control Register */
#define MU_CR_Fn_MASK                            (0x7U)
#define MU_CR_Fn_SHIFT                           (0U)
#define MU_CR_Fn(x)                              (((uint32_t)(((uint32_t)(x)) << MU_CR_Fn_SHIFT)) & MU_CR_Fn_MASK)
#define MU_CR_NMI_MASK                           (0x8U)
#define MU_CR_NMI_SHIFT                          (3U)
#define MU_CR_NMI(x)                             (((uint32_t)(((uint32_t)(x)) << MU_CR_NMI_SHIFT)) & MU_CR_NMI_MASK)
#define MU_CR_MUR_MASK                           (0x20U)
#define MU_CR_MUR_SHIFT                          (5U)
#define MU_CR_MUR(x)                             (((uint32_t)(((uint32_t)(x)) << MU_CR_MUR_SHIFT)) & MU_CR_MUR_MASK)
#define MU_CR_RDIE_MASK                          (0x40U)
#define MU_CR_RDIE_SHIFT                         (6U)
#define MU_CR_RDIE(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_RDIE_SHIFT)) & MU_CR_RDIE_MASK)
#define MU_CR_HRIE_MASK                          (0x80U)
#define MU_CR_HRIE_SHIFT                         (7U)
#define MU_CR_HRIE(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_HRIE_SHIFT)) & MU_CR_HRIE_MASK)
#define MU_CR_MURIE_MASK                         (0x800U)
#define MU_CR_MURIE_SHIFT                        (11U)
#define MU_CR_MURIE(x)                           (((uint32_t)(((uint32_t)(x)) << MU_CR_MURIE_SHIFT)) & MU_CR_MURIE_MASK)
#define MU_CR_RAIE_MASK                          (0x1000U)
#define MU_CR_RAIE_SHIFT                         (12U)
#define MU_CR_RAIE(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_RAIE_SHIFT)) & MU_CR_RAIE_MASK)
#define MU_CR_GIRn_MASK                          (0xF0000U)
#define MU_CR_GIRn_SHIFT                         (16U)
#define MU_CR_GIRn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_GIRn_SHIFT)) & MU_CR_GIRn_MASK)
#define MU_CR_TIEn_MASK                          (0xF00000U)
#define MU_CR_TIEn_SHIFT                         (20U)
#define MU_CR_TIEn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_TIEn_SHIFT)) & MU_CR_TIEn_MASK)
#define MU_CR_RIEn_MASK                          (0xF000000U)
#define MU_CR_RIEn_SHIFT                         (24U)
#define MU_CR_RIEn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_RIEn_SHIFT)) & MU_CR_RIEn_MASK)
#define MU_CR_GIEn_MASK                          (0xF0000000U)
#define MU_CR_GIEn_SHIFT                         (28U)
#define MU_CR_GIEn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_GIEn_SHIFT)) & MU_CR_GIEn_MASK)

/*! @name CCR - Core Control Register */
#define MU_CCR_HR_MASK                           (0x1U)
#define MU_CCR_HR_SHIFT                          (0U)
#define MU_CCR_HR(x)                             (((uint32_t)(((uint32_t)(x)) << MU_CCR_HR_SHIFT)) & MU_CCR_HR_MASK)
#define MU_CCR_HRM_MASK                          (0x2U)
#define MU_CCR_HRM_SHIFT                         (1U)
#define MU_CCR_HRM(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CCR_HRM_SHIFT)) & MU_CCR_HRM_MASK)
#define MU_CCR_RSTH_MASK                         (0x4U)
#define MU_CCR_RSTH_SHIFT                        (2U)
#define MU_CCR_RSTH(x)                           (((uint32_t)(((uint32_t)(x)) << MU_CCR_RSTH_SHIFT)) & MU_CCR_RSTH_MASK)
#define MU_CCR_CLKE_MASK                         (0x8U)
#define MU_CCR_CLKE_SHIFT                        (3U)
#define MU_CCR_CLKE(x)                           (((uint32_t)(((uint32_t)(x)) << MU_CCR_CLKE_SHIFT)) & MU_CCR_CLKE_MASK)
#define MU_CCR_BOOT_MASK                         (0x30U)
#define MU_CCR_BOOT_SHIFT                        (4U)
#define MU_CCR_BOOT(x)                           (((uint32_t)(((uint32_t)(x)) << MU_CCR_BOOT_SHIFT)) & MU_CCR_BOOT_MASK)


/*!
 * @}
 */ /* end of group MU_Register_Masks */


/* MU - Peripheral instance base addresses */
/** Peripheral MUA base address */
#define MUA_BASE                                 (0x40025000u)
/** Peripheral MUA base pointer */
#define MUA                                      ((MU_Type *)MUA_BASE)
/** Array initializer of MU peripheral base addresses */
#define MU_BASE_ADDRS                            { MUA_BASE }
/** Array initializer of MU peripheral base pointers */
#define MU_BASE_PTRS                             { MUA }
/** Interrupt vectors for the MU peripheral type */
#define MU_IRQS                                  { MUA_IRQn }

/*!
 * @}
 */ /* end of group MU_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- PCC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCC_Peripheral_Access_Layer PCC Peripheral Access Layer
 * @{
 */

/** PCC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CLKCFG[130];                       /**< PCC MSCM Register..PCC EXT_CLK Register, array offset: 0x0, array step: 0x4 */
} PCC_Type;

/* ----------------------------------------------------------------------------
   -- PCC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCC_Register_Masks PCC Register Masks
 * @{
 */

/*! @name CLKCFG - PCC MSCM Register..PCC EXT_CLK Register */
#define PCC_CLKCFG_PCD_MASK                      (0x7U)
#define PCC_CLKCFG_PCD_SHIFT                     (0U)
#define PCC_CLKCFG_PCD(x)                        (((uint32_t)(((uint32_t)(x)) << PCC_CLKCFG_PCD_SHIFT)) & PCC_CLKCFG_PCD_MASK)
#define PCC_CLKCFG_FRAC_MASK                     (0x8U)
#define PCC_CLKCFG_FRAC_SHIFT                    (3U)
#define PCC_CLKCFG_FRAC(x)                       (((uint32_t)(((uint32_t)(x)) << PCC_CLKCFG_FRAC_SHIFT)) & PCC_CLKCFG_FRAC_MASK)
#define PCC_CLKCFG_PCS_MASK                      (0x7000000U)
#define PCC_CLKCFG_PCS_SHIFT                     (24U)
#define PCC_CLKCFG_PCS(x)                        (((uint32_t)(((uint32_t)(x)) << PCC_CLKCFG_PCS_SHIFT)) & PCC_CLKCFG_PCS_MASK)
#define PCC_CLKCFG_INUSE_MASK                    (0x20000000U)
#define PCC_CLKCFG_INUSE_SHIFT                   (29U)
#define PCC_CLKCFG_INUSE(x)                      (((uint32_t)(((uint32_t)(x)) << PCC_CLKCFG_INUSE_SHIFT)) & PCC_CLKCFG_INUSE_MASK)
#define PCC_CLKCFG_CGC_MASK                      (0x40000000U)
#define PCC_CLKCFG_CGC_SHIFT                     (30U)
#define PCC_CLKCFG_CGC(x)                        (((uint32_t)(((uint32_t)(x)) << PCC_CLKCFG_CGC_SHIFT)) & PCC_CLKCFG_CGC_MASK)
#define PCC_CLKCFG_PR_MASK                       (0x80000000U)
#define PCC_CLKCFG_PR_SHIFT                      (31U)
#define PCC_CLKCFG_PR(x)                         (((uint32_t)(((uint32_t)(x)) << PCC_CLKCFG_PR_SHIFT)) & PCC_CLKCFG_PR_MASK)

/* The count of PCC_CLKCFG */
#define PCC_CLKCFG_COUNT                         (130U)


/*!
 * @}
 */ /* end of group PCC_Register_Masks */


/* PCC - Peripheral instance base addresses */
/** Peripheral PCC0 base address */
#define PCC0_BASE                                (0x4002B000u)
/** Peripheral PCC0 base pointer */
#define PCC0                                     ((PCC_Type *)PCC0_BASE)
/** Peripheral PCC1 base address */
#define PCC1_BASE                                (0x41027000u)
/** Peripheral PCC1 base pointer */
#define PCC1                                     ((PCC_Type *)PCC1_BASE)
/** Array initializer of PCC peripheral base addresses */
#define PCC_BASE_ADDRS                           { PCC0_BASE, PCC1_BASE }
/** Array initializer of PCC peripheral base pointers */
#define PCC_BASE_PTRS                            { PCC0, PCC1 }
#define    PCC_INSTANCE_MASK            (0xFu)
#define    PCC_INSTANCE_SHIFT           (12u)
#define    PCC_PERIPHERAL_MASK          (0xFFFu)
#define    PCC_PERIPHERAL_SHIFT         (0u)
#define    PCC_INSTANCE_0               (0u)
#define    PCC_INSTANCE_1               (1u)

#define    PCC_MSCM_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 1U)
#define    PCC_AXBS0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 4U)
#define    PCC_DMA0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 8U)
#define    PCC_FLEXBUS_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 12U)
#define    PCC_XRDC_MGR_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 20U)
#define    PCC0_XRDC_PAC_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 22U)
#define    PCC0_XRDC_MRC_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 23U)
#define    PCC_SEMA42_0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 27U)
#define    PCC_DMAMUX0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 33U)
#define    PCC_EWM_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 34U)
#define    PCC_MUA_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 37U)
#define    PCC_CRC0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 47U)
#define    PCC_LPIT0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 48U)
#define    PCC_TPM0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 53U)
#define    PCC_TPM1_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 54U)
#define    PCC_TPM2_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 55U)
#define    PCC_EMVSIM0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 56U)
#define    PCC_FLEXIO0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 57U)
#define    PCC_LPI2C0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 58U)
#define    PCC_LPI2C1_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 59U)
#define    PCC_LPI2C2_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 60U)
#define    PCC_I2S0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 61U)
#define    PCC_USDHC0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 62U)
#define    PCC_LPSPI0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 63U)
#define    PCC_LPSPI1_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 64U)
#define    PCC_LPSPI2_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 65U)
#define    PCC_LPUART0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 66U)
#define    PCC_LPUART1_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 67U)
#define    PCC_LPUART2_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 68U)
#define    PCC_USB0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 69U)
#define    PCC_PORTA_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 70U)
#define    PCC_PORTB_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 71U)
#define    PCC_PORTC_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 72U)
#define    PCC_PORTD_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 73U)
#define    PCC_ADC0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 74U)
#define    PCC_LPDAC0_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 76U)
#define    PCC_VREF_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 77U)
#define    PCC_TRACE_INDEX            ((uint16_t)((PCC_INSTANCE_0 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 128U)
#define    PCC_DMA1_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 8U)
#define    PCC_GPIOE_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 15U)
#define    PCC1_XRDC_PAC_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 22U)
#define    PCC1_XRDC_MRC_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 23U)
#define    PCC_SEMA42_1_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 27U)
#define    PCC_DMAMUX1_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 33U)
#define    PCC_INTMUX1_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 34U)
#define    PCC_MUB_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 36U)
#define    PCC_CAU3_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 40U)
#define    PCC_TRNG_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 41U)
#define    PCC_LPIT1_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 42U)
#define    PCC_TPM3_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 45U)
#define    PCC_LPI2C3_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 46U)
#define    PCC_LPSPI3_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 53U)
#define    PCC_LPUART3_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 54U)
#define    PCC_PORTE_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 55U)
#define    PCC_MTB_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 128U)
#define    PCC_EXT_CLK_INDEX            ((uint16_t)((PCC_INSTANCE_1 & PCC_INSTANCE_MASK) << PCC_INSTANCE_SHIFT) | 129U)
#define    PCC_MSCM              (PCC0->CLKCFG[1])
#define    PCC_AXBS0              (PCC0->CLKCFG[4])
#define    PCC_DMA0              (PCC0->CLKCFG[8])
#define    PCC_FLEXBUS              (PCC0->CLKCFG[12])
#define    PCC_XRDC_MGR              (PCC0->CLKCFG[20])
#define    PCC0_XRDC_PAC              (PCC0->CLKCFG[22])
#define    PCC0_XRDC_MRC              (PCC0->CLKCFG[23])
#define    PCC_SEMA42_0              (PCC0->CLKCFG[27])
#define    PCC_DMAMUX0              (PCC0->CLKCFG[33])
#define    PCC_EWM              (PCC0->CLKCFG[34])
#define    PCC_MUA              (PCC0->CLKCFG[37])
#define    PCC_CRC0              (PCC0->CLKCFG[47])
#define    PCC_LPIT0              (PCC0->CLKCFG[48])
#define    PCC_TPM0              (PCC0->CLKCFG[53])
#define    PCC_TPM1              (PCC0->CLKCFG[54])
#define    PCC_TPM2              (PCC0->CLKCFG[55])
#define    PCC_EMVSIM0              (PCC0->CLKCFG[56])
#define    PCC_FLEXIO0              (PCC0->CLKCFG[57])
#define    PCC_LPI2C0              (PCC0->CLKCFG[58])
#define    PCC_LPI2C1              (PCC0->CLKCFG[59])
#define    PCC_LPI2C2              (PCC0->CLKCFG[60])
#define    PCC_I2S0              (PCC0->CLKCFG[61])
#define    PCC_USDHC0              (PCC0->CLKCFG[62])
#define    PCC_LPSPI0              (PCC0->CLKCFG[63])
#define    PCC_LPSPI1              (PCC0->CLKCFG[64])
#define    PCC_LPSPI2              (PCC0->CLKCFG[65])
#define    PCC_LPUART0              (PCC0->CLKCFG[66])
#define    PCC_LPUART1              (PCC0->CLKCFG[67])
#define    PCC_LPUART2              (PCC0->CLKCFG[68])
#define    PCC_USB0              (PCC0->CLKCFG[69])
#define    PCC_PORTA              (PCC0->CLKCFG[70])
#define    PCC_PORTB              (PCC0->CLKCFG[71])
#define    PCC_PORTC              (PCC0->CLKCFG[72])
#define    PCC_PORTD              (PCC0->CLKCFG[73])
#define    PCC_ADC0              (PCC0->CLKCFG[74])
#define    PCC_LPDAC0              (PCC0->CLKCFG[76])
#define    PCC_VREF              (PCC0->CLKCFG[77])
#define    PCC_TRACE              (PCC0->CLKCFG[128])
#define    PCC_DMA1              (PCC1->CLKCFG[8])
#define    PCC_GPIOE              (PCC1->CLKCFG[15])
#define    PCC1_XRDC_PAC              (PCC1->CLKCFG[22])
#define    PCC1_XRDC_MRC              (PCC1->CLKCFG[23])
#define    PCC_SEMA42_1              (PCC1->CLKCFG[27])
#define    PCC_DMAMUX1              (PCC1->CLKCFG[33])
#define    PCC_INTMUX1              (PCC1->CLKCFG[34])
#define    PCC_MUB              (PCC1->CLKCFG[36])
#define    PCC_CAU3              (PCC1->CLKCFG[40])
#define    PCC_TRNG              (PCC1->CLKCFG[41])
#define    PCC_LPIT1              (PCC1->CLKCFG[42])
#define    PCC_TPM3              (PCC1->CLKCFG[45])
#define    PCC_LPI2C3              (PCC1->CLKCFG[46])
#define    PCC_LPSPI3              (PCC1->CLKCFG[53])
#define    PCC_LPUART3              (PCC1->CLKCFG[54])
#define    PCC_PORTE              (PCC1->CLKCFG[55])
#define    PCC_MTB              (PCC1->CLKCFG[128])
#define    PCC_EXT_CLK              (PCC1->CLKCFG[129])


/*!
 * @}
 */ /* end of group PCC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- PORT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PORT_Peripheral_Access_Layer PORT Peripheral Access Layer
 * @{
 */

/** PORT - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCR[32];                           /**< Pin Control Register 0..Pin Control Register 30, array offset: 0x0, array step: 0x4 */
  __O  uint32_t GPCLR;                             /**< Global Pin Control Low Register, offset: 0x80 */
  __O  uint32_t GPCHR;                             /**< Global Pin Control High Register, offset: 0x84 */
  __O  uint32_t GICLR;                             /**< Global Interrupt Control Low Register, offset: 0x88 */
  __O  uint32_t GICHR;                             /**< Global Interrupt Control High Register, offset: 0x8C */
       uint8_t RESERVED_0[16];
  __IO uint32_t ISFR;                              /**< Interrupt Status Flag Register, offset: 0xA0 */
       uint8_t RESERVED_1[28];
  __IO uint32_t DFER;                              /**< Digital Filter Enable Register, offset: 0xC0 */
  __IO uint32_t DFCR;                              /**< Digital Filter Clock Register, offset: 0xC4 */
  __IO uint32_t DFWR;                              /**< Digital Filter Width Register, offset: 0xC8 */
} PORT_Type;

/* ----------------------------------------------------------------------------
   -- PORT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PORT_Register_Masks PORT Register Masks
 * @{
 */

/*! @name PCR - Pin Control Register 0..Pin Control Register 30 */
#define PORT_PCR_PS_MASK                         (0x1U)
#define PORT_PCR_PS_SHIFT                        (0U)
#define PORT_PCR_PS(x)                           (((uint32_t)(((uint32_t)(x)) << PORT_PCR_PS_SHIFT)) & PORT_PCR_PS_MASK)
#define PORT_PCR_PE_MASK                         (0x2U)
#define PORT_PCR_PE_SHIFT                        (1U)
#define PORT_PCR_PE(x)                           (((uint32_t)(((uint32_t)(x)) << PORT_PCR_PE_SHIFT)) & PORT_PCR_PE_MASK)
#define PORT_PCR_SRE_MASK                        (0x4U)
#define PORT_PCR_SRE_SHIFT                       (2U)
#define PORT_PCR_SRE(x)                          (((uint32_t)(((uint32_t)(x)) << PORT_PCR_SRE_SHIFT)) & PORT_PCR_SRE_MASK)
#define PORT_PCR_PFE_MASK                        (0x10U)
#define PORT_PCR_PFE_SHIFT                       (4U)
#define PORT_PCR_PFE(x)                          (((uint32_t)(((uint32_t)(x)) << PORT_PCR_PFE_SHIFT)) & PORT_PCR_PFE_MASK)
#define PORT_PCR_ODE_MASK                        (0x20U)
#define PORT_PCR_ODE_SHIFT                       (5U)
#define PORT_PCR_ODE(x)                          (((uint32_t)(((uint32_t)(x)) << PORT_PCR_ODE_SHIFT)) & PORT_PCR_ODE_MASK)
#define PORT_PCR_DSE_MASK                        (0x40U)
#define PORT_PCR_DSE_SHIFT                       (6U)
#define PORT_PCR_DSE(x)                          (((uint32_t)(((uint32_t)(x)) << PORT_PCR_DSE_SHIFT)) & PORT_PCR_DSE_MASK)
#define PORT_PCR_MUX_MASK                        (0x700U)
#define PORT_PCR_MUX_SHIFT                       (8U)
#define PORT_PCR_MUX(x)                          (((uint32_t)(((uint32_t)(x)) << PORT_PCR_MUX_SHIFT)) & PORT_PCR_MUX_MASK)
#define PORT_PCR_LK_MASK                         (0x8000U)
#define PORT_PCR_LK_SHIFT                        (15U)
#define PORT_PCR_LK(x)                           (((uint32_t)(((uint32_t)(x)) << PORT_PCR_LK_SHIFT)) & PORT_PCR_LK_MASK)
#define PORT_PCR_IRQC_MASK                       (0xF0000U)
#define PORT_PCR_IRQC_SHIFT                      (16U)
#define PORT_PCR_IRQC(x)                         (((uint32_t)(((uint32_t)(x)) << PORT_PCR_IRQC_SHIFT)) & PORT_PCR_IRQC_MASK)
#define PORT_PCR_ISF_MASK                        (0x1000000U)
#define PORT_PCR_ISF_SHIFT                       (24U)
#define PORT_PCR_ISF(x)                          (((uint32_t)(((uint32_t)(x)) << PORT_PCR_ISF_SHIFT)) & PORT_PCR_ISF_MASK)

/* The count of PORT_PCR */
#define PORT_PCR_COUNT                           (32U)

/*! @name GPCLR - Global Pin Control Low Register */
#define PORT_GPCLR_GPWD_MASK                     (0xFFFFU)
#define PORT_GPCLR_GPWD_SHIFT                    (0U)
#define PORT_GPCLR_GPWD(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GPCLR_GPWD_SHIFT)) & PORT_GPCLR_GPWD_MASK)
#define PORT_GPCLR_GPWE_MASK                     (0xFFFF0000U)
#define PORT_GPCLR_GPWE_SHIFT                    (16U)
#define PORT_GPCLR_GPWE(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GPCLR_GPWE_SHIFT)) & PORT_GPCLR_GPWE_MASK)

/*! @name GPCHR - Global Pin Control High Register */
#define PORT_GPCHR_GPWD_MASK                     (0xFFFFU)
#define PORT_GPCHR_GPWD_SHIFT                    (0U)
#define PORT_GPCHR_GPWD(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GPCHR_GPWD_SHIFT)) & PORT_GPCHR_GPWD_MASK)
#define PORT_GPCHR_GPWE_MASK                     (0xFFFF0000U)
#define PORT_GPCHR_GPWE_SHIFT                    (16U)
#define PORT_GPCHR_GPWE(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GPCHR_GPWE_SHIFT)) & PORT_GPCHR_GPWE_MASK)

/*! @name GICLR - Global Interrupt Control Low Register */
#define PORT_GICLR_GIWE_MASK                     (0xFFFFU)
#define PORT_GICLR_GIWE_SHIFT                    (0U)
#define PORT_GICLR_GIWE(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GICLR_GIWE_SHIFT)) & PORT_GICLR_GIWE_MASK)
#define PORT_GICLR_GIWD_MASK                     (0xFFFF0000U)
#define PORT_GICLR_GIWD_SHIFT                    (16U)
#define PORT_GICLR_GIWD(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GICLR_GIWD_SHIFT)) & PORT_GICLR_GIWD_MASK)

/*! @name GICHR - Global Interrupt Control High Register */
#define PORT_GICHR_GIWE_MASK                     (0xFFFFU)
#define PORT_GICHR_GIWE_SHIFT                    (0U)
#define PORT_GICHR_GIWE(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GICHR_GIWE_SHIFT)) & PORT_GICHR_GIWE_MASK)
#define PORT_GICHR_GIWD_MASK                     (0xFFFF0000U)
#define PORT_GICHR_GIWD_SHIFT                    (16U)
#define PORT_GICHR_GIWD(x)                       (((uint32_t)(((uint32_t)(x)) << PORT_GICHR_GIWD_SHIFT)) & PORT_GICHR_GIWD_MASK)

/*! @name ISFR - Interrupt Status Flag Register */
#define PORT_ISFR_ISF_MASK                       (0xFFFFFFFFU)
#define PORT_ISFR_ISF_SHIFT                      (0U)
#define PORT_ISFR_ISF(x)                         (((uint32_t)(((uint32_t)(x)) << PORT_ISFR_ISF_SHIFT)) & PORT_ISFR_ISF_MASK)

/*! @name DFER - Digital Filter Enable Register */
#define PORT_DFER_DFE_MASK                       (0xFFFFFFFFU)
#define PORT_DFER_DFE_SHIFT                      (0U)
#define PORT_DFER_DFE(x)                         (((uint32_t)(((uint32_t)(x)) << PORT_DFER_DFE_SHIFT)) & PORT_DFER_DFE_MASK)

/*! @name DFCR - Digital Filter Clock Register */
#define PORT_DFCR_CS_MASK                        (0x1U)
#define PORT_DFCR_CS_SHIFT                       (0U)
#define PORT_DFCR_CS(x)                          (((uint32_t)(((uint32_t)(x)) << PORT_DFCR_CS_SHIFT)) & PORT_DFCR_CS_MASK)

/*! @name DFWR - Digital Filter Width Register */
#define PORT_DFWR_FILT_MASK                      (0x1FU)
#define PORT_DFWR_FILT_SHIFT                     (0U)
#define PORT_DFWR_FILT(x)                        (((uint32_t)(((uint32_t)(x)) << PORT_DFWR_FILT_SHIFT)) & PORT_DFWR_FILT_MASK)


/*!
 * @}
 */ /* end of group PORT_Register_Masks */


/* PORT - Peripheral instance base addresses */
/** Peripheral PORTA base address */
#define PORTA_BASE                               (0x40046000u)
/** Peripheral PORTA base pointer */
#define PORTA                                    ((PORT_Type *)PORTA_BASE)
/** Peripheral PORTB base address */
#define PORTB_BASE                               (0x40047000u)
/** Peripheral PORTB base pointer */
#define PORTB                                    ((PORT_Type *)PORTB_BASE)
/** Peripheral PORTC base address */
#define PORTC_BASE                               (0x40048000u)
/** Peripheral PORTC base pointer */
#define PORTC                                    ((PORT_Type *)PORTC_BASE)
/** Peripheral PORTD base address */
#define PORTD_BASE                               (0x40049000u)
/** Peripheral PORTD base pointer */
#define PORTD                                    ((PORT_Type *)PORTD_BASE)
/** Peripheral PORTE base address */
#define PORTE_BASE                               (0x41037000u)
/** Peripheral PORTE base pointer */
#define PORTE                                    ((PORT_Type *)PORTE_BASE)
/** Array initializer of PORT peripheral base addresses */
#define PORT_BASE_ADDRS                          { PORTA_BASE, PORTB_BASE, PORTC_BASE, PORTD_BASE, PORTE_BASE }
/** Array initializer of PORT peripheral base pointers */
#define PORT_BASE_PTRS                           { PORTA, PORTB, PORTC, PORTD, PORTE }
/** Interrupt vectors for the PORT peripheral type */
#define PORT_IRQS                                { PORTA_IRQn, PORTB_IRQn, PORTC_IRQn, PORTD_IRQn, PORTE_IRQn }

/*!
 * @}
 */ /* end of group PORT_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- RSIM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RSIM_Peripheral_Access_Layer RSIM Peripheral Access Layer
 * @{
 */

/** RSIM - Register Layout Typedef */
typedef struct {
  __IO uint32_t CONTROL;                           /**< Radio System Control, offset: 0x0 */
       uint8_t RESERVED_0[12];
  __IO uint32_t MISC;                              /**< Radio Miscellaneous, offset: 0x10 */
  __IO uint32_t POWER;                             /**< RSIM Power Control, offset: 0x14 */
  __IO uint32_t SW_CONFIG;                         /**< Radio Software Configuration, offset: 0x18 */
       uint8_t RESERVED_1[228];
  __I  uint32_t DSM_TIMER;                         /**< Deep Sleep Timer, offset: 0x100 */
  __IO uint32_t DSM_CONTROL;                       /**< Deep Sleep Timer Control, offset: 0x104 */
  __IO uint32_t DSM_WAKEUP;                        /**< Deep Sleep Wakeup Sequence, offset: 0x108 */
  __I  uint32_t WOR_DURATION;                      /**< WOR Deep Sleep Duration, offset: 0x10C */
  __IO uint32_t WOR_WAKE;                          /**< WOR Deep Sleep Wake Time, offset: 0x110 */
       uint8_t RESERVED_2[8];
  __IO uint32_t MAN_SLEEP;                         /**< MAN Deep Sleep Time, offset: 0x11C */
  __IO uint32_t MAN_WAKE;                          /**< MAN Deep Sleep Wake Time, offset: 0x120 */
  __IO uint32_t RF_OSC_CTRL;                       /**< Radio Oscillator Control, offset: 0x124 */
  __IO uint32_t ANA_TEST;                          /**< Radio Analog Test Registers, offset: 0x128 */
  __IO uint32_t ANA_TRIM;                          /**< Radio Analog Trim Registers, offset: 0x12C */
} RSIM_Type;

/* ----------------------------------------------------------------------------
   -- RSIM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RSIM_Register_Masks RSIM Register Masks
 * @{
 */

/*! @name CONTROL - Radio System Control */
#define RSIM_CONTROL_BLE_RF_POWER_REQ_EN_MASK    (0x1U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_EN_SHIFT   (0U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_EN(x)      (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_BLE_RF_POWER_REQ_EN_SHIFT)) & RSIM_CONTROL_BLE_RF_POWER_REQ_EN_MASK)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_STAT_MASK  (0x2U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_STAT_SHIFT (1U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_STAT(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_BLE_RF_POWER_REQ_STAT_SHIFT)) & RSIM_CONTROL_BLE_RF_POWER_REQ_STAT_MASK)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_INT_EN_MASK (0x10U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_INT_EN_SHIFT (4U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_INT_EN(x)  (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_BLE_RF_POWER_REQ_INT_EN_SHIFT)) & RSIM_CONTROL_BLE_RF_POWER_REQ_INT_EN_MASK)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_INT_MASK   (0x20U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_INT_SHIFT  (5U)
#define RSIM_CONTROL_BLE_RF_POWER_REQ_INT(x)     (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_BLE_RF_POWER_REQ_INT_SHIFT)) & RSIM_CONTROL_BLE_RF_POWER_REQ_INT_MASK)
#define RSIM_CONTROL_RF_OSC_EN_MASK              (0x100U)
#define RSIM_CONTROL_RF_OSC_EN_SHIFT             (8U)
#define RSIM_CONTROL_RF_OSC_EN(x)                (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RF_OSC_EN_SHIFT)) & RSIM_CONTROL_RF_OSC_EN_MASK)
#define RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_EN_MASK (0x1000U)
#define RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_EN_SHIFT (12U)
#define RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_EN_SHIFT)) & RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_EN_MASK)
#define RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_MASK (0x2000U)
#define RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_SHIFT (13U)
#define RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD(x) (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_SHIFT)) & RSIM_CONTROL_RADIO_GASKET_BYPASS_OVRD_MASK)
#define RSIM_CONTROL_IPP_OBE_BLE_EARLY_WARNING_MASK (0x4000U)
#define RSIM_CONTROL_IPP_OBE_BLE_EARLY_WARNING_SHIFT (14U)
#define RSIM_CONTROL_IPP_OBE_BLE_EARLY_WARNING(x) (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_IPP_OBE_BLE_EARLY_WARNING_SHIFT)) & RSIM_CONTROL_IPP_OBE_BLE_EARLY_WARNING_MASK)
#define RSIM_CONTROL_IPP_OBE_RF_ACTIVE_MASK      (0x8000U)
#define RSIM_CONTROL_IPP_OBE_RF_ACTIVE_SHIFT     (15U)
#define RSIM_CONTROL_IPP_OBE_RF_ACTIVE(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_IPP_OBE_RF_ACTIVE_SHIFT)) & RSIM_CONTROL_IPP_OBE_RF_ACTIVE_MASK)
#define RSIM_CONTROL_IPP_OBE_RF_OSC_EN_MASK      (0x10000U)
#define RSIM_CONTROL_IPP_OBE_RF_OSC_EN_SHIFT     (16U)
#define RSIM_CONTROL_IPP_OBE_RF_OSC_EN(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_IPP_OBE_RF_OSC_EN_SHIFT)) & RSIM_CONTROL_IPP_OBE_RF_OSC_EN_MASK)
#define RSIM_CONTROL_IPP_OBE_RF_STATUS_MASK      (0x40000U)
#define RSIM_CONTROL_IPP_OBE_RF_STATUS_SHIFT     (18U)
#define RSIM_CONTROL_IPP_OBE_RF_STATUS(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_IPP_OBE_RF_STATUS_SHIFT)) & RSIM_CONTROL_IPP_OBE_RF_STATUS_MASK)
#define RSIM_CONTROL_IPP_OBE_RF_PRIORITY_MASK    (0x80000U)
#define RSIM_CONTROL_IPP_OBE_RF_PRIORITY_SHIFT   (19U)
#define RSIM_CONTROL_IPP_OBE_RF_PRIORITY(x)      (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_IPP_OBE_RF_PRIORITY_SHIFT)) & RSIM_CONTROL_IPP_OBE_RF_PRIORITY_MASK)
#define RSIM_CONTROL_BLE_DSM_EXIT_MASK           (0x100000U)
#define RSIM_CONTROL_BLE_DSM_EXIT_SHIFT          (20U)
#define RSIM_CONTROL_BLE_DSM_EXIT(x)             (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_BLE_DSM_EXIT_SHIFT)) & RSIM_CONTROL_BLE_DSM_EXIT_MASK)
#define RSIM_CONTROL_WOR_DSM_EXIT_MASK           (0x200000U)
#define RSIM_CONTROL_WOR_DSM_EXIT_SHIFT          (21U)
#define RSIM_CONTROL_WOR_DSM_EXIT(x)             (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_WOR_DSM_EXIT_SHIFT)) & RSIM_CONTROL_WOR_DSM_EXIT_MASK)
#define RSIM_CONTROL_RF_OSC_READY_MASK           (0x1000000U)
#define RSIM_CONTROL_RF_OSC_READY_SHIFT          (24U)
#define RSIM_CONTROL_RF_OSC_READY(x)             (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RF_OSC_READY_SHIFT)) & RSIM_CONTROL_RF_OSC_READY_MASK)
#define RSIM_CONTROL_RF_OSC_READY_OVRD_EN_MASK   (0x2000000U)
#define RSIM_CONTROL_RF_OSC_READY_OVRD_EN_SHIFT  (25U)
#define RSIM_CONTROL_RF_OSC_READY_OVRD_EN(x)     (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RF_OSC_READY_OVRD_EN_SHIFT)) & RSIM_CONTROL_RF_OSC_READY_OVRD_EN_MASK)
#define RSIM_CONTROL_RF_OSC_READY_OVRD_MASK      (0x4000000U)
#define RSIM_CONTROL_RF_OSC_READY_OVRD_SHIFT     (26U)
#define RSIM_CONTROL_RF_OSC_READY_OVRD(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RF_OSC_READY_OVRD_SHIFT)) & RSIM_CONTROL_RF_OSC_READY_OVRD_MASK)
#define RSIM_CONTROL_RSIM_CGC_BLE_EN_MASK        (0x8000000U)
#define RSIM_CONTROL_RSIM_CGC_BLE_EN_SHIFT       (27U)
#define RSIM_CONTROL_RSIM_CGC_BLE_EN(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RSIM_CGC_BLE_EN_SHIFT)) & RSIM_CONTROL_RSIM_CGC_BLE_EN_MASK)
#define RSIM_CONTROL_RSIM_CGC_XCVR_EN_MASK       (0x10000000U)
#define RSIM_CONTROL_RSIM_CGC_XCVR_EN_SHIFT      (28U)
#define RSIM_CONTROL_RSIM_CGC_XCVR_EN(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RSIM_CGC_XCVR_EN_SHIFT)) & RSIM_CONTROL_RSIM_CGC_XCVR_EN_MASK)
#define RSIM_CONTROL_RSIM_CGC_ZIG_EN_MASK        (0x20000000U)
#define RSIM_CONTROL_RSIM_CGC_ZIG_EN_SHIFT       (29U)
#define RSIM_CONTROL_RSIM_CGC_ZIG_EN(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RSIM_CGC_ZIG_EN_SHIFT)) & RSIM_CONTROL_RSIM_CGC_ZIG_EN_MASK)
#define RSIM_CONTROL_RSIM_CGC_GEN_EN_MASK        (0x80000000U)
#define RSIM_CONTROL_RSIM_CGC_GEN_EN_SHIFT       (31U)
#define RSIM_CONTROL_RSIM_CGC_GEN_EN(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_CONTROL_RSIM_CGC_GEN_EN_SHIFT)) & RSIM_CONTROL_RSIM_CGC_GEN_EN_MASK)

/*! @name MISC - Radio Miscellaneous */
#define RSIM_MISC_RADIO_VERSION_MASK             (0xFF000000U)
#define RSIM_MISC_RADIO_VERSION_SHIFT            (24U)
#define RSIM_MISC_RADIO_VERSION(x)               (((uint32_t)(((uint32_t)(x)) << RSIM_MISC_RADIO_VERSION_SHIFT)) & RSIM_MISC_RADIO_VERSION_MASK)

/*! @name POWER - RSIM Power Control */
#define RSIM_POWER_RADIO_STOP_MODE_STAT_MASK     (0x7U)
#define RSIM_POWER_RADIO_STOP_MODE_STAT_SHIFT    (0U)
#define RSIM_POWER_RADIO_STOP_MODE_STAT(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RADIO_STOP_MODE_STAT_SHIFT)) & RSIM_POWER_RADIO_STOP_MODE_STAT_MASK)
#define RSIM_POWER_SPM_STOP_ACK_STAT_MASK        (0x8U)
#define RSIM_POWER_SPM_STOP_ACK_STAT_SHIFT       (3U)
#define RSIM_POWER_SPM_STOP_ACK_STAT(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_SPM_STOP_ACK_STAT_SHIFT)) & RSIM_POWER_SPM_STOP_ACK_STAT_MASK)
#define RSIM_POWER_RADIO_STOP_MODE_OVRD_MASK     (0x70U)
#define RSIM_POWER_RADIO_STOP_MODE_OVRD_SHIFT    (4U)
#define RSIM_POWER_RADIO_STOP_MODE_OVRD(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RADIO_STOP_MODE_OVRD_SHIFT)) & RSIM_POWER_RADIO_STOP_MODE_OVRD_MASK)
#define RSIM_POWER_RADIO_STOP_MODE_OVRD_EN_MASK  (0x80U)
#define RSIM_POWER_RADIO_STOP_MODE_OVRD_EN_SHIFT (7U)
#define RSIM_POWER_RADIO_STOP_MODE_OVRD_EN(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RADIO_STOP_MODE_OVRD_EN_SHIFT)) & RSIM_POWER_RADIO_STOP_MODE_OVRD_EN_MASK)
#define RSIM_POWER_RADIO_STOP_ACK_STAT_MASK      (0x100U)
#define RSIM_POWER_RADIO_STOP_ACK_STAT_SHIFT     (8U)
#define RSIM_POWER_RADIO_STOP_ACK_STAT(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RADIO_STOP_ACK_STAT_SHIFT)) & RSIM_POWER_RADIO_STOP_ACK_STAT_MASK)
#define RSIM_POWER_RADIO_STOP_REQ_STAT_MASK      (0x200U)
#define RSIM_POWER_RADIO_STOP_REQ_STAT_SHIFT     (9U)
#define RSIM_POWER_RADIO_STOP_REQ_STAT(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RADIO_STOP_REQ_STAT_SHIFT)) & RSIM_POWER_RADIO_STOP_REQ_STAT_MASK)
#define RSIM_POWER_RSIM_STOP_REQ_OVRD_MASK       (0x400U)
#define RSIM_POWER_RSIM_STOP_REQ_OVRD_SHIFT      (10U)
#define RSIM_POWER_RSIM_STOP_REQ_OVRD(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_STOP_REQ_OVRD_SHIFT)) & RSIM_POWER_RSIM_STOP_REQ_OVRD_MASK)
#define RSIM_POWER_RSIM_STOP_REQ_OVRD_EN_MASK    (0x800U)
#define RSIM_POWER_RSIM_STOP_REQ_OVRD_EN_SHIFT   (11U)
#define RSIM_POWER_RSIM_STOP_REQ_OVRD_EN(x)      (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_STOP_REQ_OVRD_EN_SHIFT)) & RSIM_POWER_RSIM_STOP_REQ_OVRD_EN_MASK)
#define RSIM_POWER_RF_OSC_EN_OVRD_MASK           (0x1000U)
#define RSIM_POWER_RF_OSC_EN_OVRD_SHIFT          (12U)
#define RSIM_POWER_RF_OSC_EN_OVRD(x)             (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RF_OSC_EN_OVRD_SHIFT)) & RSIM_POWER_RF_OSC_EN_OVRD_MASK)
#define RSIM_POWER_RF_OSC_EN_OVRD_EN_MASK        (0x2000U)
#define RSIM_POWER_RF_OSC_EN_OVRD_EN_SHIFT       (13U)
#define RSIM_POWER_RF_OSC_EN_OVRD_EN(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RF_OSC_EN_OVRD_EN_SHIFT)) & RSIM_POWER_RF_OSC_EN_OVRD_EN_MASK)
#define RSIM_POWER_RF_POWER_EN_OVRD_MASK         (0x4000U)
#define RSIM_POWER_RF_POWER_EN_OVRD_SHIFT        (14U)
#define RSIM_POWER_RF_POWER_EN_OVRD(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RF_POWER_EN_OVRD_SHIFT)) & RSIM_POWER_RF_POWER_EN_OVRD_MASK)
#define RSIM_POWER_RF_POWER_EN_OVRD_EN_MASK      (0x8000U)
#define RSIM_POWER_RF_POWER_EN_OVRD_EN_SHIFT     (15U)
#define RSIM_POWER_RF_POWER_EN_OVRD_EN(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RF_POWER_EN_OVRD_EN_SHIFT)) & RSIM_POWER_RF_POWER_EN_OVRD_EN_MASK)
#define RSIM_POWER_SPM_ISO_STAT_MASK             (0x10000U)
#define RSIM_POWER_SPM_ISO_STAT_SHIFT            (16U)
#define RSIM_POWER_SPM_ISO_STAT(x)               (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_SPM_ISO_STAT_SHIFT)) & RSIM_POWER_SPM_ISO_STAT_MASK)
#define RSIM_POWER_RADIO_ISO_STAT_MASK           (0x20000U)
#define RSIM_POWER_RADIO_ISO_STAT_SHIFT          (17U)
#define RSIM_POWER_RADIO_ISO_STAT(x)             (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RADIO_ISO_STAT_SHIFT)) & RSIM_POWER_RADIO_ISO_STAT_MASK)
#define RSIM_POWER_RSIM_ISO_OVRD_MASK            (0x40000U)
#define RSIM_POWER_RSIM_ISO_OVRD_SHIFT           (18U)
#define RSIM_POWER_RSIM_ISO_OVRD(x)              (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_ISO_OVRD_SHIFT)) & RSIM_POWER_RSIM_ISO_OVRD_MASK)
#define RSIM_POWER_RSIM_ISO_OVRD_EN_MASK         (0x80000U)
#define RSIM_POWER_RSIM_ISO_OVRD_EN_SHIFT        (19U)
#define RSIM_POWER_RSIM_ISO_OVRD_EN(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_ISO_OVRD_EN_SHIFT)) & RSIM_POWER_RSIM_ISO_OVRD_EN_MASK)
#define RSIM_POWER_SPM_RUN_ACK_STAT_MASK         (0x100000U)
#define RSIM_POWER_SPM_RUN_ACK_STAT_SHIFT        (20U)
#define RSIM_POWER_SPM_RUN_ACK_STAT(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_SPM_RUN_ACK_STAT_SHIFT)) & RSIM_POWER_SPM_RUN_ACK_STAT_MASK)
#define RSIM_POWER_RADIO_RUN_REQ_STAT_MASK       (0x200000U)
#define RSIM_POWER_RADIO_RUN_REQ_STAT_SHIFT      (21U)
#define RSIM_POWER_RADIO_RUN_REQ_STAT(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RADIO_RUN_REQ_STAT_SHIFT)) & RSIM_POWER_RADIO_RUN_REQ_STAT_MASK)
#define RSIM_POWER_RSIM_RUN_REQ_OVRD_MASK        (0x400000U)
#define RSIM_POWER_RSIM_RUN_REQ_OVRD_SHIFT       (22U)
#define RSIM_POWER_RSIM_RUN_REQ_OVRD(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_RUN_REQ_OVRD_SHIFT)) & RSIM_POWER_RSIM_RUN_REQ_OVRD_MASK)
#define RSIM_POWER_RSIM_RUN_REQ_OVRD_EN_MASK     (0x800000U)
#define RSIM_POWER_RSIM_RUN_REQ_OVRD_EN_SHIFT    (23U)
#define RSIM_POWER_RSIM_RUN_REQ_OVRD_EN(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_RUN_REQ_OVRD_EN_SHIFT)) & RSIM_POWER_RSIM_RUN_REQ_OVRD_EN_MASK)
#define RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_MASK    (0x1000000U)
#define RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_SHIFT   (24U)
#define RSIM_POWER_SPM_STOP_REQ_ACK_OVRD(x)      (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_SHIFT)) & RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_MASK)
#define RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_EN_MASK (0x2000000U)
#define RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_EN_SHIFT (25U)
#define RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_EN(x)   (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_EN_SHIFT)) & RSIM_POWER_SPM_STOP_REQ_ACK_OVRD_EN_MASK)
#define RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_MASK     (0x4000000U)
#define RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_SHIFT    (26U)
#define RSIM_POWER_SPM_RUN_REQ_ACK_OVRD(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_SHIFT)) & RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_MASK)
#define RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_EN_MASK  (0x8000000U)
#define RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_EN_SHIFT (27U)
#define RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_EN(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_EN_SHIFT)) & RSIM_POWER_SPM_RUN_REQ_ACK_OVRD_EN_MASK)
#define RSIM_POWER_RSIM_STOP_MODE_MASK           (0x70000000U)
#define RSIM_POWER_RSIM_STOP_MODE_SHIFT          (28U)
#define RSIM_POWER_RSIM_STOP_MODE(x)             (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_STOP_MODE_SHIFT)) & RSIM_POWER_RSIM_STOP_MODE_MASK)
#define RSIM_POWER_RSIM_RUN_REQUEST_MASK         (0x80000000U)
#define RSIM_POWER_RSIM_RUN_REQUEST_SHIFT        (31U)
#define RSIM_POWER_RSIM_RUN_REQUEST(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_POWER_RSIM_RUN_REQUEST_SHIFT)) & RSIM_POWER_RSIM_RUN_REQUEST_MASK)

/*! @name SW_CONFIG - Radio Software Configuration */
#define RSIM_SW_CONFIG_RADIO_CONFIGURED_POR_RESET_MASK (0x1U)
#define RSIM_SW_CONFIG_RADIO_CONFIGURED_POR_RESET_SHIFT (0U)
#define RSIM_SW_CONFIG_RADIO_CONFIGURED_POR_RESET(x) (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RADIO_CONFIGURED_POR_RESET_SHIFT)) & RSIM_SW_CONFIG_RADIO_CONFIGURED_POR_RESET_MASK)
#define RSIM_SW_CONFIG_RADIO_CONFIGURED_SYS_RESET_MASK (0x2U)
#define RSIM_SW_CONFIG_RADIO_CONFIGURED_SYS_RESET_SHIFT (1U)
#define RSIM_SW_CONFIG_RADIO_CONFIGURED_SYS_RESET(x) (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RADIO_CONFIGURED_SYS_RESET_SHIFT)) & RSIM_SW_CONFIG_RADIO_CONFIGURED_SYS_RESET_MASK)
#define RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_MASK  (0x10U)
#define RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_SHIFT (4U)
#define RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_SHIFT)) & RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_MASK)
#define RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_EN_MASK (0x20U)
#define RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_EN_SHIFT (5U)
#define RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_EN_SHIFT)) & RSIM_SW_CONFIG_RSIM_RF_ACTIVE_OVRD_EN_MASK)
#define RSIM_SW_CONFIG_RADIO_POR_BIT_MASK        (0x100U)
#define RSIM_SW_CONFIG_RADIO_POR_BIT_SHIFT       (8U)
#define RSIM_SW_CONFIG_RADIO_POR_BIT(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RADIO_POR_BIT_SHIFT)) & RSIM_SW_CONFIG_RADIO_POR_BIT_MASK)
#define RSIM_SW_CONFIG_RSIM_RADIO_ISO_POR_OVRD_MASK (0x1000U)
#define RSIM_SW_CONFIG_RSIM_RADIO_ISO_POR_OVRD_SHIFT (12U)
#define RSIM_SW_CONFIG_RSIM_RADIO_ISO_POR_OVRD(x) (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RSIM_RADIO_ISO_POR_OVRD_SHIFT)) & RSIM_SW_CONFIG_RSIM_RADIO_ISO_POR_OVRD_MASK)
#define RSIM_SW_CONFIG_RADIO_RESET_BIT_MASK      (0x10000U)
#define RSIM_SW_CONFIG_RADIO_RESET_BIT_SHIFT     (16U)
#define RSIM_SW_CONFIG_RADIO_RESET_BIT(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RADIO_RESET_BIT_SHIFT)) & RSIM_SW_CONFIG_RADIO_RESET_BIT_MASK)
#define RSIM_SW_CONFIG_WAKEUP_INTERRUPT_SOURCE_MASK (0x300000U)
#define RSIM_SW_CONFIG_WAKEUP_INTERRUPT_SOURCE_SHIFT (20U)
#define RSIM_SW_CONFIG_WAKEUP_INTERRUPT_SOURCE(x) (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_WAKEUP_INTERRUPT_SOURCE_SHIFT)) & RSIM_SW_CONFIG_WAKEUP_INTERRUPT_SOURCE_MASK)
#define RSIM_SW_CONFIG_RADIO0_INTERRUPT_EN_MASK  (0x1000000U)
#define RSIM_SW_CONFIG_RADIO0_INTERRUPT_EN_SHIFT (24U)
#define RSIM_SW_CONFIG_RADIO0_INTERRUPT_EN(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RADIO0_INTERRUPT_EN_SHIFT)) & RSIM_SW_CONFIG_RADIO0_INTERRUPT_EN_MASK)
#define RSIM_SW_CONFIG_RADIO1_INTERRUPT_EN_MASK  (0x2000000U)
#define RSIM_SW_CONFIG_RADIO1_INTERRUPT_EN_SHIFT (25U)
#define RSIM_SW_CONFIG_RADIO1_INTERRUPT_EN(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_RADIO1_INTERRUPT_EN_SHIFT)) & RSIM_SW_CONFIG_RADIO1_INTERRUPT_EN_MASK)
#define RSIM_SW_CONFIG_BLOCK_SOC_RESETS_MASK     (0x10000000U)
#define RSIM_SW_CONFIG_BLOCK_SOC_RESETS_SHIFT    (28U)
#define RSIM_SW_CONFIG_BLOCK_SOC_RESETS(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_BLOCK_SOC_RESETS_SHIFT)) & RSIM_SW_CONFIG_BLOCK_SOC_RESETS_MASK)
#define RSIM_SW_CONFIG_BLOCK_RADIO_OUTPUTS_MASK  (0x20000000U)
#define RSIM_SW_CONFIG_BLOCK_RADIO_OUTPUTS_SHIFT (29U)
#define RSIM_SW_CONFIG_BLOCK_RADIO_OUTPUTS(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_BLOCK_RADIO_OUTPUTS_SHIFT)) & RSIM_SW_CONFIG_BLOCK_RADIO_OUTPUTS_MASK)
#define RSIM_SW_CONFIG_ALLOW_DFT_RESETS_MASK     (0x40000000U)
#define RSIM_SW_CONFIG_ALLOW_DFT_RESETS_SHIFT    (30U)
#define RSIM_SW_CONFIG_ALLOW_DFT_RESETS(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_ALLOW_DFT_RESETS_SHIFT)) & RSIM_SW_CONFIG_ALLOW_DFT_RESETS_MASK)
#define RSIM_SW_CONFIG_BLOCK_EXT_OSC_PWR_REQ_MASK (0x80000000U)
#define RSIM_SW_CONFIG_BLOCK_EXT_OSC_PWR_REQ_SHIFT (31U)
#define RSIM_SW_CONFIG_BLOCK_EXT_OSC_PWR_REQ(x)  (((uint32_t)(((uint32_t)(x)) << RSIM_SW_CONFIG_BLOCK_EXT_OSC_PWR_REQ_SHIFT)) & RSIM_SW_CONFIG_BLOCK_EXT_OSC_PWR_REQ_MASK)

/*! @name DSM_TIMER - Deep Sleep Timer */
#define RSIM_DSM_TIMER_DSM_TIMER_MASK            (0xFFFFFFU)
#define RSIM_DSM_TIMER_DSM_TIMER_SHIFT           (0U)
#define RSIM_DSM_TIMER_DSM_TIMER(x)              (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_TIMER_DSM_TIMER_SHIFT)) & RSIM_DSM_TIMER_DSM_TIMER_MASK)

/*! @name DSM_CONTROL - Deep Sleep Timer Control */
#define RSIM_DSM_CONTROL_DSM_WOR_READY_MASK      (0x1U)
#define RSIM_DSM_CONTROL_DSM_WOR_READY_SHIFT     (0U)
#define RSIM_DSM_CONTROL_DSM_WOR_READY(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_DSM_WOR_READY_SHIFT)) & RSIM_DSM_CONTROL_DSM_WOR_READY_MASK)
#define RSIM_DSM_CONTROL_WOR_DEEP_SLEEP_STATUS_MASK (0x2U)
#define RSIM_DSM_CONTROL_WOR_DEEP_SLEEP_STATUS_SHIFT (1U)
#define RSIM_DSM_CONTROL_WOR_DEEP_SLEEP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WOR_DEEP_SLEEP_STATUS_SHIFT)) & RSIM_DSM_CONTROL_WOR_DEEP_SLEEP_STATUS_MASK)
#define RSIM_DSM_CONTROL_DSM_WOR_FINISHED_MASK   (0x4U)
#define RSIM_DSM_CONTROL_DSM_WOR_FINISHED_SHIFT  (2U)
#define RSIM_DSM_CONTROL_DSM_WOR_FINISHED(x)     (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_DSM_WOR_FINISHED_SHIFT)) & RSIM_DSM_CONTROL_DSM_WOR_FINISHED_MASK)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQUEST_EN_MASK (0x8U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQUEST_EN_SHIFT (3U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQUEST_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WOR_WAKEUP_REQUEST_EN_SHIFT)) & RSIM_DSM_CONTROL_WOR_WAKEUP_REQUEST_EN_MASK)
#define RSIM_DSM_CONTROL_WOR_SLEEP_REQUEST_MASK  (0x10U)
#define RSIM_DSM_CONTROL_WOR_SLEEP_REQUEST_SHIFT (4U)
#define RSIM_DSM_CONTROL_WOR_SLEEP_REQUEST(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WOR_SLEEP_REQUEST_SHIFT)) & RSIM_DSM_CONTROL_WOR_SLEEP_REQUEST_MASK)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_MASK     (0x20U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_SHIFT    (5U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_SHIFT)) & RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_MASK)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_INTERRUPT_EN_MASK (0x40U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_INTERRUPT_EN_SHIFT (6U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_INTERRUPT_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WOR_WAKEUP_INTERRUPT_EN_SHIFT)) & RSIM_DSM_CONTROL_WOR_WAKEUP_INTERRUPT_EN_MASK)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_INT_MASK (0x80U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_INT_SHIFT (7U)
#define RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_INT(x)   (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_INT_SHIFT)) & RSIM_DSM_CONTROL_WOR_WAKEUP_REQ_INT_MASK)
#define RSIM_DSM_CONTROL_DSM_MAN_READY_MASK      (0x100U)
#define RSIM_DSM_CONTROL_DSM_MAN_READY_SHIFT     (8U)
#define RSIM_DSM_CONTROL_DSM_MAN_READY(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_DSM_MAN_READY_SHIFT)) & RSIM_DSM_CONTROL_DSM_MAN_READY_MASK)
#define RSIM_DSM_CONTROL_MAN_DEEP_SLEEP_STATUS_MASK (0x200U)
#define RSIM_DSM_CONTROL_MAN_DEEP_SLEEP_STATUS_SHIFT (9U)
#define RSIM_DSM_CONTROL_MAN_DEEP_SLEEP_STATUS(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_MAN_DEEP_SLEEP_STATUS_SHIFT)) & RSIM_DSM_CONTROL_MAN_DEEP_SLEEP_STATUS_MASK)
#define RSIM_DSM_CONTROL_DSM_MAN_FINISHED_MASK   (0x400U)
#define RSIM_DSM_CONTROL_DSM_MAN_FINISHED_SHIFT  (10U)
#define RSIM_DSM_CONTROL_DSM_MAN_FINISHED(x)     (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_DSM_MAN_FINISHED_SHIFT)) & RSIM_DSM_CONTROL_DSM_MAN_FINISHED_MASK)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQUEST_EN_MASK (0x800U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQUEST_EN_SHIFT (11U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQUEST_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_MAN_WAKEUP_REQUEST_EN_SHIFT)) & RSIM_DSM_CONTROL_MAN_WAKEUP_REQUEST_EN_MASK)
#define RSIM_DSM_CONTROL_MAN_SLEEP_REQUEST_MASK  (0x1000U)
#define RSIM_DSM_CONTROL_MAN_SLEEP_REQUEST_SHIFT (12U)
#define RSIM_DSM_CONTROL_MAN_SLEEP_REQUEST(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_MAN_SLEEP_REQUEST_SHIFT)) & RSIM_DSM_CONTROL_MAN_SLEEP_REQUEST_MASK)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_MASK     (0x2000U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_SHIFT    (13U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_SHIFT)) & RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_MASK)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_INTERRUPT_EN_MASK (0x4000U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_INTERRUPT_EN_SHIFT (14U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_INTERRUPT_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_MAN_WAKEUP_INTERRUPT_EN_SHIFT)) & RSIM_DSM_CONTROL_MAN_WAKEUP_INTERRUPT_EN_MASK)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_INT_MASK (0x8000U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_INT_SHIFT (15U)
#define RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_INT(x)   (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_INT_SHIFT)) & RSIM_DSM_CONTROL_MAN_WAKEUP_REQ_INT_MASK)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_1_MASK     (0x10000U)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_1_SHIFT    (16U)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_1(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WIFI_COEXIST_1_SHIFT)) & RSIM_DSM_CONTROL_WIFI_COEXIST_1_MASK)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_2_MASK     (0x20000U)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_2_SHIFT    (17U)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_2(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WIFI_COEXIST_2_SHIFT)) & RSIM_DSM_CONTROL_WIFI_COEXIST_2_MASK)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_3_MASK     (0x40000U)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_3_SHIFT    (18U)
#define RSIM_DSM_CONTROL_WIFI_COEXIST_3(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_WIFI_COEXIST_3_SHIFT)) & RSIM_DSM_CONTROL_WIFI_COEXIST_3_MASK)
#define RSIM_DSM_CONTROL_RF_ACTIVE_ENDS_WITH_TSM_MASK (0x100000U)
#define RSIM_DSM_CONTROL_RF_ACTIVE_ENDS_WITH_TSM_SHIFT (20U)
#define RSIM_DSM_CONTROL_RF_ACTIVE_ENDS_WITH_TSM(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_RF_ACTIVE_ENDS_WITH_TSM_SHIFT)) & RSIM_DSM_CONTROL_RF_ACTIVE_ENDS_WITH_TSM_MASK)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_ENDS_WITH_TSM_MASK (0x200000U)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_ENDS_WITH_TSM_SHIFT (21U)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_ENDS_WITH_TSM(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_SW_RF_ACTIVE_ENDS_WITH_TSM_SHIFT)) & RSIM_DSM_CONTROL_SW_RF_ACTIVE_ENDS_WITH_TSM_MASK)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_BIT_MASK   (0x400000U)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_BIT_SHIFT  (22U)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_BIT(x)     (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_SW_RF_ACTIVE_BIT_SHIFT)) & RSIM_DSM_CONTROL_SW_RF_ACTIVE_BIT_MASK)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_EN_MASK    (0x800000U)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_EN_SHIFT   (23U)
#define RSIM_DSM_CONTROL_SW_RF_ACTIVE_EN(x)      (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_SW_RF_ACTIVE_EN_SHIFT)) & RSIM_DSM_CONTROL_SW_RF_ACTIVE_EN_MASK)
#define RSIM_DSM_CONTROL_DSM_TIMER_CLR_MASK      (0x8000000U)
#define RSIM_DSM_CONTROL_DSM_TIMER_CLR_SHIFT     (27U)
#define RSIM_DSM_CONTROL_DSM_TIMER_CLR(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_DSM_TIMER_CLR_SHIFT)) & RSIM_DSM_CONTROL_DSM_TIMER_CLR_MASK)
#define RSIM_DSM_CONTROL_DSM_TIMER_EN_MASK       (0x80000000U)
#define RSIM_DSM_CONTROL_DSM_TIMER_EN_SHIFT      (31U)
#define RSIM_DSM_CONTROL_DSM_TIMER_EN(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_CONTROL_DSM_TIMER_EN_SHIFT)) & RSIM_DSM_CONTROL_DSM_TIMER_EN_MASK)

/*! @name DSM_WAKEUP - Deep Sleep Wakeup Sequence */
#define RSIM_DSM_WAKEUP_DSM_POWER_OFFSET_TIME_MASK (0x3FFU)
#define RSIM_DSM_WAKEUP_DSM_POWER_OFFSET_TIME_SHIFT (0U)
#define RSIM_DSM_WAKEUP_DSM_POWER_OFFSET_TIME(x) (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_WAKEUP_DSM_POWER_OFFSET_TIME_SHIFT)) & RSIM_DSM_WAKEUP_DSM_POWER_OFFSET_TIME_MASK)
#define RSIM_DSM_WAKEUP_ACTIVE_WARNING_MASK      (0x3F000U)
#define RSIM_DSM_WAKEUP_ACTIVE_WARNING_SHIFT     (12U)
#define RSIM_DSM_WAKEUP_ACTIVE_WARNING(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_WAKEUP_ACTIVE_WARNING_SHIFT)) & RSIM_DSM_WAKEUP_ACTIVE_WARNING_MASK)
#define RSIM_DSM_WAKEUP_FINE_DELAY_MASK          (0x3F00000U)
#define RSIM_DSM_WAKEUP_FINE_DELAY_SHIFT         (20U)
#define RSIM_DSM_WAKEUP_FINE_DELAY(x)            (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_WAKEUP_FINE_DELAY_SHIFT)) & RSIM_DSM_WAKEUP_FINE_DELAY_MASK)
#define RSIM_DSM_WAKEUP_COARSE_DELAY_MASK        (0xF0000000U)
#define RSIM_DSM_WAKEUP_COARSE_DELAY_SHIFT       (28U)
#define RSIM_DSM_WAKEUP_COARSE_DELAY(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_DSM_WAKEUP_COARSE_DELAY_SHIFT)) & RSIM_DSM_WAKEUP_COARSE_DELAY_MASK)

/*! @name WOR_DURATION - WOR Deep Sleep Duration */
#define RSIM_WOR_DURATION_WOR_DSM_DURATION_MASK  (0xFFFFFFU)
#define RSIM_WOR_DURATION_WOR_DSM_DURATION_SHIFT (0U)
#define RSIM_WOR_DURATION_WOR_DSM_DURATION(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_WOR_DURATION_WOR_DSM_DURATION_SHIFT)) & RSIM_WOR_DURATION_WOR_DSM_DURATION_MASK)

/*! @name WOR_WAKE - WOR Deep Sleep Wake Time */
#define RSIM_WOR_WAKE_WOR_WAKE_TIME_MASK         (0xFFFFFFU)
#define RSIM_WOR_WAKE_WOR_WAKE_TIME_SHIFT        (0U)
#define RSIM_WOR_WAKE_WOR_WAKE_TIME(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_WOR_WAKE_WOR_WAKE_TIME_SHIFT)) & RSIM_WOR_WAKE_WOR_WAKE_TIME_MASK)
#define RSIM_WOR_WAKE_WOR_FSM_STATE_MASK         (0x70000000U)
#define RSIM_WOR_WAKE_WOR_FSM_STATE_SHIFT        (28U)
#define RSIM_WOR_WAKE_WOR_FSM_STATE(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_WOR_WAKE_WOR_FSM_STATE_SHIFT)) & RSIM_WOR_WAKE_WOR_FSM_STATE_MASK)

/*! @name MAN_SLEEP - MAN Deep Sleep Time */
#define RSIM_MAN_SLEEP_MAN_SLEEP_TIME_MASK       (0xFFFFFFU)
#define RSIM_MAN_SLEEP_MAN_SLEEP_TIME_SHIFT      (0U)
#define RSIM_MAN_SLEEP_MAN_SLEEP_TIME(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_MAN_SLEEP_MAN_SLEEP_TIME_SHIFT)) & RSIM_MAN_SLEEP_MAN_SLEEP_TIME_MASK)

/*! @name MAN_WAKE - MAN Deep Sleep Wake Time */
#define RSIM_MAN_WAKE_MAN_WAKE_TIME_MASK         (0xFFFFFFU)
#define RSIM_MAN_WAKE_MAN_WAKE_TIME_SHIFT        (0U)
#define RSIM_MAN_WAKE_MAN_WAKE_TIME(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_MAN_WAKE_MAN_WAKE_TIME_SHIFT)) & RSIM_MAN_WAKE_MAN_WAKE_TIME_MASK)
#define RSIM_MAN_WAKE_MAN_FSM_STATE_MASK         (0x70000000U)
#define RSIM_MAN_WAKE_MAN_FSM_STATE_SHIFT        (28U)
#define RSIM_MAN_WAKE_MAN_FSM_STATE(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_MAN_WAKE_MAN_FSM_STATE_SHIFT)) & RSIM_MAN_WAKE_MAN_FSM_STATE_MASK)

/*! @name RF_OSC_CTRL - Radio Oscillator Control */
#define RSIM_RF_OSC_CTRL_BB_XTAL_ALC_COUNT_SEL_MASK (0x3U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ALC_COUNT_SEL_SHIFT (0U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ALC_COUNT_SEL(x) (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_ALC_COUNT_SEL_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_ALC_COUNT_SEL_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ALC_ON_MASK     (0x4U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ALC_ON_SHIFT    (2U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ALC_ON(x)       (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_ALC_ON_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_ALC_ON_MASK)
#define RSIM_RF_OSC_CTRL_RF_OSC_BYPASS_EN_MASK   (0x8U)
#define RSIM_RF_OSC_CTRL_RF_OSC_BYPASS_EN_SHIFT  (3U)
#define RSIM_RF_OSC_CTRL_RF_OSC_BYPASS_EN(x)     (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_RF_OSC_BYPASS_EN_SHIFT)) & RSIM_RF_OSC_CTRL_RF_OSC_BYPASS_EN_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_COMP_BIAS_MASK  (0x1F0U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_COMP_BIAS_SHIFT (4U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_COMP_BIAS(x)    (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_COMP_BIAS_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_COMP_BIAS_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DC_COUP_MODE_EN_MASK (0x200U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DC_COUP_MODE_EN_SHIFT (9U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DC_COUP_MODE_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_DC_COUP_MODE_EN_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_DC_COUP_MODE_EN_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DIAGSEL_MASK    (0x400U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DIAGSEL_SHIFT   (10U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DIAGSEL(x)      (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_DIAGSEL_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_DIAGSEL_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DIG_CLK_ON_MASK (0x800U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DIG_CLK_ON_SHIFT (11U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_DIG_CLK_ON(x)   (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_DIG_CLK_ON_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_DIG_CLK_ON_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_GM_MASK         (0x1F000U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_GM_SHIFT        (12U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_GM(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_GM_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_GM_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_MASK    (0x20000U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_SHIFT   (17U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD(x)      (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_ON_MASK (0x40000U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_ON_SHIFT (18U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_ON(x)   (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_ON_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_ON_OVRD_ON_MASK)
#define RSIM_RF_OSC_CTRL_BB_XTAL_READY_COUNT_SEL_MASK (0x300000U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_READY_COUNT_SEL_SHIFT (20U)
#define RSIM_RF_OSC_CTRL_BB_XTAL_READY_COUNT_SEL(x) (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_BB_XTAL_READY_COUNT_SEL_SHIFT)) & RSIM_RF_OSC_CTRL_BB_XTAL_READY_COUNT_SEL_MASK)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_RF_EN_SEL_MASK (0x8000000U)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_RF_EN_SEL_SHIFT (27U)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_RF_EN_SEL(x) (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_RF_EN_SEL_SHIFT)) & RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_RF_EN_SEL_MASK)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_MASK (0x10000000U)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_SHIFT (28U)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD(x)   (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_SHIFT)) & RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_MASK)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_EN_MASK (0x20000000U)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_EN_SHIFT (29U)
#define RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_EN_SHIFT)) & RSIM_RF_OSC_CTRL_RADIO_EXT_OSC_OVRD_EN_MASK)
#define RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_MASK (0x40000000U)
#define RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_SHIFT (30U)
#define RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD(x)  (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_SHIFT)) & RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_MASK)
#define RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_EN_MASK (0x80000000U)
#define RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_EN_SHIFT (31U)
#define RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_EN_SHIFT)) & RSIM_RF_OSC_CTRL_RF_NOT_ALLOWED_OVRD_EN_MASK)

/*! @name ANA_TEST - Radio Analog Test Registers */
#define RSIM_ANA_TEST_XTAL_OUT_BUF_EN_MASK       (0x10U)
#define RSIM_ANA_TEST_XTAL_OUT_BUF_EN_SHIFT      (4U)
#define RSIM_ANA_TEST_XTAL_OUT_BUF_EN(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TEST_XTAL_OUT_BUF_EN_SHIFT)) & RSIM_ANA_TEST_XTAL_OUT_BUF_EN_MASK)

/*! @name ANA_TRIM - Radio Analog Trim Registers */
#define RSIM_ANA_TRIM_BB_LDO_LS_SPARE_MASK       (0x3U)
#define RSIM_ANA_TRIM_BB_LDO_LS_SPARE_SHIFT      (0U)
#define RSIM_ANA_TRIM_BB_LDO_LS_SPARE(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BB_LDO_LS_SPARE_SHIFT)) & RSIM_ANA_TRIM_BB_LDO_LS_SPARE_MASK)
#define RSIM_ANA_TRIM_BB_LDO_LS_TRIM_MASK        (0x38U)
#define RSIM_ANA_TRIM_BB_LDO_LS_TRIM_SHIFT       (3U)
#define RSIM_ANA_TRIM_BB_LDO_LS_TRIM(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BB_LDO_LS_TRIM_SHIFT)) & RSIM_ANA_TRIM_BB_LDO_LS_TRIM_MASK)
#define RSIM_ANA_TRIM_BB_LDO_XO_SPARE_MASK       (0xC0U)
#define RSIM_ANA_TRIM_BB_LDO_XO_SPARE_SHIFT      (6U)
#define RSIM_ANA_TRIM_BB_LDO_XO_SPARE(x)         (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BB_LDO_XO_SPARE_SHIFT)) & RSIM_ANA_TRIM_BB_LDO_XO_SPARE_MASK)
#define RSIM_ANA_TRIM_BB_LDO_XO_TRIM_MASK        (0x700U)
#define RSIM_ANA_TRIM_BB_LDO_XO_TRIM_SHIFT       (8U)
#define RSIM_ANA_TRIM_BB_LDO_XO_TRIM(x)          (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BB_LDO_XO_TRIM_SHIFT)) & RSIM_ANA_TRIM_BB_LDO_XO_TRIM_MASK)
#define RSIM_ANA_TRIM_BB_XTAL_SPARE_MASK         (0xF800U)
#define RSIM_ANA_TRIM_BB_XTAL_SPARE_SHIFT        (11U)
#define RSIM_ANA_TRIM_BB_XTAL_SPARE(x)           (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BB_XTAL_SPARE_SHIFT)) & RSIM_ANA_TRIM_BB_XTAL_SPARE_MASK)
#define RSIM_ANA_TRIM_BB_XTAL_TRIM_MASK          (0xFF0000U)
#define RSIM_ANA_TRIM_BB_XTAL_TRIM_SHIFT         (16U)
#define RSIM_ANA_TRIM_BB_XTAL_TRIM(x)            (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BB_XTAL_TRIM_SHIFT)) & RSIM_ANA_TRIM_BB_XTAL_TRIM_MASK)
#define RSIM_ANA_TRIM_BG_1V_TRIM_MASK            (0xF000000U)
#define RSIM_ANA_TRIM_BG_1V_TRIM_SHIFT           (24U)
#define RSIM_ANA_TRIM_BG_1V_TRIM(x)              (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BG_1V_TRIM_SHIFT)) & RSIM_ANA_TRIM_BG_1V_TRIM_MASK)
#define RSIM_ANA_TRIM_BG_IBIAS_5U_TRIM_MASK      (0xF0000000U)
#define RSIM_ANA_TRIM_BG_IBIAS_5U_TRIM_SHIFT     (28U)
#define RSIM_ANA_TRIM_BG_IBIAS_5U_TRIM(x)        (((uint32_t)(((uint32_t)(x)) << RSIM_ANA_TRIM_BG_IBIAS_5U_TRIM_SHIFT)) & RSIM_ANA_TRIM_BG_IBIAS_5U_TRIM_MASK)


/*!
 * @}
 */ /* end of group RSIM_Register_Masks */


/* RSIM - Peripheral instance base addresses */
/** Peripheral RSIM base address */
#define RSIM_BASE                                (0x4102F000u)
/** Peripheral RSIM base pointer */
#define RSIM                                     ((RSIM_Type *)RSIM_BASE)
/** Array initializer of RSIM peripheral base addresses */
#define RSIM_BASE_ADDRS                          { RSIM_BASE }
/** Array initializer of RSIM peripheral base pointers */
#define RSIM_BASE_PTRS                           { RSIM }

/*!
 * @}
 */ /* end of group RSIM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- RTC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RTC_Peripheral_Access_Layer RTC Peripheral Access Layer
 * @{
 */

/** RTC - Register Layout Typedef */
typedef struct {
  __IO uint32_t TSR;                               /**< RTC Time Seconds Register, offset: 0x0 */
  __IO uint32_t TPR;                               /**< RTC Time Prescaler Register, offset: 0x4 */
  __IO uint32_t TAR;                               /**< RTC Time Alarm Register, offset: 0x8 */
  __IO uint32_t TCR;                               /**< RTC Time Compensation Register, offset: 0xC */
  __IO uint32_t CR;                                /**< RTC Control Register, offset: 0x10 */
  __IO uint32_t SR;                                /**< RTC Status Register, offset: 0x14 */
  __IO uint32_t LR;                                /**< RTC Lock Register, offset: 0x18 */
  __IO uint32_t IER;                               /**< RTC Interrupt Enable Register, offset: 0x1C */
  __I  uint32_t TTSR;                              /**< RTC Tamper Time Seconds Register, offset: 0x20 */
  __IO uint32_t MER;                               /**< RTC Monotonic Enable Register, offset: 0x24 */
  __IO uint32_t MCLR;                              /**< RTC Monotonic Counter Low Register, offset: 0x28 */
  __IO uint32_t MCHR;                              /**< RTC Monotonic Counter High Register, offset: 0x2C */
       uint8_t RESERVED_0[4];
  __IO uint32_t TDR;                               /**< RTC Tamper Detect Register, offset: 0x34 */
       uint8_t RESERVED_1[4];
  __IO uint32_t TIR;                               /**< RTC Tamper Interrupt Register, offset: 0x3C */
  __IO uint32_t PCR[4];                            /**< RTC Pin Configuration Register, array offset: 0x40, array step: 0x4 */
       uint8_t RESERVED_2[1968];
  __IO uint32_t WAR;                               /**< RTC Write Access Register, offset: 0x800 */
  __IO uint32_t RAR;                               /**< RTC Read Access Register, offset: 0x804 */
} RTC_Type;

/* ----------------------------------------------------------------------------
   -- RTC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RTC_Register_Masks RTC Register Masks
 * @{
 */

/*! @name TSR - RTC Time Seconds Register */
#define RTC_TSR_TSR_MASK                         (0xFFFFFFFFU)
#define RTC_TSR_TSR_SHIFT                        (0U)
#define RTC_TSR_TSR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TSR_TSR_SHIFT)) & RTC_TSR_TSR_MASK)

/*! @name TPR - RTC Time Prescaler Register */
#define RTC_TPR_TPR_MASK                         (0xFFFFU)
#define RTC_TPR_TPR_SHIFT                        (0U)
#define RTC_TPR_TPR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TPR_TPR_SHIFT)) & RTC_TPR_TPR_MASK)

/*! @name TAR - RTC Time Alarm Register */
#define RTC_TAR_TAR_MASK                         (0xFFFFFFFFU)
#define RTC_TAR_TAR_SHIFT                        (0U)
#define RTC_TAR_TAR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TAR_TAR_SHIFT)) & RTC_TAR_TAR_MASK)

/*! @name TCR - RTC Time Compensation Register */
#define RTC_TCR_TCR_MASK                         (0xFFU)
#define RTC_TCR_TCR_SHIFT                        (0U)
#define RTC_TCR_TCR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TCR_TCR_SHIFT)) & RTC_TCR_TCR_MASK)
#define RTC_TCR_CIR_MASK                         (0xFF00U)
#define RTC_TCR_CIR_SHIFT                        (8U)
#define RTC_TCR_CIR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TCR_CIR_SHIFT)) & RTC_TCR_CIR_MASK)
#define RTC_TCR_TCV_MASK                         (0xFF0000U)
#define RTC_TCR_TCV_SHIFT                        (16U)
#define RTC_TCR_TCV(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TCR_TCV_SHIFT)) & RTC_TCR_TCV_MASK)
#define RTC_TCR_CIC_MASK                         (0xFF000000U)
#define RTC_TCR_CIC_SHIFT                        (24U)
#define RTC_TCR_CIC(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TCR_CIC_SHIFT)) & RTC_TCR_CIC_MASK)

/*! @name CR - RTC Control Register */
#define RTC_CR_SWR_MASK                          (0x1U)
#define RTC_CR_SWR_SHIFT                         (0U)
#define RTC_CR_SWR(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_CR_SWR_SHIFT)) & RTC_CR_SWR_MASK)
#define RTC_CR_WPE_MASK                          (0x2U)
#define RTC_CR_WPE_SHIFT                         (1U)
#define RTC_CR_WPE(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_CR_WPE_SHIFT)) & RTC_CR_WPE_MASK)
#define RTC_CR_SUP_MASK                          (0x4U)
#define RTC_CR_SUP_SHIFT                         (2U)
#define RTC_CR_SUP(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_CR_SUP_SHIFT)) & RTC_CR_SUP_MASK)
#define RTC_CR_UM_MASK                           (0x8U)
#define RTC_CR_UM_SHIFT                          (3U)
#define RTC_CR_UM(x)                             (((uint32_t)(((uint32_t)(x)) << RTC_CR_UM_SHIFT)) & RTC_CR_UM_MASK)
#define RTC_CR_WPS_MASK                          (0x10U)
#define RTC_CR_WPS_SHIFT                         (4U)
#define RTC_CR_WPS(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_CR_WPS_SHIFT)) & RTC_CR_WPS_MASK)
#define RTC_CR_CPS_MASK                          (0x20U)
#define RTC_CR_CPS_SHIFT                         (5U)
#define RTC_CR_CPS(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_CR_CPS_SHIFT)) & RTC_CR_CPS_MASK)
#define RTC_CR_LPOS_MASK                         (0x80U)
#define RTC_CR_LPOS_SHIFT                        (7U)
#define RTC_CR_LPOS(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_LPOS_SHIFT)) & RTC_CR_LPOS_MASK)
#define RTC_CR_OSCE_MASK                         (0x100U)
#define RTC_CR_OSCE_SHIFT                        (8U)
#define RTC_CR_OSCE(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_OSCE_SHIFT)) & RTC_CR_OSCE_MASK)
#define RTC_CR_CLKO_MASK                         (0x200U)
#define RTC_CR_CLKO_SHIFT                        (9U)
#define RTC_CR_CLKO(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_CLKO_SHIFT)) & RTC_CR_CLKO_MASK)
#define RTC_CR_SC16P_MASK                        (0x400U)
#define RTC_CR_SC16P_SHIFT                       (10U)
#define RTC_CR_SC16P(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_CR_SC16P_SHIFT)) & RTC_CR_SC16P_MASK)
#define RTC_CR_SC8P_MASK                         (0x800U)
#define RTC_CR_SC8P_SHIFT                        (11U)
#define RTC_CR_SC8P(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_SC8P_SHIFT)) & RTC_CR_SC8P_MASK)
#define RTC_CR_SC4P_MASK                         (0x1000U)
#define RTC_CR_SC4P_SHIFT                        (12U)
#define RTC_CR_SC4P(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_SC4P_SHIFT)) & RTC_CR_SC4P_MASK)
#define RTC_CR_SC2P_MASK                         (0x2000U)
#define RTC_CR_SC2P_SHIFT                        (13U)
#define RTC_CR_SC2P(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_SC2P_SHIFT)) & RTC_CR_SC2P_MASK)
#define RTC_CR_OSCM_MASK                         (0x8000U)
#define RTC_CR_OSCM_SHIFT                        (15U)
#define RTC_CR_OSCM(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_OSCM_SHIFT)) & RTC_CR_OSCM_MASK)
#define RTC_CR_PORS_MASK                         (0x30000U)
#define RTC_CR_PORS_SHIFT                        (16U)
#define RTC_CR_PORS(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_CR_PORS_SHIFT)) & RTC_CR_PORS_MASK)
#define RTC_CR_CPE_MASK                          (0x3000000U)
#define RTC_CR_CPE_SHIFT                         (24U)
#define RTC_CR_CPE(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_CR_CPE_SHIFT)) & RTC_CR_CPE_MASK)

/*! @name SR - RTC Status Register */
#define RTC_SR_TIF_MASK                          (0x1U)
#define RTC_SR_TIF_SHIFT                         (0U)
#define RTC_SR_TIF(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_SR_TIF_SHIFT)) & RTC_SR_TIF_MASK)
#define RTC_SR_TOF_MASK                          (0x2U)
#define RTC_SR_TOF_SHIFT                         (1U)
#define RTC_SR_TOF(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_SR_TOF_SHIFT)) & RTC_SR_TOF_MASK)
#define RTC_SR_TAF_MASK                          (0x4U)
#define RTC_SR_TAF_SHIFT                         (2U)
#define RTC_SR_TAF(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_SR_TAF_SHIFT)) & RTC_SR_TAF_MASK)
#define RTC_SR_MOF_MASK                          (0x8U)
#define RTC_SR_MOF_SHIFT                         (3U)
#define RTC_SR_MOF(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_SR_MOF_SHIFT)) & RTC_SR_MOF_MASK)
#define RTC_SR_TCE_MASK                          (0x10U)
#define RTC_SR_TCE_SHIFT                         (4U)
#define RTC_SR_TCE(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_SR_TCE_SHIFT)) & RTC_SR_TCE_MASK)
#define RTC_SR_TIDF_MASK                         (0x80U)
#define RTC_SR_TIDF_SHIFT                        (7U)
#define RTC_SR_TIDF(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_SR_TIDF_SHIFT)) & RTC_SR_TIDF_MASK)

/*! @name LR - RTC Lock Register */
#define RTC_LR_TCL_MASK                          (0x8U)
#define RTC_LR_TCL_SHIFT                         (3U)
#define RTC_LR_TCL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_TCL_SHIFT)) & RTC_LR_TCL_MASK)
#define RTC_LR_CRL_MASK                          (0x10U)
#define RTC_LR_CRL_SHIFT                         (4U)
#define RTC_LR_CRL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_CRL_SHIFT)) & RTC_LR_CRL_MASK)
#define RTC_LR_SRL_MASK                          (0x20U)
#define RTC_LR_SRL_SHIFT                         (5U)
#define RTC_LR_SRL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_SRL_SHIFT)) & RTC_LR_SRL_MASK)
#define RTC_LR_LRL_MASK                          (0x40U)
#define RTC_LR_LRL_SHIFT                         (6U)
#define RTC_LR_LRL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_LRL_SHIFT)) & RTC_LR_LRL_MASK)
#define RTC_LR_TTSL_MASK                         (0x100U)
#define RTC_LR_TTSL_SHIFT                        (8U)
#define RTC_LR_TTSL(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_LR_TTSL_SHIFT)) & RTC_LR_TTSL_MASK)
#define RTC_LR_MEL_MASK                          (0x200U)
#define RTC_LR_MEL_SHIFT                         (9U)
#define RTC_LR_MEL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_MEL_SHIFT)) & RTC_LR_MEL_MASK)
#define RTC_LR_MCLL_MASK                         (0x400U)
#define RTC_LR_MCLL_SHIFT                        (10U)
#define RTC_LR_MCLL(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_LR_MCLL_SHIFT)) & RTC_LR_MCLL_MASK)
#define RTC_LR_MCHL_MASK                         (0x800U)
#define RTC_LR_MCHL_SHIFT                        (11U)
#define RTC_LR_MCHL(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_LR_MCHL_SHIFT)) & RTC_LR_MCHL_MASK)
#define RTC_LR_TDL_MASK                          (0x2000U)
#define RTC_LR_TDL_SHIFT                         (13U)
#define RTC_LR_TDL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_TDL_SHIFT)) & RTC_LR_TDL_MASK)
#define RTC_LR_TIL_MASK                          (0x8000U)
#define RTC_LR_TIL_SHIFT                         (15U)
#define RTC_LR_TIL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_TIL_SHIFT)) & RTC_LR_TIL_MASK)
#define RTC_LR_PCL_MASK                          (0xF0000U)
#define RTC_LR_PCL_SHIFT                         (16U)
#define RTC_LR_PCL(x)                            (((uint32_t)(((uint32_t)(x)) << RTC_LR_PCL_SHIFT)) & RTC_LR_PCL_MASK)

/*! @name IER - RTC Interrupt Enable Register */
#define RTC_IER_TIIE_MASK                        (0x1U)
#define RTC_IER_TIIE_SHIFT                       (0U)
#define RTC_IER_TIIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_IER_TIIE_SHIFT)) & RTC_IER_TIIE_MASK)
#define RTC_IER_TOIE_MASK                        (0x2U)
#define RTC_IER_TOIE_SHIFT                       (1U)
#define RTC_IER_TOIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_IER_TOIE_SHIFT)) & RTC_IER_TOIE_MASK)
#define RTC_IER_TAIE_MASK                        (0x4U)
#define RTC_IER_TAIE_SHIFT                       (2U)
#define RTC_IER_TAIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_IER_TAIE_SHIFT)) & RTC_IER_TAIE_MASK)
#define RTC_IER_MOIE_MASK                        (0x8U)
#define RTC_IER_MOIE_SHIFT                       (3U)
#define RTC_IER_MOIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_IER_MOIE_SHIFT)) & RTC_IER_MOIE_MASK)
#define RTC_IER_TSIE_MASK                        (0x10U)
#define RTC_IER_TSIE_SHIFT                       (4U)
#define RTC_IER_TSIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_IER_TSIE_SHIFT)) & RTC_IER_TSIE_MASK)
#define RTC_IER_WPON_MASK                        (0x80U)
#define RTC_IER_WPON_SHIFT                       (7U)
#define RTC_IER_WPON(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_IER_WPON_SHIFT)) & RTC_IER_WPON_MASK)
#define RTC_IER_TSIC_MASK                        (0x70000U)
#define RTC_IER_TSIC_SHIFT                       (16U)
#define RTC_IER_TSIC(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_IER_TSIC_SHIFT)) & RTC_IER_TSIC_MASK)

/*! @name TTSR - RTC Tamper Time Seconds Register */
#define RTC_TTSR_TTS_MASK                        (0xFFFFFFFFU)
#define RTC_TTSR_TTS_SHIFT                       (0U)
#define RTC_TTSR_TTS(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_TTSR_TTS_SHIFT)) & RTC_TTSR_TTS_MASK)

/*! @name MER - RTC Monotonic Enable Register */
#define RTC_MER_MCE_MASK                         (0x10U)
#define RTC_MER_MCE_SHIFT                        (4U)
#define RTC_MER_MCE(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_MER_MCE_SHIFT)) & RTC_MER_MCE_MASK)

/*! @name MCLR - RTC Monotonic Counter Low Register */
#define RTC_MCLR_MCL_MASK                        (0xFFFFFFFFU)
#define RTC_MCLR_MCL_SHIFT                       (0U)
#define RTC_MCLR_MCL(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_MCLR_MCL_SHIFT)) & RTC_MCLR_MCL_MASK)

/*! @name MCHR - RTC Monotonic Counter High Register */
#define RTC_MCHR_MCH_MASK                        (0xFFFFFFFFU)
#define RTC_MCHR_MCH_SHIFT                       (0U)
#define RTC_MCHR_MCH(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_MCHR_MCH_SHIFT)) & RTC_MCHR_MCH_MASK)

/*! @name TDR - RTC Tamper Detect Register */
#define RTC_TDR_LCTF_MASK                        (0x10U)
#define RTC_TDR_LCTF_SHIFT                       (4U)
#define RTC_TDR_LCTF(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_TDR_LCTF_SHIFT)) & RTC_TDR_LCTF_MASK)
#define RTC_TDR_STF_MASK                         (0x20U)
#define RTC_TDR_STF_SHIFT                        (5U)
#define RTC_TDR_STF(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TDR_STF_SHIFT)) & RTC_TDR_STF_MASK)
#define RTC_TDR_FSF_MASK                         (0x40U)
#define RTC_TDR_FSF_SHIFT                        (6U)
#define RTC_TDR_FSF(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TDR_FSF_SHIFT)) & RTC_TDR_FSF_MASK)
#define RTC_TDR_TMF_MASK                         (0x80U)
#define RTC_TDR_TMF_SHIFT                        (7U)
#define RTC_TDR_TMF(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TDR_TMF_SHIFT)) & RTC_TDR_TMF_MASK)
#define RTC_TDR_TPF_MASK                         (0xF0000U)
#define RTC_TDR_TPF_SHIFT                        (16U)
#define RTC_TDR_TPF(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TDR_TPF_SHIFT)) & RTC_TDR_TPF_MASK)

/*! @name TIR - RTC Tamper Interrupt Register */
#define RTC_TIR_LCIE_MASK                        (0x10U)
#define RTC_TIR_LCIE_SHIFT                       (4U)
#define RTC_TIR_LCIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_TIR_LCIE_SHIFT)) & RTC_TIR_LCIE_MASK)
#define RTC_TIR_SIE_MASK                         (0x20U)
#define RTC_TIR_SIE_SHIFT                        (5U)
#define RTC_TIR_SIE(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_TIR_SIE_SHIFT)) & RTC_TIR_SIE_MASK)
#define RTC_TIR_FSIE_MASK                        (0x40U)
#define RTC_TIR_FSIE_SHIFT                       (6U)
#define RTC_TIR_FSIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_TIR_FSIE_SHIFT)) & RTC_TIR_FSIE_MASK)
#define RTC_TIR_TMIE_MASK                        (0x80U)
#define RTC_TIR_TMIE_SHIFT                       (7U)
#define RTC_TIR_TMIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_TIR_TMIE_SHIFT)) & RTC_TIR_TMIE_MASK)
#define RTC_TIR_TPIE_MASK                        (0xF0000U)
#define RTC_TIR_TPIE_SHIFT                       (16U)
#define RTC_TIR_TPIE(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_TIR_TPIE_SHIFT)) & RTC_TIR_TPIE_MASK)

/*! @name PCR - RTC Pin Configuration Register */
#define RTC_PCR_TPE_MASK                         (0x1000000U)
#define RTC_PCR_TPE_SHIFT                        (24U)
#define RTC_PCR_TPE(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_PCR_TPE_SHIFT)) & RTC_PCR_TPE_MASK)
#define RTC_PCR_TPS_MASK                         (0x2000000U)
#define RTC_PCR_TPS_SHIFT                        (25U)
#define RTC_PCR_TPS(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_PCR_TPS_SHIFT)) & RTC_PCR_TPS_MASK)
#define RTC_PCR_TFE_MASK                         (0x4000000U)
#define RTC_PCR_TFE_SHIFT                        (26U)
#define RTC_PCR_TFE(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_PCR_TFE_SHIFT)) & RTC_PCR_TFE_MASK)
#define RTC_PCR_TPP_MASK                         (0x8000000U)
#define RTC_PCR_TPP_SHIFT                        (27U)
#define RTC_PCR_TPP(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_PCR_TPP_SHIFT)) & RTC_PCR_TPP_MASK)
#define RTC_PCR_TPID_MASK                        (0x80000000U)
#define RTC_PCR_TPID_SHIFT                       (31U)
#define RTC_PCR_TPID(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_PCR_TPID_SHIFT)) & RTC_PCR_TPID_MASK)

/* The count of RTC_PCR */
#define RTC_PCR_COUNT                            (4U)

/*! @name WAR - RTC Write Access Register */
#define RTC_WAR_TSRW_MASK                        (0x1U)
#define RTC_WAR_TSRW_SHIFT                       (0U)
#define RTC_WAR_TSRW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_TSRW_SHIFT)) & RTC_WAR_TSRW_MASK)
#define RTC_WAR_TPRW_MASK                        (0x2U)
#define RTC_WAR_TPRW_SHIFT                       (1U)
#define RTC_WAR_TPRW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_TPRW_SHIFT)) & RTC_WAR_TPRW_MASK)
#define RTC_WAR_TARW_MASK                        (0x4U)
#define RTC_WAR_TARW_SHIFT                       (2U)
#define RTC_WAR_TARW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_TARW_SHIFT)) & RTC_WAR_TARW_MASK)
#define RTC_WAR_TCRW_MASK                        (0x8U)
#define RTC_WAR_TCRW_SHIFT                       (3U)
#define RTC_WAR_TCRW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_TCRW_SHIFT)) & RTC_WAR_TCRW_MASK)
#define RTC_WAR_CRW_MASK                         (0x10U)
#define RTC_WAR_CRW_SHIFT                        (4U)
#define RTC_WAR_CRW(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_WAR_CRW_SHIFT)) & RTC_WAR_CRW_MASK)
#define RTC_WAR_SRW_MASK                         (0x20U)
#define RTC_WAR_SRW_SHIFT                        (5U)
#define RTC_WAR_SRW(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_WAR_SRW_SHIFT)) & RTC_WAR_SRW_MASK)
#define RTC_WAR_LRW_MASK                         (0x40U)
#define RTC_WAR_LRW_SHIFT                        (6U)
#define RTC_WAR_LRW(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_WAR_LRW_SHIFT)) & RTC_WAR_LRW_MASK)
#define RTC_WAR_IERW_MASK                        (0x80U)
#define RTC_WAR_IERW_SHIFT                       (7U)
#define RTC_WAR_IERW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_IERW_SHIFT)) & RTC_WAR_IERW_MASK)
#define RTC_WAR_TTSW_MASK                        (0x100U)
#define RTC_WAR_TTSW_SHIFT                       (8U)
#define RTC_WAR_TTSW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_TTSW_SHIFT)) & RTC_WAR_TTSW_MASK)
#define RTC_WAR_MERW_MASK                        (0x200U)
#define RTC_WAR_MERW_SHIFT                       (9U)
#define RTC_WAR_MERW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_MERW_SHIFT)) & RTC_WAR_MERW_MASK)
#define RTC_WAR_MCLW_MASK                        (0x400U)
#define RTC_WAR_MCLW_SHIFT                       (10U)
#define RTC_WAR_MCLW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_MCLW_SHIFT)) & RTC_WAR_MCLW_MASK)
#define RTC_WAR_MCHW_MASK                        (0x800U)
#define RTC_WAR_MCHW_SHIFT                       (11U)
#define RTC_WAR_MCHW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_MCHW_SHIFT)) & RTC_WAR_MCHW_MASK)
#define RTC_WAR_TDRW_MASK                        (0x2000U)
#define RTC_WAR_TDRW_SHIFT                       (13U)
#define RTC_WAR_TDRW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_TDRW_SHIFT)) & RTC_WAR_TDRW_MASK)
#define RTC_WAR_TIRW_MASK                        (0x8000U)
#define RTC_WAR_TIRW_SHIFT                       (15U)
#define RTC_WAR_TIRW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_TIRW_SHIFT)) & RTC_WAR_TIRW_MASK)
#define RTC_WAR_PCRW_MASK                        (0xF0000U)
#define RTC_WAR_PCRW_SHIFT                       (16U)
#define RTC_WAR_PCRW(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAR_PCRW_SHIFT)) & RTC_WAR_PCRW_MASK)

/*! @name RAR - RTC Read Access Register */
#define RTC_RAR_TSRR_MASK                        (0x1U)
#define RTC_RAR_TSRR_SHIFT                       (0U)
#define RTC_RAR_TSRR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_TSRR_SHIFT)) & RTC_RAR_TSRR_MASK)
#define RTC_RAR_TPRR_MASK                        (0x2U)
#define RTC_RAR_TPRR_SHIFT                       (1U)
#define RTC_RAR_TPRR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_TPRR_SHIFT)) & RTC_RAR_TPRR_MASK)
#define RTC_RAR_TARR_MASK                        (0x4U)
#define RTC_RAR_TARR_SHIFT                       (2U)
#define RTC_RAR_TARR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_TARR_SHIFT)) & RTC_RAR_TARR_MASK)
#define RTC_RAR_TCRR_MASK                        (0x8U)
#define RTC_RAR_TCRR_SHIFT                       (3U)
#define RTC_RAR_TCRR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_TCRR_SHIFT)) & RTC_RAR_TCRR_MASK)
#define RTC_RAR_CRR_MASK                         (0x10U)
#define RTC_RAR_CRR_SHIFT                        (4U)
#define RTC_RAR_CRR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_RAR_CRR_SHIFT)) & RTC_RAR_CRR_MASK)
#define RTC_RAR_SRR_MASK                         (0x20U)
#define RTC_RAR_SRR_SHIFT                        (5U)
#define RTC_RAR_SRR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_RAR_SRR_SHIFT)) & RTC_RAR_SRR_MASK)
#define RTC_RAR_LRR_MASK                         (0x40U)
#define RTC_RAR_LRR_SHIFT                        (6U)
#define RTC_RAR_LRR(x)                           (((uint32_t)(((uint32_t)(x)) << RTC_RAR_LRR_SHIFT)) & RTC_RAR_LRR_MASK)
#define RTC_RAR_IERR_MASK                        (0x80U)
#define RTC_RAR_IERR_SHIFT                       (7U)
#define RTC_RAR_IERR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_IERR_SHIFT)) & RTC_RAR_IERR_MASK)
#define RTC_RAR_TTSR_MASK                        (0x100U)
#define RTC_RAR_TTSR_SHIFT                       (8U)
#define RTC_RAR_TTSR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_TTSR_SHIFT)) & RTC_RAR_TTSR_MASK)
#define RTC_RAR_MERR_MASK                        (0x200U)
#define RTC_RAR_MERR_SHIFT                       (9U)
#define RTC_RAR_MERR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_MERR_SHIFT)) & RTC_RAR_MERR_MASK)
#define RTC_RAR_MCLR_MASK                        (0x400U)
#define RTC_RAR_MCLR_SHIFT                       (10U)
#define RTC_RAR_MCLR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_MCLR_SHIFT)) & RTC_RAR_MCLR_MASK)
#define RTC_RAR_MCHR_MASK                        (0x800U)
#define RTC_RAR_MCHR_SHIFT                       (11U)
#define RTC_RAR_MCHR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_MCHR_SHIFT)) & RTC_RAR_MCHR_MASK)
#define RTC_RAR_TDRR_MASK                        (0x2000U)
#define RTC_RAR_TDRR_SHIFT                       (13U)
#define RTC_RAR_TDRR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_TDRR_SHIFT)) & RTC_RAR_TDRR_MASK)
#define RTC_RAR_TIRR_MASK                        (0x8000U)
#define RTC_RAR_TIRR_SHIFT                       (15U)
#define RTC_RAR_TIRR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_TIRR_SHIFT)) & RTC_RAR_TIRR_MASK)
#define RTC_RAR_PCRR_MASK                        (0xF0000U)
#define RTC_RAR_PCRR_SHIFT                       (16U)
#define RTC_RAR_PCRR(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_RAR_PCRR_SHIFT)) & RTC_RAR_PCRR_MASK)


/*!
 * @}
 */ /* end of group RTC_Register_Masks */


/* RTC - Peripheral instance base addresses */
/** Peripheral RTC base address */
#define RTC_BASE                                 (0x40031000u)
/** Peripheral RTC base pointer */
#define RTC                                      ((RTC_Type *)RTC_BASE)
/** Array initializer of RTC peripheral base addresses */
#define RTC_BASE_ADDRS                           { RTC_BASE }
/** Array initializer of RTC peripheral base pointers */
#define RTC_BASE_PTRS                            { RTC }
/** Interrupt vectors for the RTC peripheral type */
#define RTC_IRQS                                 { RTC_IRQn }

/*!
 * @}
 */ /* end of group RTC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- SCG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCG_Peripheral_Access_Layer SCG Peripheral Access Layer
 * @{
 */

/** SCG - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __I  uint32_t CSR;                               /**< Clock Status Register, offset: 0x10 */
  __IO uint32_t RCCR;                              /**< Run Clock Control Register, offset: 0x14 */
  __IO uint32_t VCCR;                              /**< VLPR Clock Control Register, offset: 0x18 */
  __IO uint32_t HCCR;                              /**< HSRUN Clock Control Register, offset: 0x1C */
  __IO uint32_t CLKOUTCNFG;                        /**< SCG CLKOUT Configuration Register, offset: 0x20 */
       uint8_t RESERVED_1[220];
  __IO uint32_t SOSCCSR;                           /**< System OSC Control Status Register, offset: 0x100 */
  __IO uint32_t SOSCDIV;                           /**< System OSC Divide Register, offset: 0x104 */
       uint8_t RESERVED_2[248];
  __IO uint32_t SIRCCSR;                           /**< Slow IRC Control Status Register, offset: 0x200 */
  __IO uint32_t SIRCDIV;                           /**< Slow IRC Divide Register, offset: 0x204 */
  __IO uint32_t SIRCCFG;                           /**< Slow IRC Configuration Register, offset: 0x208 */
       uint8_t RESERVED_3[244];
  __IO uint32_t FIRCCSR;                           /**< Fast IRC Control Status Register, offset: 0x300 */
  __IO uint32_t FIRCDIV;                           /**< Fast IRC Divide Register, offset: 0x304 */
  __IO uint32_t FIRCCFG;                           /**< Fast IRC Configuration Register, offset: 0x308 */
  __IO uint32_t FIRCTCFG;                          /**< Fast IRC Trim Configuration Register, offset: 0x30C */
       uint8_t RESERVED_4[8];
  __IO uint32_t FIRCSTAT;                          /**< Fast IRC Status Register, offset: 0x318 */
       uint8_t RESERVED_5[228];
  __IO uint32_t ROSCCSR;                           /**< RTC OSC Control Status Register, offset: 0x400 */
       uint8_t RESERVED_6[252];
  __IO uint32_t LPFLLCSR;                          /**< Low Power FLL Control Status Register, offset: 0x500 */
  __IO uint32_t LPFLLDIV;                          /**< Low Power FLL Divide Register, offset: 0x504 */
  __IO uint32_t LPFLLCFG;                          /**< Low Power FLL Configuration Register, offset: 0x508 */
  __IO uint32_t LPFLLTCFG;                         /**< Low Power FLL Trim Configuration Register, offset: 0x50C */
       uint8_t RESERVED_7[4];
  __IO uint32_t LPFLLSTAT;                         /**< Low Power FLL Status Register, offset: 0x514 */
} SCG_Type;

/* ----------------------------------------------------------------------------
   -- SCG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCG_Register_Masks SCG Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define SCG_VERID_VERSION_MASK                   (0xFFFFFFFFU)
#define SCG_VERID_VERSION_SHIFT                  (0U)
#define SCG_VERID_VERSION(x)                     (((uint32_t)(((uint32_t)(x)) << SCG_VERID_VERSION_SHIFT)) & SCG_VERID_VERSION_MASK)

/*! @name PARAM - Parameter Register */
#define SCG_PARAM_CLKPRES_MASK                   (0xFFU)
#define SCG_PARAM_CLKPRES_SHIFT                  (0U)
#define SCG_PARAM_CLKPRES(x)                     (((uint32_t)(((uint32_t)(x)) << SCG_PARAM_CLKPRES_SHIFT)) & SCG_PARAM_CLKPRES_MASK)
#define SCG_PARAM_DIVPRES_MASK                   (0xF8000000U)
#define SCG_PARAM_DIVPRES_SHIFT                  (27U)
#define SCG_PARAM_DIVPRES(x)                     (((uint32_t)(((uint32_t)(x)) << SCG_PARAM_DIVPRES_SHIFT)) & SCG_PARAM_DIVPRES_MASK)

/*! @name CSR - Clock Status Register */
#define SCG_CSR_DIVSLOW_MASK                     (0xFU)
#define SCG_CSR_DIVSLOW_SHIFT                    (0U)
#define SCG_CSR_DIVSLOW(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_CSR_DIVSLOW_SHIFT)) & SCG_CSR_DIVSLOW_MASK)
#define SCG_CSR_DIVBUS_MASK                      (0xF0U)
#define SCG_CSR_DIVBUS_SHIFT                     (4U)
#define SCG_CSR_DIVBUS(x)                        (((uint32_t)(((uint32_t)(x)) << SCG_CSR_DIVBUS_SHIFT)) & SCG_CSR_DIVBUS_MASK)
#define SCG_CSR_DIVEXT_MASK                      (0xF00U)
#define SCG_CSR_DIVEXT_SHIFT                     (8U)
#define SCG_CSR_DIVEXT(x)                        (((uint32_t)(((uint32_t)(x)) << SCG_CSR_DIVEXT_SHIFT)) & SCG_CSR_DIVEXT_MASK)
#define SCG_CSR_DIVCORE_MASK                     (0xF0000U)
#define SCG_CSR_DIVCORE_SHIFT                    (16U)
#define SCG_CSR_DIVCORE(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_CSR_DIVCORE_SHIFT)) & SCG_CSR_DIVCORE_MASK)
#define SCG_CSR_SCS_MASK                         (0xF000000U)
#define SCG_CSR_SCS_SHIFT                        (24U)
#define SCG_CSR_SCS(x)                           (((uint32_t)(((uint32_t)(x)) << SCG_CSR_SCS_SHIFT)) & SCG_CSR_SCS_MASK)

/*! @name RCCR - Run Clock Control Register */
#define SCG_RCCR_DIVSLOW_MASK                    (0xFU)
#define SCG_RCCR_DIVSLOW_SHIFT                   (0U)
#define SCG_RCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x)) << SCG_RCCR_DIVSLOW_SHIFT)) & SCG_RCCR_DIVSLOW_MASK)
#define SCG_RCCR_DIVBUS_MASK                     (0xF0U)
#define SCG_RCCR_DIVBUS_SHIFT                    (4U)
#define SCG_RCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_RCCR_DIVBUS_SHIFT)) & SCG_RCCR_DIVBUS_MASK)
#define SCG_RCCR_DIVEXT_MASK                     (0xF00U)
#define SCG_RCCR_DIVEXT_SHIFT                    (8U)
#define SCG_RCCR_DIVEXT(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_RCCR_DIVEXT_SHIFT)) & SCG_RCCR_DIVEXT_MASK)
#define SCG_RCCR_DIVCORE_MASK                    (0xF0000U)
#define SCG_RCCR_DIVCORE_SHIFT                   (16U)
#define SCG_RCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x)) << SCG_RCCR_DIVCORE_SHIFT)) & SCG_RCCR_DIVCORE_MASK)
#define SCG_RCCR_SCS_MASK                        (0x7000000U)
#define SCG_RCCR_SCS_SHIFT                       (24U)
#define SCG_RCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x)) << SCG_RCCR_SCS_SHIFT)) & SCG_RCCR_SCS_MASK)

/*! @name VCCR - VLPR Clock Control Register */
#define SCG_VCCR_DIVSLOW_MASK                    (0xFU)
#define SCG_VCCR_DIVSLOW_SHIFT                   (0U)
#define SCG_VCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x)) << SCG_VCCR_DIVSLOW_SHIFT)) & SCG_VCCR_DIVSLOW_MASK)
#define SCG_VCCR_DIVBUS_MASK                     (0xF0U)
#define SCG_VCCR_DIVBUS_SHIFT                    (4U)
#define SCG_VCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_VCCR_DIVBUS_SHIFT)) & SCG_VCCR_DIVBUS_MASK)
#define SCG_VCCR_DIVEXT_MASK                     (0xF00U)
#define SCG_VCCR_DIVEXT_SHIFT                    (8U)
#define SCG_VCCR_DIVEXT(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_VCCR_DIVEXT_SHIFT)) & SCG_VCCR_DIVEXT_MASK)
#define SCG_VCCR_DIVCORE_MASK                    (0xF0000U)
#define SCG_VCCR_DIVCORE_SHIFT                   (16U)
#define SCG_VCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x)) << SCG_VCCR_DIVCORE_SHIFT)) & SCG_VCCR_DIVCORE_MASK)
#define SCG_VCCR_SCS_MASK                        (0xF000000U)
#define SCG_VCCR_SCS_SHIFT                       (24U)
#define SCG_VCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x)) << SCG_VCCR_SCS_SHIFT)) & SCG_VCCR_SCS_MASK)

/*! @name HCCR - HSRUN Clock Control Register */
#define SCG_HCCR_DIVSLOW_MASK                    (0xFU)
#define SCG_HCCR_DIVSLOW_SHIFT                   (0U)
#define SCG_HCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x)) << SCG_HCCR_DIVSLOW_SHIFT)) & SCG_HCCR_DIVSLOW_MASK)
#define SCG_HCCR_DIVBUS_MASK                     (0xF0U)
#define SCG_HCCR_DIVBUS_SHIFT                    (4U)
#define SCG_HCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_HCCR_DIVBUS_SHIFT)) & SCG_HCCR_DIVBUS_MASK)
#define SCG_HCCR_DIVEXT_MASK                     (0xF00U)
#define SCG_HCCR_DIVEXT_SHIFT                    (8U)
#define SCG_HCCR_DIVEXT(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_HCCR_DIVEXT_SHIFT)) & SCG_HCCR_DIVEXT_MASK)
#define SCG_HCCR_DIVCORE_MASK                    (0xF0000U)
#define SCG_HCCR_DIVCORE_SHIFT                   (16U)
#define SCG_HCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x)) << SCG_HCCR_DIVCORE_SHIFT)) & SCG_HCCR_DIVCORE_MASK)
#define SCG_HCCR_SCS_MASK                        (0xF000000U)
#define SCG_HCCR_SCS_SHIFT                       (24U)
#define SCG_HCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x)) << SCG_HCCR_SCS_SHIFT)) & SCG_HCCR_SCS_MASK)

/*! @name CLKOUTCNFG - SCG CLKOUT Configuration Register */
#define SCG_CLKOUTCNFG_CLKOUTSEL_MASK            (0xF000000U)
#define SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT           (24U)
#define SCG_CLKOUTCNFG_CLKOUTSEL(x)              (((uint32_t)(((uint32_t)(x)) << SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT)) & SCG_CLKOUTCNFG_CLKOUTSEL_MASK)

/*! @name SOSCCSR - System OSC Control Status Register */
#define SCG_SOSCCSR_SOSCEN_MASK                  (0x1U)
#define SCG_SOSCCSR_SOSCEN_SHIFT                 (0U)
#define SCG_SOSCCSR_SOSCEN(x)                    (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCEN_SHIFT)) & SCG_SOSCCSR_SOSCEN_MASK)
#define SCG_SOSCCSR_SOSCSTEN_MASK                (0x2U)
#define SCG_SOSCCSR_SOSCSTEN_SHIFT               (1U)
#define SCG_SOSCCSR_SOSCSTEN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCSTEN_SHIFT)) & SCG_SOSCCSR_SOSCSTEN_MASK)
#define SCG_SOSCCSR_SOSCLPEN_MASK                (0x4U)
#define SCG_SOSCCSR_SOSCLPEN_SHIFT               (2U)
#define SCG_SOSCCSR_SOSCLPEN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCLPEN_SHIFT)) & SCG_SOSCCSR_SOSCLPEN_MASK)
#define SCG_SOSCCSR_SOSCCM_MASK                  (0x10000U)
#define SCG_SOSCCSR_SOSCCM_SHIFT                 (16U)
#define SCG_SOSCCSR_SOSCCM(x)                    (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCCM_SHIFT)) & SCG_SOSCCSR_SOSCCM_MASK)
#define SCG_SOSCCSR_SOSCCMRE_MASK                (0x20000U)
#define SCG_SOSCCSR_SOSCCMRE_SHIFT               (17U)
#define SCG_SOSCCSR_SOSCCMRE(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCCMRE_SHIFT)) & SCG_SOSCCSR_SOSCCMRE_MASK)
#define SCG_SOSCCSR_LK_MASK                      (0x800000U)
#define SCG_SOSCCSR_LK_SHIFT                     (23U)
#define SCG_SOSCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_LK_SHIFT)) & SCG_SOSCCSR_LK_MASK)
#define SCG_SOSCCSR_SOSCVLD_MASK                 (0x1000000U)
#define SCG_SOSCCSR_SOSCVLD_SHIFT                (24U)
#define SCG_SOSCCSR_SOSCVLD(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCVLD_SHIFT)) & SCG_SOSCCSR_SOSCVLD_MASK)
#define SCG_SOSCCSR_SOSCSEL_MASK                 (0x2000000U)
#define SCG_SOSCCSR_SOSCSEL_SHIFT                (25U)
#define SCG_SOSCCSR_SOSCSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCSEL_SHIFT)) & SCG_SOSCCSR_SOSCSEL_MASK)
#define SCG_SOSCCSR_SOSCERR_MASK                 (0x4000000U)
#define SCG_SOSCCSR_SOSCERR_SHIFT                (26U)
#define SCG_SOSCCSR_SOSCERR(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_SOSCCSR_SOSCERR_SHIFT)) & SCG_SOSCCSR_SOSCERR_MASK)

/*! @name SOSCDIV - System OSC Divide Register */
#define SCG_SOSCDIV_SOSCDIV1_MASK                (0x7U)
#define SCG_SOSCDIV_SOSCDIV1_SHIFT               (0U)
#define SCG_SOSCDIV_SOSCDIV1(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SOSCDIV_SOSCDIV1_SHIFT)) & SCG_SOSCDIV_SOSCDIV1_MASK)
#define SCG_SOSCDIV_SOSCDIV2_MASK                (0x700U)
#define SCG_SOSCDIV_SOSCDIV2_SHIFT               (8U)
#define SCG_SOSCDIV_SOSCDIV2(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SOSCDIV_SOSCDIV2_SHIFT)) & SCG_SOSCDIV_SOSCDIV2_MASK)
#define SCG_SOSCDIV_SOSCDIV3_MASK                (0x70000U)
#define SCG_SOSCDIV_SOSCDIV3_SHIFT               (16U)
#define SCG_SOSCDIV_SOSCDIV3(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SOSCDIV_SOSCDIV3_SHIFT)) & SCG_SOSCDIV_SOSCDIV3_MASK)

/*! @name SIRCCSR - Slow IRC Control Status Register */
#define SCG_SIRCCSR_SIRCEN_MASK                  (0x1U)
#define SCG_SIRCCSR_SIRCEN_SHIFT                 (0U)
#define SCG_SIRCCSR_SIRCEN(x)                    (((uint32_t)(((uint32_t)(x)) << SCG_SIRCCSR_SIRCEN_SHIFT)) & SCG_SIRCCSR_SIRCEN_MASK)
#define SCG_SIRCCSR_SIRCSTEN_MASK                (0x2U)
#define SCG_SIRCCSR_SIRCSTEN_SHIFT               (1U)
#define SCG_SIRCCSR_SIRCSTEN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SIRCCSR_SIRCSTEN_SHIFT)) & SCG_SIRCCSR_SIRCSTEN_MASK)
#define SCG_SIRCCSR_SIRCLPEN_MASK                (0x4U)
#define SCG_SIRCCSR_SIRCLPEN_SHIFT               (2U)
#define SCG_SIRCCSR_SIRCLPEN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SIRCCSR_SIRCLPEN_SHIFT)) & SCG_SIRCCSR_SIRCLPEN_MASK)
#define SCG_SIRCCSR_LK_MASK                      (0x800000U)
#define SCG_SIRCCSR_LK_SHIFT                     (23U)
#define SCG_SIRCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x)) << SCG_SIRCCSR_LK_SHIFT)) & SCG_SIRCCSR_LK_MASK)
#define SCG_SIRCCSR_SIRCVLD_MASK                 (0x1000000U)
#define SCG_SIRCCSR_SIRCVLD_SHIFT                (24U)
#define SCG_SIRCCSR_SIRCVLD(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_SIRCCSR_SIRCVLD_SHIFT)) & SCG_SIRCCSR_SIRCVLD_MASK)
#define SCG_SIRCCSR_SIRCSEL_MASK                 (0x2000000U)
#define SCG_SIRCCSR_SIRCSEL_SHIFT                (25U)
#define SCG_SIRCCSR_SIRCSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_SIRCCSR_SIRCSEL_SHIFT)) & SCG_SIRCCSR_SIRCSEL_MASK)

/*! @name SIRCDIV - Slow IRC Divide Register */
#define SCG_SIRCDIV_SIRCDIV1_MASK                (0x7U)
#define SCG_SIRCDIV_SIRCDIV1_SHIFT               (0U)
#define SCG_SIRCDIV_SIRCDIV1(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SIRCDIV_SIRCDIV1_SHIFT)) & SCG_SIRCDIV_SIRCDIV1_MASK)
#define SCG_SIRCDIV_SIRCDIV2_MASK                (0x700U)
#define SCG_SIRCDIV_SIRCDIV2_SHIFT               (8U)
#define SCG_SIRCDIV_SIRCDIV2(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SIRCDIV_SIRCDIV2_SHIFT)) & SCG_SIRCDIV_SIRCDIV2_MASK)
#define SCG_SIRCDIV_SIRCDIV3_MASK                (0x70000U)
#define SCG_SIRCDIV_SIRCDIV3_SHIFT               (16U)
#define SCG_SIRCDIV_SIRCDIV3(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_SIRCDIV_SIRCDIV3_SHIFT)) & SCG_SIRCDIV_SIRCDIV3_MASK)

/*! @name SIRCCFG - Slow IRC Configuration Register */
#define SCG_SIRCCFG_RANGE_MASK                   (0x1U)
#define SCG_SIRCCFG_RANGE_SHIFT                  (0U)
#define SCG_SIRCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x)) << SCG_SIRCCFG_RANGE_SHIFT)) & SCG_SIRCCFG_RANGE_MASK)

/*! @name FIRCCSR - Fast IRC Control Status Register */
#define SCG_FIRCCSR_FIRCEN_MASK                  (0x1U)
#define SCG_FIRCCSR_FIRCEN_SHIFT                 (0U)
#define SCG_FIRCCSR_FIRCEN(x)                    (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCEN_SHIFT)) & SCG_FIRCCSR_FIRCEN_MASK)
#define SCG_FIRCCSR_FIRCSTEN_MASK                (0x2U)
#define SCG_FIRCCSR_FIRCSTEN_SHIFT               (1U)
#define SCG_FIRCCSR_FIRCSTEN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCSTEN_SHIFT)) & SCG_FIRCCSR_FIRCSTEN_MASK)
#define SCG_FIRCCSR_FIRCLPEN_MASK                (0x4U)
#define SCG_FIRCCSR_FIRCLPEN_SHIFT               (2U)
#define SCG_FIRCCSR_FIRCLPEN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCLPEN_SHIFT)) & SCG_FIRCCSR_FIRCLPEN_MASK)
#define SCG_FIRCCSR_FIRCREGOFF_MASK              (0x8U)
#define SCG_FIRCCSR_FIRCREGOFF_SHIFT             (3U)
#define SCG_FIRCCSR_FIRCREGOFF(x)                (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCREGOFF_SHIFT)) & SCG_FIRCCSR_FIRCREGOFF_MASK)
#define SCG_FIRCCSR_FIRCTREN_MASK                (0x100U)
#define SCG_FIRCCSR_FIRCTREN_SHIFT               (8U)
#define SCG_FIRCCSR_FIRCTREN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCTREN_SHIFT)) & SCG_FIRCCSR_FIRCTREN_MASK)
#define SCG_FIRCCSR_FIRCTRUP_MASK                (0x200U)
#define SCG_FIRCCSR_FIRCTRUP_SHIFT               (9U)
#define SCG_FIRCCSR_FIRCTRUP(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCTRUP_SHIFT)) & SCG_FIRCCSR_FIRCTRUP_MASK)
#define SCG_FIRCCSR_LK_MASK                      (0x800000U)
#define SCG_FIRCCSR_LK_SHIFT                     (23U)
#define SCG_FIRCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_LK_SHIFT)) & SCG_FIRCCSR_LK_MASK)
#define SCG_FIRCCSR_FIRCVLD_MASK                 (0x1000000U)
#define SCG_FIRCCSR_FIRCVLD_SHIFT                (24U)
#define SCG_FIRCCSR_FIRCVLD(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCVLD_SHIFT)) & SCG_FIRCCSR_FIRCVLD_MASK)
#define SCG_FIRCCSR_FIRCSEL_MASK                 (0x2000000U)
#define SCG_FIRCCSR_FIRCSEL_SHIFT                (25U)
#define SCG_FIRCCSR_FIRCSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCSEL_SHIFT)) & SCG_FIRCCSR_FIRCSEL_MASK)
#define SCG_FIRCCSR_FIRCERR_MASK                 (0x4000000U)
#define SCG_FIRCCSR_FIRCERR_SHIFT                (26U)
#define SCG_FIRCCSR_FIRCERR(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCSR_FIRCERR_SHIFT)) & SCG_FIRCCSR_FIRCERR_MASK)

/*! @name FIRCDIV - Fast IRC Divide Register */
#define SCG_FIRCDIV_FIRCDIV1_MASK                (0x7U)
#define SCG_FIRCDIV_FIRCDIV1_SHIFT               (0U)
#define SCG_FIRCDIV_FIRCDIV1(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCDIV_FIRCDIV1_SHIFT)) & SCG_FIRCDIV_FIRCDIV1_MASK)
#define SCG_FIRCDIV_FIRCDIV2_MASK                (0x700U)
#define SCG_FIRCDIV_FIRCDIV2_SHIFT               (8U)
#define SCG_FIRCDIV_FIRCDIV2(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCDIV_FIRCDIV2_SHIFT)) & SCG_FIRCDIV_FIRCDIV2_MASK)
#define SCG_FIRCDIV_FIRCDIV3_MASK                (0x70000U)
#define SCG_FIRCDIV_FIRCDIV3_SHIFT               (16U)
#define SCG_FIRCDIV_FIRCDIV3(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCDIV_FIRCDIV3_SHIFT)) & SCG_FIRCDIV_FIRCDIV3_MASK)

/*! @name FIRCCFG - Fast IRC Configuration Register */
#define SCG_FIRCCFG_RANGE_MASK                   (0x3U)
#define SCG_FIRCCFG_RANGE_SHIFT                  (0U)
#define SCG_FIRCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x)) << SCG_FIRCCFG_RANGE_SHIFT)) & SCG_FIRCCFG_RANGE_MASK)

/*! @name FIRCTCFG - Fast IRC Trim Configuration Register */
#define SCG_FIRCTCFG_TRIMSRC_MASK                (0x3U)
#define SCG_FIRCTCFG_TRIMSRC_SHIFT               (0U)
#define SCG_FIRCTCFG_TRIMSRC(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCTCFG_TRIMSRC_SHIFT)) & SCG_FIRCTCFG_TRIMSRC_MASK)
#define SCG_FIRCTCFG_TRIMDIV_MASK                (0x700U)
#define SCG_FIRCTCFG_TRIMDIV_SHIFT               (8U)
#define SCG_FIRCTCFG_TRIMDIV(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_FIRCTCFG_TRIMDIV_SHIFT)) & SCG_FIRCTCFG_TRIMDIV_MASK)

/*! @name FIRCSTAT - Fast IRC Status Register */
#define SCG_FIRCSTAT_TRIMFINE_MASK               (0x7FU)
#define SCG_FIRCSTAT_TRIMFINE_SHIFT              (0U)
#define SCG_FIRCSTAT_TRIMFINE(x)                 (((uint32_t)(((uint32_t)(x)) << SCG_FIRCSTAT_TRIMFINE_SHIFT)) & SCG_FIRCSTAT_TRIMFINE_MASK)
#define SCG_FIRCSTAT_TRIMCOAR_MASK               (0x3F00U)
#define SCG_FIRCSTAT_TRIMCOAR_SHIFT              (8U)
#define SCG_FIRCSTAT_TRIMCOAR(x)                 (((uint32_t)(((uint32_t)(x)) << SCG_FIRCSTAT_TRIMCOAR_SHIFT)) & SCG_FIRCSTAT_TRIMCOAR_MASK)

/*! @name ROSCCSR - RTC OSC Control Status Register */
#define SCG_ROSCCSR_ROSCCM_MASK                  (0x10000U)
#define SCG_ROSCCSR_ROSCCM_SHIFT                 (16U)
#define SCG_ROSCCSR_ROSCCM(x)                    (((uint32_t)(((uint32_t)(x)) << SCG_ROSCCSR_ROSCCM_SHIFT)) & SCG_ROSCCSR_ROSCCM_MASK)
#define SCG_ROSCCSR_ROSCCMRE_MASK                (0x20000U)
#define SCG_ROSCCSR_ROSCCMRE_SHIFT               (17U)
#define SCG_ROSCCSR_ROSCCMRE(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_ROSCCSR_ROSCCMRE_SHIFT)) & SCG_ROSCCSR_ROSCCMRE_MASK)
#define SCG_ROSCCSR_LK_MASK                      (0x800000U)
#define SCG_ROSCCSR_LK_SHIFT                     (23U)
#define SCG_ROSCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x)) << SCG_ROSCCSR_LK_SHIFT)) & SCG_ROSCCSR_LK_MASK)
#define SCG_ROSCCSR_ROSCVLD_MASK                 (0x1000000U)
#define SCG_ROSCCSR_ROSCVLD_SHIFT                (24U)
#define SCG_ROSCCSR_ROSCVLD(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_ROSCCSR_ROSCVLD_SHIFT)) & SCG_ROSCCSR_ROSCVLD_MASK)
#define SCG_ROSCCSR_ROSCSEL_MASK                 (0x2000000U)
#define SCG_ROSCCSR_ROSCSEL_SHIFT                (25U)
#define SCG_ROSCCSR_ROSCSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_ROSCCSR_ROSCSEL_SHIFT)) & SCG_ROSCCSR_ROSCSEL_MASK)
#define SCG_ROSCCSR_ROSCERR_MASK                 (0x4000000U)
#define SCG_ROSCCSR_ROSCERR_SHIFT                (26U)
#define SCG_ROSCCSR_ROSCERR(x)                   (((uint32_t)(((uint32_t)(x)) << SCG_ROSCCSR_ROSCERR_SHIFT)) & SCG_ROSCCSR_ROSCERR_MASK)

/*! @name LPFLLCSR - Low Power FLL Control Status Register */
#define SCG_LPFLLCSR_LPFLLEN_MASK                (0x1U)
#define SCG_LPFLLCSR_LPFLLEN_SHIFT               (0U)
#define SCG_LPFLLCSR_LPFLLEN(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLEN_SHIFT)) & SCG_LPFLLCSR_LPFLLEN_MASK)
#define SCG_LPFLLCSR_LPFLLSTEN_MASK              (0x2U)
#define SCG_LPFLLCSR_LPFLLSTEN_SHIFT             (1U)
#define SCG_LPFLLCSR_LPFLLSTEN(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLSTEN_SHIFT)) & SCG_LPFLLCSR_LPFLLSTEN_MASK)
#define SCG_LPFLLCSR_LPFLLTREN_MASK              (0x100U)
#define SCG_LPFLLCSR_LPFLLTREN_SHIFT             (8U)
#define SCG_LPFLLCSR_LPFLLTREN(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLTREN_SHIFT)) & SCG_LPFLLCSR_LPFLLTREN_MASK)
#define SCG_LPFLLCSR_LPFLLTRUP_MASK              (0x200U)
#define SCG_LPFLLCSR_LPFLLTRUP_SHIFT             (9U)
#define SCG_LPFLLCSR_LPFLLTRUP(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLTRUP_SHIFT)) & SCG_LPFLLCSR_LPFLLTRUP_MASK)
#define SCG_LPFLLCSR_LPFLLTRMLOCK_MASK           (0x400U)
#define SCG_LPFLLCSR_LPFLLTRMLOCK_SHIFT          (10U)
#define SCG_LPFLLCSR_LPFLLTRMLOCK(x)             (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLTRMLOCK_SHIFT)) & SCG_LPFLLCSR_LPFLLTRMLOCK_MASK)
#define SCG_LPFLLCSR_LPFLLCM_MASK                (0x10000U)
#define SCG_LPFLLCSR_LPFLLCM_SHIFT               (16U)
#define SCG_LPFLLCSR_LPFLLCM(x)                  (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLCM_SHIFT)) & SCG_LPFLLCSR_LPFLLCM_MASK)
#define SCG_LPFLLCSR_LPFLLCMRE_MASK              (0x20000U)
#define SCG_LPFLLCSR_LPFLLCMRE_SHIFT             (17U)
#define SCG_LPFLLCSR_LPFLLCMRE(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLCMRE_SHIFT)) & SCG_LPFLLCSR_LPFLLCMRE_MASK)
#define SCG_LPFLLCSR_LK_MASK                     (0x800000U)
#define SCG_LPFLLCSR_LK_SHIFT                    (23U)
#define SCG_LPFLLCSR_LK(x)                       (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LK_SHIFT)) & SCG_LPFLLCSR_LK_MASK)
#define SCG_LPFLLCSR_LPFLLVLD_MASK               (0x1000000U)
#define SCG_LPFLLCSR_LPFLLVLD_SHIFT              (24U)
#define SCG_LPFLLCSR_LPFLLVLD(x)                 (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLVLD_SHIFT)) & SCG_LPFLLCSR_LPFLLVLD_MASK)
#define SCG_LPFLLCSR_LPFLLSEL_MASK               (0x2000000U)
#define SCG_LPFLLCSR_LPFLLSEL_SHIFT              (25U)
#define SCG_LPFLLCSR_LPFLLSEL(x)                 (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLSEL_SHIFT)) & SCG_LPFLLCSR_LPFLLSEL_MASK)
#define SCG_LPFLLCSR_LPFLLERR_MASK               (0x4000000U)
#define SCG_LPFLLCSR_LPFLLERR_SHIFT              (26U)
#define SCG_LPFLLCSR_LPFLLERR(x)                 (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCSR_LPFLLERR_SHIFT)) & SCG_LPFLLCSR_LPFLLERR_MASK)

/*! @name LPFLLDIV - Low Power FLL Divide Register */
#define SCG_LPFLLDIV_LPFLLDIV1_MASK              (0x7U)
#define SCG_LPFLLDIV_LPFLLDIV1_SHIFT             (0U)
#define SCG_LPFLLDIV_LPFLLDIV1(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLDIV_LPFLLDIV1_SHIFT)) & SCG_LPFLLDIV_LPFLLDIV1_MASK)
#define SCG_LPFLLDIV_LPFLLDIV2_MASK              (0x700U)
#define SCG_LPFLLDIV_LPFLLDIV2_SHIFT             (8U)
#define SCG_LPFLLDIV_LPFLLDIV2(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLDIV_LPFLLDIV2_SHIFT)) & SCG_LPFLLDIV_LPFLLDIV2_MASK)
#define SCG_LPFLLDIV_LPFLLDIV3_MASK              (0x70000U)
#define SCG_LPFLLDIV_LPFLLDIV3_SHIFT             (16U)
#define SCG_LPFLLDIV_LPFLLDIV3(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLDIV_LPFLLDIV3_SHIFT)) & SCG_LPFLLDIV_LPFLLDIV3_MASK)

/*! @name LPFLLCFG - Low Power FLL Configuration Register */
#define SCG_LPFLLCFG_FSEL_MASK                   (0x3U)
#define SCG_LPFLLCFG_FSEL_SHIFT                  (0U)
#define SCG_LPFLLCFG_FSEL(x)                     (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLCFG_FSEL_SHIFT)) & SCG_LPFLLCFG_FSEL_MASK)

/*! @name LPFLLTCFG - Low Power FLL Trim Configuration Register */
#define SCG_LPFLLTCFG_TRIMSRC_MASK               (0x3U)
#define SCG_LPFLLTCFG_TRIMSRC_SHIFT              (0U)
#define SCG_LPFLLTCFG_TRIMSRC(x)                 (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLTCFG_TRIMSRC_SHIFT)) & SCG_LPFLLTCFG_TRIMSRC_MASK)
#define SCG_LPFLLTCFG_TRIMDIV_MASK               (0x1F00U)
#define SCG_LPFLLTCFG_TRIMDIV_SHIFT              (8U)
#define SCG_LPFLLTCFG_TRIMDIV(x)                 (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLTCFG_TRIMDIV_SHIFT)) & SCG_LPFLLTCFG_TRIMDIV_MASK)
#define SCG_LPFLLTCFG_LOCKW2LSB_MASK             (0x10000U)
#define SCG_LPFLLTCFG_LOCKW2LSB_SHIFT            (16U)
#define SCG_LPFLLTCFG_LOCKW2LSB(x)               (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLTCFG_LOCKW2LSB_SHIFT)) & SCG_LPFLLTCFG_LOCKW2LSB_MASK)

/*! @name LPFLLSTAT - Low Power FLL Status Register */
#define SCG_LPFLLSTAT_AUTOTRIM_MASK              (0xFFU)
#define SCG_LPFLLSTAT_AUTOTRIM_SHIFT             (0U)
#define SCG_LPFLLSTAT_AUTOTRIM(x)                (((uint32_t)(((uint32_t)(x)) << SCG_LPFLLSTAT_AUTOTRIM_SHIFT)) & SCG_LPFLLSTAT_AUTOTRIM_MASK)


/*!
 * @}
 */ /* end of group SCG_Register_Masks */


/* SCG - Peripheral instance base addresses */
/** Peripheral SCG base address */
#define SCG_BASE                                 (0x4002C000u)
/** Peripheral SCG base pointer */
#define SCG                                      ((SCG_Type *)SCG_BASE)
/** Array initializer of SCG peripheral base addresses */
#define SCG_BASE_ADDRS                           { SCG_BASE }
/** Array initializer of SCG peripheral base pointers */
#define SCG_BASE_PTRS                            { SCG }
/** Interrupt vectors for the SCG peripheral type */
#define SCG_IRQS                                 { SCG_IRQn }

/*!
 * @}
 */ /* end of group SCG_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- SEMA42 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SEMA42_Peripheral_Access_Layer SEMA42 Peripheral Access Layer
 * @{
 */

/** SEMA42 - Register Layout Typedef */
typedef struct {
  __IO uint8_t GATE3;                              /**< Gate Register, offset: 0x0 */
  __IO uint8_t GATE2;                              /**< Gate Register, offset: 0x1 */
  __IO uint8_t GATE1;                              /**< Gate Register, offset: 0x2 */
  __IO uint8_t GATE0;                              /**< Gate Register, offset: 0x3 */
  __IO uint8_t GATE7;                              /**< Gate Register, offset: 0x4 */
  __IO uint8_t GATE6;                              /**< Gate Register, offset: 0x5 */
  __IO uint8_t GATE5;                              /**< Gate Register, offset: 0x6 */
  __IO uint8_t GATE4;                              /**< Gate Register, offset: 0x7 */
  __IO uint8_t GATE11;                             /**< Gate Register, offset: 0x8 */
  __IO uint8_t GATE10;                             /**< Gate Register, offset: 0x9 */
  __IO uint8_t GATE9;                              /**< Gate Register, offset: 0xA */
  __IO uint8_t GATE8;                              /**< Gate Register, offset: 0xB */
  __IO uint8_t GATE15;                             /**< Gate Register, offset: 0xC */
  __IO uint8_t GATE14;                             /**< Gate Register, offset: 0xD */
  __IO uint8_t GATE13;                             /**< Gate Register, offset: 0xE */
  __IO uint8_t GATE12;                             /**< Gate Register, offset: 0xF */
       uint8_t RESERVED_0[50];
  union {                                          /* offset: 0x42 */
    __I  uint16_t RSTGT_R;                           /**< Reset Gate Read, offset: 0x42 */
    __O  uint16_t RSTGT_W;                           /**< Reset Gate Write, offset: 0x42 */
  };
} SEMA42_Type;

/* ----------------------------------------------------------------------------
   -- SEMA42 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SEMA42_Register_Masks SEMA42 Register Masks
 * @{
 */

/*! @name GATE3 - Gate Register */
#define SEMA42_GATE3_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE3_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE3_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE3_GTFSM_SHIFT)) & SEMA42_GATE3_GTFSM_MASK)

/*! @name GATE2 - Gate Register */
#define SEMA42_GATE2_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE2_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE2_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE2_GTFSM_SHIFT)) & SEMA42_GATE2_GTFSM_MASK)

/*! @name GATE1 - Gate Register */
#define SEMA42_GATE1_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE1_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE1_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE1_GTFSM_SHIFT)) & SEMA42_GATE1_GTFSM_MASK)

/*! @name GATE0 - Gate Register */
#define SEMA42_GATE0_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE0_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE0_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE0_GTFSM_SHIFT)) & SEMA42_GATE0_GTFSM_MASK)

/*! @name GATE7 - Gate Register */
#define SEMA42_GATE7_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE7_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE7_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE7_GTFSM_SHIFT)) & SEMA42_GATE7_GTFSM_MASK)

/*! @name GATE6 - Gate Register */
#define SEMA42_GATE6_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE6_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE6_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE6_GTFSM_SHIFT)) & SEMA42_GATE6_GTFSM_MASK)

/*! @name GATE5 - Gate Register */
#define SEMA42_GATE5_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE5_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE5_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE5_GTFSM_SHIFT)) & SEMA42_GATE5_GTFSM_MASK)

/*! @name GATE4 - Gate Register */
#define SEMA42_GATE4_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE4_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE4_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE4_GTFSM_SHIFT)) & SEMA42_GATE4_GTFSM_MASK)

/*! @name GATE11 - Gate Register */
#define SEMA42_GATE11_GTFSM_MASK                 (0xFU)
#define SEMA42_GATE11_GTFSM_SHIFT                (0U)
#define SEMA42_GATE11_GTFSM(x)                   (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE11_GTFSM_SHIFT)) & SEMA42_GATE11_GTFSM_MASK)

/*! @name GATE10 - Gate Register */
#define SEMA42_GATE10_GTFSM_MASK                 (0xFU)
#define SEMA42_GATE10_GTFSM_SHIFT                (0U)
#define SEMA42_GATE10_GTFSM(x)                   (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE10_GTFSM_SHIFT)) & SEMA42_GATE10_GTFSM_MASK)

/*! @name GATE9 - Gate Register */
#define SEMA42_GATE9_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE9_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE9_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE9_GTFSM_SHIFT)) & SEMA42_GATE9_GTFSM_MASK)

/*! @name GATE8 - Gate Register */
#define SEMA42_GATE8_GTFSM_MASK                  (0xFU)
#define SEMA42_GATE8_GTFSM_SHIFT                 (0U)
#define SEMA42_GATE8_GTFSM(x)                    (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE8_GTFSM_SHIFT)) & SEMA42_GATE8_GTFSM_MASK)

/*! @name GATE15 - Gate Register */
#define SEMA42_GATE15_GTFSM_MASK                 (0xFU)
#define SEMA42_GATE15_GTFSM_SHIFT                (0U)
#define SEMA42_GATE15_GTFSM(x)                   (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE15_GTFSM_SHIFT)) & SEMA42_GATE15_GTFSM_MASK)

/*! @name GATE14 - Gate Register */
#define SEMA42_GATE14_GTFSM_MASK                 (0xFU)
#define SEMA42_GATE14_GTFSM_SHIFT                (0U)
#define SEMA42_GATE14_GTFSM(x)                   (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE14_GTFSM_SHIFT)) & SEMA42_GATE14_GTFSM_MASK)

/*! @name GATE13 - Gate Register */
#define SEMA42_GATE13_GTFSM_MASK                 (0xFU)
#define SEMA42_GATE13_GTFSM_SHIFT                (0U)
#define SEMA42_GATE13_GTFSM(x)                   (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE13_GTFSM_SHIFT)) & SEMA42_GATE13_GTFSM_MASK)

/*! @name GATE12 - Gate Register */
#define SEMA42_GATE12_GTFSM_MASK                 (0xFU)
#define SEMA42_GATE12_GTFSM_SHIFT                (0U)
#define SEMA42_GATE12_GTFSM(x)                   (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE12_GTFSM_SHIFT)) & SEMA42_GATE12_GTFSM_MASK)

/*! @name RSTGT_R - Reset Gate Read */
#define SEMA42_RSTGT_R_RSTGTN_MASK               (0xFFU)
#define SEMA42_RSTGT_R_RSTGTN_SHIFT              (0U)
#define SEMA42_RSTGT_R_RSTGTN(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_RSTGTN_SHIFT)) & SEMA42_RSTGT_R_RSTGTN_MASK)
#define SEMA42_RSTGT_R_RSTGMS_MASK               (0xF00U)
#define SEMA42_RSTGT_R_RSTGMS_SHIFT              (8U)
#define SEMA42_RSTGT_R_RSTGMS(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_RSTGMS_SHIFT)) & SEMA42_RSTGT_R_RSTGMS_MASK)
#define SEMA42_RSTGT_R_RSTGSM_MASK               (0x3000U)
#define SEMA42_RSTGT_R_RSTGSM_SHIFT              (12U)
#define SEMA42_RSTGT_R_RSTGSM(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_RSTGSM_SHIFT)) & SEMA42_RSTGT_R_RSTGSM_MASK)
#define SEMA42_RSTGT_R_ROZ_MASK                  (0xC000U)
#define SEMA42_RSTGT_R_ROZ_SHIFT                 (14U)
#define SEMA42_RSTGT_R_ROZ(x)                    (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_ROZ_SHIFT)) & SEMA42_RSTGT_R_ROZ_MASK)

/*! @name RSTGT_W - Reset Gate Write */
#define SEMA42_RSTGT_W_RSTGTN_MASK               (0xFFU)
#define SEMA42_RSTGT_W_RSTGTN_SHIFT              (0U)
#define SEMA42_RSTGT_W_RSTGTN(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_W_RSTGTN_SHIFT)) & SEMA42_RSTGT_W_RSTGTN_MASK)
#define SEMA42_RSTGT_W_RSTGDP_MASK               (0xFF00U)
#define SEMA42_RSTGT_W_RSTGDP_SHIFT              (8U)
#define SEMA42_RSTGT_W_RSTGDP(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_W_RSTGDP_SHIFT)) & SEMA42_RSTGT_W_RSTGDP_MASK)


/*!
 * @}
 */ /* end of group SEMA42_Register_Masks */


/* SEMA42 - Peripheral instance base addresses */
/** Peripheral SEMA420 base address */
#define SEMA420_BASE                             (0x4001B000u)
/** Peripheral SEMA420 base pointer */
#define SEMA420                                  ((SEMA42_Type *)SEMA420_BASE)
/** Peripheral SEMA421 base address */
#define SEMA421_BASE                             (0x4101B000u)
/** Peripheral SEMA421 base pointer */
#define SEMA421                                  ((SEMA42_Type *)SEMA421_BASE)
/** Array initializer of SEMA42 peripheral base addresses */
#define SEMA42_BASE_ADDRS                        { SEMA420_BASE, SEMA421_BASE }
/** Array initializer of SEMA42 peripheral base pointers */
#define SEMA42_BASE_PTRS                         { SEMA420, SEMA421 }

/*!
 * @}
 */ /* end of group SEMA42_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- SIM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIM_Peripheral_Access_Layer SIM Peripheral Access Layer
 * @{
 */

/** SIM - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[4];
  __IO uint32_t CHIPCTRL;                          /**< Chip Control Register, offset: 0x4 */
       uint8_t RESERVED_1[28];
  __I  uint32_t SDID;                              /**< System Device Identification Register, offset: 0x24 */
       uint8_t RESERVED_2[36];
  __IO uint32_t FCFG1;                             /**< Flash Configuration Register 1, offset: 0x4C */
  __I  uint32_t FCFG2;                             /**< Flash Configuration Register 2, offset: 0x50 */
       uint8_t RESERVED_3[4];
  __I  uint32_t UIDH;                              /**< Unique Identification Register High, offset: 0x58 */
  __I  uint32_t UIDM;                              /**< Unique Identification Register Mid Middle, offset: 0x5C */
  __I  uint32_t UIDL;                              /**< Unique Identification Register Mid Low, offset: 0x60 */
  __I  uint32_t RFADDRL;                           /**< RF Mac Address Low, offset: 0x64 */
  __I  uint32_t RFADDRH;                           /**< RF MAC Address High, offset: 0x68 */
       uint8_t RESERVED_4[4];
  __IO uint32_t MISC2;                             /**< MISC2 Register, offset: 0x70 */
} SIM_Type;

/* ----------------------------------------------------------------------------
   -- SIM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIM_Register_Masks SIM Register Masks
 * @{
 */

/*! @name CHIPCTRL - Chip Control Register */
#define SIM_CHIPCTRL_FBSL_MASK                   (0x300U)
#define SIM_CHIPCTRL_FBSL_SHIFT                  (8U)
#define SIM_CHIPCTRL_FBSL(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_CHIPCTRL_FBSL_SHIFT)) & SIM_CHIPCTRL_FBSL_MASK)

/*! @name SDID - System Device Identification Register */
#define SIM_SDID_PINID_MASK                      (0xFU)
#define SIM_SDID_PINID_SHIFT                     (0U)
#define SIM_SDID_PINID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_PINID_SHIFT)) & SIM_SDID_PINID_MASK)
#define SIM_SDID_DIEID_MASK                      (0xF80U)
#define SIM_SDID_DIEID_SHIFT                     (7U)
#define SIM_SDID_DIEID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_DIEID_SHIFT)) & SIM_SDID_DIEID_MASK)
#define SIM_SDID_REVID_MASK                      (0xF000U)
#define SIM_SDID_REVID_SHIFT                     (12U)
#define SIM_SDID_REVID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_REVID_SHIFT)) & SIM_SDID_REVID_MASK)
#define SIM_SDID_SERIESID_MASK                   (0xF00000U)
#define SIM_SDID_SERIESID_SHIFT                  (20U)
#define SIM_SDID_SERIESID(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SDID_SERIESID_SHIFT)) & SIM_SDID_SERIESID_MASK)
#define SIM_SDID_SUBFAMID_MASK                   (0xF000000U)
#define SIM_SDID_SUBFAMID_SHIFT                  (24U)
#define SIM_SDID_SUBFAMID(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SDID_SUBFAMID_SHIFT)) & SIM_SDID_SUBFAMID_MASK)
#define SIM_SDID_FAMID_MASK                      (0xF0000000U)
#define SIM_SDID_FAMID_SHIFT                     (28U)
#define SIM_SDID_FAMID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_FAMID_SHIFT)) & SIM_SDID_FAMID_MASK)

/*! @name FCFG1 - Flash Configuration Register 1 */
#define SIM_FCFG1_FLASHDIS_MASK                  (0x1U)
#define SIM_FCFG1_FLASHDIS_SHIFT                 (0U)
#define SIM_FCFG1_FLASHDIS(x)                    (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_FLASHDIS_SHIFT)) & SIM_FCFG1_FLASHDIS_MASK)
#define SIM_FCFG1_FLASHDOZE_MASK                 (0x2U)
#define SIM_FCFG1_FLASHDOZE_SHIFT                (1U)
#define SIM_FCFG1_FLASHDOZE(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_FLASHDOZE_SHIFT)) & SIM_FCFG1_FLASHDOZE_MASK)
#define SIM_FCFG1_FLSAUTODISEN_MASK              (0x4U)
#define SIM_FCFG1_FLSAUTODISEN_SHIFT             (2U)
#define SIM_FCFG1_FLSAUTODISEN(x)                (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_FLSAUTODISEN_SHIFT)) & SIM_FCFG1_FLSAUTODISEN_MASK)
#define SIM_FCFG1_FLSAUTODISWD_MASK              (0x3FF8U)
#define SIM_FCFG1_FLSAUTODISWD_SHIFT             (3U)
#define SIM_FCFG1_FLSAUTODISWD(x)                (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_FLSAUTODISWD_SHIFT)) & SIM_FCFG1_FLSAUTODISWD_MASK)
#define SIM_FCFG1_CORE1_SRAMSIZE_MASK            (0xF0000U)
#define SIM_FCFG1_CORE1_SRAMSIZE_SHIFT           (16U)
#define SIM_FCFG1_CORE1_SRAMSIZE(x)              (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_CORE1_SRAMSIZE_SHIFT)) & SIM_FCFG1_CORE1_SRAMSIZE_MASK)
#define SIM_FCFG1_CORE0_SRAMSIZE_MASK            (0xF00000U)
#define SIM_FCFG1_CORE0_SRAMSIZE_SHIFT           (20U)
#define SIM_FCFG1_CORE0_SRAMSIZE(x)              (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_CORE0_SRAMSIZE_SHIFT)) & SIM_FCFG1_CORE0_SRAMSIZE_MASK)
#define SIM_FCFG1_CORE1_PFSIZE_MASK              (0xF000000U)
#define SIM_FCFG1_CORE1_PFSIZE_SHIFT             (24U)
#define SIM_FCFG1_CORE1_PFSIZE(x)                (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_CORE1_PFSIZE_SHIFT)) & SIM_FCFG1_CORE1_PFSIZE_MASK)
#define SIM_FCFG1_CORE0_PFSIZE_MASK              (0xF0000000U)
#define SIM_FCFG1_CORE0_PFSIZE_SHIFT             (28U)
#define SIM_FCFG1_CORE0_PFSIZE(x)                (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_CORE0_PFSIZE_SHIFT)) & SIM_FCFG1_CORE0_PFSIZE_MASK)

/*! @name FCFG2 - Flash Configuration Register 2 */
#define SIM_FCFG2_MAXADDR2_MASK                  (0x3F0000U)
#define SIM_FCFG2_MAXADDR2_SHIFT                 (16U)
#define SIM_FCFG2_MAXADDR2(x)                    (((uint32_t)(((uint32_t)(x)) << SIM_FCFG2_MAXADDR2_SHIFT)) & SIM_FCFG2_MAXADDR2_MASK)
#define SIM_FCFG2_MAXADDR01_MASK                 (0x7F000000U)
#define SIM_FCFG2_MAXADDR01_SHIFT                (24U)
#define SIM_FCFG2_MAXADDR01(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_FCFG2_MAXADDR01_SHIFT)) & SIM_FCFG2_MAXADDR01_MASK)
#define SIM_FCFG2_SWAP_MASK                      (0x80000000U)
#define SIM_FCFG2_SWAP_SHIFT                     (31U)
#define SIM_FCFG2_SWAP(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_FCFG2_SWAP_SHIFT)) & SIM_FCFG2_SWAP_MASK)

/*! @name UIDH - Unique Identification Register High */
#define SIM_UIDH_UID_MASK                        (0xFFFFU)
#define SIM_UIDH_UID_SHIFT                       (0U)
#define SIM_UIDH_UID(x)                          (((uint32_t)(((uint32_t)(x)) << SIM_UIDH_UID_SHIFT)) & SIM_UIDH_UID_MASK)

/*! @name UIDM - Unique Identification Register Mid Middle */
#define SIM_UIDM_UID_MASK                        (0xFFFFFFFFU)
#define SIM_UIDM_UID_SHIFT                       (0U)
#define SIM_UIDM_UID(x)                          (((uint32_t)(((uint32_t)(x)) << SIM_UIDM_UID_SHIFT)) & SIM_UIDM_UID_MASK)

/*! @name UIDL - Unique Identification Register Mid Low */
#define SIM_UIDL_UID_MASK                        (0xFFFFFFFFU)
#define SIM_UIDL_UID_SHIFT                       (0U)
#define SIM_UIDL_UID(x)                          (((uint32_t)(((uint32_t)(x)) << SIM_UIDL_UID_SHIFT)) & SIM_UIDL_UID_MASK)

/*! @name RFADDRL - RF Mac Address Low */
#define SIM_RFADDRL_MACADDR0_MASK                (0xFFU)
#define SIM_RFADDRL_MACADDR0_SHIFT               (0U)
#define SIM_RFADDRL_MACADDR0(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_RFADDRL_MACADDR0_SHIFT)) & SIM_RFADDRL_MACADDR0_MASK)
#define SIM_RFADDRL_MACADDR1_MASK                (0xFF00U)
#define SIM_RFADDRL_MACADDR1_SHIFT               (8U)
#define SIM_RFADDRL_MACADDR1(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_RFADDRL_MACADDR1_SHIFT)) & SIM_RFADDRL_MACADDR1_MASK)
#define SIM_RFADDRL_MACADDR2_MASK                (0xFF0000U)
#define SIM_RFADDRL_MACADDR2_SHIFT               (16U)
#define SIM_RFADDRL_MACADDR2(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_RFADDRL_MACADDR2_SHIFT)) & SIM_RFADDRL_MACADDR2_MASK)
#define SIM_RFADDRL_MACADDR3_MASK                (0xFF000000U)
#define SIM_RFADDRL_MACADDR3_SHIFT               (24U)
#define SIM_RFADDRL_MACADDR3(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_RFADDRL_MACADDR3_SHIFT)) & SIM_RFADDRL_MACADDR3_MASK)

/*! @name RFADDRH - RF MAC Address High */
#define SIM_RFADDRH_MACADDR4_MASK                (0xFFU)
#define SIM_RFADDRH_MACADDR4_SHIFT               (0U)
#define SIM_RFADDRH_MACADDR4(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_RFADDRH_MACADDR4_SHIFT)) & SIM_RFADDRH_MACADDR4_MASK)

/*! @name MISC2 - MISC2 Register */
#define SIM_MISC2_SYSTICK_CLK_EN_MASK            (0x1U)
#define SIM_MISC2_SYSTICK_CLK_EN_SHIFT           (0U)
#define SIM_MISC2_SYSTICK_CLK_EN(x)              (((uint32_t)(((uint32_t)(x)) << SIM_MISC2_SYSTICK_CLK_EN_SHIFT)) & SIM_MISC2_SYSTICK_CLK_EN_MASK)


/*!
 * @}
 */ /* end of group SIM_Register_Masks */


/* SIM - Peripheral instance base addresses */
/** Peripheral SIM base address */
#define SIM_BASE                                 (0x40026000u)
/** Peripheral SIM base pointer */
#define SIM                                      ((SIM_Type *)SIM_BASE)
/** Array initializer of SIM peripheral base addresses */
#define SIM_BASE_ADDRS                           { SIM_BASE }
/** Array initializer of SIM peripheral base pointers */
#define SIM_BASE_PTRS                            { SIM }

/*!
 * @}
 */ /* end of group SIM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- SMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SMC_Peripheral_Access_Layer SMC Peripheral Access Layer
 * @{
 */

/** SMC - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t PMPROT;                            /**< Power Mode Protection register, offset: 0x8 */
       uint8_t RESERVED_0[4];
  __IO uint32_t PMCTRL;                            /**< Power Mode Control register, offset: 0x10 */
       uint8_t RESERVED_1[4];
  __IO uint32_t PMSTAT;                            /**< Power Mode Status register, offset: 0x18 */
       uint8_t RESERVED_2[4];
  __I  uint32_t SRS;                               /**< System Reset Status, offset: 0x20 */
  __IO uint32_t RPC;                               /**< Reset Pin Control, offset: 0x24 */
  __IO uint32_t SSRS;                              /**< Sticky System Reset Status, offset: 0x28 */
  __IO uint32_t SRIE;                              /**< System Reset Interrupt Enable, offset: 0x2C */
  __IO uint32_t SRIF;                              /**< System Reset Interrupt Flag, offset: 0x30 */
       uint8_t RESERVED_3[12];
  __IO uint32_t MR;                                /**< Mode Register, offset: 0x40 */
       uint8_t RESERVED_4[12];
  __IO uint32_t FM;                                /**< Force Mode Register, offset: 0x50 */
       uint8_t RESERVED_5[12];
  __IO uint32_t SRAMLPR;                           /**< SRAM Low Power Register, offset: 0x60 */
  __IO uint32_t SRAMDSR;                           /**< SRAM Deep Sleep Register, offset: 0x64 */
} SMC_Type;

/* ----------------------------------------------------------------------------
   -- SMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SMC_Register_Masks SMC Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define SMC_VERID_FEATURE_MASK                   (0xFFFFU)
#define SMC_VERID_FEATURE_SHIFT                  (0U)
#define SMC_VERID_FEATURE(x)                     (((uint32_t)(((uint32_t)(x)) << SMC_VERID_FEATURE_SHIFT)) & SMC_VERID_FEATURE_MASK)
#define SMC_VERID_MINOR_MASK                     (0xFF0000U)
#define SMC_VERID_MINOR_SHIFT                    (16U)
#define SMC_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_VERID_MINOR_SHIFT)) & SMC_VERID_MINOR_MASK)
#define SMC_VERID_MAJOR_MASK                     (0xFF000000U)
#define SMC_VERID_MAJOR_SHIFT                    (24U)
#define SMC_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_VERID_MAJOR_SHIFT)) & SMC_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define SMC_PARAM_PWRD_INDPT_MASK                (0x1U)
#define SMC_PARAM_PWRD_INDPT_SHIFT               (0U)
#define SMC_PARAM_PWRD_INDPT(x)                  (((uint32_t)(((uint32_t)(x)) << SMC_PARAM_PWRD_INDPT_SHIFT)) & SMC_PARAM_PWRD_INDPT_MASK)

/*! @name PMPROT - Power Mode Protection register */
#define SMC_PMPROT_AVLLS_MASK                    (0x3U)
#define SMC_PMPROT_AVLLS_SHIFT                   (0U)
#define SMC_PMPROT_AVLLS(x)                      (((uint32_t)(((uint32_t)(x)) << SMC_PMPROT_AVLLS_SHIFT)) & SMC_PMPROT_AVLLS_MASK)
#define SMC_PMPROT_ALLS_MASK                     (0x8U)
#define SMC_PMPROT_ALLS_SHIFT                    (3U)
#define SMC_PMPROT_ALLS(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_PMPROT_ALLS_SHIFT)) & SMC_PMPROT_ALLS_MASK)
#define SMC_PMPROT_AVLP_MASK                     (0x20U)
#define SMC_PMPROT_AVLP_SHIFT                    (5U)
#define SMC_PMPROT_AVLP(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_PMPROT_AVLP_SHIFT)) & SMC_PMPROT_AVLP_MASK)
#define SMC_PMPROT_AHSRUN_MASK                   (0x80U)
#define SMC_PMPROT_AHSRUN_SHIFT                  (7U)
#define SMC_PMPROT_AHSRUN(x)                     (((uint32_t)(((uint32_t)(x)) << SMC_PMPROT_AHSRUN_SHIFT)) & SMC_PMPROT_AHSRUN_MASK)

/*! @name PMCTRL - Power Mode Control register */
#define SMC_PMCTRL_STOPM_MASK                    (0x7U)
#define SMC_PMCTRL_STOPM_SHIFT                   (0U)
#define SMC_PMCTRL_STOPM(x)                      (((uint32_t)(((uint32_t)(x)) << SMC_PMCTRL_STOPM_SHIFT)) & SMC_PMCTRL_STOPM_MASK)
#define SMC_PMCTRL_RUNM_MASK                     (0x300U)
#define SMC_PMCTRL_RUNM_SHIFT                    (8U)
#define SMC_PMCTRL_RUNM(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_PMCTRL_RUNM_SHIFT)) & SMC_PMCTRL_RUNM_MASK)
#define SMC_PMCTRL_PSTOPO_MASK                   (0x30000U)
#define SMC_PMCTRL_PSTOPO_SHIFT                  (16U)
#define SMC_PMCTRL_PSTOPO(x)                     (((uint32_t)(((uint32_t)(x)) << SMC_PMCTRL_PSTOPO_SHIFT)) & SMC_PMCTRL_PSTOPO_MASK)

/*! @name PMSTAT - Power Mode Status register */
#define SMC_PMSTAT_PMSTAT_MASK                   (0xFFU)
#define SMC_PMSTAT_PMSTAT_SHIFT                  (0U)
#define SMC_PMSTAT_PMSTAT(x)                     (((uint32_t)(((uint32_t)(x)) << SMC_PMSTAT_PMSTAT_SHIFT)) & SMC_PMSTAT_PMSTAT_MASK)
#define SMC_PMSTAT_STOPSTAT_MASK                 (0xFF000000U)
#define SMC_PMSTAT_STOPSTAT_SHIFT                (24U)
#define SMC_PMSTAT_STOPSTAT(x)                   (((uint32_t)(((uint32_t)(x)) << SMC_PMSTAT_STOPSTAT_SHIFT)) & SMC_PMSTAT_STOPSTAT_MASK)

/*! @name SRS - System Reset Status */
#define SMC_SRS_WAKEUP_MASK                      (0x1U)
#define SMC_SRS_WAKEUP_SHIFT                     (0U)
#define SMC_SRS_WAKEUP(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SRS_WAKEUP_SHIFT)) & SMC_SRS_WAKEUP_MASK)
#define SMC_SRS_POR_MASK                         (0x2U)
#define SMC_SRS_POR_SHIFT                        (1U)
#define SMC_SRS_POR(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRS_POR_SHIFT)) & SMC_SRS_POR_MASK)
#define SMC_SRS_LVD_MASK                         (0x4U)
#define SMC_SRS_LVD_SHIFT                        (2U)
#define SMC_SRS_LVD(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRS_LVD_SHIFT)) & SMC_SRS_LVD_MASK)
#define SMC_SRS_HVD_MASK                         (0x8U)
#define SMC_SRS_HVD_SHIFT                        (3U)
#define SMC_SRS_HVD(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRS_HVD_SHIFT)) & SMC_SRS_HVD_MASK)
#define SMC_SRS_WARM_MASK                        (0x10U)
#define SMC_SRS_WARM_SHIFT                       (4U)
#define SMC_SRS_WARM(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRS_WARM_SHIFT)) & SMC_SRS_WARM_MASK)
#define SMC_SRS_FATAL_MASK                       (0x20U)
#define SMC_SRS_FATAL_SHIFT                      (5U)
#define SMC_SRS_FATAL(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SRS_FATAL_SHIFT)) & SMC_SRS_FATAL_MASK)
#define SMC_SRS_CORE_MASK                        (0x80U)
#define SMC_SRS_CORE_SHIFT                       (7U)
#define SMC_SRS_CORE(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRS_CORE_SHIFT)) & SMC_SRS_CORE_MASK)
#define SMC_SRS_PIN_MASK                         (0x100U)
#define SMC_SRS_PIN_SHIFT                        (8U)
#define SMC_SRS_PIN(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRS_PIN_SHIFT)) & SMC_SRS_PIN_MASK)
#define SMC_SRS_MDM_MASK                         (0x200U)
#define SMC_SRS_MDM_SHIFT                        (9U)
#define SMC_SRS_MDM(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRS_MDM_SHIFT)) & SMC_SRS_MDM_MASK)
#define SMC_SRS_RSTACK_MASK                      (0x400U)
#define SMC_SRS_RSTACK_SHIFT                     (10U)
#define SMC_SRS_RSTACK(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SRS_RSTACK_SHIFT)) & SMC_SRS_RSTACK_MASK)
#define SMC_SRS_STOPACK_MASK                     (0x800U)
#define SMC_SRS_STOPACK_SHIFT                    (11U)
#define SMC_SRS_STOPACK(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SRS_STOPACK_SHIFT)) & SMC_SRS_STOPACK_MASK)
#define SMC_SRS_SCG_MASK                         (0x1000U)
#define SMC_SRS_SCG_SHIFT                        (12U)
#define SMC_SRS_SCG(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRS_SCG_SHIFT)) & SMC_SRS_SCG_MASK)
#define SMC_SRS_WDOG_MASK                        (0x2000U)
#define SMC_SRS_WDOG_SHIFT                       (13U)
#define SMC_SRS_WDOG(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRS_WDOG_SHIFT)) & SMC_SRS_WDOG_MASK)
#define SMC_SRS_SW_MASK                          (0x4000U)
#define SMC_SRS_SW_SHIFT                         (14U)
#define SMC_SRS_SW(x)                            (((uint32_t)(((uint32_t)(x)) << SMC_SRS_SW_SHIFT)) & SMC_SRS_SW_MASK)
#define SMC_SRS_LOCKUP_MASK                      (0x8000U)
#define SMC_SRS_LOCKUP_SHIFT                     (15U)
#define SMC_SRS_LOCKUP(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SRS_LOCKUP_SHIFT)) & SMC_SRS_LOCKUP_MASK)
#define SMC_SRS_CORE0_MASK                       (0x10000U)
#define SMC_SRS_CORE0_SHIFT                      (16U)
#define SMC_SRS_CORE0(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SRS_CORE0_SHIFT)) & SMC_SRS_CORE0_MASK)
#define SMC_SRS_CORE1_MASK                       (0x20000U)
#define SMC_SRS_CORE1_SHIFT                      (17U)
#define SMC_SRS_CORE1(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SRS_CORE1_SHIFT)) & SMC_SRS_CORE1_MASK)
#define SMC_SRS_JTAG_MASK                        (0x10000000U)
#define SMC_SRS_JTAG_SHIFT                       (28U)
#define SMC_SRS_JTAG(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRS_JTAG_SHIFT)) & SMC_SRS_JTAG_MASK)

/*! @name RPC - Reset Pin Control */
#define SMC_RPC_FILTCFG_MASK                     (0x1FU)
#define SMC_RPC_FILTCFG_SHIFT                    (0U)
#define SMC_RPC_FILTCFG(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_RPC_FILTCFG_SHIFT)) & SMC_RPC_FILTCFG_MASK)
#define SMC_RPC_FILTEN_MASK                      (0x100U)
#define SMC_RPC_FILTEN_SHIFT                     (8U)
#define SMC_RPC_FILTEN(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_RPC_FILTEN_SHIFT)) & SMC_RPC_FILTEN_MASK)
#define SMC_RPC_LPOFEN_MASK                      (0x200U)
#define SMC_RPC_LPOFEN_SHIFT                     (9U)
#define SMC_RPC_LPOFEN(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_RPC_LPOFEN_SHIFT)) & SMC_RPC_LPOFEN_MASK)

/*! @name SSRS - Sticky System Reset Status */
#define SMC_SSRS_WAKEUP_MASK                     (0x1U)
#define SMC_SSRS_WAKEUP_SHIFT                    (0U)
#define SMC_SSRS_WAKEUP(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_WAKEUP_SHIFT)) & SMC_SSRS_WAKEUP_MASK)
#define SMC_SSRS_POR_MASK                        (0x2U)
#define SMC_SSRS_POR_SHIFT                       (1U)
#define SMC_SSRS_POR(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_POR_SHIFT)) & SMC_SSRS_POR_MASK)
#define SMC_SSRS_LVD_MASK                        (0x4U)
#define SMC_SSRS_LVD_SHIFT                       (2U)
#define SMC_SSRS_LVD(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_LVD_SHIFT)) & SMC_SSRS_LVD_MASK)
#define SMC_SSRS_HVD_MASK                        (0x8U)
#define SMC_SSRS_HVD_SHIFT                       (3U)
#define SMC_SSRS_HVD(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_HVD_SHIFT)) & SMC_SSRS_HVD_MASK)
#define SMC_SSRS_WARM_MASK                       (0x10U)
#define SMC_SSRS_WARM_SHIFT                      (4U)
#define SMC_SSRS_WARM(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_WARM_SHIFT)) & SMC_SSRS_WARM_MASK)
#define SMC_SSRS_FATAL_MASK                      (0x20U)
#define SMC_SSRS_FATAL_SHIFT                     (5U)
#define SMC_SSRS_FATAL(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_FATAL_SHIFT)) & SMC_SSRS_FATAL_MASK)
#define SMC_SSRS_PIN_MASK                        (0x100U)
#define SMC_SSRS_PIN_SHIFT                       (8U)
#define SMC_SSRS_PIN(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_PIN_SHIFT)) & SMC_SSRS_PIN_MASK)
#define SMC_SSRS_MDM_MASK                        (0x200U)
#define SMC_SSRS_MDM_SHIFT                       (9U)
#define SMC_SSRS_MDM(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_MDM_SHIFT)) & SMC_SSRS_MDM_MASK)
#define SMC_SSRS_RSTACK_MASK                     (0x400U)
#define SMC_SSRS_RSTACK_SHIFT                    (10U)
#define SMC_SSRS_RSTACK(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_RSTACK_SHIFT)) & SMC_SSRS_RSTACK_MASK)
#define SMC_SSRS_STOPACK_MASK                    (0x800U)
#define SMC_SSRS_STOPACK_SHIFT                   (11U)
#define SMC_SSRS_STOPACK(x)                      (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_STOPACK_SHIFT)) & SMC_SSRS_STOPACK_MASK)
#define SMC_SSRS_SCG_MASK                        (0x1000U)
#define SMC_SSRS_SCG_SHIFT                       (12U)
#define SMC_SSRS_SCG(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_SCG_SHIFT)) & SMC_SSRS_SCG_MASK)
#define SMC_SSRS_WDOG_MASK                       (0x2000U)
#define SMC_SSRS_WDOG_SHIFT                      (13U)
#define SMC_SSRS_WDOG(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_WDOG_SHIFT)) & SMC_SSRS_WDOG_MASK)
#define SMC_SSRS_SW_MASK                         (0x4000U)
#define SMC_SSRS_SW_SHIFT                        (14U)
#define SMC_SSRS_SW(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_SW_SHIFT)) & SMC_SSRS_SW_MASK)
#define SMC_SSRS_LOCKUP_MASK                     (0x8000U)
#define SMC_SSRS_LOCKUP_SHIFT                    (15U)
#define SMC_SSRS_LOCKUP(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_LOCKUP_SHIFT)) & SMC_SSRS_LOCKUP_MASK)
#define SMC_SSRS_CORE0_MASK                      (0x10000U)
#define SMC_SSRS_CORE0_SHIFT                     (16U)
#define SMC_SSRS_CORE0(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_CORE0_SHIFT)) & SMC_SSRS_CORE0_MASK)
#define SMC_SSRS_CORE1_MASK                      (0x20000U)
#define SMC_SSRS_CORE1_SHIFT                     (17U)
#define SMC_SSRS_CORE1(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_CORE1_SHIFT)) & SMC_SSRS_CORE1_MASK)
#define SMC_SSRS_JTAG_MASK                       (0x10000000U)
#define SMC_SSRS_JTAG_SHIFT                      (28U)
#define SMC_SSRS_JTAG(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SSRS_JTAG_SHIFT)) & SMC_SSRS_JTAG_MASK)

/*! @name SRIE - System Reset Interrupt Enable */
#define SMC_SRIE_PIN_MASK                        (0x100U)
#define SMC_SRIE_PIN_SHIFT                       (8U)
#define SMC_SRIE_PIN(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_PIN_SHIFT)) & SMC_SRIE_PIN_MASK)
#define SMC_SRIE_MDM_MASK                        (0x200U)
#define SMC_SRIE_MDM_SHIFT                       (9U)
#define SMC_SRIE_MDM(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_MDM_SHIFT)) & SMC_SRIE_MDM_MASK)
#define SMC_SRIE_STOPACK_MASK                    (0x800U)
#define SMC_SRIE_STOPACK_SHIFT                   (11U)
#define SMC_SRIE_STOPACK(x)                      (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_STOPACK_SHIFT)) & SMC_SRIE_STOPACK_MASK)
#define SMC_SRIE_WDOG_MASK                       (0x2000U)
#define SMC_SRIE_WDOG_SHIFT                      (13U)
#define SMC_SRIE_WDOG(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_WDOG_SHIFT)) & SMC_SRIE_WDOG_MASK)
#define SMC_SRIE_SW_MASK                         (0x4000U)
#define SMC_SRIE_SW_SHIFT                        (14U)
#define SMC_SRIE_SW(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_SW_SHIFT)) & SMC_SRIE_SW_MASK)
#define SMC_SRIE_LOCKUP_MASK                     (0x8000U)
#define SMC_SRIE_LOCKUP_SHIFT                    (15U)
#define SMC_SRIE_LOCKUP(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_LOCKUP_SHIFT)) & SMC_SRIE_LOCKUP_MASK)
#define SMC_SRIE_CORE0_MASK                      (0x10000U)
#define SMC_SRIE_CORE0_SHIFT                     (16U)
#define SMC_SRIE_CORE0(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_CORE0_SHIFT)) & SMC_SRIE_CORE0_MASK)
#define SMC_SRIE_CORE1_MASK                      (0x20000U)
#define SMC_SRIE_CORE1_SHIFT                     (17U)
#define SMC_SRIE_CORE1(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SRIE_CORE1_SHIFT)) & SMC_SRIE_CORE1_MASK)

/*! @name SRIF - System Reset Interrupt Flag */
#define SMC_SRIF_PIN_MASK                        (0x100U)
#define SMC_SRIF_PIN_SHIFT                       (8U)
#define SMC_SRIF_PIN(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_PIN_SHIFT)) & SMC_SRIF_PIN_MASK)
#define SMC_SRIF_MDM_MASK                        (0x200U)
#define SMC_SRIF_MDM_SHIFT                       (9U)
#define SMC_SRIF_MDM(x)                          (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_MDM_SHIFT)) & SMC_SRIF_MDM_MASK)
#define SMC_SRIF_STOPACK_MASK                    (0x800U)
#define SMC_SRIF_STOPACK_SHIFT                   (11U)
#define SMC_SRIF_STOPACK(x)                      (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_STOPACK_SHIFT)) & SMC_SRIF_STOPACK_MASK)
#define SMC_SRIF_WDOG_MASK                       (0x2000U)
#define SMC_SRIF_WDOG_SHIFT                      (13U)
#define SMC_SRIF_WDOG(x)                         (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_WDOG_SHIFT)) & SMC_SRIF_WDOG_MASK)
#define SMC_SRIF_SW_MASK                         (0x4000U)
#define SMC_SRIF_SW_SHIFT                        (14U)
#define SMC_SRIF_SW(x)                           (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_SW_SHIFT)) & SMC_SRIF_SW_MASK)
#define SMC_SRIF_LOCKUP_MASK                     (0x8000U)
#define SMC_SRIF_LOCKUP_SHIFT                    (15U)
#define SMC_SRIF_LOCKUP(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_LOCKUP_SHIFT)) & SMC_SRIF_LOCKUP_MASK)
#define SMC_SRIF_CORE0_MASK                      (0x10000U)
#define SMC_SRIF_CORE0_SHIFT                     (16U)
#define SMC_SRIF_CORE0(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_CORE0_SHIFT)) & SMC_SRIF_CORE0_MASK)
#define SMC_SRIF_CORE1_MASK                      (0x20000U)
#define SMC_SRIF_CORE1_SHIFT                     (17U)
#define SMC_SRIF_CORE1(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_SRIF_CORE1_SHIFT)) & SMC_SRIF_CORE1_MASK)

/*! @name MR - Mode Register */
#define SMC_MR_BOOTCFG_MASK                      (0x3U)
#define SMC_MR_BOOTCFG_SHIFT                     (0U)
#define SMC_MR_BOOTCFG(x)                        (((uint32_t)(((uint32_t)(x)) << SMC_MR_BOOTCFG_SHIFT)) & SMC_MR_BOOTCFG_MASK)

/*! @name FM - Force Mode Register */
#define SMC_FM_FORCECFG_MASK                     (0x3U)
#define SMC_FM_FORCECFG_SHIFT                    (0U)
#define SMC_FM_FORCECFG(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_FM_FORCECFG_SHIFT)) & SMC_FM_FORCECFG_MASK)

/*! @name SRAMLPR - SRAM Low Power Register */
#define SMC_SRAMLPR_LPE_MASK                     (0xFFFFFFFFU)
#define SMC_SRAMLPR_LPE_SHIFT                    (0U)
#define SMC_SRAMLPR_LPE(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SRAMLPR_LPE_SHIFT)) & SMC_SRAMLPR_LPE_MASK)

/*! @name SRAMDSR - SRAM Deep Sleep Register */
#define SMC_SRAMDSR_DSE_MASK                     (0xFFFFFFFFU)
#define SMC_SRAMDSR_DSE_SHIFT                    (0U)
#define SMC_SRAMDSR_DSE(x)                       (((uint32_t)(((uint32_t)(x)) << SMC_SRAMDSR_DSE_SHIFT)) & SMC_SRAMDSR_DSE_MASK)


/*!
 * @}
 */ /* end of group SMC_Register_Masks */


/* SMC - Peripheral instance base addresses */
/** Peripheral SMC0 base address */
#define SMC0_BASE                                (0x40020000u)
/** Peripheral SMC0 base pointer */
#define SMC0                                     ((SMC_Type *)SMC0_BASE)
/** Peripheral SMC1 base address */
#define SMC1_BASE                                (0x41020000u)
/** Peripheral SMC1 base pointer */
#define SMC1                                     ((SMC_Type *)SMC1_BASE)
/** Array initializer of SMC peripheral base addresses */
#define SMC_BASE_ADDRS                           { SMC0_BASE, SMC1_BASE }
/** Array initializer of SMC peripheral base pointers */
#define SMC_BASE_PTRS                            { SMC0, SMC1 }
/** Interrupt vectors for the SMC peripheral type */
#define SMC_IRQS                                 { CMC0_IRQn, NotAvail_IRQn }

/*!
 * @}
 */ /* end of group SMC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- SPM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPM_Peripheral_Access_Layer SPM Peripheral Access Layer
 * @{
 */

/** SPM - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
       uint8_t RESERVED_0[4];
  __I  uint32_t RSR;                               /**< Regulator Status Register, offset: 0x8 */
       uint8_t RESERVED_1[4];
  __IO uint32_t RCTRL;                             /**< Run Control Register, offset: 0x10 */
  __IO uint32_t LPCTRL;                            /**< Low Power Control Register, offset: 0x14 */
       uint8_t RESERVED_2[232];
  __IO uint32_t CORERCNFG;                         /**< CORE LDO RUN Configuration Register, offset: 0x100 */
  __IO uint32_t CORELPCNFG;                        /**< CORE LDO Low Power Configuration register, offset: 0x104 */
  __IO uint32_t CORESC;                            /**< Core LDO Status And Control register, offset: 0x108 */
  __IO uint32_t LVDSC1;                            /**< Low Voltage Detect Status and Control 1 register, offset: 0x10C */
  __IO uint32_t LVDSC2;                            /**< Low Voltage Detect Status and Control 2 register, offset: 0x110 */
  __IO uint32_t HVDSC1;                            /**< High Voltage Detect Status And Control 1 register, offset: 0x114 */
       uint8_t RESERVED_3[232];
  __IO uint32_t RFLDOLPCNFG;                       /**< RF LDO Low Power Configuration register, offset: 0x200 */
  __IO uint32_t RFLDOSC;                           /**< RF LDO Status And Control register, offset: 0x204 */
       uint8_t RESERVED_4[252];
  __IO uint32_t DCDCSC;                            /**< DCDC Status Control Register, offset: 0x304 */
       uint8_t RESERVED_5[4];
  __IO uint32_t DCDCC1;                            /**< DCDC Control Register 1, offset: 0x30C */
  __IO uint32_t DCDCC2;                            /**< DCDC Control Register 2, offset: 0x310 */
  __IO uint32_t DCDCC3;                            /**< DCDC Control Register 3, offset: 0x314 */
  __IO uint32_t DCDCC4;                            /**< DCDC Control Register 4, offset: 0x318 */
       uint8_t RESERVED_6[4];
  __IO uint32_t DCDCC6;                            /**< DCDC Control Register 6, offset: 0x320 */
       uint8_t RESERVED_7[232];
  __IO uint32_t LPREQPINCNTRL;                     /**< LP Request Pin Control Register, offset: 0x40C */
} SPM_Type;

/* ----------------------------------------------------------------------------
   -- SPM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPM_Register_Masks SPM Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define SPM_VERID_FEATURE_MASK                   (0xFFFFU)
#define SPM_VERID_FEATURE_SHIFT                  (0U)
#define SPM_VERID_FEATURE(x)                     (((uint32_t)(((uint32_t)(x)) << SPM_VERID_FEATURE_SHIFT)) & SPM_VERID_FEATURE_MASK)
#define SPM_VERID_MINOR_MASK                     (0xFF0000U)
#define SPM_VERID_MINOR_SHIFT                    (16U)
#define SPM_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << SPM_VERID_MINOR_SHIFT)) & SPM_VERID_MINOR_MASK)
#define SPM_VERID_MAJOR_MASK                     (0xFF000000U)
#define SPM_VERID_MAJOR_SHIFT                    (24U)
#define SPM_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << SPM_VERID_MAJOR_SHIFT)) & SPM_VERID_MAJOR_MASK)

/*! @name RSR - Regulator Status Register */
#define SPM_RSR_REGSEL_MASK                      (0x7U)
#define SPM_RSR_REGSEL_SHIFT                     (0U)
#define SPM_RSR_REGSEL(x)                        (((uint32_t)(((uint32_t)(x)) << SPM_RSR_REGSEL_SHIFT)) & SPM_RSR_REGSEL_MASK)
#define SPM_RSR_MCUPMSTAT_MASK                   (0x1F0000U)
#define SPM_RSR_MCUPMSTAT_SHIFT                  (16U)
#define SPM_RSR_MCUPMSTAT(x)                     (((uint32_t)(((uint32_t)(x)) << SPM_RSR_MCUPMSTAT_SHIFT)) & SPM_RSR_MCUPMSTAT_MASK)
#define SPM_RSR_RFPMSTAT_MASK                    (0x7000000U)
#define SPM_RSR_RFPMSTAT_SHIFT                   (24U)
#define SPM_RSR_RFPMSTAT(x)                      (((uint32_t)(((uint32_t)(x)) << SPM_RSR_RFPMSTAT_SHIFT)) & SPM_RSR_RFPMSTAT_MASK)
#define SPM_RSR_RFRUNFORCE_MASK                  (0x8000000U)
#define SPM_RSR_RFRUNFORCE_SHIFT                 (27U)
#define SPM_RSR_RFRUNFORCE(x)                    (((uint32_t)(((uint32_t)(x)) << SPM_RSR_RFRUNFORCE_SHIFT)) & SPM_RSR_RFRUNFORCE_MASK)

/*! @name RCTRL - Run Control Register */
#define SPM_RCTRL_REGSEL_MASK                    (0x7U)
#define SPM_RCTRL_REGSEL_SHIFT                   (0U)
#define SPM_RCTRL_REGSEL(x)                      (((uint32_t)(((uint32_t)(x)) << SPM_RCTRL_REGSEL_SHIFT)) & SPM_RCTRL_REGSEL_MASK)

/*! @name LPCTRL - Low Power Control Register */
#define SPM_LPCTRL_REGSEL_MASK                   (0x7U)
#define SPM_LPCTRL_REGSEL_SHIFT                  (0U)
#define SPM_LPCTRL_REGSEL(x)                     (((uint32_t)(((uint32_t)(x)) << SPM_LPCTRL_REGSEL_SHIFT)) & SPM_LPCTRL_REGSEL_MASK)

/*! @name CORERCNFG - CORE LDO RUN Configuration Register */
#define SPM_CORERCNFG_VDDIOVDDMEN_MASK           (0x10000U)
#define SPM_CORERCNFG_VDDIOVDDMEN_SHIFT          (16U)
#define SPM_CORERCNFG_VDDIOVDDMEN(x)             (((uint32_t)(((uint32_t)(x)) << SPM_CORERCNFG_VDDIOVDDMEN_SHIFT)) & SPM_CORERCNFG_VDDIOVDDMEN_MASK)
#define SPM_CORERCNFG_USBVDDMEN_MASK             (0x20000U)
#define SPM_CORERCNFG_USBVDDMEN_SHIFT            (17U)
#define SPM_CORERCNFG_USBVDDMEN(x)               (((uint32_t)(((uint32_t)(x)) << SPM_CORERCNFG_USBVDDMEN_SHIFT)) & SPM_CORERCNFG_USBVDDMEN_MASK)
#define SPM_CORERCNFG_RTCVDDMEN_MASK             (0x40000U)
#define SPM_CORERCNFG_RTCVDDMEN_SHIFT            (18U)
#define SPM_CORERCNFG_RTCVDDMEN(x)               (((uint32_t)(((uint32_t)(x)) << SPM_CORERCNFG_RTCVDDMEN_SHIFT)) & SPM_CORERCNFG_RTCVDDMEN_MASK)

/*! @name CORELPCNFG - CORE LDO Low Power Configuration register */
#define SPM_CORELPCNFG_LPSEL_MASK                (0x2U)
#define SPM_CORELPCNFG_LPSEL_SHIFT               (1U)
#define SPM_CORELPCNFG_LPSEL(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_LPSEL_SHIFT)) & SPM_CORELPCNFG_LPSEL_MASK)
#define SPM_CORELPCNFG_BGEN_MASK                 (0x4U)
#define SPM_CORELPCNFG_BGEN_SHIFT                (2U)
#define SPM_CORELPCNFG_BGEN(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_BGEN_SHIFT)) & SPM_CORELPCNFG_BGEN_MASK)
#define SPM_CORELPCNFG_BGBEN_MASK                (0x8U)
#define SPM_CORELPCNFG_BGBEN_SHIFT               (3U)
#define SPM_CORELPCNFG_BGBEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_BGBEN_SHIFT)) & SPM_CORELPCNFG_BGBEN_MASK)
#define SPM_CORELPCNFG_BGBDS_MASK                (0x10U)
#define SPM_CORELPCNFG_BGBDS_SHIFT               (4U)
#define SPM_CORELPCNFG_BGBDS(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_BGBDS_SHIFT)) & SPM_CORELPCNFG_BGBDS_MASK)
#define SPM_CORELPCNFG_LPOEN_MASK                (0x80U)
#define SPM_CORELPCNFG_LPOEN_SHIFT               (7U)
#define SPM_CORELPCNFG_LPOEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_LPOEN_SHIFT)) & SPM_CORELPCNFG_LPOEN_MASK)
#define SPM_CORELPCNFG_POREN_MASK                (0x100U)
#define SPM_CORELPCNFG_POREN_SHIFT               (8U)
#define SPM_CORELPCNFG_POREN(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_POREN_SHIFT)) & SPM_CORELPCNFG_POREN_MASK)
#define SPM_CORELPCNFG_LVDEN_MASK                (0x200U)
#define SPM_CORELPCNFG_LVDEN_SHIFT               (9U)
#define SPM_CORELPCNFG_LVDEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_LVDEN_SHIFT)) & SPM_CORELPCNFG_LVDEN_MASK)
#define SPM_CORELPCNFG_LPHIDRIVE_MASK            (0x4000U)
#define SPM_CORELPCNFG_LPHIDRIVE_SHIFT           (14U)
#define SPM_CORELPCNFG_LPHIDRIVE(x)              (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_LPHIDRIVE_SHIFT)) & SPM_CORELPCNFG_LPHIDRIVE_MASK)
#define SPM_CORELPCNFG_ALLREFEN_MASK             (0x8000U)
#define SPM_CORELPCNFG_ALLREFEN_SHIFT            (15U)
#define SPM_CORELPCNFG_ALLREFEN(x)               (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_ALLREFEN_SHIFT)) & SPM_CORELPCNFG_ALLREFEN_MASK)
#define SPM_CORELPCNFG_VDDIOVDDMEN_MASK          (0x10000U)
#define SPM_CORELPCNFG_VDDIOVDDMEN_SHIFT         (16U)
#define SPM_CORELPCNFG_VDDIOVDDMEN(x)            (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_VDDIOVDDMEN_SHIFT)) & SPM_CORELPCNFG_VDDIOVDDMEN_MASK)
#define SPM_CORELPCNFG_USBVDDMEN_MASK            (0x20000U)
#define SPM_CORELPCNFG_USBVDDMEN_SHIFT           (17U)
#define SPM_CORELPCNFG_USBVDDMEN(x)              (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_USBVDDMEN_SHIFT)) & SPM_CORELPCNFG_USBVDDMEN_MASK)
#define SPM_CORELPCNFG_RTCVDDMEN_MASK            (0x40000U)
#define SPM_CORELPCNFG_RTCVDDMEN_SHIFT           (18U)
#define SPM_CORELPCNFG_RTCVDDMEN(x)              (((uint32_t)(((uint32_t)(x)) << SPM_CORELPCNFG_RTCVDDMEN_SHIFT)) & SPM_CORELPCNFG_RTCVDDMEN_MASK)

/*! @name CORESC - Core LDO Status And Control register */
#define SPM_CORESC_REGONS_MASK                   (0x4U)
#define SPM_CORESC_REGONS_SHIFT                  (2U)
#define SPM_CORESC_REGONS(x)                     (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_REGONS_SHIFT)) & SPM_CORESC_REGONS_MASK)
#define SPM_CORESC_ACKISO_MASK                   (0x8U)
#define SPM_CORESC_ACKISO_SHIFT                  (3U)
#define SPM_CORESC_ACKISO(x)                     (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_ACKISO_SHIFT)) & SPM_CORESC_ACKISO_MASK)
#define SPM_CORESC_TRIM_MASK                     (0x3F00U)
#define SPM_CORESC_TRIM_SHIFT                    (8U)
#define SPM_CORESC_TRIM(x)                       (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_TRIM_SHIFT)) & SPM_CORESC_TRIM_MASK)
#define SPM_CORESC_VDDIOOVRIDE_MASK              (0x10000U)
#define SPM_CORESC_VDDIOOVRIDE_SHIFT             (16U)
#define SPM_CORESC_VDDIOOVRIDE(x)                (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_VDDIOOVRIDE_SHIFT)) & SPM_CORESC_VDDIOOVRIDE_MASK)
#define SPM_CORESC_USBOVRIDE_MASK                (0x20000U)
#define SPM_CORESC_USBOVRIDE_SHIFT               (17U)
#define SPM_CORESC_USBOVRIDE(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_USBOVRIDE_SHIFT)) & SPM_CORESC_USBOVRIDE_MASK)
#define SPM_CORESC_RTCOVRIDE_MASK                (0x40000U)
#define SPM_CORESC_RTCOVRIDE_SHIFT               (18U)
#define SPM_CORESC_RTCOVRIDE(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_RTCOVRIDE_SHIFT)) & SPM_CORESC_RTCOVRIDE_MASK)
#define SPM_CORESC_VDDIOOK_MASK                  (0x1000000U)
#define SPM_CORESC_VDDIOOK_SHIFT                 (24U)
#define SPM_CORESC_VDDIOOK(x)                    (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_VDDIOOK_SHIFT)) & SPM_CORESC_VDDIOOK_MASK)
#define SPM_CORESC_USBVDDOK_MASK                 (0x2000000U)
#define SPM_CORESC_USBVDDOK_SHIFT                (25U)
#define SPM_CORESC_USBVDDOK(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_USBVDDOK_SHIFT)) & SPM_CORESC_USBVDDOK_MASK)
#define SPM_CORESC_RTCVDDOK_MASK                 (0x4000000U)
#define SPM_CORESC_RTCVDDOK_SHIFT                (26U)
#define SPM_CORESC_RTCVDDOK(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_CORESC_RTCVDDOK_SHIFT)) & SPM_CORESC_RTCVDDOK_MASK)

/*! @name LVDSC1 - Low Voltage Detect Status and Control 1 register */
#define SPM_LVDSC1_COREVDD_LVDRE_MASK            (0x10U)
#define SPM_LVDSC1_COREVDD_LVDRE_SHIFT           (4U)
#define SPM_LVDSC1_COREVDD_LVDRE(x)              (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_COREVDD_LVDRE_SHIFT)) & SPM_LVDSC1_COREVDD_LVDRE_MASK)
#define SPM_LVDSC1_COREVDD_LVDIE_MASK            (0x20U)
#define SPM_LVDSC1_COREVDD_LVDIE_SHIFT           (5U)
#define SPM_LVDSC1_COREVDD_LVDIE(x)              (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_COREVDD_LVDIE_SHIFT)) & SPM_LVDSC1_COREVDD_LVDIE_MASK)
#define SPM_LVDSC1_COREVDD_LVDACK_MASK           (0x40U)
#define SPM_LVDSC1_COREVDD_LVDACK_SHIFT          (6U)
#define SPM_LVDSC1_COREVDD_LVDACK(x)             (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_COREVDD_LVDACK_SHIFT)) & SPM_LVDSC1_COREVDD_LVDACK_MASK)
#define SPM_LVDSC1_COREVDD_LVDF_MASK             (0x80U)
#define SPM_LVDSC1_COREVDD_LVDF_SHIFT            (7U)
#define SPM_LVDSC1_COREVDD_LVDF(x)               (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_COREVDD_LVDF_SHIFT)) & SPM_LVDSC1_COREVDD_LVDF_MASK)
#define SPM_LVDSC1_VDD_LVDV_MASK                 (0x30000U)
#define SPM_LVDSC1_VDD_LVDV_SHIFT                (16U)
#define SPM_LVDSC1_VDD_LVDV(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_VDD_LVDV_SHIFT)) & SPM_LVDSC1_VDD_LVDV_MASK)
#define SPM_LVDSC1_VDD_LVDRE_MASK                (0x100000U)
#define SPM_LVDSC1_VDD_LVDRE_SHIFT               (20U)
#define SPM_LVDSC1_VDD_LVDRE(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_VDD_LVDRE_SHIFT)) & SPM_LVDSC1_VDD_LVDRE_MASK)
#define SPM_LVDSC1_VDD_LVDIE_MASK                (0x200000U)
#define SPM_LVDSC1_VDD_LVDIE_SHIFT               (21U)
#define SPM_LVDSC1_VDD_LVDIE(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_VDD_LVDIE_SHIFT)) & SPM_LVDSC1_VDD_LVDIE_MASK)
#define SPM_LVDSC1_VDD_LVDACK_MASK               (0x400000U)
#define SPM_LVDSC1_VDD_LVDACK_SHIFT              (22U)
#define SPM_LVDSC1_VDD_LVDACK(x)                 (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_VDD_LVDACK_SHIFT)) & SPM_LVDSC1_VDD_LVDACK_MASK)
#define SPM_LVDSC1_VDD_LVDF_MASK                 (0x800000U)
#define SPM_LVDSC1_VDD_LVDF_SHIFT                (23U)
#define SPM_LVDSC1_VDD_LVDF(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC1_VDD_LVDF_SHIFT)) & SPM_LVDSC1_VDD_LVDF_MASK)

/*! @name LVDSC2 - Low Voltage Detect Status and Control 2 register */
#define SPM_LVDSC2_VDD_LVWV_MASK                 (0x30000U)
#define SPM_LVDSC2_VDD_LVWV_SHIFT                (16U)
#define SPM_LVDSC2_VDD_LVWV(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC2_VDD_LVWV_SHIFT)) & SPM_LVDSC2_VDD_LVWV_MASK)
#define SPM_LVDSC2_VDD_LVWIE_MASK                (0x200000U)
#define SPM_LVDSC2_VDD_LVWIE_SHIFT               (21U)
#define SPM_LVDSC2_VDD_LVWIE(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC2_VDD_LVWIE_SHIFT)) & SPM_LVDSC2_VDD_LVWIE_MASK)
#define SPM_LVDSC2_VDD_LVWACK_MASK               (0x400000U)
#define SPM_LVDSC2_VDD_LVWACK_SHIFT              (22U)
#define SPM_LVDSC2_VDD_LVWACK(x)                 (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC2_VDD_LVWACK_SHIFT)) & SPM_LVDSC2_VDD_LVWACK_MASK)
#define SPM_LVDSC2_VDD_LVWF_MASK                 (0x800000U)
#define SPM_LVDSC2_VDD_LVWF_SHIFT                (23U)
#define SPM_LVDSC2_VDD_LVWF(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_LVDSC2_VDD_LVWF_SHIFT)) & SPM_LVDSC2_VDD_LVWF_MASK)

/*! @name HVDSC1 - High Voltage Detect Status And Control 1 register */
#define SPM_HVDSC1_VDD_HVDV_MASK                 (0x10000U)
#define SPM_HVDSC1_VDD_HVDV_SHIFT                (16U)
#define SPM_HVDSC1_VDD_HVDV(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_HVDSC1_VDD_HVDV_SHIFT)) & SPM_HVDSC1_VDD_HVDV_MASK)
#define SPM_HVDSC1_VDD_HVDRE_MASK                (0x100000U)
#define SPM_HVDSC1_VDD_HVDRE_SHIFT               (20U)
#define SPM_HVDSC1_VDD_HVDRE(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_HVDSC1_VDD_HVDRE_SHIFT)) & SPM_HVDSC1_VDD_HVDRE_MASK)
#define SPM_HVDSC1_VDD_HVDIE_MASK                (0x200000U)
#define SPM_HVDSC1_VDD_HVDIE_SHIFT               (21U)
#define SPM_HVDSC1_VDD_HVDIE(x)                  (((uint32_t)(((uint32_t)(x)) << SPM_HVDSC1_VDD_HVDIE_SHIFT)) & SPM_HVDSC1_VDD_HVDIE_MASK)
#define SPM_HVDSC1_VDD_HVDACK_MASK               (0x400000U)
#define SPM_HVDSC1_VDD_HVDACK_SHIFT              (22U)
#define SPM_HVDSC1_VDD_HVDACK(x)                 (((uint32_t)(((uint32_t)(x)) << SPM_HVDSC1_VDD_HVDACK_SHIFT)) & SPM_HVDSC1_VDD_HVDACK_MASK)
#define SPM_HVDSC1_VDD_HVDF_MASK                 (0x800000U)
#define SPM_HVDSC1_VDD_HVDF_SHIFT                (23U)
#define SPM_HVDSC1_VDD_HVDF(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_HVDSC1_VDD_HVDF_SHIFT)) & SPM_HVDSC1_VDD_HVDF_MASK)

/*! @name RFLDOLPCNFG - RF LDO Low Power Configuration register */
#define SPM_RFLDOLPCNFG_LPSEL_MASK               (0x2U)
#define SPM_RFLDOLPCNFG_LPSEL_SHIFT              (1U)
#define SPM_RFLDOLPCNFG_LPSEL(x)                 (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOLPCNFG_LPSEL_SHIFT)) & SPM_RFLDOLPCNFG_LPSEL_MASK)

/*! @name RFLDOSC - RF LDO Status And Control register */
#define SPM_RFLDOSC_IOREGVSEL_MASK               (0x1U)
#define SPM_RFLDOSC_IOREGVSEL_SHIFT              (0U)
#define SPM_RFLDOSC_IOREGVSEL(x)                 (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOSC_IOREGVSEL_SHIFT)) & SPM_RFLDOSC_IOREGVSEL_MASK)
#define SPM_RFLDOSC_VDD1P8SEL_MASK               (0x10U)
#define SPM_RFLDOSC_VDD1P8SEL_SHIFT              (4U)
#define SPM_RFLDOSC_VDD1P8SEL(x)                 (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOSC_VDD1P8SEL_SHIFT)) & SPM_RFLDOSC_VDD1P8SEL_MASK)
#define SPM_RFLDOSC_ISINKEN_MASK                 (0x20U)
#define SPM_RFLDOSC_ISINKEN_SHIFT                (5U)
#define SPM_RFLDOSC_ISINKEN(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOSC_ISINKEN_SHIFT)) & SPM_RFLDOSC_ISINKEN_MASK)
#define SPM_RFLDOSC_IOTRIM_MASK                  (0x1F00U)
#define SPM_RFLDOSC_IOTRIM_SHIFT                 (8U)
#define SPM_RFLDOSC_IOTRIM(x)                    (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOSC_IOTRIM_SHIFT)) & SPM_RFLDOSC_IOTRIM_MASK)
#define SPM_RFLDOSC_IOSSSEL_MASK                 (0x70000U)
#define SPM_RFLDOSC_IOSSSEL_SHIFT                (16U)
#define SPM_RFLDOSC_IOSSSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOSC_IOSSSEL_SHIFT)) & SPM_RFLDOSC_IOSSSEL_MASK)
#define SPM_RFLDOSC_SSDONE_MASK                  (0x1000000U)
#define SPM_RFLDOSC_SSDONE_SHIFT                 (24U)
#define SPM_RFLDOSC_SSDONE(x)                    (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOSC_SSDONE_SHIFT)) & SPM_RFLDOSC_SSDONE_MASK)
#define SPM_RFLDOSC_IOSPARE_OUT_MASK             (0xC000000U)
#define SPM_RFLDOSC_IOSPARE_OUT_SHIFT            (26U)
#define SPM_RFLDOSC_IOSPARE_OUT(x)               (((uint32_t)(((uint32_t)(x)) << SPM_RFLDOSC_IOSPARE_OUT_SHIFT)) & SPM_RFLDOSC_IOSPARE_OUT_MASK)

/*! @name DCDCSC - DCDC Status Control Register */
#define SPM_DCDCSC_DCDC_DISABLE_AUTO_CLK_SWITCH_MASK (0x2U)
#define SPM_DCDCSC_DCDC_DISABLE_AUTO_CLK_SWITCH_SHIFT (1U)
#define SPM_DCDCSC_DCDC_DISABLE_AUTO_CLK_SWITCH(x) (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_DCDC_DISABLE_AUTO_CLK_SWITCH_SHIFT)) & SPM_DCDCSC_DCDC_DISABLE_AUTO_CLK_SWITCH_MASK)
#define SPM_DCDCSC_DCDC_SEL_CLK_MASK             (0x4U)
#define SPM_DCDCSC_DCDC_SEL_CLK_SHIFT            (2U)
#define SPM_DCDCSC_DCDC_SEL_CLK(x)               (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_DCDC_SEL_CLK_SHIFT)) & SPM_DCDCSC_DCDC_SEL_CLK_MASK)
#define SPM_DCDCSC_DCDC_PWD_OSC_INT_MASK         (0x8U)
#define SPM_DCDCSC_DCDC_PWD_OSC_INT_SHIFT        (3U)
#define SPM_DCDCSC_DCDC_PWD_OSC_INT(x)           (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_DCDC_PWD_OSC_INT_SHIFT)) & SPM_DCDCSC_DCDC_PWD_OSC_INT_MASK)
#define SPM_DCDCSC_DCDC_VBAT_DIV_CTRL_MASK       (0xC00U)
#define SPM_DCDCSC_DCDC_VBAT_DIV_CTRL_SHIFT      (10U)
#define SPM_DCDCSC_DCDC_VBAT_DIV_CTRL(x)         (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_DCDC_VBAT_DIV_CTRL_SHIFT)) & SPM_DCDCSC_DCDC_VBAT_DIV_CTRL_MASK)
#define SPM_DCDCSC_DCDC_LESS_I_MASK              (0x2000000U)
#define SPM_DCDCSC_DCDC_LESS_I_SHIFT             (25U)
#define SPM_DCDCSC_DCDC_LESS_I(x)                (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_DCDC_LESS_I_SHIFT)) & SPM_DCDCSC_DCDC_LESS_I_MASK)
#define SPM_DCDCSC_PWD_CMP_OFFSET_MASK           (0x4000000U)
#define SPM_DCDCSC_PWD_CMP_OFFSET_SHIFT          (26U)
#define SPM_DCDCSC_PWD_CMP_OFFSET(x)             (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_PWD_CMP_OFFSET_SHIFT)) & SPM_DCDCSC_PWD_CMP_OFFSET_MASK)
#define SPM_DCDCSC_CLKFLT_FAULT_MASK             (0x40000000U)
#define SPM_DCDCSC_CLKFLT_FAULT_SHIFT            (30U)
#define SPM_DCDCSC_CLKFLT_FAULT(x)               (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_CLKFLT_FAULT_SHIFT)) & SPM_DCDCSC_CLKFLT_FAULT_MASK)
#define SPM_DCDCSC_DCDC_STS_DC_OK_MASK           (0x80000000U)
#define SPM_DCDCSC_DCDC_STS_DC_OK_SHIFT          (31U)
#define SPM_DCDCSC_DCDC_STS_DC_OK(x)             (((uint32_t)(((uint32_t)(x)) << SPM_DCDCSC_DCDC_STS_DC_OK_SHIFT)) & SPM_DCDCSC_DCDC_STS_DC_OK_MASK)

/*! @name DCDCC1 - DCDC Control Register 1 */
#define SPM_DCDCC1_POSLIMIT_BUCK_IN_MASK         (0x7FU)
#define SPM_DCDCC1_POSLIMIT_BUCK_IN_SHIFT        (0U)
#define SPM_DCDCC1_POSLIMIT_BUCK_IN(x)           (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC1_POSLIMIT_BUCK_IN_SHIFT)) & SPM_DCDCC1_POSLIMIT_BUCK_IN_MASK)
#define SPM_DCDCC1_DCDC_LOOPCTRL_EN_CM_HYST_MASK (0x4000000U)
#define SPM_DCDCC1_DCDC_LOOPCTRL_EN_CM_HYST_SHIFT (26U)
#define SPM_DCDCC1_DCDC_LOOPCTRL_EN_CM_HYST(x)   (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC1_DCDC_LOOPCTRL_EN_CM_HYST_SHIFT)) & SPM_DCDCC1_DCDC_LOOPCTRL_EN_CM_HYST_MASK)
#define SPM_DCDCC1_DCDC_LOOPCTRL_EN_DF_HYST_MASK (0x8000000U)
#define SPM_DCDCC1_DCDC_LOOPCTRL_EN_DF_HYST_SHIFT (27U)
#define SPM_DCDCC1_DCDC_LOOPCTRL_EN_DF_HYST(x)   (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC1_DCDC_LOOPCTRL_EN_DF_HYST_SHIFT)) & SPM_DCDCC1_DCDC_LOOPCTRL_EN_DF_HYST_MASK)

/*! @name DCDCC2 - DCDC Control Register 2 */
#define SPM_DCDCC2_DCDC_LOOPCTRL_HYST_SIGN_MASK  (0x2000U)
#define SPM_DCDCC2_DCDC_LOOPCTRL_HYST_SIGN_SHIFT (13U)
#define SPM_DCDCC2_DCDC_LOOPCTRL_HYST_SIGN(x)    (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC2_DCDC_LOOPCTRL_HYST_SIGN_SHIFT)) & SPM_DCDCC2_DCDC_LOOPCTRL_HYST_SIGN_MASK)
#define SPM_DCDCC2_DCDC_BATTMONITOR_EN_BATADJ_MASK (0x8000U)
#define SPM_DCDCC2_DCDC_BATTMONITOR_EN_BATADJ_SHIFT (15U)
#define SPM_DCDCC2_DCDC_BATTMONITOR_EN_BATADJ(x) (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC2_DCDC_BATTMONITOR_EN_BATADJ_SHIFT)) & SPM_DCDCC2_DCDC_BATTMONITOR_EN_BATADJ_MASK)
#define SPM_DCDCC2_DCDC_BATTMONITOR_BATT_VAL_MASK (0x3FF0000U)
#define SPM_DCDCC2_DCDC_BATTMONITOR_BATT_VAL_SHIFT (16U)
#define SPM_DCDCC2_DCDC_BATTMONITOR_BATT_VAL(x)  (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC2_DCDC_BATTMONITOR_BATT_VAL_SHIFT)) & SPM_DCDCC2_DCDC_BATTMONITOR_BATT_VAL_MASK)

/*! @name DCDCC3 - DCDC Control Register 3 */
#define SPM_DCDCC3_DCDC_BYPASS_ADC_MEAS_MASK     (0x1U)
#define SPM_DCDCC3_DCDC_BYPASS_ADC_MEAS_SHIFT    (0U)
#define SPM_DCDCC3_DCDC_BYPASS_ADC_MEAS(x)       (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_BYPASS_ADC_MEAS_SHIFT)) & SPM_DCDCC3_DCDC_BYPASS_ADC_MEAS_MASK)
#define SPM_DCDCC3_DCDC_VBAT_VALUE_MASK          (0x1CU)
#define SPM_DCDCC3_DCDC_VBAT_VALUE_SHIFT         (2U)
#define SPM_DCDCC3_DCDC_VBAT_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_VBAT_VALUE_SHIFT)) & SPM_DCDCC3_DCDC_VBAT_VALUE_MASK)
#define SPM_DCDCC3_DCDC_VDD1P2CTRL_ADJTN_MASK    (0xF0000U)
#define SPM_DCDCC3_DCDC_VDD1P2CTRL_ADJTN_SHIFT   (16U)
#define SPM_DCDCC3_DCDC_VDD1P2CTRL_ADJTN(x)      (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_VDD1P2CTRL_ADJTN_SHIFT)) & SPM_DCDCC3_DCDC_VDD1P2CTRL_ADJTN_MASK)
#define SPM_DCDCC3_DCDC_MINPWR_DC_HALFCLK_MASK   (0x1000000U)
#define SPM_DCDCC3_DCDC_MINPWR_DC_HALFCLK_SHIFT  (24U)
#define SPM_DCDCC3_DCDC_MINPWR_DC_HALFCLK(x)     (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_MINPWR_DC_HALFCLK_SHIFT)) & SPM_DCDCC3_DCDC_MINPWR_DC_HALFCLK_MASK)
#define SPM_DCDCC3_DCDC_MINPWR_EXTRA_DOUBLE_FETS_MASK (0x2000000U)
#define SPM_DCDCC3_DCDC_MINPWR_EXTRA_DOUBLE_FETS_SHIFT (25U)
#define SPM_DCDCC3_DCDC_MINPWR_EXTRA_DOUBLE_FETS(x) (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_MINPWR_EXTRA_DOUBLE_FETS_SHIFT)) & SPM_DCDCC3_DCDC_MINPWR_EXTRA_DOUBLE_FETS_MASK)
#define SPM_DCDCC3_DCDC_MINPWR_DOUBLE_FETS_MASK  (0x4000000U)
#define SPM_DCDCC3_DCDC_MINPWR_DOUBLE_FETS_SHIFT (26U)
#define SPM_DCDCC3_DCDC_MINPWR_DOUBLE_FETS(x)    (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_MINPWR_DOUBLE_FETS_SHIFT)) & SPM_DCDCC3_DCDC_MINPWR_DOUBLE_FETS_MASK)
#define SPM_DCDCC3_DCDC_MINPWR_HALF_FETS_MASK    (0x8000000U)
#define SPM_DCDCC3_DCDC_MINPWR_HALF_FETS_SHIFT   (27U)
#define SPM_DCDCC3_DCDC_MINPWR_HALF_FETS(x)      (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_MINPWR_HALF_FETS_SHIFT)) & SPM_DCDCC3_DCDC_MINPWR_HALF_FETS_MASK)
#define SPM_DCDCC3_DCDC_VDD1P2CTRL_DISABLE_STEP_MASK (0x40000000U)
#define SPM_DCDCC3_DCDC_VDD1P2CTRL_DISABLE_STEP_SHIFT (30U)
#define SPM_DCDCC3_DCDC_VDD1P2CTRL_DISABLE_STEP(x) (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_VDD1P2CTRL_DISABLE_STEP_SHIFT)) & SPM_DCDCC3_DCDC_VDD1P2CTRL_DISABLE_STEP_MASK)
#define SPM_DCDCC3_DCDC_VDD1P8CTRL_DISABLE_STEP_MASK (0x80000000U)
#define SPM_DCDCC3_DCDC_VDD1P8CTRL_DISABLE_STEP_SHIFT (31U)
#define SPM_DCDCC3_DCDC_VDD1P8CTRL_DISABLE_STEP(x) (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC3_DCDC_VDD1P8CTRL_DISABLE_STEP_SHIFT)) & SPM_DCDCC3_DCDC_VDD1P8CTRL_DISABLE_STEP_MASK)

/*! @name DCDCC4 - DCDC Control Register 4 */
#define SPM_DCDCC4_INTEGRATOR_VALUE_MASK         (0x7FFFFU)
#define SPM_DCDCC4_INTEGRATOR_VALUE_SHIFT        (0U)
#define SPM_DCDCC4_INTEGRATOR_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC4_INTEGRATOR_VALUE_SHIFT)) & SPM_DCDCC4_INTEGRATOR_VALUE_MASK)
#define SPM_DCDCC4_INTEGRATOR_VALUE_SELECT_MASK  (0x80000U)
#define SPM_DCDCC4_INTEGRATOR_VALUE_SELECT_SHIFT (19U)
#define SPM_DCDCC4_INTEGRATOR_VALUE_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC4_INTEGRATOR_VALUE_SELECT_SHIFT)) & SPM_DCDCC4_INTEGRATOR_VALUE_SELECT_MASK)
#define SPM_DCDCC4_PULSE_RUN_SPEEDUP_MASK        (0x100000U)
#define SPM_DCDCC4_PULSE_RUN_SPEEDUP_SHIFT       (20U)
#define SPM_DCDCC4_PULSE_RUN_SPEEDUP(x)          (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC4_PULSE_RUN_SPEEDUP_SHIFT)) & SPM_DCDCC4_PULSE_RUN_SPEEDUP_MASK)

/*! @name DCDCC6 - DCDC Control Register 6 */
#define SPM_DCDCC6_DCDC_VDD1P8CTRL_TRG_MASK      (0x1FU)
#define SPM_DCDCC6_DCDC_VDD1P8CTRL_TRG_SHIFT     (0U)
#define SPM_DCDCC6_DCDC_VDD1P8CTRL_TRG(x)        (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC6_DCDC_VDD1P8CTRL_TRG_SHIFT)) & SPM_DCDCC6_DCDC_VDD1P8CTRL_TRG_MASK)
#define SPM_DCDCC6_DCDC_VDD1P2CTRL_TRG_BUCK_MASK (0xF00U)
#define SPM_DCDCC6_DCDC_VDD1P2CTRL_TRG_BUCK_SHIFT (8U)
#define SPM_DCDCC6_DCDC_VDD1P2CTRL_TRG_BUCK(x)   (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC6_DCDC_VDD1P2CTRL_TRG_BUCK_SHIFT)) & SPM_DCDCC6_DCDC_VDD1P2CTRL_TRG_BUCK_MASK)
#define SPM_DCDCC6_DCDC_HSVDD_TRIM_MASK          (0xF000000U)
#define SPM_DCDCC6_DCDC_HSVDD_TRIM_SHIFT         (24U)
#define SPM_DCDCC6_DCDC_HSVDD_TRIM(x)            (((uint32_t)(((uint32_t)(x)) << SPM_DCDCC6_DCDC_HSVDD_TRIM_SHIFT)) & SPM_DCDCC6_DCDC_HSVDD_TRIM_MASK)

/*! @name LPREQPINCNTRL - LP Request Pin Control Register */
#define SPM_LPREQPINCNTRL_LPREQOE_MASK           (0x1U)
#define SPM_LPREQPINCNTRL_LPREQOE_SHIFT          (0U)
#define SPM_LPREQPINCNTRL_LPREQOE(x)             (((uint32_t)(((uint32_t)(x)) << SPM_LPREQPINCNTRL_LPREQOE_SHIFT)) & SPM_LPREQPINCNTRL_LPREQOE_MASK)
#define SPM_LPREQPINCNTRL_POLARITY_MASK          (0x2U)
#define SPM_LPREQPINCNTRL_POLARITY_SHIFT         (1U)
#define SPM_LPREQPINCNTRL_POLARITY(x)            (((uint32_t)(((uint32_t)(x)) << SPM_LPREQPINCNTRL_POLARITY_SHIFT)) & SPM_LPREQPINCNTRL_POLARITY_MASK)


/*!
 * @}
 */ /* end of group SPM_Register_Masks */


/* SPM - Peripheral instance base addresses */
/** Peripheral SPM base address */
#define SPM_BASE                                 (0x40028000u)
/** Peripheral SPM base pointer */
#define SPM                                      ((SPM_Type *)SPM_BASE)
/** Array initializer of SPM peripheral base addresses */
#define SPM_BASE_ADDRS                           { SPM_BASE }
/** Array initializer of SPM peripheral base pointers */
#define SPM_BASE_PTRS                            { SPM }
/** Interrupt vectors for the SPM peripheral type */
#define SPM_IRQS                                 { SPM_IRQn }

/*!
 * @}
 */ /* end of group SPM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- TPM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TPM_Peripheral_Access_Layer TPM Peripheral Access Layer
 * @{
 */

/** TPM - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t GLOBAL;                            /**< TPM Global Register, offset: 0x8 */
       uint8_t RESERVED_0[4];
  __IO uint32_t SC;                                /**< Status and Control, offset: 0x10 */
  __IO uint32_t CNT;                               /**< Counter, offset: 0x14 */
  __IO uint32_t MOD;                               /**< Modulo, offset: 0x18 */
  __IO uint32_t STATUS;                            /**< Capture and Compare Status, offset: 0x1C */
  struct {                                         /* offset: 0x20, array step: 0x8 */
    __IO uint32_t CnSC;                              /**< Channel (n) Status and Control, array offset: 0x20, array step: 0x8 */
    __IO uint32_t CnV;                               /**< Channel (n) Value, array offset: 0x24, array step: 0x8 */
  } CONTROLS[6];
       uint8_t RESERVED_1[20];
  __IO uint32_t COMBINE;                           /**< Combine Channel Register, offset: 0x64 */
       uint8_t RESERVED_2[4];
  __IO uint32_t TRIG;                              /**< Channel Trigger, offset: 0x6C */
  __IO uint32_t POL;                               /**< Channel Polarity, offset: 0x70 */
       uint8_t RESERVED_3[4];
  __IO uint32_t FILTER;                            /**< Filter Control, offset: 0x78 */
       uint8_t RESERVED_4[4];
  __IO uint32_t QDCTRL;                            /**< Quadrature Decoder Control and Status, offset: 0x80 */
  __IO uint32_t CONF;                              /**< Configuration, offset: 0x84 */
} TPM_Type;

/* ----------------------------------------------------------------------------
   -- TPM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TPM_Register_Masks TPM Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
#define TPM_VERID_FEATURE_MASK                   (0xFFFFU)
#define TPM_VERID_FEATURE_SHIFT                  (0U)
#define TPM_VERID_FEATURE(x)                     (((uint32_t)(((uint32_t)(x)) << TPM_VERID_FEATURE_SHIFT)) & TPM_VERID_FEATURE_MASK)
#define TPM_VERID_MINOR_MASK                     (0xFF0000U)
#define TPM_VERID_MINOR_SHIFT                    (16U)
#define TPM_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_VERID_MINOR_SHIFT)) & TPM_VERID_MINOR_MASK)
#define TPM_VERID_MAJOR_MASK                     (0xFF000000U)
#define TPM_VERID_MAJOR_SHIFT                    (24U)
#define TPM_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_VERID_MAJOR_SHIFT)) & TPM_VERID_MAJOR_MASK)

/*! @name PARAM - Parameter Register */
#define TPM_PARAM_CHAN_MASK                      (0xFFU)
#define TPM_PARAM_CHAN_SHIFT                     (0U)
#define TPM_PARAM_CHAN(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_PARAM_CHAN_SHIFT)) & TPM_PARAM_CHAN_MASK)
#define TPM_PARAM_TRIG_MASK                      (0xFF00U)
#define TPM_PARAM_TRIG_SHIFT                     (8U)
#define TPM_PARAM_TRIG(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_PARAM_TRIG_SHIFT)) & TPM_PARAM_TRIG_MASK)
#define TPM_PARAM_WIDTH_MASK                     (0xFF0000U)
#define TPM_PARAM_WIDTH_SHIFT                    (16U)
#define TPM_PARAM_WIDTH(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_PARAM_WIDTH_SHIFT)) & TPM_PARAM_WIDTH_MASK)

/*! @name GLOBAL - TPM Global Register */
#define TPM_GLOBAL_NOUPDATE_MASK                 (0x1U)
#define TPM_GLOBAL_NOUPDATE_SHIFT                (0U)
#define TPM_GLOBAL_NOUPDATE(x)                   (((uint32_t)(((uint32_t)(x)) << TPM_GLOBAL_NOUPDATE_SHIFT)) & TPM_GLOBAL_NOUPDATE_MASK)
#define TPM_GLOBAL_RST_MASK                      (0x2U)
#define TPM_GLOBAL_RST_SHIFT                     (1U)
#define TPM_GLOBAL_RST(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_GLOBAL_RST_SHIFT)) & TPM_GLOBAL_RST_MASK)

/*! @name SC - Status and Control */
#define TPM_SC_PS_MASK                           (0x7U)
#define TPM_SC_PS_SHIFT                          (0U)
#define TPM_SC_PS(x)                             (((uint32_t)(((uint32_t)(x)) << TPM_SC_PS_SHIFT)) & TPM_SC_PS_MASK)
#define TPM_SC_CMOD_MASK                         (0x18U)
#define TPM_SC_CMOD_SHIFT                        (3U)
#define TPM_SC_CMOD(x)                           (((uint32_t)(((uint32_t)(x)) << TPM_SC_CMOD_SHIFT)) & TPM_SC_CMOD_MASK)
#define TPM_SC_CPWMS_MASK                        (0x20U)
#define TPM_SC_CPWMS_SHIFT                       (5U)
#define TPM_SC_CPWMS(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_SC_CPWMS_SHIFT)) & TPM_SC_CPWMS_MASK)
#define TPM_SC_TOIE_MASK                         (0x40U)
#define TPM_SC_TOIE_SHIFT                        (6U)
#define TPM_SC_TOIE(x)                           (((uint32_t)(((uint32_t)(x)) << TPM_SC_TOIE_SHIFT)) & TPM_SC_TOIE_MASK)
#define TPM_SC_TOF_MASK                          (0x80U)
#define TPM_SC_TOF_SHIFT                         (7U)
#define TPM_SC_TOF(x)                            (((uint32_t)(((uint32_t)(x)) << TPM_SC_TOF_SHIFT)) & TPM_SC_TOF_MASK)
#define TPM_SC_DMA_MASK                          (0x100U)
#define TPM_SC_DMA_SHIFT                         (8U)
#define TPM_SC_DMA(x)                            (((uint32_t)(((uint32_t)(x)) << TPM_SC_DMA_SHIFT)) & TPM_SC_DMA_MASK)

/*! @name CNT - Counter */
#define TPM_CNT_COUNT_MASK                       (0xFFFFU)
#define TPM_CNT_COUNT_SHIFT                      (0U)
#define TPM_CNT_COUNT(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CNT_COUNT_SHIFT)) & TPM_CNT_COUNT_MASK)

/*! @name MOD - Modulo */
#define TPM_MOD_MOD_MASK                         (0xFFFFU)
#define TPM_MOD_MOD_SHIFT                        (0U)
#define TPM_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x)) << TPM_MOD_MOD_SHIFT)) & TPM_MOD_MOD_MASK)

/*! @name STATUS - Capture and Compare Status */
#define TPM_STATUS_CH0F_MASK                     (0x1U)
#define TPM_STATUS_CH0F_SHIFT                    (0U)
#define TPM_STATUS_CH0F(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_STATUS_CH0F_SHIFT)) & TPM_STATUS_CH0F_MASK)
#define TPM_STATUS_CH1F_MASK                     (0x2U)
#define TPM_STATUS_CH1F_SHIFT                    (1U)
#define TPM_STATUS_CH1F(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_STATUS_CH1F_SHIFT)) & TPM_STATUS_CH1F_MASK)
#define TPM_STATUS_CH2F_MASK                     (0x4U)
#define TPM_STATUS_CH2F_SHIFT                    (2U)
#define TPM_STATUS_CH2F(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_STATUS_CH2F_SHIFT)) & TPM_STATUS_CH2F_MASK)
#define TPM_STATUS_CH3F_MASK                     (0x8U)
#define TPM_STATUS_CH3F_SHIFT                    (3U)
#define TPM_STATUS_CH3F(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_STATUS_CH3F_SHIFT)) & TPM_STATUS_CH3F_MASK)
#define TPM_STATUS_CH4F_MASK                     (0x10U)
#define TPM_STATUS_CH4F_SHIFT                    (4U)
#define TPM_STATUS_CH4F(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_STATUS_CH4F_SHIFT)) & TPM_STATUS_CH4F_MASK)
#define TPM_STATUS_CH5F_MASK                     (0x20U)
#define TPM_STATUS_CH5F_SHIFT                    (5U)
#define TPM_STATUS_CH5F(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_STATUS_CH5F_SHIFT)) & TPM_STATUS_CH5F_MASK)
#define TPM_STATUS_TOF_MASK                      (0x100U)
#define TPM_STATUS_TOF_SHIFT                     (8U)
#define TPM_STATUS_TOF(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_STATUS_TOF_SHIFT)) & TPM_STATUS_TOF_MASK)

/*! @name CnSC - Channel (n) Status and Control */
#define TPM_CnSC_DMA_MASK                        (0x1U)
#define TPM_CnSC_DMA_SHIFT                       (0U)
#define TPM_CnSC_DMA(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_CnSC_DMA_SHIFT)) & TPM_CnSC_DMA_MASK)
#define TPM_CnSC_ELSA_MASK                       (0x4U)
#define TPM_CnSC_ELSA_SHIFT                      (2U)
#define TPM_CnSC_ELSA(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CnSC_ELSA_SHIFT)) & TPM_CnSC_ELSA_MASK)
#define TPM_CnSC_ELSB_MASK                       (0x8U)
#define TPM_CnSC_ELSB_SHIFT                      (3U)
#define TPM_CnSC_ELSB(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CnSC_ELSB_SHIFT)) & TPM_CnSC_ELSB_MASK)
#define TPM_CnSC_MSA_MASK                        (0x10U)
#define TPM_CnSC_MSA_SHIFT                       (4U)
#define TPM_CnSC_MSA(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_CnSC_MSA_SHIFT)) & TPM_CnSC_MSA_MASK)
#define TPM_CnSC_MSB_MASK                        (0x20U)
#define TPM_CnSC_MSB_SHIFT                       (5U)
#define TPM_CnSC_MSB(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_CnSC_MSB_SHIFT)) & TPM_CnSC_MSB_MASK)
#define TPM_CnSC_CHIE_MASK                       (0x40U)
#define TPM_CnSC_CHIE_SHIFT                      (6U)
#define TPM_CnSC_CHIE(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CnSC_CHIE_SHIFT)) & TPM_CnSC_CHIE_MASK)
#define TPM_CnSC_CHF_MASK                        (0x80U)
#define TPM_CnSC_CHF_SHIFT                       (7U)
#define TPM_CnSC_CHF(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_CnSC_CHF_SHIFT)) & TPM_CnSC_CHF_MASK)

/* The count of TPM_CnSC */
#define TPM_CnSC_COUNT                           (6U)

/*! @name CnV - Channel (n) Value */
#define TPM_CnV_VAL_MASK                         (0xFFFFU)
#define TPM_CnV_VAL_SHIFT                        (0U)
#define TPM_CnV_VAL(x)                           (((uint32_t)(((uint32_t)(x)) << TPM_CnV_VAL_SHIFT)) & TPM_CnV_VAL_MASK)

/* The count of TPM_CnV */
#define TPM_CnV_COUNT                            (6U)

/*! @name COMBINE - Combine Channel Register */
#define TPM_COMBINE_COMBINE0_MASK                (0x1U)
#define TPM_COMBINE_COMBINE0_SHIFT               (0U)
#define TPM_COMBINE_COMBINE0(x)                  (((uint32_t)(((uint32_t)(x)) << TPM_COMBINE_COMBINE0_SHIFT)) & TPM_COMBINE_COMBINE0_MASK)
#define TPM_COMBINE_COMSWAP0_MASK                (0x2U)
#define TPM_COMBINE_COMSWAP0_SHIFT               (1U)
#define TPM_COMBINE_COMSWAP0(x)                  (((uint32_t)(((uint32_t)(x)) << TPM_COMBINE_COMSWAP0_SHIFT)) & TPM_COMBINE_COMSWAP0_MASK)
#define TPM_COMBINE_COMBINE1_MASK                (0x100U)
#define TPM_COMBINE_COMBINE1_SHIFT               (8U)
#define TPM_COMBINE_COMBINE1(x)                  (((uint32_t)(((uint32_t)(x)) << TPM_COMBINE_COMBINE1_SHIFT)) & TPM_COMBINE_COMBINE1_MASK)
#define TPM_COMBINE_COMSWAP1_MASK                (0x200U)
#define TPM_COMBINE_COMSWAP1_SHIFT               (9U)
#define TPM_COMBINE_COMSWAP1(x)                  (((uint32_t)(((uint32_t)(x)) << TPM_COMBINE_COMSWAP1_SHIFT)) & TPM_COMBINE_COMSWAP1_MASK)
#define TPM_COMBINE_COMBINE2_MASK                (0x10000U)
#define TPM_COMBINE_COMBINE2_SHIFT               (16U)
#define TPM_COMBINE_COMBINE2(x)                  (((uint32_t)(((uint32_t)(x)) << TPM_COMBINE_COMBINE2_SHIFT)) & TPM_COMBINE_COMBINE2_MASK)
#define TPM_COMBINE_COMSWAP2_MASK                (0x20000U)
#define TPM_COMBINE_COMSWAP2_SHIFT               (17U)
#define TPM_COMBINE_COMSWAP2(x)                  (((uint32_t)(((uint32_t)(x)) << TPM_COMBINE_COMSWAP2_SHIFT)) & TPM_COMBINE_COMSWAP2_MASK)

/*! @name TRIG - Channel Trigger */
#define TPM_TRIG_TRIG0_MASK                      (0x1U)
#define TPM_TRIG_TRIG0_SHIFT                     (0U)
#define TPM_TRIG_TRIG0(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_TRIG_TRIG0_SHIFT)) & TPM_TRIG_TRIG0_MASK)
#define TPM_TRIG_TRIG1_MASK                      (0x2U)
#define TPM_TRIG_TRIG1_SHIFT                     (1U)
#define TPM_TRIG_TRIG1(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_TRIG_TRIG1_SHIFT)) & TPM_TRIG_TRIG1_MASK)
#define TPM_TRIG_TRIG2_MASK                      (0x4U)
#define TPM_TRIG_TRIG2_SHIFT                     (2U)
#define TPM_TRIG_TRIG2(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_TRIG_TRIG2_SHIFT)) & TPM_TRIG_TRIG2_MASK)
#define TPM_TRIG_TRIG3_MASK                      (0x8U)
#define TPM_TRIG_TRIG3_SHIFT                     (3U)
#define TPM_TRIG_TRIG3(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_TRIG_TRIG3_SHIFT)) & TPM_TRIG_TRIG3_MASK)
#define TPM_TRIG_TRIG4_MASK                      (0x10U)
#define TPM_TRIG_TRIG4_SHIFT                     (4U)
#define TPM_TRIG_TRIG4(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_TRIG_TRIG4_SHIFT)) & TPM_TRIG_TRIG4_MASK)
#define TPM_TRIG_TRIG5_MASK                      (0x20U)
#define TPM_TRIG_TRIG5_SHIFT                     (5U)
#define TPM_TRIG_TRIG5(x)                        (((uint32_t)(((uint32_t)(x)) << TPM_TRIG_TRIG5_SHIFT)) & TPM_TRIG_TRIG5_MASK)

/*! @name POL - Channel Polarity */
#define TPM_POL_POL0_MASK                        (0x1U)
#define TPM_POL_POL0_SHIFT                       (0U)
#define TPM_POL_POL0(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_POL_POL0_SHIFT)) & TPM_POL_POL0_MASK)
#define TPM_POL_POL1_MASK                        (0x2U)
#define TPM_POL_POL1_SHIFT                       (1U)
#define TPM_POL_POL1(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_POL_POL1_SHIFT)) & TPM_POL_POL1_MASK)
#define TPM_POL_POL2_MASK                        (0x4U)
#define TPM_POL_POL2_SHIFT                       (2U)
#define TPM_POL_POL2(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_POL_POL2_SHIFT)) & TPM_POL_POL2_MASK)
#define TPM_POL_POL3_MASK                        (0x8U)
#define TPM_POL_POL3_SHIFT                       (3U)
#define TPM_POL_POL3(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_POL_POL3_SHIFT)) & TPM_POL_POL3_MASK)
#define TPM_POL_POL4_MASK                        (0x10U)
#define TPM_POL_POL4_SHIFT                       (4U)
#define TPM_POL_POL4(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_POL_POL4_SHIFT)) & TPM_POL_POL4_MASK)
#define TPM_POL_POL5_MASK                        (0x20U)
#define TPM_POL_POL5_SHIFT                       (5U)
#define TPM_POL_POL5(x)                          (((uint32_t)(((uint32_t)(x)) << TPM_POL_POL5_SHIFT)) & TPM_POL_POL5_MASK)

/*! @name FILTER - Filter Control */
#define TPM_FILTER_CH0FVAL_MASK                  (0xFU)
#define TPM_FILTER_CH0FVAL_SHIFT                 (0U)
#define TPM_FILTER_CH0FVAL(x)                    (((uint32_t)(((uint32_t)(x)) << TPM_FILTER_CH0FVAL_SHIFT)) & TPM_FILTER_CH0FVAL_MASK)
#define TPM_FILTER_CH1FVAL_MASK                  (0xF0U)
#define TPM_FILTER_CH1FVAL_SHIFT                 (4U)
#define TPM_FILTER_CH1FVAL(x)                    (((uint32_t)(((uint32_t)(x)) << TPM_FILTER_CH1FVAL_SHIFT)) & TPM_FILTER_CH1FVAL_MASK)
#define TPM_FILTER_CH2FVAL_MASK                  (0xF00U)
#define TPM_FILTER_CH2FVAL_SHIFT                 (8U)
#define TPM_FILTER_CH2FVAL(x)                    (((uint32_t)(((uint32_t)(x)) << TPM_FILTER_CH2FVAL_SHIFT)) & TPM_FILTER_CH2FVAL_MASK)
#define TPM_FILTER_CH3FVAL_MASK                  (0xF000U)
#define TPM_FILTER_CH3FVAL_SHIFT                 (12U)
#define TPM_FILTER_CH3FVAL(x)                    (((uint32_t)(((uint32_t)(x)) << TPM_FILTER_CH3FVAL_SHIFT)) & TPM_FILTER_CH3FVAL_MASK)
#define TPM_FILTER_CH4FVAL_MASK                  (0xF0000U)
#define TPM_FILTER_CH4FVAL_SHIFT                 (16U)
#define TPM_FILTER_CH4FVAL(x)                    (((uint32_t)(((uint32_t)(x)) << TPM_FILTER_CH4FVAL_SHIFT)) & TPM_FILTER_CH4FVAL_MASK)
#define TPM_FILTER_CH5FVAL_MASK                  (0xF00000U)
#define TPM_FILTER_CH5FVAL_SHIFT                 (20U)
#define TPM_FILTER_CH5FVAL(x)                    (((uint32_t)(((uint32_t)(x)) << TPM_FILTER_CH5FVAL_SHIFT)) & TPM_FILTER_CH5FVAL_MASK)

/*! @name QDCTRL - Quadrature Decoder Control and Status */
#define TPM_QDCTRL_QUADEN_MASK                   (0x1U)
#define TPM_QDCTRL_QUADEN_SHIFT                  (0U)
#define TPM_QDCTRL_QUADEN(x)                     (((uint32_t)(((uint32_t)(x)) << TPM_QDCTRL_QUADEN_SHIFT)) & TPM_QDCTRL_QUADEN_MASK)
#define TPM_QDCTRL_TOFDIR_MASK                   (0x2U)
#define TPM_QDCTRL_TOFDIR_SHIFT                  (1U)
#define TPM_QDCTRL_TOFDIR(x)                     (((uint32_t)(((uint32_t)(x)) << TPM_QDCTRL_TOFDIR_SHIFT)) & TPM_QDCTRL_TOFDIR_MASK)
#define TPM_QDCTRL_QUADIR_MASK                   (0x4U)
#define TPM_QDCTRL_QUADIR_SHIFT                  (2U)
#define TPM_QDCTRL_QUADIR(x)                     (((uint32_t)(((uint32_t)(x)) << TPM_QDCTRL_QUADIR_SHIFT)) & TPM_QDCTRL_QUADIR_MASK)
#define TPM_QDCTRL_QUADMODE_MASK                 (0x8U)
#define TPM_QDCTRL_QUADMODE_SHIFT                (3U)
#define TPM_QDCTRL_QUADMODE(x)                   (((uint32_t)(((uint32_t)(x)) << TPM_QDCTRL_QUADMODE_SHIFT)) & TPM_QDCTRL_QUADMODE_MASK)

/*! @name CONF - Configuration */
#define TPM_CONF_DOZEEN_MASK                     (0x20U)
#define TPM_CONF_DOZEEN_SHIFT                    (5U)
#define TPM_CONF_DOZEEN(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_CONF_DOZEEN_SHIFT)) & TPM_CONF_DOZEEN_MASK)
#define TPM_CONF_DBGMODE_MASK                    (0xC0U)
#define TPM_CONF_DBGMODE_SHIFT                   (6U)
#define TPM_CONF_DBGMODE(x)                      (((uint32_t)(((uint32_t)(x)) << TPM_CONF_DBGMODE_SHIFT)) & TPM_CONF_DBGMODE_MASK)
#define TPM_CONF_GTBSYNC_MASK                    (0x100U)
#define TPM_CONF_GTBSYNC_SHIFT                   (8U)
#define TPM_CONF_GTBSYNC(x)                      (((uint32_t)(((uint32_t)(x)) << TPM_CONF_GTBSYNC_SHIFT)) & TPM_CONF_GTBSYNC_MASK)
#define TPM_CONF_GTBEEN_MASK                     (0x200U)
#define TPM_CONF_GTBEEN_SHIFT                    (9U)
#define TPM_CONF_GTBEEN(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_CONF_GTBEEN_SHIFT)) & TPM_CONF_GTBEEN_MASK)
#define TPM_CONF_CSOT_MASK                       (0x10000U)
#define TPM_CONF_CSOT_SHIFT                      (16U)
#define TPM_CONF_CSOT(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CONF_CSOT_SHIFT)) & TPM_CONF_CSOT_MASK)
#define TPM_CONF_CSOO_MASK                       (0x20000U)
#define TPM_CONF_CSOO_SHIFT                      (17U)
#define TPM_CONF_CSOO(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CONF_CSOO_SHIFT)) & TPM_CONF_CSOO_MASK)
#define TPM_CONF_CROT_MASK                       (0x40000U)
#define TPM_CONF_CROT_SHIFT                      (18U)
#define TPM_CONF_CROT(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CONF_CROT_SHIFT)) & TPM_CONF_CROT_MASK)
#define TPM_CONF_CPOT_MASK                       (0x80000U)
#define TPM_CONF_CPOT_SHIFT                      (19U)
#define TPM_CONF_CPOT(x)                         (((uint32_t)(((uint32_t)(x)) << TPM_CONF_CPOT_SHIFT)) & TPM_CONF_CPOT_MASK)
#define TPM_CONF_TRGPOL_MASK                     (0x400000U)
#define TPM_CONF_TRGPOL_SHIFT                    (22U)
#define TPM_CONF_TRGPOL(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_CONF_TRGPOL_SHIFT)) & TPM_CONF_TRGPOL_MASK)
#define TPM_CONF_TRGSRC_MASK                     (0x800000U)
#define TPM_CONF_TRGSRC_SHIFT                    (23U)
#define TPM_CONF_TRGSRC(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_CONF_TRGSRC_SHIFT)) & TPM_CONF_TRGSRC_MASK)
#define TPM_CONF_TRGSEL_MASK                     (0x3000000U)
#define TPM_CONF_TRGSEL_SHIFT                    (24U)
#define TPM_CONF_TRGSEL(x)                       (((uint32_t)(((uint32_t)(x)) << TPM_CONF_TRGSEL_SHIFT)) & TPM_CONF_TRGSEL_MASK)


/*!
 * @}
 */ /* end of group TPM_Register_Masks */


/* TPM - Peripheral instance base addresses */
/** Peripheral TPM0 base address */
#define TPM0_BASE                                (0x40035000u)
/** Peripheral TPM0 base pointer */
#define TPM0                                     ((TPM_Type *)TPM0_BASE)
/** Peripheral TPM1 base address */
#define TPM1_BASE                                (0x40036000u)
/** Peripheral TPM1 base pointer */
#define TPM1                                     ((TPM_Type *)TPM1_BASE)
/** Peripheral TPM2 base address */
#define TPM2_BASE                                (0x40037000u)
/** Peripheral TPM2 base pointer */
#define TPM2                                     ((TPM_Type *)TPM2_BASE)
/** Peripheral TPM3 base address */
#define TPM3_BASE                                (0x4102D000u)
/** Peripheral TPM3 base pointer */
#define TPM3                                     ((TPM_Type *)TPM3_BASE)
/** Array initializer of TPM peripheral base addresses */
#define TPM_BASE_ADDRS                           { TPM0_BASE, TPM1_BASE, TPM2_BASE, TPM3_BASE }
/** Array initializer of TPM peripheral base pointers */
#define TPM_BASE_PTRS                            { TPM0, TPM1, TPM2, TPM3 }
/** Interrupt vectors for the TPM peripheral type */
#define TPM_IRQS                                 { TPM0_IRQn, TPM1_IRQn, TPM2_IRQn, TPM3_IRQn }

/*!
 * @}
 */ /* end of group TPM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- TRGMUX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TRGMUX_Peripheral_Access_Layer TRGMUX Peripheral Access Layer
 * @{
 */

/** TRGMUX - Register Layout Typedef */
typedef struct {
  __IO uint32_t TRGCFG[25];                        /**< TRGMUX TRGMUX_DMAMUX0 Register..TRGMUX TRGMUX_LPDAC0 Register, array offset: 0x0, array step: 0x4 */
} TRGMUX_Type;

/* ----------------------------------------------------------------------------
   -- TRGMUX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TRGMUX_Register_Masks TRGMUX Register Masks
 * @{
 */

/*! @name TRGCFG - TRGMUX TRGMUX_DMAMUX0 Register..TRGMUX TRGMUX_LPDAC0 Register */
#define TRGMUX_TRGCFG_SEL0_MASK                  (0x3FU)
#define TRGMUX_TRGCFG_SEL0_SHIFT                 (0U)
#define TRGMUX_TRGCFG_SEL0(x)                    (((uint32_t)(((uint32_t)(x)) << TRGMUX_TRGCFG_SEL0_SHIFT)) & TRGMUX_TRGCFG_SEL0_MASK)
#define TRGMUX_TRGCFG_SEL1_MASK                  (0x3F00U)
#define TRGMUX_TRGCFG_SEL1_SHIFT                 (8U)
#define TRGMUX_TRGCFG_SEL1(x)                    (((uint32_t)(((uint32_t)(x)) << TRGMUX_TRGCFG_SEL1_SHIFT)) & TRGMUX_TRGCFG_SEL1_MASK)
#define TRGMUX_TRGCFG_SEL2_MASK                  (0x3F0000U)
#define TRGMUX_TRGCFG_SEL2_SHIFT                 (16U)
#define TRGMUX_TRGCFG_SEL2(x)                    (((uint32_t)(((uint32_t)(x)) << TRGMUX_TRGCFG_SEL2_SHIFT)) & TRGMUX_TRGCFG_SEL2_MASK)
#define TRGMUX_TRGCFG_SEL3_MASK                  (0x3F000000U)
#define TRGMUX_TRGCFG_SEL3_SHIFT                 (24U)
#define TRGMUX_TRGCFG_SEL3(x)                    (((uint32_t)(((uint32_t)(x)) << TRGMUX_TRGCFG_SEL3_SHIFT)) & TRGMUX_TRGCFG_SEL3_MASK)
#define TRGMUX_TRGCFG_LK_MASK                    (0x80000000U)
#define TRGMUX_TRGCFG_LK_SHIFT                   (31U)
#define TRGMUX_TRGCFG_LK(x)                      (((uint32_t)(((uint32_t)(x)) << TRGMUX_TRGCFG_LK_SHIFT)) & TRGMUX_TRGCFG_LK_MASK)

/* The count of TRGMUX_TRGCFG */
#define TRGMUX_TRGCFG_COUNT                      (25U)


/*!
 * @}
 */ /* end of group TRGMUX_Register_Masks */


/* TRGMUX - Peripheral instance base addresses */
/** Peripheral TRGMUX0 base address */
#define TRGMUX0_BASE                             (0x40029000u)
/** Peripheral TRGMUX0 base pointer */
#define TRGMUX0                                  ((TRGMUX_Type *)TRGMUX0_BASE)
/** Peripheral TRGMUX1 base address */
#define TRGMUX1_BASE                             (0x41025000u)
/** Peripheral TRGMUX1 base pointer */
#define TRGMUX1                                  ((TRGMUX_Type *)TRGMUX1_BASE)
/** Array initializer of TRGMUX peripheral base addresses */
#define TRGMUX_BASE_ADDRS                        { TRGMUX0_BASE, TRGMUX1_BASE }
/** Array initializer of TRGMUX peripheral base pointers */
#define TRGMUX_BASE_PTRS                         { TRGMUX0, TRGMUX1 }

/*!
 * @}
 */ /* end of group TRGMUX_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- TRNG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TRNG_Peripheral_Access_Layer TRNG Peripheral Access Layer
 * @{
 */

/** TRNG - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCTL;                              /**< Miscellaneous Control Register, offset: 0x0 */
  __IO uint32_t SCMISC;                            /**< Statistical Check Miscellaneous Register, offset: 0x4 */
  __IO uint32_t PKRRNG;                            /**< Poker Range Register, offset: 0x8 */
  union {                                          /* offset: 0xC */
    __IO uint32_t PKRMAX;                            /**< Poker Maximum Limit Register, offset: 0xC */
    __I  uint32_t PKRSQ;                             /**< Poker Square Calculation Result Register, offset: 0xC */
  };
  __IO uint32_t SDCTL;                             /**< Seed Control Register, offset: 0x10 */
  union {                                          /* offset: 0x14 */
    __IO uint32_t SBLIM;                             /**< Sparse Bit Limit Register, offset: 0x14 */
    __I  uint32_t TOTSAM;                            /**< Total Samples Register, offset: 0x14 */
  };
  __IO uint32_t FRQMIN;                            /**< Frequency Count Minimum Limit Register, offset: 0x18 */
  union {                                          /* offset: 0x1C */
    __I  uint32_t FRQCNT;                            /**< Frequency Count Register, offset: 0x1C */
    __IO uint32_t FRQMAX;                            /**< Frequency Count Maximum Limit Register, offset: 0x1C */
  };
  union {                                          /* offset: 0x20 */
    __I  uint32_t SCMC;                              /**< Statistical Check Monobit Count Register, offset: 0x20 */
    __IO uint32_t SCML;                              /**< Statistical Check Monobit Limit Register, offset: 0x20 */
  };
  union {                                          /* offset: 0x24 */
    __I  uint32_t SCR1C;                             /**< Statistical Check Run Length 1 Count Register, offset: 0x24 */
    __IO uint32_t SCR1L;                             /**< Statistical Check Run Length 1 Limit Register, offset: 0x24 */
  };
  union {                                          /* offset: 0x28 */
    __I  uint32_t SCR2C;                             /**< Statistical Check Run Length 2 Count Register, offset: 0x28 */
    __IO uint32_t SCR2L;                             /**< Statistical Check Run Length 2 Limit Register, offset: 0x28 */
  };
  union {                                          /* offset: 0x2C */
    __I  uint32_t SCR3C;                             /**< Statistical Check Run Length 3 Count Register, offset: 0x2C */
    __IO uint32_t SCR3L;                             /**< Statistical Check Run Length 3 Limit Register, offset: 0x2C */
  };
  union {                                          /* offset: 0x30 */
    __I  uint32_t SCR4C;                             /**< Statistical Check Run Length 4 Count Register, offset: 0x30 */
    __IO uint32_t SCR4L;                             /**< Statistical Check Run Length 4 Limit Register, offset: 0x30 */
  };
  union {                                          /* offset: 0x34 */
    __I  uint32_t SCR5C;                             /**< Statistical Check Run Length 5 Count Register, offset: 0x34 */
    __IO uint32_t SCR5L;                             /**< Statistical Check Run Length 5 Limit Register, offset: 0x34 */
  };
  union {                                          /* offset: 0x38 */
    __I  uint32_t SCR6PC;                            /**< Statistical Check Run Length 6+ Count Register, offset: 0x38 */
    __IO uint32_t SCR6PL;                            /**< Statistical Check Run Length 6+ Limit Register, offset: 0x38 */
  };
  __I  uint32_t STATUS;                            /**< Status Register, offset: 0x3C */
  __I  uint32_t ENT[16];                           /**< Entropy Read Register, array offset: 0x40, array step: 0x4 */
  __I  uint32_t PKRCNT10;                          /**< Statistical Check Poker Count 1 and 0 Register, offset: 0x80 */
  __I  uint32_t PKRCNT32;                          /**< Statistical Check Poker Count 3 and 2 Register, offset: 0x84 */
  __I  uint32_t PKRCNT54;                          /**< Statistical Check Poker Count 5 and 4 Register, offset: 0x88 */
  __I  uint32_t PKRCNT76;                          /**< Statistical Check Poker Count 7 and 6 Register, offset: 0x8C */
  __I  uint32_t PKRCNT98;                          /**< Statistical Check Poker Count 9 and 8 Register, offset: 0x90 */
  __I  uint32_t PKRCNTBA;                          /**< Statistical Check Poker Count B and A Register, offset: 0x94 */
  __I  uint32_t PKRCNTDC;                          /**< Statistical Check Poker Count D and C Register, offset: 0x98 */
  __I  uint32_t PKRCNTFE;                          /**< Statistical Check Poker Count F and E Register, offset: 0x9C */
  __IO uint32_t SEC_CFG;                           /**< Security Configuration Register, offset: 0xA0 */
  __IO uint32_t INT_CTRL;                          /**< Interrupt Control Register, offset: 0xA4 */
  __IO uint32_t INT_MASK;                          /**< Mask Register, offset: 0xA8 */
  __I  uint32_t INT_STATUS;                        /**< Interrupt Status Register, offset: 0xAC */
       uint8_t RESERVED_0[64];
  __I  uint32_t VID1;                              /**< Version ID Register (MS), offset: 0xF0 */
  __I  uint32_t VID2;                              /**< Version ID Register (LS), offset: 0xF4 */
} TRNG_Type;

/* ----------------------------------------------------------------------------
   -- TRNG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TRNG_Register_Masks TRNG Register Masks
 * @{
 */

/*! @name MCTL - Miscellaneous Control Register */
#define TRNG_MCTL_SAMP_MODE_MASK                 (0x3U)
#define TRNG_MCTL_SAMP_MODE_SHIFT                (0U)
#define TRNG_MCTL_SAMP_MODE(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_SAMP_MODE_SHIFT)) & TRNG_MCTL_SAMP_MODE_MASK)
#define TRNG_MCTL_OSC_DIV_MASK                   (0xCU)
#define TRNG_MCTL_OSC_DIV_SHIFT                  (2U)
#define TRNG_MCTL_OSC_DIV(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_OSC_DIV_SHIFT)) & TRNG_MCTL_OSC_DIV_MASK)
#define TRNG_MCTL_UNUSED4_MASK                   (0x10U)
#define TRNG_MCTL_UNUSED4_SHIFT                  (4U)
#define TRNG_MCTL_UNUSED4(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_UNUSED4_SHIFT)) & TRNG_MCTL_UNUSED4_MASK)
#define TRNG_MCTL_TRNG_ACC_MASK                  (0x20U)
#define TRNG_MCTL_TRNG_ACC_SHIFT                 (5U)
#define TRNG_MCTL_TRNG_ACC(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_TRNG_ACC_SHIFT)) & TRNG_MCTL_TRNG_ACC_MASK)
#define TRNG_MCTL_RST_DEF_MASK                   (0x40U)
#define TRNG_MCTL_RST_DEF_SHIFT                  (6U)
#define TRNG_MCTL_RST_DEF(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_RST_DEF_SHIFT)) & TRNG_MCTL_RST_DEF_MASK)
#define TRNG_MCTL_FOR_SCLK_MASK                  (0x80U)
#define TRNG_MCTL_FOR_SCLK_SHIFT                 (7U)
#define TRNG_MCTL_FOR_SCLK(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_FOR_SCLK_SHIFT)) & TRNG_MCTL_FOR_SCLK_MASK)
#define TRNG_MCTL_FCT_FAIL_MASK                  (0x100U)
#define TRNG_MCTL_FCT_FAIL_SHIFT                 (8U)
#define TRNG_MCTL_FCT_FAIL(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_FCT_FAIL_SHIFT)) & TRNG_MCTL_FCT_FAIL_MASK)
#define TRNG_MCTL_FCT_VAL_MASK                   (0x200U)
#define TRNG_MCTL_FCT_VAL_SHIFT                  (9U)
#define TRNG_MCTL_FCT_VAL(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_FCT_VAL_SHIFT)) & TRNG_MCTL_FCT_VAL_MASK)
#define TRNG_MCTL_ENT_VAL_MASK                   (0x400U)
#define TRNG_MCTL_ENT_VAL_SHIFT                  (10U)
#define TRNG_MCTL_ENT_VAL(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_ENT_VAL_SHIFT)) & TRNG_MCTL_ENT_VAL_MASK)
#define TRNG_MCTL_TST_OUT_MASK                   (0x800U)
#define TRNG_MCTL_TST_OUT_SHIFT                  (11U)
#define TRNG_MCTL_TST_OUT(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_TST_OUT_SHIFT)) & TRNG_MCTL_TST_OUT_MASK)
#define TRNG_MCTL_ERR_MASK                       (0x1000U)
#define TRNG_MCTL_ERR_SHIFT                      (12U)
#define TRNG_MCTL_ERR(x)                         (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_ERR_SHIFT)) & TRNG_MCTL_ERR_MASK)
#define TRNG_MCTL_TSTOP_OK_MASK                  (0x2000U)
#define TRNG_MCTL_TSTOP_OK_SHIFT                 (13U)
#define TRNG_MCTL_TSTOP_OK(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_TSTOP_OK_SHIFT)) & TRNG_MCTL_TSTOP_OK_MASK)
#define TRNG_MCTL_PRGM_MASK                      (0x10000U)
#define TRNG_MCTL_PRGM_SHIFT                     (16U)
#define TRNG_MCTL_PRGM(x)                        (((uint32_t)(((uint32_t)(x)) << TRNG_MCTL_PRGM_SHIFT)) & TRNG_MCTL_PRGM_MASK)

/*! @name SCMISC - Statistical Check Miscellaneous Register */
#define TRNG_SCMISC_LRUN_MAX_MASK                (0xFFU)
#define TRNG_SCMISC_LRUN_MAX_SHIFT               (0U)
#define TRNG_SCMISC_LRUN_MAX(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_SCMISC_LRUN_MAX_SHIFT)) & TRNG_SCMISC_LRUN_MAX_MASK)
#define TRNG_SCMISC_RTY_CT_MASK                  (0xF0000U)
#define TRNG_SCMISC_RTY_CT_SHIFT                 (16U)
#define TRNG_SCMISC_RTY_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCMISC_RTY_CT_SHIFT)) & TRNG_SCMISC_RTY_CT_MASK)

/*! @name PKRRNG - Poker Range Register */
#define TRNG_PKRRNG_PKR_RNG_MASK                 (0xFFFFU)
#define TRNG_PKRRNG_PKR_RNG_SHIFT                (0U)
#define TRNG_PKRRNG_PKR_RNG(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_PKRRNG_PKR_RNG_SHIFT)) & TRNG_PKRRNG_PKR_RNG_MASK)

/*! @name PKRMAX - Poker Maximum Limit Register */
#define TRNG_PKRMAX_PKR_MAX_MASK                 (0xFFFFFFU)
#define TRNG_PKRMAX_PKR_MAX_SHIFT                (0U)
#define TRNG_PKRMAX_PKR_MAX(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_PKRMAX_PKR_MAX_SHIFT)) & TRNG_PKRMAX_PKR_MAX_MASK)

/*! @name PKRSQ - Poker Square Calculation Result Register */
#define TRNG_PKRSQ_PKR_SQ_MASK                   (0xFFFFFFU)
#define TRNG_PKRSQ_PKR_SQ_SHIFT                  (0U)
#define TRNG_PKRSQ_PKR_SQ(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_PKRSQ_PKR_SQ_SHIFT)) & TRNG_PKRSQ_PKR_SQ_MASK)

/*! @name SDCTL - Seed Control Register */
#define TRNG_SDCTL_SAMP_SIZE_MASK                (0xFFFFU)
#define TRNG_SDCTL_SAMP_SIZE_SHIFT               (0U)
#define TRNG_SDCTL_SAMP_SIZE(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_SDCTL_SAMP_SIZE_SHIFT)) & TRNG_SDCTL_SAMP_SIZE_MASK)
#define TRNG_SDCTL_ENT_DLY_MASK                  (0xFFFF0000U)
#define TRNG_SDCTL_ENT_DLY_SHIFT                 (16U)
#define TRNG_SDCTL_ENT_DLY(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SDCTL_ENT_DLY_SHIFT)) & TRNG_SDCTL_ENT_DLY_MASK)

/*! @name SBLIM - Sparse Bit Limit Register */
#define TRNG_SBLIM_SB_LIM_MASK                   (0x3FFU)
#define TRNG_SBLIM_SB_LIM_SHIFT                  (0U)
#define TRNG_SBLIM_SB_LIM(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_SBLIM_SB_LIM_SHIFT)) & TRNG_SBLIM_SB_LIM_MASK)

/*! @name TOTSAM - Total Samples Register */
#define TRNG_TOTSAM_TOT_SAM_MASK                 (0xFFFFFU)
#define TRNG_TOTSAM_TOT_SAM_SHIFT                (0U)
#define TRNG_TOTSAM_TOT_SAM(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_TOTSAM_TOT_SAM_SHIFT)) & TRNG_TOTSAM_TOT_SAM_MASK)

/*! @name FRQMIN - Frequency Count Minimum Limit Register */
#define TRNG_FRQMIN_FRQ_MIN_MASK                 (0x3FFFFFU)
#define TRNG_FRQMIN_FRQ_MIN_SHIFT                (0U)
#define TRNG_FRQMIN_FRQ_MIN(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_FRQMIN_FRQ_MIN_SHIFT)) & TRNG_FRQMIN_FRQ_MIN_MASK)

/*! @name FRQCNT - Frequency Count Register */
#define TRNG_FRQCNT_FRQ_CT_MASK                  (0x3FFFFFU)
#define TRNG_FRQCNT_FRQ_CT_SHIFT                 (0U)
#define TRNG_FRQCNT_FRQ_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_FRQCNT_FRQ_CT_SHIFT)) & TRNG_FRQCNT_FRQ_CT_MASK)

/*! @name FRQMAX - Frequency Count Maximum Limit Register */
#define TRNG_FRQMAX_FRQ_MAX_MASK                 (0x3FFFFFU)
#define TRNG_FRQMAX_FRQ_MAX_SHIFT                (0U)
#define TRNG_FRQMAX_FRQ_MAX(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_FRQMAX_FRQ_MAX_SHIFT)) & TRNG_FRQMAX_FRQ_MAX_MASK)

/*! @name SCMC - Statistical Check Monobit Count Register */
#define TRNG_SCMC_MONO_CT_MASK                   (0xFFFFU)
#define TRNG_SCMC_MONO_CT_SHIFT                  (0U)
#define TRNG_SCMC_MONO_CT(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_SCMC_MONO_CT_SHIFT)) & TRNG_SCMC_MONO_CT_MASK)

/*! @name SCML - Statistical Check Monobit Limit Register */
#define TRNG_SCML_MONO_MAX_MASK                  (0xFFFFU)
#define TRNG_SCML_MONO_MAX_SHIFT                 (0U)
#define TRNG_SCML_MONO_MAX(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCML_MONO_MAX_SHIFT)) & TRNG_SCML_MONO_MAX_MASK)
#define TRNG_SCML_MONO_RNG_MASK                  (0xFFFF0000U)
#define TRNG_SCML_MONO_RNG_SHIFT                 (16U)
#define TRNG_SCML_MONO_RNG(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCML_MONO_RNG_SHIFT)) & TRNG_SCML_MONO_RNG_MASK)

/*! @name SCR1C - Statistical Check Run Length 1 Count Register */
#define TRNG_SCR1C_R1_0_CT_MASK                  (0x7FFFU)
#define TRNG_SCR1C_R1_0_CT_SHIFT                 (0U)
#define TRNG_SCR1C_R1_0_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR1C_R1_0_CT_SHIFT)) & TRNG_SCR1C_R1_0_CT_MASK)
#define TRNG_SCR1C_R1_1_CT_MASK                  (0x7FFF0000U)
#define TRNG_SCR1C_R1_1_CT_SHIFT                 (16U)
#define TRNG_SCR1C_R1_1_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR1C_R1_1_CT_SHIFT)) & TRNG_SCR1C_R1_1_CT_MASK)

/*! @name SCR1L - Statistical Check Run Length 1 Limit Register */
#define TRNG_SCR1L_RUN1_MAX_MASK                 (0x7FFFU)
#define TRNG_SCR1L_RUN1_MAX_SHIFT                (0U)
#define TRNG_SCR1L_RUN1_MAX(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR1L_RUN1_MAX_SHIFT)) & TRNG_SCR1L_RUN1_MAX_MASK)
#define TRNG_SCR1L_RUN1_RNG_MASK                 (0x7FFF0000U)
#define TRNG_SCR1L_RUN1_RNG_SHIFT                (16U)
#define TRNG_SCR1L_RUN1_RNG(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR1L_RUN1_RNG_SHIFT)) & TRNG_SCR1L_RUN1_RNG_MASK)

/*! @name SCR2C - Statistical Check Run Length 2 Count Register */
#define TRNG_SCR2C_R2_0_CT_MASK                  (0x3FFFU)
#define TRNG_SCR2C_R2_0_CT_SHIFT                 (0U)
#define TRNG_SCR2C_R2_0_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR2C_R2_0_CT_SHIFT)) & TRNG_SCR2C_R2_0_CT_MASK)
#define TRNG_SCR2C_R2_1_CT_MASK                  (0x3FFF0000U)
#define TRNG_SCR2C_R2_1_CT_SHIFT                 (16U)
#define TRNG_SCR2C_R2_1_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR2C_R2_1_CT_SHIFT)) & TRNG_SCR2C_R2_1_CT_MASK)

/*! @name SCR2L - Statistical Check Run Length 2 Limit Register */
#define TRNG_SCR2L_RUN2_MAX_MASK                 (0x3FFFU)
#define TRNG_SCR2L_RUN2_MAX_SHIFT                (0U)
#define TRNG_SCR2L_RUN2_MAX(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR2L_RUN2_MAX_SHIFT)) & TRNG_SCR2L_RUN2_MAX_MASK)
#define TRNG_SCR2L_RUN2_RNG_MASK                 (0x3FFF0000U)
#define TRNG_SCR2L_RUN2_RNG_SHIFT                (16U)
#define TRNG_SCR2L_RUN2_RNG(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR2L_RUN2_RNG_SHIFT)) & TRNG_SCR2L_RUN2_RNG_MASK)

/*! @name SCR3C - Statistical Check Run Length 3 Count Register */
#define TRNG_SCR3C_R3_0_CT_MASK                  (0x1FFFU)
#define TRNG_SCR3C_R3_0_CT_SHIFT                 (0U)
#define TRNG_SCR3C_R3_0_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR3C_R3_0_CT_SHIFT)) & TRNG_SCR3C_R3_0_CT_MASK)
#define TRNG_SCR3C_R3_1_CT_MASK                  (0x1FFF0000U)
#define TRNG_SCR3C_R3_1_CT_SHIFT                 (16U)
#define TRNG_SCR3C_R3_1_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR3C_R3_1_CT_SHIFT)) & TRNG_SCR3C_R3_1_CT_MASK)

/*! @name SCR3L - Statistical Check Run Length 3 Limit Register */
#define TRNG_SCR3L_RUN3_MAX_MASK                 (0x1FFFU)
#define TRNG_SCR3L_RUN3_MAX_SHIFT                (0U)
#define TRNG_SCR3L_RUN3_MAX(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR3L_RUN3_MAX_SHIFT)) & TRNG_SCR3L_RUN3_MAX_MASK)
#define TRNG_SCR3L_RUN3_RNG_MASK                 (0x1FFF0000U)
#define TRNG_SCR3L_RUN3_RNG_SHIFT                (16U)
#define TRNG_SCR3L_RUN3_RNG(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR3L_RUN3_RNG_SHIFT)) & TRNG_SCR3L_RUN3_RNG_MASK)

/*! @name SCR4C - Statistical Check Run Length 4 Count Register */
#define TRNG_SCR4C_R4_0_CT_MASK                  (0xFFFU)
#define TRNG_SCR4C_R4_0_CT_SHIFT                 (0U)
#define TRNG_SCR4C_R4_0_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR4C_R4_0_CT_SHIFT)) & TRNG_SCR4C_R4_0_CT_MASK)
#define TRNG_SCR4C_R4_1_CT_MASK                  (0xFFF0000U)
#define TRNG_SCR4C_R4_1_CT_SHIFT                 (16U)
#define TRNG_SCR4C_R4_1_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR4C_R4_1_CT_SHIFT)) & TRNG_SCR4C_R4_1_CT_MASK)

/*! @name SCR4L - Statistical Check Run Length 4 Limit Register */
#define TRNG_SCR4L_RUN4_MAX_MASK                 (0xFFFU)
#define TRNG_SCR4L_RUN4_MAX_SHIFT                (0U)
#define TRNG_SCR4L_RUN4_MAX(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR4L_RUN4_MAX_SHIFT)) & TRNG_SCR4L_RUN4_MAX_MASK)
#define TRNG_SCR4L_RUN4_RNG_MASK                 (0xFFF0000U)
#define TRNG_SCR4L_RUN4_RNG_SHIFT                (16U)
#define TRNG_SCR4L_RUN4_RNG(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR4L_RUN4_RNG_SHIFT)) & TRNG_SCR4L_RUN4_RNG_MASK)

/*! @name SCR5C - Statistical Check Run Length 5 Count Register */
#define TRNG_SCR5C_R5_0_CT_MASK                  (0x7FFU)
#define TRNG_SCR5C_R5_0_CT_SHIFT                 (0U)
#define TRNG_SCR5C_R5_0_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR5C_R5_0_CT_SHIFT)) & TRNG_SCR5C_R5_0_CT_MASK)
#define TRNG_SCR5C_R5_1_CT_MASK                  (0x7FF0000U)
#define TRNG_SCR5C_R5_1_CT_SHIFT                 (16U)
#define TRNG_SCR5C_R5_1_CT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_SCR5C_R5_1_CT_SHIFT)) & TRNG_SCR5C_R5_1_CT_MASK)

/*! @name SCR5L - Statistical Check Run Length 5 Limit Register */
#define TRNG_SCR5L_RUN5_MAX_MASK                 (0x7FFU)
#define TRNG_SCR5L_RUN5_MAX_SHIFT                (0U)
#define TRNG_SCR5L_RUN5_MAX(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR5L_RUN5_MAX_SHIFT)) & TRNG_SCR5L_RUN5_MAX_MASK)
#define TRNG_SCR5L_RUN5_RNG_MASK                 (0x7FF0000U)
#define TRNG_SCR5L_RUN5_RNG_SHIFT                (16U)
#define TRNG_SCR5L_RUN5_RNG(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_SCR5L_RUN5_RNG_SHIFT)) & TRNG_SCR5L_RUN5_RNG_MASK)

/*! @name SCR6PC - Statistical Check Run Length 6+ Count Register */
#define TRNG_SCR6PC_R6P_0_CT_MASK                (0x7FFU)
#define TRNG_SCR6PC_R6P_0_CT_SHIFT               (0U)
#define TRNG_SCR6PC_R6P_0_CT(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_SCR6PC_R6P_0_CT_SHIFT)) & TRNG_SCR6PC_R6P_0_CT_MASK)
#define TRNG_SCR6PC_R6P_1_CT_MASK                (0x7FF0000U)
#define TRNG_SCR6PC_R6P_1_CT_SHIFT               (16U)
#define TRNG_SCR6PC_R6P_1_CT(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_SCR6PC_R6P_1_CT_SHIFT)) & TRNG_SCR6PC_R6P_1_CT_MASK)

/*! @name SCR6PL - Statistical Check Run Length 6+ Limit Register */
#define TRNG_SCR6PL_RUN6P_MAX_MASK               (0x7FFU)
#define TRNG_SCR6PL_RUN6P_MAX_SHIFT              (0U)
#define TRNG_SCR6PL_RUN6P_MAX(x)                 (((uint32_t)(((uint32_t)(x)) << TRNG_SCR6PL_RUN6P_MAX_SHIFT)) & TRNG_SCR6PL_RUN6P_MAX_MASK)
#define TRNG_SCR6PL_RUN6P_RNG_MASK               (0x7FF0000U)
#define TRNG_SCR6PL_RUN6P_RNG_SHIFT              (16U)
#define TRNG_SCR6PL_RUN6P_RNG(x)                 (((uint32_t)(((uint32_t)(x)) << TRNG_SCR6PL_RUN6P_RNG_SHIFT)) & TRNG_SCR6PL_RUN6P_RNG_MASK)

/*! @name STATUS - Status Register */
#define TRNG_STATUS_TF1BR0_MASK                  (0x1U)
#define TRNG_STATUS_TF1BR0_SHIFT                 (0U)
#define TRNG_STATUS_TF1BR0(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF1BR0_SHIFT)) & TRNG_STATUS_TF1BR0_MASK)
#define TRNG_STATUS_TF1BR1_MASK                  (0x2U)
#define TRNG_STATUS_TF1BR1_SHIFT                 (1U)
#define TRNG_STATUS_TF1BR1(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF1BR1_SHIFT)) & TRNG_STATUS_TF1BR1_MASK)
#define TRNG_STATUS_TF2BR0_MASK                  (0x4U)
#define TRNG_STATUS_TF2BR0_SHIFT                 (2U)
#define TRNG_STATUS_TF2BR0(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF2BR0_SHIFT)) & TRNG_STATUS_TF2BR0_MASK)
#define TRNG_STATUS_TF2BR1_MASK                  (0x8U)
#define TRNG_STATUS_TF2BR1_SHIFT                 (3U)
#define TRNG_STATUS_TF2BR1(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF2BR1_SHIFT)) & TRNG_STATUS_TF2BR1_MASK)
#define TRNG_STATUS_TF3BR0_MASK                  (0x10U)
#define TRNG_STATUS_TF3BR0_SHIFT                 (4U)
#define TRNG_STATUS_TF3BR0(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF3BR0_SHIFT)) & TRNG_STATUS_TF3BR0_MASK)
#define TRNG_STATUS_TF3BR1_MASK                  (0x20U)
#define TRNG_STATUS_TF3BR1_SHIFT                 (5U)
#define TRNG_STATUS_TF3BR1(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF3BR1_SHIFT)) & TRNG_STATUS_TF3BR1_MASK)
#define TRNG_STATUS_TF4BR0_MASK                  (0x40U)
#define TRNG_STATUS_TF4BR0_SHIFT                 (6U)
#define TRNG_STATUS_TF4BR0(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF4BR0_SHIFT)) & TRNG_STATUS_TF4BR0_MASK)
#define TRNG_STATUS_TF4BR1_MASK                  (0x80U)
#define TRNG_STATUS_TF4BR1_SHIFT                 (7U)
#define TRNG_STATUS_TF4BR1(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF4BR1_SHIFT)) & TRNG_STATUS_TF4BR1_MASK)
#define TRNG_STATUS_TF5BR0_MASK                  (0x100U)
#define TRNG_STATUS_TF5BR0_SHIFT                 (8U)
#define TRNG_STATUS_TF5BR0(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF5BR0_SHIFT)) & TRNG_STATUS_TF5BR0_MASK)
#define TRNG_STATUS_TF5BR1_MASK                  (0x200U)
#define TRNG_STATUS_TF5BR1_SHIFT                 (9U)
#define TRNG_STATUS_TF5BR1(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF5BR1_SHIFT)) & TRNG_STATUS_TF5BR1_MASK)
#define TRNG_STATUS_TF6PBR0_MASK                 (0x400U)
#define TRNG_STATUS_TF6PBR0_SHIFT                (10U)
#define TRNG_STATUS_TF6PBR0(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF6PBR0_SHIFT)) & TRNG_STATUS_TF6PBR0_MASK)
#define TRNG_STATUS_TF6PBR1_MASK                 (0x800U)
#define TRNG_STATUS_TF6PBR1_SHIFT                (11U)
#define TRNG_STATUS_TF6PBR1(x)                   (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TF6PBR1_SHIFT)) & TRNG_STATUS_TF6PBR1_MASK)
#define TRNG_STATUS_TFSB_MASK                    (0x1000U)
#define TRNG_STATUS_TFSB_SHIFT                   (12U)
#define TRNG_STATUS_TFSB(x)                      (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TFSB_SHIFT)) & TRNG_STATUS_TFSB_MASK)
#define TRNG_STATUS_TFLR_MASK                    (0x2000U)
#define TRNG_STATUS_TFLR_SHIFT                   (13U)
#define TRNG_STATUS_TFLR(x)                      (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TFLR_SHIFT)) & TRNG_STATUS_TFLR_MASK)
#define TRNG_STATUS_TFP_MASK                     (0x4000U)
#define TRNG_STATUS_TFP_SHIFT                    (14U)
#define TRNG_STATUS_TFP(x)                       (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TFP_SHIFT)) & TRNG_STATUS_TFP_MASK)
#define TRNG_STATUS_TFMB_MASK                    (0x8000U)
#define TRNG_STATUS_TFMB_SHIFT                   (15U)
#define TRNG_STATUS_TFMB(x)                      (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_TFMB_SHIFT)) & TRNG_STATUS_TFMB_MASK)
#define TRNG_STATUS_RETRY_CT_MASK                (0xF0000U)
#define TRNG_STATUS_RETRY_CT_SHIFT               (16U)
#define TRNG_STATUS_RETRY_CT(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_STATUS_RETRY_CT_SHIFT)) & TRNG_STATUS_RETRY_CT_MASK)

/*! @name ENT - Entropy Read Register */
#define TRNG_ENT_ENT_MASK                        (0xFFFFFFFFU)
#define TRNG_ENT_ENT_SHIFT                       (0U)
#define TRNG_ENT_ENT(x)                          (((uint32_t)(((uint32_t)(x)) << TRNG_ENT_ENT_SHIFT)) & TRNG_ENT_ENT_MASK)

/* The count of TRNG_ENT */
#define TRNG_ENT_COUNT                           (16U)

/*! @name PKRCNT10 - Statistical Check Poker Count 1 and 0 Register */
#define TRNG_PKRCNT10_PKR_0_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNT10_PKR_0_CT_SHIFT             (0U)
#define TRNG_PKRCNT10_PKR_0_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT10_PKR_0_CT_SHIFT)) & TRNG_PKRCNT10_PKR_0_CT_MASK)
#define TRNG_PKRCNT10_PKR_1_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNT10_PKR_1_CT_SHIFT             (16U)
#define TRNG_PKRCNT10_PKR_1_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT10_PKR_1_CT_SHIFT)) & TRNG_PKRCNT10_PKR_1_CT_MASK)

/*! @name PKRCNT32 - Statistical Check Poker Count 3 and 2 Register */
#define TRNG_PKRCNT32_PKR_2_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNT32_PKR_2_CT_SHIFT             (0U)
#define TRNG_PKRCNT32_PKR_2_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT32_PKR_2_CT_SHIFT)) & TRNG_PKRCNT32_PKR_2_CT_MASK)
#define TRNG_PKRCNT32_PKR_3_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNT32_PKR_3_CT_SHIFT             (16U)
#define TRNG_PKRCNT32_PKR_3_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT32_PKR_3_CT_SHIFT)) & TRNG_PKRCNT32_PKR_3_CT_MASK)

/*! @name PKRCNT54 - Statistical Check Poker Count 5 and 4 Register */
#define TRNG_PKRCNT54_PKR_4_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNT54_PKR_4_CT_SHIFT             (0U)
#define TRNG_PKRCNT54_PKR_4_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT54_PKR_4_CT_SHIFT)) & TRNG_PKRCNT54_PKR_4_CT_MASK)
#define TRNG_PKRCNT54_PKR_5_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNT54_PKR_5_CT_SHIFT             (16U)
#define TRNG_PKRCNT54_PKR_5_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT54_PKR_5_CT_SHIFT)) & TRNG_PKRCNT54_PKR_5_CT_MASK)

/*! @name PKRCNT76 - Statistical Check Poker Count 7 and 6 Register */
#define TRNG_PKRCNT76_PKR_6_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNT76_PKR_6_CT_SHIFT             (0U)
#define TRNG_PKRCNT76_PKR_6_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT76_PKR_6_CT_SHIFT)) & TRNG_PKRCNT76_PKR_6_CT_MASK)
#define TRNG_PKRCNT76_PKR_7_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNT76_PKR_7_CT_SHIFT             (16U)
#define TRNG_PKRCNT76_PKR_7_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT76_PKR_7_CT_SHIFT)) & TRNG_PKRCNT76_PKR_7_CT_MASK)

/*! @name PKRCNT98 - Statistical Check Poker Count 9 and 8 Register */
#define TRNG_PKRCNT98_PKR_8_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNT98_PKR_8_CT_SHIFT             (0U)
#define TRNG_PKRCNT98_PKR_8_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT98_PKR_8_CT_SHIFT)) & TRNG_PKRCNT98_PKR_8_CT_MASK)
#define TRNG_PKRCNT98_PKR_9_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNT98_PKR_9_CT_SHIFT             (16U)
#define TRNG_PKRCNT98_PKR_9_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNT98_PKR_9_CT_SHIFT)) & TRNG_PKRCNT98_PKR_9_CT_MASK)

/*! @name PKRCNTBA - Statistical Check Poker Count B and A Register */
#define TRNG_PKRCNTBA_PKR_A_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNTBA_PKR_A_CT_SHIFT             (0U)
#define TRNG_PKRCNTBA_PKR_A_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNTBA_PKR_A_CT_SHIFT)) & TRNG_PKRCNTBA_PKR_A_CT_MASK)
#define TRNG_PKRCNTBA_PKR_B_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNTBA_PKR_B_CT_SHIFT             (16U)
#define TRNG_PKRCNTBA_PKR_B_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNTBA_PKR_B_CT_SHIFT)) & TRNG_PKRCNTBA_PKR_B_CT_MASK)

/*! @name PKRCNTDC - Statistical Check Poker Count D and C Register */
#define TRNG_PKRCNTDC_PKR_C_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNTDC_PKR_C_CT_SHIFT             (0U)
#define TRNG_PKRCNTDC_PKR_C_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNTDC_PKR_C_CT_SHIFT)) & TRNG_PKRCNTDC_PKR_C_CT_MASK)
#define TRNG_PKRCNTDC_PKR_D_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNTDC_PKR_D_CT_SHIFT             (16U)
#define TRNG_PKRCNTDC_PKR_D_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNTDC_PKR_D_CT_SHIFT)) & TRNG_PKRCNTDC_PKR_D_CT_MASK)

/*! @name PKRCNTFE - Statistical Check Poker Count F and E Register */
#define TRNG_PKRCNTFE_PKR_E_CT_MASK              (0xFFFFU)
#define TRNG_PKRCNTFE_PKR_E_CT_SHIFT             (0U)
#define TRNG_PKRCNTFE_PKR_E_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNTFE_PKR_E_CT_SHIFT)) & TRNG_PKRCNTFE_PKR_E_CT_MASK)
#define TRNG_PKRCNTFE_PKR_F_CT_MASK              (0xFFFF0000U)
#define TRNG_PKRCNTFE_PKR_F_CT_SHIFT             (16U)
#define TRNG_PKRCNTFE_PKR_F_CT(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_PKRCNTFE_PKR_F_CT_SHIFT)) & TRNG_PKRCNTFE_PKR_F_CT_MASK)

/*! @name SEC_CFG - Security Configuration Register */
#define TRNG_SEC_CFG_UNUSED0_MASK                (0x1U)
#define TRNG_SEC_CFG_UNUSED0_SHIFT               (0U)
#define TRNG_SEC_CFG_UNUSED0(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_SEC_CFG_UNUSED0_SHIFT)) & TRNG_SEC_CFG_UNUSED0_MASK)
#define TRNG_SEC_CFG_NO_PRGM_MASK                (0x2U)
#define TRNG_SEC_CFG_NO_PRGM_SHIFT               (1U)
#define TRNG_SEC_CFG_NO_PRGM(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_SEC_CFG_NO_PRGM_SHIFT)) & TRNG_SEC_CFG_NO_PRGM_MASK)
#define TRNG_SEC_CFG_UNUSED2_MASK                (0x4U)
#define TRNG_SEC_CFG_UNUSED2_SHIFT               (2U)
#define TRNG_SEC_CFG_UNUSED2(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_SEC_CFG_UNUSED2_SHIFT)) & TRNG_SEC_CFG_UNUSED2_MASK)

/*! @name INT_CTRL - Interrupt Control Register */
#define TRNG_INT_CTRL_HW_ERR_MASK                (0x1U)
#define TRNG_INT_CTRL_HW_ERR_SHIFT               (0U)
#define TRNG_INT_CTRL_HW_ERR(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_INT_CTRL_HW_ERR_SHIFT)) & TRNG_INT_CTRL_HW_ERR_MASK)
#define TRNG_INT_CTRL_ENT_VAL_MASK               (0x2U)
#define TRNG_INT_CTRL_ENT_VAL_SHIFT              (1U)
#define TRNG_INT_CTRL_ENT_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << TRNG_INT_CTRL_ENT_VAL_SHIFT)) & TRNG_INT_CTRL_ENT_VAL_MASK)
#define TRNG_INT_CTRL_FRQ_CT_FAIL_MASK           (0x4U)
#define TRNG_INT_CTRL_FRQ_CT_FAIL_SHIFT          (2U)
#define TRNG_INT_CTRL_FRQ_CT_FAIL(x)             (((uint32_t)(((uint32_t)(x)) << TRNG_INT_CTRL_FRQ_CT_FAIL_SHIFT)) & TRNG_INT_CTRL_FRQ_CT_FAIL_MASK)
#define TRNG_INT_CTRL_UNUSED_MASK                (0xFFFFFFF8U)
#define TRNG_INT_CTRL_UNUSED_SHIFT               (3U)
#define TRNG_INT_CTRL_UNUSED(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_INT_CTRL_UNUSED_SHIFT)) & TRNG_INT_CTRL_UNUSED_MASK)

/*! @name INT_MASK - Mask Register */
#define TRNG_INT_MASK_HW_ERR_MASK                (0x1U)
#define TRNG_INT_MASK_HW_ERR_SHIFT               (0U)
#define TRNG_INT_MASK_HW_ERR(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_INT_MASK_HW_ERR_SHIFT)) & TRNG_INT_MASK_HW_ERR_MASK)
#define TRNG_INT_MASK_ENT_VAL_MASK               (0x2U)
#define TRNG_INT_MASK_ENT_VAL_SHIFT              (1U)
#define TRNG_INT_MASK_ENT_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << TRNG_INT_MASK_ENT_VAL_SHIFT)) & TRNG_INT_MASK_ENT_VAL_MASK)
#define TRNG_INT_MASK_FRQ_CT_FAIL_MASK           (0x4U)
#define TRNG_INT_MASK_FRQ_CT_FAIL_SHIFT          (2U)
#define TRNG_INT_MASK_FRQ_CT_FAIL(x)             (((uint32_t)(((uint32_t)(x)) << TRNG_INT_MASK_FRQ_CT_FAIL_SHIFT)) & TRNG_INT_MASK_FRQ_CT_FAIL_MASK)

/*! @name INT_STATUS - Interrupt Status Register */
#define TRNG_INT_STATUS_HW_ERR_MASK              (0x1U)
#define TRNG_INT_STATUS_HW_ERR_SHIFT             (0U)
#define TRNG_INT_STATUS_HW_ERR(x)                (((uint32_t)(((uint32_t)(x)) << TRNG_INT_STATUS_HW_ERR_SHIFT)) & TRNG_INT_STATUS_HW_ERR_MASK)
#define TRNG_INT_STATUS_ENT_VAL_MASK             (0x2U)
#define TRNG_INT_STATUS_ENT_VAL_SHIFT            (1U)
#define TRNG_INT_STATUS_ENT_VAL(x)               (((uint32_t)(((uint32_t)(x)) << TRNG_INT_STATUS_ENT_VAL_SHIFT)) & TRNG_INT_STATUS_ENT_VAL_MASK)
#define TRNG_INT_STATUS_FRQ_CT_FAIL_MASK         (0x4U)
#define TRNG_INT_STATUS_FRQ_CT_FAIL_SHIFT        (2U)
#define TRNG_INT_STATUS_FRQ_CT_FAIL(x)           (((uint32_t)(((uint32_t)(x)) << TRNG_INT_STATUS_FRQ_CT_FAIL_SHIFT)) & TRNG_INT_STATUS_FRQ_CT_FAIL_MASK)

/*! @name VID1 - Version ID Register (MS) */
#define TRNG_VID1_MIN_REV_MASK                   (0xFFU)
#define TRNG_VID1_MIN_REV_SHIFT                  (0U)
#define TRNG_VID1_MIN_REV(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_VID1_MIN_REV_SHIFT)) & TRNG_VID1_MIN_REV_MASK)
#define TRNG_VID1_MAJ_REV_MASK                   (0xFF00U)
#define TRNG_VID1_MAJ_REV_SHIFT                  (8U)
#define TRNG_VID1_MAJ_REV(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_VID1_MAJ_REV_SHIFT)) & TRNG_VID1_MAJ_REV_MASK)
#define TRNG_VID1_IP_ID_MASK                     (0xFFFF0000U)
#define TRNG_VID1_IP_ID_SHIFT                    (16U)
#define TRNG_VID1_IP_ID(x)                       (((uint32_t)(((uint32_t)(x)) << TRNG_VID1_IP_ID_SHIFT)) & TRNG_VID1_IP_ID_MASK)

/*! @name VID2 - Version ID Register (LS) */
#define TRNG_VID2_CONFIG_OPT_MASK                (0xFFU)
#define TRNG_VID2_CONFIG_OPT_SHIFT               (0U)
#define TRNG_VID2_CONFIG_OPT(x)                  (((uint32_t)(((uint32_t)(x)) << TRNG_VID2_CONFIG_OPT_SHIFT)) & TRNG_VID2_CONFIG_OPT_MASK)
#define TRNG_VID2_ECO_REV_MASK                   (0xFF00U)
#define TRNG_VID2_ECO_REV_SHIFT                  (8U)
#define TRNG_VID2_ECO_REV(x)                     (((uint32_t)(((uint32_t)(x)) << TRNG_VID2_ECO_REV_SHIFT)) & TRNG_VID2_ECO_REV_MASK)
#define TRNG_VID2_INTG_OPT_MASK                  (0xFF0000U)
#define TRNG_VID2_INTG_OPT_SHIFT                 (16U)
#define TRNG_VID2_INTG_OPT(x)                    (((uint32_t)(((uint32_t)(x)) << TRNG_VID2_INTG_OPT_SHIFT)) & TRNG_VID2_INTG_OPT_MASK)
#define TRNG_VID2_ERA_MASK                       (0xFF000000U)
#define TRNG_VID2_ERA_SHIFT                      (24U)
#define TRNG_VID2_ERA(x)                         (((uint32_t)(((uint32_t)(x)) << TRNG_VID2_ERA_SHIFT)) & TRNG_VID2_ERA_MASK)


/*!
 * @}
 */ /* end of group TRNG_Register_Masks */


/* TRNG - Peripheral instance base addresses */
/** Peripheral TRNG base address */
#define TRNG_BASE                                (0x41029000u)
/** Peripheral TRNG base pointer */
#define TRNG                                     ((TRNG_Type *)TRNG_BASE)
/** Array initializer of TRNG peripheral base addresses */
#define TRNG_BASE_ADDRS                          { TRNG_BASE }
/** Array initializer of TRNG peripheral base pointers */
#define TRNG_BASE_PTRS                           { TRNG }
/** Interrupt vectors for the TRNG peripheral type */
#define TRNG_IRQS                                { TRNG_IRQn }
/** Backward compatibility macros */
#define TRNG0                                    TRNG


/*!
 * @}
 */ /* end of group TRNG_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- TSTMR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TSTMR_Peripheral_Access_Layer TSTMR Peripheral Access Layer
 * @{
 */

/** TSTMR - Register Layout Typedef */
typedef struct {
  __I  uint32_t L;                                 /**< Time Stamp Timer Register Low, offset: 0x0 */
  __I  uint32_t H;                                 /**< Time Stamp Timer Register High, offset: 0x4 */
} TSTMR_Type;

/* ----------------------------------------------------------------------------
   -- TSTMR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TSTMR_Register_Masks TSTMR Register Masks
 * @{
 */

/*! @name L - Time Stamp Timer Register Low */
#define TSTMR_L_VALUE_MASK                       (0xFFFFFFFFU)
#define TSTMR_L_VALUE_SHIFT                      (0U)
#define TSTMR_L_VALUE(x)                         (((uint32_t)(((uint32_t)(x)) << TSTMR_L_VALUE_SHIFT)) & TSTMR_L_VALUE_MASK)

/*! @name H - Time Stamp Timer Register High */
#define TSTMR_H_VALUE_MASK                       (0xFFFFFFU)
#define TSTMR_H_VALUE_SHIFT                      (0U)
#define TSTMR_H_VALUE(x)                         (((uint32_t)(((uint32_t)(x)) << TSTMR_H_VALUE_SHIFT)) & TSTMR_H_VALUE_MASK)


/*!
 * @}
 */ /* end of group TSTMR_Register_Masks */


/* TSTMR - Peripheral instance base addresses */
/** Peripheral TSTMRA base address */
#define TSTMRA_BASE                              (0x40034000u)
/** Peripheral TSTMRA base pointer */
#define TSTMRA                                   ((TSTMR_Type *)TSTMRA_BASE)
/** Array initializer of TSTMR peripheral base addresses */
#define TSTMR_BASE_ADDRS                         { TSTMRA_BASE }
/** Array initializer of TSTMR peripheral base pointers */
#define TSTMR_BASE_PTRS                          { TSTMRA }

/*!
 * @}
 */ /* end of group TSTMR_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- USB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USB_Peripheral_Access_Layer USB Peripheral Access Layer
 * @{
 */

/** USB - Register Layout Typedef */
typedef struct {
  __I  uint8_t PERID;                              /**< Peripheral ID register, offset: 0x0 */
       uint8_t RESERVED_0[3];
  __I  uint8_t IDCOMP;                             /**< Peripheral ID Complement register, offset: 0x4 */
       uint8_t RESERVED_1[3];
  __I  uint8_t REV;                                /**< Peripheral Revision register, offset: 0x8 */
       uint8_t RESERVED_2[3];
  __I  uint8_t ADDINFO;                            /**< Peripheral Additional Info register, offset: 0xC */
       uint8_t RESERVED_3[15];
  __IO uint8_t OTGCTL;                             /**< OTG Control register, offset: 0x1C */
       uint8_t RESERVED_4[99];
  __IO uint8_t ISTAT;                              /**< Interrupt Status register, offset: 0x80 */
       uint8_t RESERVED_5[3];
  __IO uint8_t INTEN;                              /**< Interrupt Enable register, offset: 0x84 */
       uint8_t RESERVED_6[3];
  __IO uint8_t ERRSTAT;                            /**< Error Interrupt Status register, offset: 0x88 */
       uint8_t RESERVED_7[3];
  __IO uint8_t ERREN;                              /**< Error Interrupt Enable register, offset: 0x8C */
       uint8_t RESERVED_8[3];
  __I  uint8_t STAT;                               /**< Status register, offset: 0x90 */
       uint8_t RESERVED_9[3];
  __IO uint8_t CTL;                                /**< Control register, offset: 0x94 */
       uint8_t RESERVED_10[3];
  __IO uint8_t ADDR;                               /**< Address register, offset: 0x98 */
       uint8_t RESERVED_11[3];
  __IO uint8_t BDTPAGE1;                           /**< BDT Page register 1, offset: 0x9C */
       uint8_t RESERVED_12[3];
  __IO uint8_t FRMNUML;                            /**< Frame Number register Low, offset: 0xA0 */
       uint8_t RESERVED_13[3];
  __IO uint8_t FRMNUMH;                            /**< Frame Number register High, offset: 0xA4 */
       uint8_t RESERVED_14[11];
  __IO uint8_t BDTPAGE2;                           /**< BDT Page Register 2, offset: 0xB0 */
       uint8_t RESERVED_15[3];
  __IO uint8_t BDTPAGE3;                           /**< BDT Page Register 3, offset: 0xB4 */
       uint8_t RESERVED_16[11];
  struct {                                         /* offset: 0xC0, array step: 0x4 */
    __IO uint8_t ENDPT;                              /**< Endpoint Control register, array offset: 0xC0, array step: 0x4 */
         uint8_t RESERVED_0[3];
  } ENDPOINT[16];
  __IO uint8_t USBCTRL;                            /**< USB Control register, offset: 0x100 */
       uint8_t RESERVED_17[3];
  __I  uint8_t OBSERVE;                            /**< USB OTG Observe register, offset: 0x104 */
       uint8_t RESERVED_18[3];
  __IO uint8_t CONTROL;                            /**< USB OTG Control register, offset: 0x108 */
       uint8_t RESERVED_19[3];
  __IO uint8_t USBTRC0;                            /**< USB Transceiver Control register 0, offset: 0x10C */
       uint8_t RESERVED_20[23];
  __IO uint8_t KEEP_ALIVE_CTRL;                    /**< Keep Alive mode control, offset: 0x124 */
       uint8_t RESERVED_21[3];
  __IO uint8_t KEEP_ALIVE_WKCTRL;                  /**< Keep Alive mode wakeup control, offset: 0x128 */
       uint8_t RESERVED_22[3];
  __IO uint8_t MISCCTRL;                           /**< Miscellaneous Control register, offset: 0x12C */
       uint8_t RESERVED_23[3];
  __IO uint8_t STALL_IL_DIS;                       /**< Peripheral mode stall disable for endpoints 7 to 0 in IN direction, offset: 0x130 */
       uint8_t RESERVED_24[3];
  __IO uint8_t STALL_IH_DIS;                       /**< Peripheral mode stall disable for endpoints 15 to 8 in IN direction, offset: 0x134 */
       uint8_t RESERVED_25[3];
  __IO uint8_t STALL_OL_DIS;                       /**< Peripheral mode stall disable for endpoints 7 to 0 in OUT direction, offset: 0x138 */
       uint8_t RESERVED_26[3];
  __IO uint8_t STALL_OH_DIS;                       /**< Peripheral mode stall disable for endpoints 15 to 8 in OUT direction, offset: 0x13C */
       uint8_t RESERVED_27[3];
  __IO uint8_t CLK_RECOVER_CTRL;                   /**< USB Clock recovery control, offset: 0x140 */
       uint8_t RESERVED_28[3];
  __IO uint8_t CLK_RECOVER_IRC_EN;                 /**< IRC48MFIRC oscillator enable register, offset: 0x144 */
       uint8_t RESERVED_29[15];
  __IO uint8_t CLK_RECOVER_INT_EN;                 /**< Clock recovery combined interrupt enable, offset: 0x154 */
       uint8_t RESERVED_30[7];
  __IO uint8_t CLK_RECOVER_INT_STATUS;             /**< Clock recovery separated interrupt status, offset: 0x15C */
} USB_Type;

/* ----------------------------------------------------------------------------
   -- USB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USB_Register_Masks USB Register Masks
 * @{
 */

/*! @name PERID - Peripheral ID register */
#define USB_PERID_ID_MASK                        (0x3FU)
#define USB_PERID_ID_SHIFT                       (0U)
#define USB_PERID_ID(x)                          (((uint8_t)(((uint8_t)(x)) << USB_PERID_ID_SHIFT)) & USB_PERID_ID_MASK)

/*! @name IDCOMP - Peripheral ID Complement register */
#define USB_IDCOMP_NID_MASK                      (0x3FU)
#define USB_IDCOMP_NID_SHIFT                     (0U)
#define USB_IDCOMP_NID(x)                        (((uint8_t)(((uint8_t)(x)) << USB_IDCOMP_NID_SHIFT)) & USB_IDCOMP_NID_MASK)

/*! @name REV - Peripheral Revision register */
#define USB_REV_REV_MASK                         (0xFFU)
#define USB_REV_REV_SHIFT                        (0U)
#define USB_REV_REV(x)                           (((uint8_t)(((uint8_t)(x)) << USB_REV_REV_SHIFT)) & USB_REV_REV_MASK)

/*! @name ADDINFO - Peripheral Additional Info register */
#define USB_ADDINFO_IEHOST_MASK                  (0x1U)
#define USB_ADDINFO_IEHOST_SHIFT                 (0U)
#define USB_ADDINFO_IEHOST(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ADDINFO_IEHOST_SHIFT)) & USB_ADDINFO_IEHOST_MASK)

/*! @name OTGCTL - OTG Control register */
#define USB_OTGCTL_DPHIGH_MASK                   (0x80U)
#define USB_OTGCTL_DPHIGH_SHIFT                  (7U)
#define USB_OTGCTL_DPHIGH(x)                     (((uint8_t)(((uint8_t)(x)) << USB_OTGCTL_DPHIGH_SHIFT)) & USB_OTGCTL_DPHIGH_MASK)

/*! @name ISTAT - Interrupt Status register */
#define USB_ISTAT_USBRST_MASK                    (0x1U)
#define USB_ISTAT_USBRST_SHIFT                   (0U)
#define USB_ISTAT_USBRST(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ISTAT_USBRST_SHIFT)) & USB_ISTAT_USBRST_MASK)
#define USB_ISTAT_ERROR_MASK                     (0x2U)
#define USB_ISTAT_ERROR_SHIFT                    (1U)
#define USB_ISTAT_ERROR(x)                       (((uint8_t)(((uint8_t)(x)) << USB_ISTAT_ERROR_SHIFT)) & USB_ISTAT_ERROR_MASK)
#define USB_ISTAT_SOFTOK_MASK                    (0x4U)
#define USB_ISTAT_SOFTOK_SHIFT                   (2U)
#define USB_ISTAT_SOFTOK(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ISTAT_SOFTOK_SHIFT)) & USB_ISTAT_SOFTOK_MASK)
#define USB_ISTAT_TOKDNE_MASK                    (0x8U)
#define USB_ISTAT_TOKDNE_SHIFT                   (3U)
#define USB_ISTAT_TOKDNE(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ISTAT_TOKDNE_SHIFT)) & USB_ISTAT_TOKDNE_MASK)
#define USB_ISTAT_SLEEP_MASK                     (0x10U)
#define USB_ISTAT_SLEEP_SHIFT                    (4U)
#define USB_ISTAT_SLEEP(x)                       (((uint8_t)(((uint8_t)(x)) << USB_ISTAT_SLEEP_SHIFT)) & USB_ISTAT_SLEEP_MASK)
#define USB_ISTAT_RESUME_MASK                    (0x20U)
#define USB_ISTAT_RESUME_SHIFT                   (5U)
#define USB_ISTAT_RESUME(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ISTAT_RESUME_SHIFT)) & USB_ISTAT_RESUME_MASK)
#define USB_ISTAT_STALL_MASK                     (0x80U)
#define USB_ISTAT_STALL_SHIFT                    (7U)
#define USB_ISTAT_STALL(x)                       (((uint8_t)(((uint8_t)(x)) << USB_ISTAT_STALL_SHIFT)) & USB_ISTAT_STALL_MASK)

/*! @name INTEN - Interrupt Enable register */
#define USB_INTEN_USBRSTEN_MASK                  (0x1U)
#define USB_INTEN_USBRSTEN_SHIFT                 (0U)
#define USB_INTEN_USBRSTEN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_INTEN_USBRSTEN_SHIFT)) & USB_INTEN_USBRSTEN_MASK)
#define USB_INTEN_ERROREN_MASK                   (0x2U)
#define USB_INTEN_ERROREN_SHIFT                  (1U)
#define USB_INTEN_ERROREN(x)                     (((uint8_t)(((uint8_t)(x)) << USB_INTEN_ERROREN_SHIFT)) & USB_INTEN_ERROREN_MASK)
#define USB_INTEN_SOFTOKEN_MASK                  (0x4U)
#define USB_INTEN_SOFTOKEN_SHIFT                 (2U)
#define USB_INTEN_SOFTOKEN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_INTEN_SOFTOKEN_SHIFT)) & USB_INTEN_SOFTOKEN_MASK)
#define USB_INTEN_TOKDNEEN_MASK                  (0x8U)
#define USB_INTEN_TOKDNEEN_SHIFT                 (3U)
#define USB_INTEN_TOKDNEEN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_INTEN_TOKDNEEN_SHIFT)) & USB_INTEN_TOKDNEEN_MASK)
#define USB_INTEN_SLEEPEN_MASK                   (0x10U)
#define USB_INTEN_SLEEPEN_SHIFT                  (4U)
#define USB_INTEN_SLEEPEN(x)                     (((uint8_t)(((uint8_t)(x)) << USB_INTEN_SLEEPEN_SHIFT)) & USB_INTEN_SLEEPEN_MASK)
#define USB_INTEN_RESUMEEN_MASK                  (0x20U)
#define USB_INTEN_RESUMEEN_SHIFT                 (5U)
#define USB_INTEN_RESUMEEN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_INTEN_RESUMEEN_SHIFT)) & USB_INTEN_RESUMEEN_MASK)
#define USB_INTEN_STALLEN_MASK                   (0x80U)
#define USB_INTEN_STALLEN_SHIFT                  (7U)
#define USB_INTEN_STALLEN(x)                     (((uint8_t)(((uint8_t)(x)) << USB_INTEN_STALLEN_SHIFT)) & USB_INTEN_STALLEN_MASK)

/*! @name ERRSTAT - Error Interrupt Status register */
#define USB_ERRSTAT_PIDERR_MASK                  (0x1U)
#define USB_ERRSTAT_PIDERR_SHIFT                 (0U)
#define USB_ERRSTAT_PIDERR(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_PIDERR_SHIFT)) & USB_ERRSTAT_PIDERR_MASK)
#define USB_ERRSTAT_CRC5EOF_MASK                 (0x2U)
#define USB_ERRSTAT_CRC5EOF_SHIFT                (1U)
#define USB_ERRSTAT_CRC5EOF(x)                   (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_CRC5EOF_SHIFT)) & USB_ERRSTAT_CRC5EOF_MASK)
#define USB_ERRSTAT_CRC16_MASK                   (0x4U)
#define USB_ERRSTAT_CRC16_SHIFT                  (2U)
#define USB_ERRSTAT_CRC16(x)                     (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_CRC16_SHIFT)) & USB_ERRSTAT_CRC16_MASK)
#define USB_ERRSTAT_DFN8_MASK                    (0x8U)
#define USB_ERRSTAT_DFN8_SHIFT                   (3U)
#define USB_ERRSTAT_DFN8(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_DFN8_SHIFT)) & USB_ERRSTAT_DFN8_MASK)
#define USB_ERRSTAT_BTOERR_MASK                  (0x10U)
#define USB_ERRSTAT_BTOERR_SHIFT                 (4U)
#define USB_ERRSTAT_BTOERR(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_BTOERR_SHIFT)) & USB_ERRSTAT_BTOERR_MASK)
#define USB_ERRSTAT_DMAERR_MASK                  (0x20U)
#define USB_ERRSTAT_DMAERR_SHIFT                 (5U)
#define USB_ERRSTAT_DMAERR(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_DMAERR_SHIFT)) & USB_ERRSTAT_DMAERR_MASK)
#define USB_ERRSTAT_OWNERR_MASK                  (0x40U)
#define USB_ERRSTAT_OWNERR_SHIFT                 (6U)
#define USB_ERRSTAT_OWNERR(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_OWNERR_SHIFT)) & USB_ERRSTAT_OWNERR_MASK)
#define USB_ERRSTAT_BTSERR_MASK                  (0x80U)
#define USB_ERRSTAT_BTSERR_SHIFT                 (7U)
#define USB_ERRSTAT_BTSERR(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERRSTAT_BTSERR_SHIFT)) & USB_ERRSTAT_BTSERR_MASK)

/*! @name ERREN - Error Interrupt Enable register */
#define USB_ERREN_PIDERREN_MASK                  (0x1U)
#define USB_ERREN_PIDERREN_SHIFT                 (0U)
#define USB_ERREN_PIDERREN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERREN_PIDERREN_SHIFT)) & USB_ERREN_PIDERREN_MASK)
#define USB_ERREN_CRC5EOFEN_MASK                 (0x2U)
#define USB_ERREN_CRC5EOFEN_SHIFT                (1U)
#define USB_ERREN_CRC5EOFEN(x)                   (((uint8_t)(((uint8_t)(x)) << USB_ERREN_CRC5EOFEN_SHIFT)) & USB_ERREN_CRC5EOFEN_MASK)
#define USB_ERREN_CRC16EN_MASK                   (0x4U)
#define USB_ERREN_CRC16EN_SHIFT                  (2U)
#define USB_ERREN_CRC16EN(x)                     (((uint8_t)(((uint8_t)(x)) << USB_ERREN_CRC16EN_SHIFT)) & USB_ERREN_CRC16EN_MASK)
#define USB_ERREN_DFN8EN_MASK                    (0x8U)
#define USB_ERREN_DFN8EN_SHIFT                   (3U)
#define USB_ERREN_DFN8EN(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ERREN_DFN8EN_SHIFT)) & USB_ERREN_DFN8EN_MASK)
#define USB_ERREN_BTOERREN_MASK                  (0x10U)
#define USB_ERREN_BTOERREN_SHIFT                 (4U)
#define USB_ERREN_BTOERREN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERREN_BTOERREN_SHIFT)) & USB_ERREN_BTOERREN_MASK)
#define USB_ERREN_DMAERREN_MASK                  (0x20U)
#define USB_ERREN_DMAERREN_SHIFT                 (5U)
#define USB_ERREN_DMAERREN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERREN_DMAERREN_SHIFT)) & USB_ERREN_DMAERREN_MASK)
#define USB_ERREN_OWNERREN_MASK                  (0x40U)
#define USB_ERREN_OWNERREN_SHIFT                 (6U)
#define USB_ERREN_OWNERREN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERREN_OWNERREN_SHIFT)) & USB_ERREN_OWNERREN_MASK)
#define USB_ERREN_BTSERREN_MASK                  (0x80U)
#define USB_ERREN_BTSERREN_SHIFT                 (7U)
#define USB_ERREN_BTSERREN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ERREN_BTSERREN_SHIFT)) & USB_ERREN_BTSERREN_MASK)

/*! @name STAT - Status register */
#define USB_STAT_ODD_MASK                        (0x4U)
#define USB_STAT_ODD_SHIFT                       (2U)
#define USB_STAT_ODD(x)                          (((uint8_t)(((uint8_t)(x)) << USB_STAT_ODD_SHIFT)) & USB_STAT_ODD_MASK)
#define USB_STAT_TX_MASK                         (0x8U)
#define USB_STAT_TX_SHIFT                        (3U)
#define USB_STAT_TX(x)                           (((uint8_t)(((uint8_t)(x)) << USB_STAT_TX_SHIFT)) & USB_STAT_TX_MASK)
#define USB_STAT_ENDP_MASK                       (0xF0U)
#define USB_STAT_ENDP_SHIFT                      (4U)
#define USB_STAT_ENDP(x)                         (((uint8_t)(((uint8_t)(x)) << USB_STAT_ENDP_SHIFT)) & USB_STAT_ENDP_MASK)

/*! @name CTL - Control register */
#define USB_CTL_USBENSOFEN_MASK                  (0x1U)
#define USB_CTL_USBENSOFEN_SHIFT                 (0U)
#define USB_CTL_USBENSOFEN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_CTL_USBENSOFEN_SHIFT)) & USB_CTL_USBENSOFEN_MASK)
#define USB_CTL_ODDRST_MASK                      (0x2U)
#define USB_CTL_ODDRST_SHIFT                     (1U)
#define USB_CTL_ODDRST(x)                        (((uint8_t)(((uint8_t)(x)) << USB_CTL_ODDRST_SHIFT)) & USB_CTL_ODDRST_MASK)
#define USB_CTL_RESUME_MASK                      (0x4U)
#define USB_CTL_RESUME_SHIFT                     (2U)
#define USB_CTL_RESUME(x)                        (((uint8_t)(((uint8_t)(x)) << USB_CTL_RESUME_SHIFT)) & USB_CTL_RESUME_MASK)
#define USB_CTL_HOSTMODEEN_MASK                  (0x8U)
#define USB_CTL_HOSTMODEEN_SHIFT                 (3U)
#define USB_CTL_HOSTMODEEN(x)                    (((uint8_t)(((uint8_t)(x)) << USB_CTL_HOSTMODEEN_SHIFT)) & USB_CTL_HOSTMODEEN_MASK)
#define USB_CTL_TXSUSPENDTOKENBUSY_MASK          (0x20U)
#define USB_CTL_TXSUSPENDTOKENBUSY_SHIFT         (5U)
#define USB_CTL_TXSUSPENDTOKENBUSY(x)            (((uint8_t)(((uint8_t)(x)) << USB_CTL_TXSUSPENDTOKENBUSY_SHIFT)) & USB_CTL_TXSUSPENDTOKENBUSY_MASK)
#define USB_CTL_SE0_MASK                         (0x40U)
#define USB_CTL_SE0_SHIFT                        (6U)
#define USB_CTL_SE0(x)                           (((uint8_t)(((uint8_t)(x)) << USB_CTL_SE0_SHIFT)) & USB_CTL_SE0_MASK)
#define USB_CTL_JSTATE_MASK                      (0x80U)
#define USB_CTL_JSTATE_SHIFT                     (7U)
#define USB_CTL_JSTATE(x)                        (((uint8_t)(((uint8_t)(x)) << USB_CTL_JSTATE_SHIFT)) & USB_CTL_JSTATE_MASK)

/*! @name ADDR - Address register */
#define USB_ADDR_ADDR_MASK                       (0x7FU)
#define USB_ADDR_ADDR_SHIFT                      (0U)
#define USB_ADDR_ADDR(x)                         (((uint8_t)(((uint8_t)(x)) << USB_ADDR_ADDR_SHIFT)) & USB_ADDR_ADDR_MASK)

/*! @name BDTPAGE1 - BDT Page register 1 */
#define USB_BDTPAGE1_BDTBA_MASK                  (0xFEU)
#define USB_BDTPAGE1_BDTBA_SHIFT                 (1U)
#define USB_BDTPAGE1_BDTBA(x)                    (((uint8_t)(((uint8_t)(x)) << USB_BDTPAGE1_BDTBA_SHIFT)) & USB_BDTPAGE1_BDTBA_MASK)

/*! @name FRMNUML - Frame Number register Low */
#define USB_FRMNUML_FRM_MASK                     (0xFFU)
#define USB_FRMNUML_FRM_SHIFT                    (0U)
#define USB_FRMNUML_FRM(x)                       (((uint8_t)(((uint8_t)(x)) << USB_FRMNUML_FRM_SHIFT)) & USB_FRMNUML_FRM_MASK)

/*! @name FRMNUMH - Frame Number register High */
#define USB_FRMNUMH_FRM_MASK                     (0x7U)
#define USB_FRMNUMH_FRM_SHIFT                    (0U)
#define USB_FRMNUMH_FRM(x)                       (((uint8_t)(((uint8_t)(x)) << USB_FRMNUMH_FRM_SHIFT)) & USB_FRMNUMH_FRM_MASK)

/*! @name BDTPAGE2 - BDT Page Register 2 */
#define USB_BDTPAGE2_BDTBA_MASK                  (0xFFU)
#define USB_BDTPAGE2_BDTBA_SHIFT                 (0U)
#define USB_BDTPAGE2_BDTBA(x)                    (((uint8_t)(((uint8_t)(x)) << USB_BDTPAGE2_BDTBA_SHIFT)) & USB_BDTPAGE2_BDTBA_MASK)

/*! @name BDTPAGE3 - BDT Page Register 3 */
#define USB_BDTPAGE3_BDTBA_MASK                  (0xFFU)
#define USB_BDTPAGE3_BDTBA_SHIFT                 (0U)
#define USB_BDTPAGE3_BDTBA(x)                    (((uint8_t)(((uint8_t)(x)) << USB_BDTPAGE3_BDTBA_SHIFT)) & USB_BDTPAGE3_BDTBA_MASK)

/*! @name ENDPT - Endpoint Control register */
#define USB_ENDPT_EPHSHK_MASK                    (0x1U)
#define USB_ENDPT_EPHSHK_SHIFT                   (0U)
#define USB_ENDPT_EPHSHK(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ENDPT_EPHSHK_SHIFT)) & USB_ENDPT_EPHSHK_MASK)
#define USB_ENDPT_EPSTALL_MASK                   (0x2U)
#define USB_ENDPT_EPSTALL_SHIFT                  (1U)
#define USB_ENDPT_EPSTALL(x)                     (((uint8_t)(((uint8_t)(x)) << USB_ENDPT_EPSTALL_SHIFT)) & USB_ENDPT_EPSTALL_MASK)
#define USB_ENDPT_EPTXEN_MASK                    (0x4U)
#define USB_ENDPT_EPTXEN_SHIFT                   (2U)
#define USB_ENDPT_EPTXEN(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ENDPT_EPTXEN_SHIFT)) & USB_ENDPT_EPTXEN_MASK)
#define USB_ENDPT_EPRXEN_MASK                    (0x8U)
#define USB_ENDPT_EPRXEN_SHIFT                   (3U)
#define USB_ENDPT_EPRXEN(x)                      (((uint8_t)(((uint8_t)(x)) << USB_ENDPT_EPRXEN_SHIFT)) & USB_ENDPT_EPRXEN_MASK)
#define USB_ENDPT_EPCTLDIS_MASK                  (0x10U)
#define USB_ENDPT_EPCTLDIS_SHIFT                 (4U)
#define USB_ENDPT_EPCTLDIS(x)                    (((uint8_t)(((uint8_t)(x)) << USB_ENDPT_EPCTLDIS_SHIFT)) & USB_ENDPT_EPCTLDIS_MASK)

/* The count of USB_ENDPT */
#define USB_ENDPT_COUNT                          (16U)

/*! @name USBCTRL - USB Control register */
#define USB_USBCTRL_UARTSEL_MASK                 (0x10U)
#define USB_USBCTRL_UARTSEL_SHIFT                (4U)
#define USB_USBCTRL_UARTSEL(x)                   (((uint8_t)(((uint8_t)(x)) << USB_USBCTRL_UARTSEL_SHIFT)) & USB_USBCTRL_UARTSEL_MASK)
#define USB_USBCTRL_UARTCHLS_MASK                (0x20U)
#define USB_USBCTRL_UARTCHLS_SHIFT               (5U)
#define USB_USBCTRL_UARTCHLS(x)                  (((uint8_t)(((uint8_t)(x)) << USB_USBCTRL_UARTCHLS_SHIFT)) & USB_USBCTRL_UARTCHLS_MASK)
#define USB_USBCTRL_PDE_MASK                     (0x40U)
#define USB_USBCTRL_PDE_SHIFT                    (6U)
#define USB_USBCTRL_PDE(x)                       (((uint8_t)(((uint8_t)(x)) << USB_USBCTRL_PDE_SHIFT)) & USB_USBCTRL_PDE_MASK)
#define USB_USBCTRL_SUSP_MASK                    (0x80U)
#define USB_USBCTRL_SUSP_SHIFT                   (7U)
#define USB_USBCTRL_SUSP(x)                      (((uint8_t)(((uint8_t)(x)) << USB_USBCTRL_SUSP_SHIFT)) & USB_USBCTRL_SUSP_MASK)

/*! @name OBSERVE - USB OTG Observe register */
#define USB_OBSERVE_DMPD_MASK                    (0x10U)
#define USB_OBSERVE_DMPD_SHIFT                   (4U)
#define USB_OBSERVE_DMPD(x)                      (((uint8_t)(((uint8_t)(x)) << USB_OBSERVE_DMPD_SHIFT)) & USB_OBSERVE_DMPD_MASK)
#define USB_OBSERVE_DPPD_MASK                    (0x40U)
#define USB_OBSERVE_DPPD_SHIFT                   (6U)
#define USB_OBSERVE_DPPD(x)                      (((uint8_t)(((uint8_t)(x)) << USB_OBSERVE_DPPD_SHIFT)) & USB_OBSERVE_DPPD_MASK)
#define USB_OBSERVE_DPPU_MASK                    (0x80U)
#define USB_OBSERVE_DPPU_SHIFT                   (7U)
#define USB_OBSERVE_DPPU(x)                      (((uint8_t)(((uint8_t)(x)) << USB_OBSERVE_DPPU_SHIFT)) & USB_OBSERVE_DPPU_MASK)

/*! @name CONTROL - USB OTG Control register */
#define USB_CONTROL_DPPULLUPNONOTG_MASK          (0x10U)
#define USB_CONTROL_DPPULLUPNONOTG_SHIFT         (4U)
#define USB_CONTROL_DPPULLUPNONOTG(x)            (((uint8_t)(((uint8_t)(x)) << USB_CONTROL_DPPULLUPNONOTG_SHIFT)) & USB_CONTROL_DPPULLUPNONOTG_MASK)

/*! @name USBTRC0 - USB Transceiver Control register 0 */
#define USB_USBTRC0_USB_RESUME_INT_MASK          (0x1U)
#define USB_USBTRC0_USB_RESUME_INT_SHIFT         (0U)
#define USB_USBTRC0_USB_RESUME_INT(x)            (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_USB_RESUME_INT_SHIFT)) & USB_USBTRC0_USB_RESUME_INT_MASK)
#define USB_USBTRC0_SYNC_DET_MASK                (0x2U)
#define USB_USBTRC0_SYNC_DET_SHIFT               (1U)
#define USB_USBTRC0_SYNC_DET(x)                  (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_SYNC_DET_SHIFT)) & USB_USBTRC0_SYNC_DET_MASK)
#define USB_USBTRC0_USB_CLK_RECOVERY_INT_MASK    (0x4U)
#define USB_USBTRC0_USB_CLK_RECOVERY_INT_SHIFT   (2U)
#define USB_USBTRC0_USB_CLK_RECOVERY_INT(x)      (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_USB_CLK_RECOVERY_INT_SHIFT)) & USB_USBTRC0_USB_CLK_RECOVERY_INT_MASK)
#define USB_USBTRC0_VREDG_DET_MASK               (0x8U)
#define USB_USBTRC0_VREDG_DET_SHIFT              (3U)
#define USB_USBTRC0_VREDG_DET(x)                 (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_VREDG_DET_SHIFT)) & USB_USBTRC0_VREDG_DET_MASK)
#define USB_USBTRC0_VFEDG_DET_MASK               (0x10U)
#define USB_USBTRC0_VFEDG_DET_SHIFT              (4U)
#define USB_USBTRC0_VFEDG_DET(x)                 (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_VFEDG_DET_SHIFT)) & USB_USBTRC0_VFEDG_DET_MASK)
#define USB_USBTRC0_USBRESMEN_MASK               (0x20U)
#define USB_USBTRC0_USBRESMEN_SHIFT              (5U)
#define USB_USBTRC0_USBRESMEN(x)                 (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_USBRESMEN_SHIFT)) & USB_USBTRC0_USBRESMEN_MASK)
#define USB_USBTRC0_VREGIN_STS_MASK              (0x40U)
#define USB_USBTRC0_VREGIN_STS_SHIFT             (6U)
#define USB_USBTRC0_VREGIN_STS(x)                (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_VREGIN_STS_SHIFT)) & USB_USBTRC0_VREGIN_STS_MASK)
#define USB_USBTRC0_USBRESET_MASK                (0x80U)
#define USB_USBTRC0_USBRESET_SHIFT               (7U)
#define USB_USBTRC0_USBRESET(x)                  (((uint8_t)(((uint8_t)(x)) << USB_USBTRC0_USBRESET_SHIFT)) & USB_USBTRC0_USBRESET_MASK)

/*! @name KEEP_ALIVE_CTRL - Keep Alive mode control */
#define USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_EN_MASK   (0x1U)
#define USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_EN_SHIFT  (0U)
#define USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_EN(x)     (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_EN_SHIFT)) & USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_EN_MASK)
#define USB_KEEP_ALIVE_CTRL_OWN_OVERRD_EN_MASK   (0x2U)
#define USB_KEEP_ALIVE_CTRL_OWN_OVERRD_EN_SHIFT  (1U)
#define USB_KEEP_ALIVE_CTRL_OWN_OVERRD_EN(x)     (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_CTRL_OWN_OVERRD_EN_SHIFT)) & USB_KEEP_ALIVE_CTRL_OWN_OVERRD_EN_MASK)
#define USB_KEEP_ALIVE_CTRL_STOP_ACK_DLY_EN_MASK (0x4U)
#define USB_KEEP_ALIVE_CTRL_STOP_ACK_DLY_EN_SHIFT (2U)
#define USB_KEEP_ALIVE_CTRL_STOP_ACK_DLY_EN(x)   (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_CTRL_STOP_ACK_DLY_EN_SHIFT)) & USB_KEEP_ALIVE_CTRL_STOP_ACK_DLY_EN_MASK)
#define USB_KEEP_ALIVE_CTRL_WAKE_REQ_EN_MASK     (0x8U)
#define USB_KEEP_ALIVE_CTRL_WAKE_REQ_EN_SHIFT    (3U)
#define USB_KEEP_ALIVE_CTRL_WAKE_REQ_EN(x)       (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_CTRL_WAKE_REQ_EN_SHIFT)) & USB_KEEP_ALIVE_CTRL_WAKE_REQ_EN_MASK)
#define USB_KEEP_ALIVE_CTRL_WAKE_INT_EN_MASK     (0x10U)
#define USB_KEEP_ALIVE_CTRL_WAKE_INT_EN_SHIFT    (4U)
#define USB_KEEP_ALIVE_CTRL_WAKE_INT_EN(x)       (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_CTRL_WAKE_INT_EN_SHIFT)) & USB_KEEP_ALIVE_CTRL_WAKE_INT_EN_MASK)
#define USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_STS_MASK  (0x40U)
#define USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_STS_SHIFT (6U)
#define USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_STS(x)    (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_STS_SHIFT)) & USB_KEEP_ALIVE_CTRL_KEEP_ALIVE_STS_MASK)
#define USB_KEEP_ALIVE_CTRL_WAKE_INT_STS_MASK    (0x80U)
#define USB_KEEP_ALIVE_CTRL_WAKE_INT_STS_SHIFT   (7U)
#define USB_KEEP_ALIVE_CTRL_WAKE_INT_STS(x)      (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_CTRL_WAKE_INT_STS_SHIFT)) & USB_KEEP_ALIVE_CTRL_WAKE_INT_STS_MASK)

/*! @name KEEP_ALIVE_WKCTRL - Keep Alive mode wakeup control */
#define USB_KEEP_ALIVE_WKCTRL_WAKE_ON_THIS_MASK  (0xFU)
#define USB_KEEP_ALIVE_WKCTRL_WAKE_ON_THIS_SHIFT (0U)
#define USB_KEEP_ALIVE_WKCTRL_WAKE_ON_THIS(x)    (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_WKCTRL_WAKE_ON_THIS_SHIFT)) & USB_KEEP_ALIVE_WKCTRL_WAKE_ON_THIS_MASK)
#define USB_KEEP_ALIVE_WKCTRL_WAKE_ENDPT_MASK    (0xF0U)
#define USB_KEEP_ALIVE_WKCTRL_WAKE_ENDPT_SHIFT   (4U)
#define USB_KEEP_ALIVE_WKCTRL_WAKE_ENDPT(x)      (((uint8_t)(((uint8_t)(x)) << USB_KEEP_ALIVE_WKCTRL_WAKE_ENDPT_SHIFT)) & USB_KEEP_ALIVE_WKCTRL_WAKE_ENDPT_MASK)

/*! @name MISCCTRL - Miscellaneous Control register */
#define USB_MISCCTRL_SOFDYNTHLD_MASK             (0x1U)
#define USB_MISCCTRL_SOFDYNTHLD_SHIFT            (0U)
#define USB_MISCCTRL_SOFDYNTHLD(x)               (((uint8_t)(((uint8_t)(x)) << USB_MISCCTRL_SOFDYNTHLD_SHIFT)) & USB_MISCCTRL_SOFDYNTHLD_MASK)
#define USB_MISCCTRL_SOFBUSSET_MASK              (0x2U)
#define USB_MISCCTRL_SOFBUSSET_SHIFT             (1U)
#define USB_MISCCTRL_SOFBUSSET(x)                (((uint8_t)(((uint8_t)(x)) << USB_MISCCTRL_SOFBUSSET_SHIFT)) & USB_MISCCTRL_SOFBUSSET_MASK)
#define USB_MISCCTRL_OWNERRISODIS_MASK           (0x4U)
#define USB_MISCCTRL_OWNERRISODIS_SHIFT          (2U)
#define USB_MISCCTRL_OWNERRISODIS(x)             (((uint8_t)(((uint8_t)(x)) << USB_MISCCTRL_OWNERRISODIS_SHIFT)) & USB_MISCCTRL_OWNERRISODIS_MASK)
#define USB_MISCCTRL_VREDG_EN_MASK               (0x8U)
#define USB_MISCCTRL_VREDG_EN_SHIFT              (3U)
#define USB_MISCCTRL_VREDG_EN(x)                 (((uint8_t)(((uint8_t)(x)) << USB_MISCCTRL_VREDG_EN_SHIFT)) & USB_MISCCTRL_VREDG_EN_MASK)
#define USB_MISCCTRL_VFEDG_EN_MASK               (0x10U)
#define USB_MISCCTRL_VFEDG_EN_SHIFT              (4U)
#define USB_MISCCTRL_VFEDG_EN(x)                 (((uint8_t)(((uint8_t)(x)) << USB_MISCCTRL_VFEDG_EN_SHIFT)) & USB_MISCCTRL_VFEDG_EN_MASK)
#define USB_MISCCTRL_STL_ADJ_EN_MASK             (0x80U)
#define USB_MISCCTRL_STL_ADJ_EN_SHIFT            (7U)
#define USB_MISCCTRL_STL_ADJ_EN(x)               (((uint8_t)(((uint8_t)(x)) << USB_MISCCTRL_STL_ADJ_EN_SHIFT)) & USB_MISCCTRL_STL_ADJ_EN_MASK)

/*! @name STALL_IL_DIS - Peripheral mode stall disable for endpoints 7 to 0 in IN direction */
#define USB_STALL_IL_DIS_STALL_I_DIS0_MASK       (0x1U)
#define USB_STALL_IL_DIS_STALL_I_DIS0_SHIFT      (0U)
#define USB_STALL_IL_DIS_STALL_I_DIS0(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS0_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS0_MASK)
#define USB_STALL_IL_DIS_STALL_I_DIS1_MASK       (0x2U)
#define USB_STALL_IL_DIS_STALL_I_DIS1_SHIFT      (1U)
#define USB_STALL_IL_DIS_STALL_I_DIS1(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS1_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS1_MASK)
#define USB_STALL_IL_DIS_STALL_I_DIS2_MASK       (0x4U)
#define USB_STALL_IL_DIS_STALL_I_DIS2_SHIFT      (2U)
#define USB_STALL_IL_DIS_STALL_I_DIS2(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS2_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS2_MASK)
#define USB_STALL_IL_DIS_STALL_I_DIS3_MASK       (0x8U)
#define USB_STALL_IL_DIS_STALL_I_DIS3_SHIFT      (3U)
#define USB_STALL_IL_DIS_STALL_I_DIS3(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS3_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS3_MASK)
#define USB_STALL_IL_DIS_STALL_I_DIS4_MASK       (0x10U)
#define USB_STALL_IL_DIS_STALL_I_DIS4_SHIFT      (4U)
#define USB_STALL_IL_DIS_STALL_I_DIS4(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS4_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS4_MASK)
#define USB_STALL_IL_DIS_STALL_I_DIS5_MASK       (0x20U)
#define USB_STALL_IL_DIS_STALL_I_DIS5_SHIFT      (5U)
#define USB_STALL_IL_DIS_STALL_I_DIS5(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS5_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS5_MASK)
#define USB_STALL_IL_DIS_STALL_I_DIS6_MASK       (0x40U)
#define USB_STALL_IL_DIS_STALL_I_DIS6_SHIFT      (6U)
#define USB_STALL_IL_DIS_STALL_I_DIS6(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS6_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS6_MASK)
#define USB_STALL_IL_DIS_STALL_I_DIS7_MASK       (0x80U)
#define USB_STALL_IL_DIS_STALL_I_DIS7_SHIFT      (7U)
#define USB_STALL_IL_DIS_STALL_I_DIS7(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IL_DIS_STALL_I_DIS7_SHIFT)) & USB_STALL_IL_DIS_STALL_I_DIS7_MASK)

/*! @name STALL_IH_DIS - Peripheral mode stall disable for endpoints 15 to 8 in IN direction */
#define USB_STALL_IH_DIS_STALL_I_DIS8_MASK       (0x1U)
#define USB_STALL_IH_DIS_STALL_I_DIS8_SHIFT      (0U)
#define USB_STALL_IH_DIS_STALL_I_DIS8(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS8_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS8_MASK)
#define USB_STALL_IH_DIS_STALL_I_DIS9_MASK       (0x2U)
#define USB_STALL_IH_DIS_STALL_I_DIS9_SHIFT      (1U)
#define USB_STALL_IH_DIS_STALL_I_DIS9(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS9_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS9_MASK)
#define USB_STALL_IH_DIS_STALL_I_DIS10_MASK      (0x4U)
#define USB_STALL_IH_DIS_STALL_I_DIS10_SHIFT     (2U)
#define USB_STALL_IH_DIS_STALL_I_DIS10(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS10_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS10_MASK)
#define USB_STALL_IH_DIS_STALL_I_DIS11_MASK      (0x8U)
#define USB_STALL_IH_DIS_STALL_I_DIS11_SHIFT     (3U)
#define USB_STALL_IH_DIS_STALL_I_DIS11(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS11_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS11_MASK)
#define USB_STALL_IH_DIS_STALL_I_DIS12_MASK      (0x10U)
#define USB_STALL_IH_DIS_STALL_I_DIS12_SHIFT     (4U)
#define USB_STALL_IH_DIS_STALL_I_DIS12(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS12_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS12_MASK)
#define USB_STALL_IH_DIS_STALL_I_DIS13_MASK      (0x20U)
#define USB_STALL_IH_DIS_STALL_I_DIS13_SHIFT     (5U)
#define USB_STALL_IH_DIS_STALL_I_DIS13(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS13_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS13_MASK)
#define USB_STALL_IH_DIS_STALL_I_DIS14_MASK      (0x40U)
#define USB_STALL_IH_DIS_STALL_I_DIS14_SHIFT     (6U)
#define USB_STALL_IH_DIS_STALL_I_DIS14(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS14_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS14_MASK)
#define USB_STALL_IH_DIS_STALL_I_DIS15_MASK      (0x80U)
#define USB_STALL_IH_DIS_STALL_I_DIS15_SHIFT     (7U)
#define USB_STALL_IH_DIS_STALL_I_DIS15(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_IH_DIS_STALL_I_DIS15_SHIFT)) & USB_STALL_IH_DIS_STALL_I_DIS15_MASK)

/*! @name STALL_OL_DIS - Peripheral mode stall disable for endpoints 7 to 0 in OUT direction */
#define USB_STALL_OL_DIS_STALL_O_DIS0_MASK       (0x1U)
#define USB_STALL_OL_DIS_STALL_O_DIS0_SHIFT      (0U)
#define USB_STALL_OL_DIS_STALL_O_DIS0(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS0_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS0_MASK)
#define USB_STALL_OL_DIS_STALL_O_DIS1_MASK       (0x2U)
#define USB_STALL_OL_DIS_STALL_O_DIS1_SHIFT      (1U)
#define USB_STALL_OL_DIS_STALL_O_DIS1(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS1_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS1_MASK)
#define USB_STALL_OL_DIS_STALL_O_DIS2_MASK       (0x4U)
#define USB_STALL_OL_DIS_STALL_O_DIS2_SHIFT      (2U)
#define USB_STALL_OL_DIS_STALL_O_DIS2(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS2_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS2_MASK)
#define USB_STALL_OL_DIS_STALL_O_DIS3_MASK       (0x8U)
#define USB_STALL_OL_DIS_STALL_O_DIS3_SHIFT      (3U)
#define USB_STALL_OL_DIS_STALL_O_DIS3(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS3_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS3_MASK)
#define USB_STALL_OL_DIS_STALL_O_DIS4_MASK       (0x10U)
#define USB_STALL_OL_DIS_STALL_O_DIS4_SHIFT      (4U)
#define USB_STALL_OL_DIS_STALL_O_DIS4(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS4_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS4_MASK)
#define USB_STALL_OL_DIS_STALL_O_DIS5_MASK       (0x20U)
#define USB_STALL_OL_DIS_STALL_O_DIS5_SHIFT      (5U)
#define USB_STALL_OL_DIS_STALL_O_DIS5(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS5_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS5_MASK)
#define USB_STALL_OL_DIS_STALL_O_DIS6_MASK       (0x40U)
#define USB_STALL_OL_DIS_STALL_O_DIS6_SHIFT      (6U)
#define USB_STALL_OL_DIS_STALL_O_DIS6(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS6_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS6_MASK)
#define USB_STALL_OL_DIS_STALL_O_DIS7_MASK       (0x80U)
#define USB_STALL_OL_DIS_STALL_O_DIS7_SHIFT      (7U)
#define USB_STALL_OL_DIS_STALL_O_DIS7(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OL_DIS_STALL_O_DIS7_SHIFT)) & USB_STALL_OL_DIS_STALL_O_DIS7_MASK)

/*! @name STALL_OH_DIS - Peripheral mode stall disable for endpoints 15 to 8 in OUT direction */
#define USB_STALL_OH_DIS_STALL_O_DIS8_MASK       (0x1U)
#define USB_STALL_OH_DIS_STALL_O_DIS8_SHIFT      (0U)
#define USB_STALL_OH_DIS_STALL_O_DIS8(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS8_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS8_MASK)
#define USB_STALL_OH_DIS_STALL_O_DIS9_MASK       (0x2U)
#define USB_STALL_OH_DIS_STALL_O_DIS9_SHIFT      (1U)
#define USB_STALL_OH_DIS_STALL_O_DIS9(x)         (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS9_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS9_MASK)
#define USB_STALL_OH_DIS_STALL_O_DIS10_MASK      (0x4U)
#define USB_STALL_OH_DIS_STALL_O_DIS10_SHIFT     (2U)
#define USB_STALL_OH_DIS_STALL_O_DIS10(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS10_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS10_MASK)
#define USB_STALL_OH_DIS_STALL_O_DIS11_MASK      (0x8U)
#define USB_STALL_OH_DIS_STALL_O_DIS11_SHIFT     (3U)
#define USB_STALL_OH_DIS_STALL_O_DIS11(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS11_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS11_MASK)
#define USB_STALL_OH_DIS_STALL_O_DIS12_MASK      (0x10U)
#define USB_STALL_OH_DIS_STALL_O_DIS12_SHIFT     (4U)
#define USB_STALL_OH_DIS_STALL_O_DIS12(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS12_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS12_MASK)
#define USB_STALL_OH_DIS_STALL_O_DIS13_MASK      (0x20U)
#define USB_STALL_OH_DIS_STALL_O_DIS13_SHIFT     (5U)
#define USB_STALL_OH_DIS_STALL_O_DIS13(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS13_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS13_MASK)
#define USB_STALL_OH_DIS_STALL_O_DIS14_MASK      (0x40U)
#define USB_STALL_OH_DIS_STALL_O_DIS14_SHIFT     (6U)
#define USB_STALL_OH_DIS_STALL_O_DIS14(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS14_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS14_MASK)
#define USB_STALL_OH_DIS_STALL_O_DIS15_MASK      (0x80U)
#define USB_STALL_OH_DIS_STALL_O_DIS15_SHIFT     (7U)
#define USB_STALL_OH_DIS_STALL_O_DIS15(x)        (((uint8_t)(((uint8_t)(x)) << USB_STALL_OH_DIS_STALL_O_DIS15_SHIFT)) & USB_STALL_OH_DIS_STALL_O_DIS15_MASK)

/*! @name CLK_RECOVER_CTRL - USB Clock recovery control */
#define USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN_MASK (0x20U)
#define USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN_SHIFT (5U)
#define USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN(x) (((uint8_t)(((uint8_t)(x)) << USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN_SHIFT)) & USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN_MASK)
#define USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN_MASK (0x40U)
#define USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN_SHIFT (6U)
#define USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN(x) (((uint8_t)(((uint8_t)(x)) << USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN_SHIFT)) & USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN_MASK)
#define USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN_MASK (0x80U)
#define USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN_SHIFT (7U)
#define USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN(x) (((uint8_t)(((uint8_t)(x)) << USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN_SHIFT)) & USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN_MASK)

/*! @name CLK_RECOVER_IRC_EN - IRC48MFIRC oscillator enable register */
#define USB_CLK_RECOVER_IRC_EN_REG_EN_MASK       (0x1U)
#define USB_CLK_RECOVER_IRC_EN_REG_EN_SHIFT      (0U)
#define USB_CLK_RECOVER_IRC_EN_REG_EN(x)         (((uint8_t)(((uint8_t)(x)) << USB_CLK_RECOVER_IRC_EN_REG_EN_SHIFT)) & USB_CLK_RECOVER_IRC_EN_REG_EN_MASK)
#define USB_CLK_RECOVER_IRC_EN_IRC_EN_MASK       (0x2U)
#define USB_CLK_RECOVER_IRC_EN_IRC_EN_SHIFT      (1U)
#define USB_CLK_RECOVER_IRC_EN_IRC_EN(x)         (((uint8_t)(((uint8_t)(x)) << USB_CLK_RECOVER_IRC_EN_IRC_EN_SHIFT)) & USB_CLK_RECOVER_IRC_EN_IRC_EN_MASK)

/*! @name CLK_RECOVER_INT_EN - Clock recovery combined interrupt enable */
#define USB_CLK_RECOVER_INT_EN_OVF_ERROR_EN_MASK (0x10U)
#define USB_CLK_RECOVER_INT_EN_OVF_ERROR_EN_SHIFT (4U)
#define USB_CLK_RECOVER_INT_EN_OVF_ERROR_EN(x)   (((uint8_t)(((uint8_t)(x)) << USB_CLK_RECOVER_INT_EN_OVF_ERROR_EN_SHIFT)) & USB_CLK_RECOVER_INT_EN_OVF_ERROR_EN_MASK)

/*! @name CLK_RECOVER_INT_STATUS - Clock recovery separated interrupt status */
#define USB_CLK_RECOVER_INT_STATUS_OVF_ERROR_MASK (0x10U)
#define USB_CLK_RECOVER_INT_STATUS_OVF_ERROR_SHIFT (4U)
#define USB_CLK_RECOVER_INT_STATUS_OVF_ERROR(x)  (((uint8_t)(((uint8_t)(x)) << USB_CLK_RECOVER_INT_STATUS_OVF_ERROR_SHIFT)) & USB_CLK_RECOVER_INT_STATUS_OVF_ERROR_MASK)


/*!
 * @}
 */ /* end of group USB_Register_Masks */


/* USB - Peripheral instance base addresses */
/** Peripheral USB0 base address */
#define USB0_BASE                                (0x40045000u)
/** Peripheral USB0 base pointer */
#define USB0                                     ((USB_Type *)USB0_BASE)
/** Array initializer of USB peripheral base addresses */
#define USB_BASE_ADDRS                           { USB0_BASE }
/** Array initializer of USB peripheral base pointers */
#define USB_BASE_PTRS                            { USB0 }
/** Interrupt vectors for the USB peripheral type */
#define USB_IRQS                                 { USB0_IRQn }

/*!
 * @}
 */ /* end of group USB_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- USBVREG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USBVREG_Peripheral_Access_Layer USBVREG Peripheral Access Layer
 * @{
 */

/** USBVREG - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< USB VREG Control Register, offset: 0x0 */
  __IO uint32_t CFGCTRL;                           /**< USB VREG Configuration Control Register, offset: 0x4 */
} USBVREG_Type;

/* ----------------------------------------------------------------------------
   -- USBVREG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USBVREG_Register_Masks USBVREG Register Masks
 * @{
 */

/*! @name CTRL - USB VREG Control Register */
#define USBVREG_CTRL_VSTBY_MASK                  (0x20000000U)
#define USBVREG_CTRL_VSTBY_SHIFT                 (29U)
#define USBVREG_CTRL_VSTBY(x)                    (((uint32_t)(((uint32_t)(x)) << USBVREG_CTRL_VSTBY_SHIFT)) & USBVREG_CTRL_VSTBY_MASK)
#define USBVREG_CTRL_SSTBY_MASK                  (0x40000000U)
#define USBVREG_CTRL_SSTBY_SHIFT                 (30U)
#define USBVREG_CTRL_SSTBY(x)                    (((uint32_t)(((uint32_t)(x)) << USBVREG_CTRL_SSTBY_SHIFT)) & USBVREG_CTRL_SSTBY_MASK)
#define USBVREG_CTRL_EN_MASK                     (0x80000000U)
#define USBVREG_CTRL_EN_SHIFT                    (31U)
#define USBVREG_CTRL_EN(x)                       (((uint32_t)(((uint32_t)(x)) << USBVREG_CTRL_EN_SHIFT)) & USBVREG_CTRL_EN_MASK)

/*! @name CFGCTRL - USB VREG Configuration Control Register */
#define USBVREG_CFGCTRL_URWE_MASK                (0x1000000U)
#define USBVREG_CFGCTRL_URWE_SHIFT               (24U)
#define USBVREG_CFGCTRL_URWE(x)                  (((uint32_t)(((uint32_t)(x)) << USBVREG_CFGCTRL_URWE_SHIFT)) & USBVREG_CFGCTRL_URWE_MASK)
#define USBVREG_CFGCTRL_UVSWE_MASK               (0x2000000U)
#define USBVREG_CFGCTRL_UVSWE_SHIFT              (25U)
#define USBVREG_CFGCTRL_UVSWE(x)                 (((uint32_t)(((uint32_t)(x)) << USBVREG_CFGCTRL_UVSWE_SHIFT)) & USBVREG_CFGCTRL_UVSWE_MASK)
#define USBVREG_CFGCTRL_USSWE_MASK               (0x4000000U)
#define USBVREG_CFGCTRL_USSWE_SHIFT              (26U)
#define USBVREG_CFGCTRL_USSWE(x)                 (((uint32_t)(((uint32_t)(x)) << USBVREG_CFGCTRL_USSWE_SHIFT)) & USBVREG_CFGCTRL_USSWE_MASK)


/*!
 * @}
 */ /* end of group USBVREG_Register_Masks */


/* USBVREG - Peripheral instance base addresses */
/** Peripheral USBVREG base address */
#define USBVREG_BASE                             (0x40027000u)
/** Peripheral USBVREG base pointer */
#define USBVREG                                  ((USBVREG_Type *)USBVREG_BASE)
/** Array initializer of USBVREG peripheral base addresses */
#define USBVREG_BASE_ADDRS                       { USBVREG_BASE }
/** Array initializer of USBVREG peripheral base pointers */
#define USBVREG_BASE_PTRS                        { USBVREG }

/*!
 * @}
 */ /* end of group USBVREG_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- USDHC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USDHC_Peripheral_Access_Layer USDHC Peripheral Access Layer
 * @{
 */

/** USDHC - Register Layout Typedef */
typedef struct {
  __IO uint32_t DS_ADDR;                           /**< DMA System Address, offset: 0x0 */
  __IO uint32_t BLK_ATT;                           /**< Block Attributes, offset: 0x4 */
  __IO uint32_t CMD_ARG;                           /**< Command Argument, offset: 0x8 */
  __IO uint32_t CMD_XFR_TYP;                       /**< Command Transfer Type, offset: 0xC */
  __I  uint32_t CMD_RSP0;                          /**< Command Response0, offset: 0x10 */
  __I  uint32_t CMD_RSP1;                          /**< Command Response1, offset: 0x14 */
  __I  uint32_t CMD_RSP2;                          /**< Command Response2, offset: 0x18 */
  __I  uint32_t CMD_RSP3;                          /**< Command Response3, offset: 0x1C */
  __IO uint32_t DATA_BUFF_ACC_PORT;                /**< Data Buffer Access Port, offset: 0x20 */
  __I  uint32_t PRES_STATE;                        /**< Present State, offset: 0x24 */
  __IO uint32_t PROT_CTRL;                         /**< Protocol Control, offset: 0x28 */
  __IO uint32_t SYS_CTRL;                          /**< System Control, offset: 0x2C */
  __IO uint32_t INT_STATUS;                        /**< Interrupt Status, offset: 0x30 */
  __IO uint32_t INT_STATUS_EN;                     /**< Interrupt Status Enable, offset: 0x34 */
  __IO uint32_t INT_SIGNAL_EN;                     /**< Interrupt Signal Enable, offset: 0x38 */
  __I  uint32_t AUTOCMD12_ERR_STATUS;              /**< Auto CMD12 Error Status, offset: 0x3C */
  __I  uint32_t HOST_CTRL_CAP;                     /**< Host Controller Capabilities, offset: 0x40 */
  __IO uint32_t WTMK_LVL;                          /**< Watermark Level, offset: 0x44 */
  __IO uint32_t MIX_CTRL;                          /**< Mixer Control, offset: 0x48 */
       uint8_t RESERVED_0[4];
  __O  uint32_t FORCE_EVENT;                       /**< Force Event, offset: 0x50 */
  __I  uint32_t ADMA_ERR_STATUS;                   /**< ADMA Error Status Register, offset: 0x54 */
  __IO uint32_t ADMA_SYS_ADDR;                     /**< ADMA System Address, offset: 0x58 */
       uint8_t RESERVED_1[100];
  __IO uint32_t VEND_SPEC;                         /**< Vendor Specific Register, offset: 0xC0 */
  __IO uint32_t MMC_BOOT;                          /**< MMC Boot Register, offset: 0xC4 */
  __IO uint32_t VEND_SPEC2;                        /**< Vendor Specific 2 Register, offset: 0xC8 */
} USDHC_Type;

/* ----------------------------------------------------------------------------
   -- USDHC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USDHC_Register_Masks USDHC Register Masks
 * @{
 */

/*! @name DS_ADDR - DMA System Address */
#define USDHC_DS_ADDR_DS_ADDR_MASK               (0xFFFFFFFFU)
#define USDHC_DS_ADDR_DS_ADDR_SHIFT              (0U)
#define USDHC_DS_ADDR_DS_ADDR(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_DS_ADDR_DS_ADDR_SHIFT)) & USDHC_DS_ADDR_DS_ADDR_MASK)

/*! @name BLK_ATT - Block Attributes */
#define USDHC_BLK_ATT_BLKSIZE_MASK               (0x1FFFU)
#define USDHC_BLK_ATT_BLKSIZE_SHIFT              (0U)
#define USDHC_BLK_ATT_BLKSIZE(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_BLK_ATT_BLKSIZE_SHIFT)) & USDHC_BLK_ATT_BLKSIZE_MASK)
#define USDHC_BLK_ATT_BLKCNT_MASK                (0xFFFF0000U)
#define USDHC_BLK_ATT_BLKCNT_SHIFT               (16U)
#define USDHC_BLK_ATT_BLKCNT(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_BLK_ATT_BLKCNT_SHIFT)) & USDHC_BLK_ATT_BLKCNT_MASK)

/*! @name CMD_ARG - Command Argument */
#define USDHC_CMD_ARG_CMDARG_MASK                (0xFFFFFFFFU)
#define USDHC_CMD_ARG_CMDARG_SHIFT               (0U)
#define USDHC_CMD_ARG_CMDARG(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_ARG_CMDARG_SHIFT)) & USDHC_CMD_ARG_CMDARG_MASK)

/*! @name CMD_XFR_TYP - Command Transfer Type */
#define USDHC_CMD_XFR_TYP_RSPTYP_MASK            (0x30000U)
#define USDHC_CMD_XFR_TYP_RSPTYP_SHIFT           (16U)
#define USDHC_CMD_XFR_TYP_RSPTYP(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_XFR_TYP_RSPTYP_SHIFT)) & USDHC_CMD_XFR_TYP_RSPTYP_MASK)
#define USDHC_CMD_XFR_TYP_CCCEN_MASK             (0x80000U)
#define USDHC_CMD_XFR_TYP_CCCEN_SHIFT            (19U)
#define USDHC_CMD_XFR_TYP_CCCEN(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_XFR_TYP_CCCEN_SHIFT)) & USDHC_CMD_XFR_TYP_CCCEN_MASK)
#define USDHC_CMD_XFR_TYP_CICEN_MASK             (0x100000U)
#define USDHC_CMD_XFR_TYP_CICEN_SHIFT            (20U)
#define USDHC_CMD_XFR_TYP_CICEN(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_XFR_TYP_CICEN_SHIFT)) & USDHC_CMD_XFR_TYP_CICEN_MASK)
#define USDHC_CMD_XFR_TYP_DPSEL_MASK             (0x200000U)
#define USDHC_CMD_XFR_TYP_DPSEL_SHIFT            (21U)
#define USDHC_CMD_XFR_TYP_DPSEL(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_XFR_TYP_DPSEL_SHIFT)) & USDHC_CMD_XFR_TYP_DPSEL_MASK)
#define USDHC_CMD_XFR_TYP_CMDTYP_MASK            (0xC00000U)
#define USDHC_CMD_XFR_TYP_CMDTYP_SHIFT           (22U)
#define USDHC_CMD_XFR_TYP_CMDTYP(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_XFR_TYP_CMDTYP_SHIFT)) & USDHC_CMD_XFR_TYP_CMDTYP_MASK)
#define USDHC_CMD_XFR_TYP_CMDINX_MASK            (0x3F000000U)
#define USDHC_CMD_XFR_TYP_CMDINX_SHIFT           (24U)
#define USDHC_CMD_XFR_TYP_CMDINX(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_XFR_TYP_CMDINX_SHIFT)) & USDHC_CMD_XFR_TYP_CMDINX_MASK)

/*! @name CMD_RSP0 - Command Response0 */
#define USDHC_CMD_RSP0_CMDRSP0_MASK              (0xFFFFFFFFU)
#define USDHC_CMD_RSP0_CMDRSP0_SHIFT             (0U)
#define USDHC_CMD_RSP0_CMDRSP0(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_RSP0_CMDRSP0_SHIFT)) & USDHC_CMD_RSP0_CMDRSP0_MASK)

/*! @name CMD_RSP1 - Command Response1 */
#define USDHC_CMD_RSP1_CMDRSP1_MASK              (0xFFFFFFFFU)
#define USDHC_CMD_RSP1_CMDRSP1_SHIFT             (0U)
#define USDHC_CMD_RSP1_CMDRSP1(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_RSP1_CMDRSP1_SHIFT)) & USDHC_CMD_RSP1_CMDRSP1_MASK)

/*! @name CMD_RSP2 - Command Response2 */
#define USDHC_CMD_RSP2_CMDRSP2_MASK              (0xFFFFFFFFU)
#define USDHC_CMD_RSP2_CMDRSP2_SHIFT             (0U)
#define USDHC_CMD_RSP2_CMDRSP2(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_RSP2_CMDRSP2_SHIFT)) & USDHC_CMD_RSP2_CMDRSP2_MASK)

/*! @name CMD_RSP3 - Command Response3 */
#define USDHC_CMD_RSP3_CMDRSP3_MASK              (0xFFFFFFFFU)
#define USDHC_CMD_RSP3_CMDRSP3_SHIFT             (0U)
#define USDHC_CMD_RSP3_CMDRSP3(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_CMD_RSP3_CMDRSP3_SHIFT)) & USDHC_CMD_RSP3_CMDRSP3_MASK)

/*! @name DATA_BUFF_ACC_PORT - Data Buffer Access Port */
#define USDHC_DATA_BUFF_ACC_PORT_DATCONT_MASK    (0xFFFFFFFFU)
#define USDHC_DATA_BUFF_ACC_PORT_DATCONT_SHIFT   (0U)
#define USDHC_DATA_BUFF_ACC_PORT_DATCONT(x)      (((uint32_t)(((uint32_t)(x)) << USDHC_DATA_BUFF_ACC_PORT_DATCONT_SHIFT)) & USDHC_DATA_BUFF_ACC_PORT_DATCONT_MASK)

/*! @name PRES_STATE - Present State */
#define USDHC_PRES_STATE_CIHB_MASK               (0x1U)
#define USDHC_PRES_STATE_CIHB_SHIFT              (0U)
#define USDHC_PRES_STATE_CIHB(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_CIHB_SHIFT)) & USDHC_PRES_STATE_CIHB_MASK)
#define USDHC_PRES_STATE_CDIHB_MASK              (0x2U)
#define USDHC_PRES_STATE_CDIHB_SHIFT             (1U)
#define USDHC_PRES_STATE_CDIHB(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_CDIHB_SHIFT)) & USDHC_PRES_STATE_CDIHB_MASK)
#define USDHC_PRES_STATE_DLA_MASK                (0x4U)
#define USDHC_PRES_STATE_DLA_SHIFT               (2U)
#define USDHC_PRES_STATE_DLA(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_DLA_SHIFT)) & USDHC_PRES_STATE_DLA_MASK)
#define USDHC_PRES_STATE_SDSTB_MASK              (0x8U)
#define USDHC_PRES_STATE_SDSTB_SHIFT             (3U)
#define USDHC_PRES_STATE_SDSTB(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_SDSTB_SHIFT)) & USDHC_PRES_STATE_SDSTB_MASK)
#define USDHC_PRES_STATE_IPGOFF_MASK             (0x10U)
#define USDHC_PRES_STATE_IPGOFF_SHIFT            (4U)
#define USDHC_PRES_STATE_IPGOFF(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_IPGOFF_SHIFT)) & USDHC_PRES_STATE_IPGOFF_MASK)
#define USDHC_PRES_STATE_HCKOFF_MASK             (0x20U)
#define USDHC_PRES_STATE_HCKOFF_SHIFT            (5U)
#define USDHC_PRES_STATE_HCKOFF(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_HCKOFF_SHIFT)) & USDHC_PRES_STATE_HCKOFF_MASK)
#define USDHC_PRES_STATE_PEROFF_MASK             (0x40U)
#define USDHC_PRES_STATE_PEROFF_SHIFT            (6U)
#define USDHC_PRES_STATE_PEROFF(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_PEROFF_SHIFT)) & USDHC_PRES_STATE_PEROFF_MASK)
#define USDHC_PRES_STATE_SDOFF_MASK              (0x80U)
#define USDHC_PRES_STATE_SDOFF_SHIFT             (7U)
#define USDHC_PRES_STATE_SDOFF(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_SDOFF_SHIFT)) & USDHC_PRES_STATE_SDOFF_MASK)
#define USDHC_PRES_STATE_WTA_MASK                (0x100U)
#define USDHC_PRES_STATE_WTA_SHIFT               (8U)
#define USDHC_PRES_STATE_WTA(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_WTA_SHIFT)) & USDHC_PRES_STATE_WTA_MASK)
#define USDHC_PRES_STATE_RTA_MASK                (0x200U)
#define USDHC_PRES_STATE_RTA_SHIFT               (9U)
#define USDHC_PRES_STATE_RTA(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_RTA_SHIFT)) & USDHC_PRES_STATE_RTA_MASK)
#define USDHC_PRES_STATE_BWEN_MASK               (0x400U)
#define USDHC_PRES_STATE_BWEN_SHIFT              (10U)
#define USDHC_PRES_STATE_BWEN(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_BWEN_SHIFT)) & USDHC_PRES_STATE_BWEN_MASK)
#define USDHC_PRES_STATE_BREN_MASK               (0x800U)
#define USDHC_PRES_STATE_BREN_SHIFT              (11U)
#define USDHC_PRES_STATE_BREN(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_BREN_SHIFT)) & USDHC_PRES_STATE_BREN_MASK)
#define USDHC_PRES_STATE_CINST_MASK              (0x10000U)
#define USDHC_PRES_STATE_CINST_SHIFT             (16U)
#define USDHC_PRES_STATE_CINST(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_CINST_SHIFT)) & USDHC_PRES_STATE_CINST_MASK)
#define USDHC_PRES_STATE_CDPL_MASK               (0x40000U)
#define USDHC_PRES_STATE_CDPL_SHIFT              (18U)
#define USDHC_PRES_STATE_CDPL(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_CDPL_SHIFT)) & USDHC_PRES_STATE_CDPL_MASK)
#define USDHC_PRES_STATE_WPSPL_MASK              (0x80000U)
#define USDHC_PRES_STATE_WPSPL_SHIFT             (19U)
#define USDHC_PRES_STATE_WPSPL(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_WPSPL_SHIFT)) & USDHC_PRES_STATE_WPSPL_MASK)
#define USDHC_PRES_STATE_CLSL_MASK               (0x800000U)
#define USDHC_PRES_STATE_CLSL_SHIFT              (23U)
#define USDHC_PRES_STATE_CLSL(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_CLSL_SHIFT)) & USDHC_PRES_STATE_CLSL_MASK)
#define USDHC_PRES_STATE_DLSL_MASK               (0xFF000000U)
#define USDHC_PRES_STATE_DLSL_SHIFT              (24U)
#define USDHC_PRES_STATE_DLSL(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PRES_STATE_DLSL_SHIFT)) & USDHC_PRES_STATE_DLSL_MASK)

/*! @name PROT_CTRL - Protocol Control */
#define USDHC_PROT_CTRL_LCTL_MASK                (0x1U)
#define USDHC_PROT_CTRL_LCTL_SHIFT               (0U)
#define USDHC_PROT_CTRL_LCTL(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_LCTL_SHIFT)) & USDHC_PROT_CTRL_LCTL_MASK)
#define USDHC_PROT_CTRL_DTW_MASK                 (0x6U)
#define USDHC_PROT_CTRL_DTW_SHIFT                (1U)
#define USDHC_PROT_CTRL_DTW(x)                   (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_DTW_SHIFT)) & USDHC_PROT_CTRL_DTW_MASK)
#define USDHC_PROT_CTRL_D3CD_MASK                (0x8U)
#define USDHC_PROT_CTRL_D3CD_SHIFT               (3U)
#define USDHC_PROT_CTRL_D3CD(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_D3CD_SHIFT)) & USDHC_PROT_CTRL_D3CD_MASK)
#define USDHC_PROT_CTRL_EMODE_MASK               (0x30U)
#define USDHC_PROT_CTRL_EMODE_SHIFT              (4U)
#define USDHC_PROT_CTRL_EMODE(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_EMODE_SHIFT)) & USDHC_PROT_CTRL_EMODE_MASK)
#define USDHC_PROT_CTRL_CDTL_MASK                (0x40U)
#define USDHC_PROT_CTRL_CDTL_SHIFT               (6U)
#define USDHC_PROT_CTRL_CDTL(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_CDTL_SHIFT)) & USDHC_PROT_CTRL_CDTL_MASK)
#define USDHC_PROT_CTRL_CDSS_MASK                (0x80U)
#define USDHC_PROT_CTRL_CDSS_SHIFT               (7U)
#define USDHC_PROT_CTRL_CDSS(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_CDSS_SHIFT)) & USDHC_PROT_CTRL_CDSS_MASK)
#define USDHC_PROT_CTRL_DMASEL_MASK              (0x300U)
#define USDHC_PROT_CTRL_DMASEL_SHIFT             (8U)
#define USDHC_PROT_CTRL_DMASEL(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_DMASEL_SHIFT)) & USDHC_PROT_CTRL_DMASEL_MASK)
#define USDHC_PROT_CTRL_SABGREQ_MASK             (0x10000U)
#define USDHC_PROT_CTRL_SABGREQ_SHIFT            (16U)
#define USDHC_PROT_CTRL_SABGREQ(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_SABGREQ_SHIFT)) & USDHC_PROT_CTRL_SABGREQ_MASK)
#define USDHC_PROT_CTRL_CREQ_MASK                (0x20000U)
#define USDHC_PROT_CTRL_CREQ_SHIFT               (17U)
#define USDHC_PROT_CTRL_CREQ(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_CREQ_SHIFT)) & USDHC_PROT_CTRL_CREQ_MASK)
#define USDHC_PROT_CTRL_RWCTL_MASK               (0x40000U)
#define USDHC_PROT_CTRL_RWCTL_SHIFT              (18U)
#define USDHC_PROT_CTRL_RWCTL(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_RWCTL_SHIFT)) & USDHC_PROT_CTRL_RWCTL_MASK)
#define USDHC_PROT_CTRL_IABG_MASK                (0x80000U)
#define USDHC_PROT_CTRL_IABG_SHIFT               (19U)
#define USDHC_PROT_CTRL_IABG(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_IABG_SHIFT)) & USDHC_PROT_CTRL_IABG_MASK)
#define USDHC_PROT_CTRL_RD_DONE_NO_8CLK_MASK     (0x100000U)
#define USDHC_PROT_CTRL_RD_DONE_NO_8CLK_SHIFT    (20U)
#define USDHC_PROT_CTRL_RD_DONE_NO_8CLK(x)       (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_RD_DONE_NO_8CLK_SHIFT)) & USDHC_PROT_CTRL_RD_DONE_NO_8CLK_MASK)
#define USDHC_PROT_CTRL_WECINT_MASK              (0x1000000U)
#define USDHC_PROT_CTRL_WECINT_SHIFT             (24U)
#define USDHC_PROT_CTRL_WECINT(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_WECINT_SHIFT)) & USDHC_PROT_CTRL_WECINT_MASK)
#define USDHC_PROT_CTRL_WECINS_MASK              (0x2000000U)
#define USDHC_PROT_CTRL_WECINS_SHIFT             (25U)
#define USDHC_PROT_CTRL_WECINS(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_WECINS_SHIFT)) & USDHC_PROT_CTRL_WECINS_MASK)
#define USDHC_PROT_CTRL_WECRM_MASK               (0x4000000U)
#define USDHC_PROT_CTRL_WECRM_SHIFT              (26U)
#define USDHC_PROT_CTRL_WECRM(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_WECRM_SHIFT)) & USDHC_PROT_CTRL_WECRM_MASK)
#define USDHC_PROT_CTRL_BURST_LEN_EN_MASK        (0x38000000U)
#define USDHC_PROT_CTRL_BURST_LEN_EN_SHIFT       (27U)
#define USDHC_PROT_CTRL_BURST_LEN_EN(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_BURST_LEN_EN_SHIFT)) & USDHC_PROT_CTRL_BURST_LEN_EN_MASK)
#define USDHC_PROT_CTRL_NON_EXACT_BLK_RD_MASK    (0x40000000U)
#define USDHC_PROT_CTRL_NON_EXACT_BLK_RD_SHIFT   (30U)
#define USDHC_PROT_CTRL_NON_EXACT_BLK_RD(x)      (((uint32_t)(((uint32_t)(x)) << USDHC_PROT_CTRL_NON_EXACT_BLK_RD_SHIFT)) & USDHC_PROT_CTRL_NON_EXACT_BLK_RD_MASK)

/*! @name SYS_CTRL - System Control */
#define USDHC_SYS_CTRL_DVS_MASK                  (0xF0U)
#define USDHC_SYS_CTRL_DVS_SHIFT                 (4U)
#define USDHC_SYS_CTRL_DVS(x)                    (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_DVS_SHIFT)) & USDHC_SYS_CTRL_DVS_MASK)
#define USDHC_SYS_CTRL_SDCLKFS_MASK              (0xFF00U)
#define USDHC_SYS_CTRL_SDCLKFS_SHIFT             (8U)
#define USDHC_SYS_CTRL_SDCLKFS(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_SDCLKFS_SHIFT)) & USDHC_SYS_CTRL_SDCLKFS_MASK)
#define USDHC_SYS_CTRL_DTOCV_MASK                (0xF0000U)
#define USDHC_SYS_CTRL_DTOCV_SHIFT               (16U)
#define USDHC_SYS_CTRL_DTOCV(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_DTOCV_SHIFT)) & USDHC_SYS_CTRL_DTOCV_MASK)
#define USDHC_SYS_CTRL_IPP_RST_N_MASK            (0x800000U)
#define USDHC_SYS_CTRL_IPP_RST_N_SHIFT           (23U)
#define USDHC_SYS_CTRL_IPP_RST_N(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_IPP_RST_N_SHIFT)) & USDHC_SYS_CTRL_IPP_RST_N_MASK)
#define USDHC_SYS_CTRL_RSTA_MASK                 (0x1000000U)
#define USDHC_SYS_CTRL_RSTA_SHIFT                (24U)
#define USDHC_SYS_CTRL_RSTA(x)                   (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_RSTA_SHIFT)) & USDHC_SYS_CTRL_RSTA_MASK)
#define USDHC_SYS_CTRL_RSTC_MASK                 (0x2000000U)
#define USDHC_SYS_CTRL_RSTC_SHIFT                (25U)
#define USDHC_SYS_CTRL_RSTC(x)                   (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_RSTC_SHIFT)) & USDHC_SYS_CTRL_RSTC_MASK)
#define USDHC_SYS_CTRL_RSTD_MASK                 (0x4000000U)
#define USDHC_SYS_CTRL_RSTD_SHIFT                (26U)
#define USDHC_SYS_CTRL_RSTD(x)                   (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_RSTD_SHIFT)) & USDHC_SYS_CTRL_RSTD_MASK)
#define USDHC_SYS_CTRL_INITA_MASK                (0x8000000U)
#define USDHC_SYS_CTRL_INITA_SHIFT               (27U)
#define USDHC_SYS_CTRL_INITA(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_SYS_CTRL_INITA_SHIFT)) & USDHC_SYS_CTRL_INITA_MASK)

/*! @name INT_STATUS - Interrupt Status */
#define USDHC_INT_STATUS_CC_MASK                 (0x1U)
#define USDHC_INT_STATUS_CC_SHIFT                (0U)
#define USDHC_INT_STATUS_CC(x)                   (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CC_SHIFT)) & USDHC_INT_STATUS_CC_MASK)
#define USDHC_INT_STATUS_TC_MASK                 (0x2U)
#define USDHC_INT_STATUS_TC_SHIFT                (1U)
#define USDHC_INT_STATUS_TC(x)                   (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_TC_SHIFT)) & USDHC_INT_STATUS_TC_MASK)
#define USDHC_INT_STATUS_BGE_MASK                (0x4U)
#define USDHC_INT_STATUS_BGE_SHIFT               (2U)
#define USDHC_INT_STATUS_BGE(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_BGE_SHIFT)) & USDHC_INT_STATUS_BGE_MASK)
#define USDHC_INT_STATUS_DINT_MASK               (0x8U)
#define USDHC_INT_STATUS_DINT_SHIFT              (3U)
#define USDHC_INT_STATUS_DINT(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_DINT_SHIFT)) & USDHC_INT_STATUS_DINT_MASK)
#define USDHC_INT_STATUS_BWR_MASK                (0x10U)
#define USDHC_INT_STATUS_BWR_SHIFT               (4U)
#define USDHC_INT_STATUS_BWR(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_BWR_SHIFT)) & USDHC_INT_STATUS_BWR_MASK)
#define USDHC_INT_STATUS_BRR_MASK                (0x20U)
#define USDHC_INT_STATUS_BRR_SHIFT               (5U)
#define USDHC_INT_STATUS_BRR(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_BRR_SHIFT)) & USDHC_INT_STATUS_BRR_MASK)
#define USDHC_INT_STATUS_CINS_MASK               (0x40U)
#define USDHC_INT_STATUS_CINS_SHIFT              (6U)
#define USDHC_INT_STATUS_CINS(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CINS_SHIFT)) & USDHC_INT_STATUS_CINS_MASK)
#define USDHC_INT_STATUS_CRM_MASK                (0x80U)
#define USDHC_INT_STATUS_CRM_SHIFT               (7U)
#define USDHC_INT_STATUS_CRM(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CRM_SHIFT)) & USDHC_INT_STATUS_CRM_MASK)
#define USDHC_INT_STATUS_CINT_MASK               (0x100U)
#define USDHC_INT_STATUS_CINT_SHIFT              (8U)
#define USDHC_INT_STATUS_CINT(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CINT_SHIFT)) & USDHC_INT_STATUS_CINT_MASK)
#define USDHC_INT_STATUS_CTOE_MASK               (0x10000U)
#define USDHC_INT_STATUS_CTOE_SHIFT              (16U)
#define USDHC_INT_STATUS_CTOE(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CTOE_SHIFT)) & USDHC_INT_STATUS_CTOE_MASK)
#define USDHC_INT_STATUS_CCE_MASK                (0x20000U)
#define USDHC_INT_STATUS_CCE_SHIFT               (17U)
#define USDHC_INT_STATUS_CCE(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CCE_SHIFT)) & USDHC_INT_STATUS_CCE_MASK)
#define USDHC_INT_STATUS_CEBE_MASK               (0x40000U)
#define USDHC_INT_STATUS_CEBE_SHIFT              (18U)
#define USDHC_INT_STATUS_CEBE(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CEBE_SHIFT)) & USDHC_INT_STATUS_CEBE_MASK)
#define USDHC_INT_STATUS_CIE_MASK                (0x80000U)
#define USDHC_INT_STATUS_CIE_SHIFT               (19U)
#define USDHC_INT_STATUS_CIE(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_CIE_SHIFT)) & USDHC_INT_STATUS_CIE_MASK)
#define USDHC_INT_STATUS_DTOE_MASK               (0x100000U)
#define USDHC_INT_STATUS_DTOE_SHIFT              (20U)
#define USDHC_INT_STATUS_DTOE(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_DTOE_SHIFT)) & USDHC_INT_STATUS_DTOE_MASK)
#define USDHC_INT_STATUS_DCE_MASK                (0x200000U)
#define USDHC_INT_STATUS_DCE_SHIFT               (21U)
#define USDHC_INT_STATUS_DCE(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_DCE_SHIFT)) & USDHC_INT_STATUS_DCE_MASK)
#define USDHC_INT_STATUS_DEBE_MASK               (0x400000U)
#define USDHC_INT_STATUS_DEBE_SHIFT              (22U)
#define USDHC_INT_STATUS_DEBE(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_DEBE_SHIFT)) & USDHC_INT_STATUS_DEBE_MASK)
#define USDHC_INT_STATUS_AC12E_MASK              (0x1000000U)
#define USDHC_INT_STATUS_AC12E_SHIFT             (24U)
#define USDHC_INT_STATUS_AC12E(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_AC12E_SHIFT)) & USDHC_INT_STATUS_AC12E_MASK)
#define USDHC_INT_STATUS_DMAE_MASK               (0x10000000U)
#define USDHC_INT_STATUS_DMAE_SHIFT              (28U)
#define USDHC_INT_STATUS_DMAE(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_DMAE_SHIFT)) & USDHC_INT_STATUS_DMAE_MASK)

/*! @name INT_STATUS_EN - Interrupt Status Enable */
#define USDHC_INT_STATUS_EN_CCSEN_MASK           (0x1U)
#define USDHC_INT_STATUS_EN_CCSEN_SHIFT          (0U)
#define USDHC_INT_STATUS_EN_CCSEN(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CCSEN_SHIFT)) & USDHC_INT_STATUS_EN_CCSEN_MASK)
#define USDHC_INT_STATUS_EN_TCSEN_MASK           (0x2U)
#define USDHC_INT_STATUS_EN_TCSEN_SHIFT          (1U)
#define USDHC_INT_STATUS_EN_TCSEN(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_TCSEN_SHIFT)) & USDHC_INT_STATUS_EN_TCSEN_MASK)
#define USDHC_INT_STATUS_EN_BGESEN_MASK          (0x4U)
#define USDHC_INT_STATUS_EN_BGESEN_SHIFT         (2U)
#define USDHC_INT_STATUS_EN_BGESEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_BGESEN_SHIFT)) & USDHC_INT_STATUS_EN_BGESEN_MASK)
#define USDHC_INT_STATUS_EN_DINTSEN_MASK         (0x8U)
#define USDHC_INT_STATUS_EN_DINTSEN_SHIFT        (3U)
#define USDHC_INT_STATUS_EN_DINTSEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_DINTSEN_SHIFT)) & USDHC_INT_STATUS_EN_DINTSEN_MASK)
#define USDHC_INT_STATUS_EN_BWRSEN_MASK          (0x10U)
#define USDHC_INT_STATUS_EN_BWRSEN_SHIFT         (4U)
#define USDHC_INT_STATUS_EN_BWRSEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_BWRSEN_SHIFT)) & USDHC_INT_STATUS_EN_BWRSEN_MASK)
#define USDHC_INT_STATUS_EN_BRRSEN_MASK          (0x20U)
#define USDHC_INT_STATUS_EN_BRRSEN_SHIFT         (5U)
#define USDHC_INT_STATUS_EN_BRRSEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_BRRSEN_SHIFT)) & USDHC_INT_STATUS_EN_BRRSEN_MASK)
#define USDHC_INT_STATUS_EN_CINSSEN_MASK         (0x40U)
#define USDHC_INT_STATUS_EN_CINSSEN_SHIFT        (6U)
#define USDHC_INT_STATUS_EN_CINSSEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CINSSEN_SHIFT)) & USDHC_INT_STATUS_EN_CINSSEN_MASK)
#define USDHC_INT_STATUS_EN_CRMSEN_MASK          (0x80U)
#define USDHC_INT_STATUS_EN_CRMSEN_SHIFT         (7U)
#define USDHC_INT_STATUS_EN_CRMSEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CRMSEN_SHIFT)) & USDHC_INT_STATUS_EN_CRMSEN_MASK)
#define USDHC_INT_STATUS_EN_CINTSEN_MASK         (0x100U)
#define USDHC_INT_STATUS_EN_CINTSEN_SHIFT        (8U)
#define USDHC_INT_STATUS_EN_CINTSEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CINTSEN_SHIFT)) & USDHC_INT_STATUS_EN_CINTSEN_MASK)
#define USDHC_INT_STATUS_EN_CTOESEN_MASK         (0x10000U)
#define USDHC_INT_STATUS_EN_CTOESEN_SHIFT        (16U)
#define USDHC_INT_STATUS_EN_CTOESEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CTOESEN_SHIFT)) & USDHC_INT_STATUS_EN_CTOESEN_MASK)
#define USDHC_INT_STATUS_EN_CCESEN_MASK          (0x20000U)
#define USDHC_INT_STATUS_EN_CCESEN_SHIFT         (17U)
#define USDHC_INT_STATUS_EN_CCESEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CCESEN_SHIFT)) & USDHC_INT_STATUS_EN_CCESEN_MASK)
#define USDHC_INT_STATUS_EN_CEBESEN_MASK         (0x40000U)
#define USDHC_INT_STATUS_EN_CEBESEN_SHIFT        (18U)
#define USDHC_INT_STATUS_EN_CEBESEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CEBESEN_SHIFT)) & USDHC_INT_STATUS_EN_CEBESEN_MASK)
#define USDHC_INT_STATUS_EN_CIESEN_MASK          (0x80000U)
#define USDHC_INT_STATUS_EN_CIESEN_SHIFT         (19U)
#define USDHC_INT_STATUS_EN_CIESEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_CIESEN_SHIFT)) & USDHC_INT_STATUS_EN_CIESEN_MASK)
#define USDHC_INT_STATUS_EN_DTOESEN_MASK         (0x100000U)
#define USDHC_INT_STATUS_EN_DTOESEN_SHIFT        (20U)
#define USDHC_INT_STATUS_EN_DTOESEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_DTOESEN_SHIFT)) & USDHC_INT_STATUS_EN_DTOESEN_MASK)
#define USDHC_INT_STATUS_EN_DCESEN_MASK          (0x200000U)
#define USDHC_INT_STATUS_EN_DCESEN_SHIFT         (21U)
#define USDHC_INT_STATUS_EN_DCESEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_DCESEN_SHIFT)) & USDHC_INT_STATUS_EN_DCESEN_MASK)
#define USDHC_INT_STATUS_EN_DEBESEN_MASK         (0x400000U)
#define USDHC_INT_STATUS_EN_DEBESEN_SHIFT        (22U)
#define USDHC_INT_STATUS_EN_DEBESEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_DEBESEN_SHIFT)) & USDHC_INT_STATUS_EN_DEBESEN_MASK)
#define USDHC_INT_STATUS_EN_AC12ESEN_MASK        (0x1000000U)
#define USDHC_INT_STATUS_EN_AC12ESEN_SHIFT       (24U)
#define USDHC_INT_STATUS_EN_AC12ESEN(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_AC12ESEN_SHIFT)) & USDHC_INT_STATUS_EN_AC12ESEN_MASK)
#define USDHC_INT_STATUS_EN_DMAESEN_MASK         (0x10000000U)
#define USDHC_INT_STATUS_EN_DMAESEN_SHIFT        (28U)
#define USDHC_INT_STATUS_EN_DMAESEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_STATUS_EN_DMAESEN_SHIFT)) & USDHC_INT_STATUS_EN_DMAESEN_MASK)

/*! @name INT_SIGNAL_EN - Interrupt Signal Enable */
#define USDHC_INT_SIGNAL_EN_CCIEN_MASK           (0x1U)
#define USDHC_INT_SIGNAL_EN_CCIEN_SHIFT          (0U)
#define USDHC_INT_SIGNAL_EN_CCIEN(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CCIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CCIEN_MASK)
#define USDHC_INT_SIGNAL_EN_TCIEN_MASK           (0x2U)
#define USDHC_INT_SIGNAL_EN_TCIEN_SHIFT          (1U)
#define USDHC_INT_SIGNAL_EN_TCIEN(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_TCIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_TCIEN_MASK)
#define USDHC_INT_SIGNAL_EN_BGEIEN_MASK          (0x4U)
#define USDHC_INT_SIGNAL_EN_BGEIEN_SHIFT         (2U)
#define USDHC_INT_SIGNAL_EN_BGEIEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_BGEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_BGEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_DINTIEN_MASK         (0x8U)
#define USDHC_INT_SIGNAL_EN_DINTIEN_SHIFT        (3U)
#define USDHC_INT_SIGNAL_EN_DINTIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_DINTIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_DINTIEN_MASK)
#define USDHC_INT_SIGNAL_EN_BWRIEN_MASK          (0x10U)
#define USDHC_INT_SIGNAL_EN_BWRIEN_SHIFT         (4U)
#define USDHC_INT_SIGNAL_EN_BWRIEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_BWRIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_BWRIEN_MASK)
#define USDHC_INT_SIGNAL_EN_BRRIEN_MASK          (0x20U)
#define USDHC_INT_SIGNAL_EN_BRRIEN_SHIFT         (5U)
#define USDHC_INT_SIGNAL_EN_BRRIEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_BRRIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_BRRIEN_MASK)
#define USDHC_INT_SIGNAL_EN_CINSIEN_MASK         (0x40U)
#define USDHC_INT_SIGNAL_EN_CINSIEN_SHIFT        (6U)
#define USDHC_INT_SIGNAL_EN_CINSIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CINSIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CINSIEN_MASK)
#define USDHC_INT_SIGNAL_EN_CRMIEN_MASK          (0x80U)
#define USDHC_INT_SIGNAL_EN_CRMIEN_SHIFT         (7U)
#define USDHC_INT_SIGNAL_EN_CRMIEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CRMIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CRMIEN_MASK)
#define USDHC_INT_SIGNAL_EN_CINTIEN_MASK         (0x100U)
#define USDHC_INT_SIGNAL_EN_CINTIEN_SHIFT        (8U)
#define USDHC_INT_SIGNAL_EN_CINTIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CINTIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CINTIEN_MASK)
#define USDHC_INT_SIGNAL_EN_CTOEIEN_MASK         (0x10000U)
#define USDHC_INT_SIGNAL_EN_CTOEIEN_SHIFT        (16U)
#define USDHC_INT_SIGNAL_EN_CTOEIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CTOEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CTOEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_CCEIEN_MASK          (0x20000U)
#define USDHC_INT_SIGNAL_EN_CCEIEN_SHIFT         (17U)
#define USDHC_INT_SIGNAL_EN_CCEIEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CCEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CCEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_CEBEIEN_MASK         (0x40000U)
#define USDHC_INT_SIGNAL_EN_CEBEIEN_SHIFT        (18U)
#define USDHC_INT_SIGNAL_EN_CEBEIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CEBEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CEBEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_CIEIEN_MASK          (0x80000U)
#define USDHC_INT_SIGNAL_EN_CIEIEN_SHIFT         (19U)
#define USDHC_INT_SIGNAL_EN_CIEIEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_CIEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_CIEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_DTOEIEN_MASK         (0x100000U)
#define USDHC_INT_SIGNAL_EN_DTOEIEN_SHIFT        (20U)
#define USDHC_INT_SIGNAL_EN_DTOEIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_DTOEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_DTOEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_DCEIEN_MASK          (0x200000U)
#define USDHC_INT_SIGNAL_EN_DCEIEN_SHIFT         (21U)
#define USDHC_INT_SIGNAL_EN_DCEIEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_DCEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_DCEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_DEBEIEN_MASK         (0x400000U)
#define USDHC_INT_SIGNAL_EN_DEBEIEN_SHIFT        (22U)
#define USDHC_INT_SIGNAL_EN_DEBEIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_DEBEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_DEBEIEN_MASK)
#define USDHC_INT_SIGNAL_EN_AC12EIEN_MASK        (0x1000000U)
#define USDHC_INT_SIGNAL_EN_AC12EIEN_SHIFT       (24U)
#define USDHC_INT_SIGNAL_EN_AC12EIEN(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_AC12EIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_AC12EIEN_MASK)
#define USDHC_INT_SIGNAL_EN_DMAEIEN_MASK         (0x10000000U)
#define USDHC_INT_SIGNAL_EN_DMAEIEN_SHIFT        (28U)
#define USDHC_INT_SIGNAL_EN_DMAEIEN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_INT_SIGNAL_EN_DMAEIEN_SHIFT)) & USDHC_INT_SIGNAL_EN_DMAEIEN_MASK)

/*! @name AUTOCMD12_ERR_STATUS - Auto CMD12 Error Status */
#define USDHC_AUTOCMD12_ERR_STATUS_AC12NE_MASK   (0x1U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12NE_SHIFT  (0U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12NE(x)     (((uint32_t)(((uint32_t)(x)) << USDHC_AUTOCMD12_ERR_STATUS_AC12NE_SHIFT)) & USDHC_AUTOCMD12_ERR_STATUS_AC12NE_MASK)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12TOE_MASK  (0x2U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12TOE_SHIFT (1U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12TOE(x)    (((uint32_t)(((uint32_t)(x)) << USDHC_AUTOCMD12_ERR_STATUS_AC12TOE_SHIFT)) & USDHC_AUTOCMD12_ERR_STATUS_AC12TOE_MASK)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12EBE_MASK  (0x4U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12EBE_SHIFT (2U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12EBE(x)    (((uint32_t)(((uint32_t)(x)) << USDHC_AUTOCMD12_ERR_STATUS_AC12EBE_SHIFT)) & USDHC_AUTOCMD12_ERR_STATUS_AC12EBE_MASK)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12CE_MASK   (0x8U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12CE_SHIFT  (3U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12CE(x)     (((uint32_t)(((uint32_t)(x)) << USDHC_AUTOCMD12_ERR_STATUS_AC12CE_SHIFT)) & USDHC_AUTOCMD12_ERR_STATUS_AC12CE_MASK)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12IE_MASK   (0x10U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12IE_SHIFT  (4U)
#define USDHC_AUTOCMD12_ERR_STATUS_AC12IE(x)     (((uint32_t)(((uint32_t)(x)) << USDHC_AUTOCMD12_ERR_STATUS_AC12IE_SHIFT)) & USDHC_AUTOCMD12_ERR_STATUS_AC12IE_MASK)
#define USDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_MASK (0x80U)
#define USDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_SHIFT (7U)
#define USDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E(x)  (((uint32_t)(((uint32_t)(x)) << USDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_SHIFT)) & USDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_MASK)

/*! @name HOST_CTRL_CAP - Host Controller Capabilities */
#define USDHC_HOST_CTRL_CAP_DDR50_SUPPORT_MASK   (0x4U)
#define USDHC_HOST_CTRL_CAP_DDR50_SUPPORT_SHIFT  (2U)
#define USDHC_HOST_CTRL_CAP_DDR50_SUPPORT(x)     (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_DDR50_SUPPORT_SHIFT)) & USDHC_HOST_CTRL_CAP_DDR50_SUPPORT_MASK)
#define USDHC_HOST_CTRL_CAP_MBL_MASK             (0x70000U)
#define USDHC_HOST_CTRL_CAP_MBL_SHIFT            (16U)
#define USDHC_HOST_CTRL_CAP_MBL(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_MBL_SHIFT)) & USDHC_HOST_CTRL_CAP_MBL_MASK)
#define USDHC_HOST_CTRL_CAP_ADMAS_MASK           (0x100000U)
#define USDHC_HOST_CTRL_CAP_ADMAS_SHIFT          (20U)
#define USDHC_HOST_CTRL_CAP_ADMAS(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_ADMAS_SHIFT)) & USDHC_HOST_CTRL_CAP_ADMAS_MASK)
#define USDHC_HOST_CTRL_CAP_HSS_MASK             (0x200000U)
#define USDHC_HOST_CTRL_CAP_HSS_SHIFT            (21U)
#define USDHC_HOST_CTRL_CAP_HSS(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_HSS_SHIFT)) & USDHC_HOST_CTRL_CAP_HSS_MASK)
#define USDHC_HOST_CTRL_CAP_DMAS_MASK            (0x400000U)
#define USDHC_HOST_CTRL_CAP_DMAS_SHIFT           (22U)
#define USDHC_HOST_CTRL_CAP_DMAS(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_DMAS_SHIFT)) & USDHC_HOST_CTRL_CAP_DMAS_MASK)
#define USDHC_HOST_CTRL_CAP_SRS_MASK             (0x800000U)
#define USDHC_HOST_CTRL_CAP_SRS_SHIFT            (23U)
#define USDHC_HOST_CTRL_CAP_SRS(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_SRS_SHIFT)) & USDHC_HOST_CTRL_CAP_SRS_MASK)
#define USDHC_HOST_CTRL_CAP_VS33_MASK            (0x1000000U)
#define USDHC_HOST_CTRL_CAP_VS33_SHIFT           (24U)
#define USDHC_HOST_CTRL_CAP_VS33(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_VS33_SHIFT)) & USDHC_HOST_CTRL_CAP_VS33_MASK)
#define USDHC_HOST_CTRL_CAP_VS30_MASK            (0x2000000U)
#define USDHC_HOST_CTRL_CAP_VS30_SHIFT           (25U)
#define USDHC_HOST_CTRL_CAP_VS30(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_VS30_SHIFT)) & USDHC_HOST_CTRL_CAP_VS30_MASK)
#define USDHC_HOST_CTRL_CAP_VS18_MASK            (0x4000000U)
#define USDHC_HOST_CTRL_CAP_VS18_SHIFT           (26U)
#define USDHC_HOST_CTRL_CAP_VS18(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_HOST_CTRL_CAP_VS18_SHIFT)) & USDHC_HOST_CTRL_CAP_VS18_MASK)

/*! @name WTMK_LVL - Watermark Level */
#define USDHC_WTMK_LVL_RD_WML_MASK               (0xFFU)
#define USDHC_WTMK_LVL_RD_WML_SHIFT              (0U)
#define USDHC_WTMK_LVL_RD_WML(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_WTMK_LVL_RD_WML_SHIFT)) & USDHC_WTMK_LVL_RD_WML_MASK)
#define USDHC_WTMK_LVL_RD_BRST_LEN_MASK          (0x1F00U)
#define USDHC_WTMK_LVL_RD_BRST_LEN_SHIFT         (8U)
#define USDHC_WTMK_LVL_RD_BRST_LEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_WTMK_LVL_RD_BRST_LEN_SHIFT)) & USDHC_WTMK_LVL_RD_BRST_LEN_MASK)
#define USDHC_WTMK_LVL_WR_WML_MASK               (0xFF0000U)
#define USDHC_WTMK_LVL_WR_WML_SHIFT              (16U)
#define USDHC_WTMK_LVL_WR_WML(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_WTMK_LVL_WR_WML_SHIFT)) & USDHC_WTMK_LVL_WR_WML_MASK)
#define USDHC_WTMK_LVL_WR_BRST_LEN_MASK          (0x1F000000U)
#define USDHC_WTMK_LVL_WR_BRST_LEN_SHIFT         (24U)
#define USDHC_WTMK_LVL_WR_BRST_LEN(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_WTMK_LVL_WR_BRST_LEN_SHIFT)) & USDHC_WTMK_LVL_WR_BRST_LEN_MASK)

/*! @name MIX_CTRL - Mixer Control */
#define USDHC_MIX_CTRL_DMAEN_MASK                (0x1U)
#define USDHC_MIX_CTRL_DMAEN_SHIFT               (0U)
#define USDHC_MIX_CTRL_DMAEN(x)                  (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_DMAEN_SHIFT)) & USDHC_MIX_CTRL_DMAEN_MASK)
#define USDHC_MIX_CTRL_BCEN_MASK                 (0x2U)
#define USDHC_MIX_CTRL_BCEN_SHIFT                (1U)
#define USDHC_MIX_CTRL_BCEN(x)                   (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_BCEN_SHIFT)) & USDHC_MIX_CTRL_BCEN_MASK)
#define USDHC_MIX_CTRL_AC12EN_MASK               (0x4U)
#define USDHC_MIX_CTRL_AC12EN_SHIFT              (2U)
#define USDHC_MIX_CTRL_AC12EN(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_AC12EN_SHIFT)) & USDHC_MIX_CTRL_AC12EN_MASK)
#define USDHC_MIX_CTRL_DDR_EN_MASK               (0x8U)
#define USDHC_MIX_CTRL_DDR_EN_SHIFT              (3U)
#define USDHC_MIX_CTRL_DDR_EN(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_DDR_EN_SHIFT)) & USDHC_MIX_CTRL_DDR_EN_MASK)
#define USDHC_MIX_CTRL_DTDSEL_MASK               (0x10U)
#define USDHC_MIX_CTRL_DTDSEL_SHIFT              (4U)
#define USDHC_MIX_CTRL_DTDSEL(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_DTDSEL_SHIFT)) & USDHC_MIX_CTRL_DTDSEL_MASK)
#define USDHC_MIX_CTRL_MSBSEL_MASK               (0x20U)
#define USDHC_MIX_CTRL_MSBSEL_SHIFT              (5U)
#define USDHC_MIX_CTRL_MSBSEL(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_MSBSEL_SHIFT)) & USDHC_MIX_CTRL_MSBSEL_MASK)
#define USDHC_MIX_CTRL_NIBBLE_POS_MASK           (0x40U)
#define USDHC_MIX_CTRL_NIBBLE_POS_SHIFT          (6U)
#define USDHC_MIX_CTRL_NIBBLE_POS(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_NIBBLE_POS_SHIFT)) & USDHC_MIX_CTRL_NIBBLE_POS_MASK)
#define USDHC_MIX_CTRL_AC23EN_MASK               (0x80U)
#define USDHC_MIX_CTRL_AC23EN_SHIFT              (7U)
#define USDHC_MIX_CTRL_AC23EN(x)                 (((uint32_t)(((uint32_t)(x)) << USDHC_MIX_CTRL_AC23EN_SHIFT)) & USDHC_MIX_CTRL_AC23EN_MASK)

/*! @name FORCE_EVENT - Force Event */
#define USDHC_FORCE_EVENT_FEVTAC12NE_MASK        (0x1U)
#define USDHC_FORCE_EVENT_FEVTAC12NE_SHIFT       (0U)
#define USDHC_FORCE_EVENT_FEVTAC12NE(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTAC12NE_SHIFT)) & USDHC_FORCE_EVENT_FEVTAC12NE_MASK)
#define USDHC_FORCE_EVENT_FEVTAC12TOE_MASK       (0x2U)
#define USDHC_FORCE_EVENT_FEVTAC12TOE_SHIFT      (1U)
#define USDHC_FORCE_EVENT_FEVTAC12TOE(x)         (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTAC12TOE_SHIFT)) & USDHC_FORCE_EVENT_FEVTAC12TOE_MASK)
#define USDHC_FORCE_EVENT_FEVTAC12CE_MASK        (0x4U)
#define USDHC_FORCE_EVENT_FEVTAC12CE_SHIFT       (2U)
#define USDHC_FORCE_EVENT_FEVTAC12CE(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTAC12CE_SHIFT)) & USDHC_FORCE_EVENT_FEVTAC12CE_MASK)
#define USDHC_FORCE_EVENT_FEVTAC12EBE_MASK       (0x8U)
#define USDHC_FORCE_EVENT_FEVTAC12EBE_SHIFT      (3U)
#define USDHC_FORCE_EVENT_FEVTAC12EBE(x)         (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTAC12EBE_SHIFT)) & USDHC_FORCE_EVENT_FEVTAC12EBE_MASK)
#define USDHC_FORCE_EVENT_FEVTAC12IE_MASK        (0x10U)
#define USDHC_FORCE_EVENT_FEVTAC12IE_SHIFT       (4U)
#define USDHC_FORCE_EVENT_FEVTAC12IE(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTAC12IE_SHIFT)) & USDHC_FORCE_EVENT_FEVTAC12IE_MASK)
#define USDHC_FORCE_EVENT_FEVTCNIBAC12E_MASK     (0x80U)
#define USDHC_FORCE_EVENT_FEVTCNIBAC12E_SHIFT    (7U)
#define USDHC_FORCE_EVENT_FEVTCNIBAC12E(x)       (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTCNIBAC12E_SHIFT)) & USDHC_FORCE_EVENT_FEVTCNIBAC12E_MASK)
#define USDHC_FORCE_EVENT_FEVTCTOE_MASK          (0x10000U)
#define USDHC_FORCE_EVENT_FEVTCTOE_SHIFT         (16U)
#define USDHC_FORCE_EVENT_FEVTCTOE(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTCTOE_SHIFT)) & USDHC_FORCE_EVENT_FEVTCTOE_MASK)
#define USDHC_FORCE_EVENT_FEVTCCE_MASK           (0x20000U)
#define USDHC_FORCE_EVENT_FEVTCCE_SHIFT          (17U)
#define USDHC_FORCE_EVENT_FEVTCCE(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTCCE_SHIFT)) & USDHC_FORCE_EVENT_FEVTCCE_MASK)
#define USDHC_FORCE_EVENT_FEVTCEBE_MASK          (0x40000U)
#define USDHC_FORCE_EVENT_FEVTCEBE_SHIFT         (18U)
#define USDHC_FORCE_EVENT_FEVTCEBE(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTCEBE_SHIFT)) & USDHC_FORCE_EVENT_FEVTCEBE_MASK)
#define USDHC_FORCE_EVENT_FEVTCIE_MASK           (0x80000U)
#define USDHC_FORCE_EVENT_FEVTCIE_SHIFT          (19U)
#define USDHC_FORCE_EVENT_FEVTCIE(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTCIE_SHIFT)) & USDHC_FORCE_EVENT_FEVTCIE_MASK)
#define USDHC_FORCE_EVENT_FEVTDTOE_MASK          (0x100000U)
#define USDHC_FORCE_EVENT_FEVTDTOE_SHIFT         (20U)
#define USDHC_FORCE_EVENT_FEVTDTOE(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTDTOE_SHIFT)) & USDHC_FORCE_EVENT_FEVTDTOE_MASK)
#define USDHC_FORCE_EVENT_FEVTDCE_MASK           (0x200000U)
#define USDHC_FORCE_EVENT_FEVTDCE_SHIFT          (21U)
#define USDHC_FORCE_EVENT_FEVTDCE(x)             (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTDCE_SHIFT)) & USDHC_FORCE_EVENT_FEVTDCE_MASK)
#define USDHC_FORCE_EVENT_FEVTDEBE_MASK          (0x400000U)
#define USDHC_FORCE_EVENT_FEVTDEBE_SHIFT         (22U)
#define USDHC_FORCE_EVENT_FEVTDEBE(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTDEBE_SHIFT)) & USDHC_FORCE_EVENT_FEVTDEBE_MASK)
#define USDHC_FORCE_EVENT_FEVTAC12E_MASK         (0x1000000U)
#define USDHC_FORCE_EVENT_FEVTAC12E_SHIFT        (24U)
#define USDHC_FORCE_EVENT_FEVTAC12E(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTAC12E_SHIFT)) & USDHC_FORCE_EVENT_FEVTAC12E_MASK)
#define USDHC_FORCE_EVENT_FEVTDMAE_MASK          (0x10000000U)
#define USDHC_FORCE_EVENT_FEVTDMAE_SHIFT         (28U)
#define USDHC_FORCE_EVENT_FEVTDMAE(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTDMAE_SHIFT)) & USDHC_FORCE_EVENT_FEVTDMAE_MASK)
#define USDHC_FORCE_EVENT_FEVTCINT_MASK          (0x80000000U)
#define USDHC_FORCE_EVENT_FEVTCINT_SHIFT         (31U)
#define USDHC_FORCE_EVENT_FEVTCINT(x)            (((uint32_t)(((uint32_t)(x)) << USDHC_FORCE_EVENT_FEVTCINT_SHIFT)) & USDHC_FORCE_EVENT_FEVTCINT_MASK)

/*! @name ADMA_ERR_STATUS - ADMA Error Status Register */
#define USDHC_ADMA_ERR_STATUS_ADMAES_MASK        (0x3U)
#define USDHC_ADMA_ERR_STATUS_ADMAES_SHIFT       (0U)
#define USDHC_ADMA_ERR_STATUS_ADMAES(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_ADMA_ERR_STATUS_ADMAES_SHIFT)) & USDHC_ADMA_ERR_STATUS_ADMAES_MASK)
#define USDHC_ADMA_ERR_STATUS_ADMALME_MASK       (0x4U)
#define USDHC_ADMA_ERR_STATUS_ADMALME_SHIFT      (2U)
#define USDHC_ADMA_ERR_STATUS_ADMALME(x)         (((uint32_t)(((uint32_t)(x)) << USDHC_ADMA_ERR_STATUS_ADMALME_SHIFT)) & USDHC_ADMA_ERR_STATUS_ADMALME_MASK)
#define USDHC_ADMA_ERR_STATUS_ADMADCE_MASK       (0x8U)
#define USDHC_ADMA_ERR_STATUS_ADMADCE_SHIFT      (3U)
#define USDHC_ADMA_ERR_STATUS_ADMADCE(x)         (((uint32_t)(((uint32_t)(x)) << USDHC_ADMA_ERR_STATUS_ADMADCE_SHIFT)) & USDHC_ADMA_ERR_STATUS_ADMADCE_MASK)

/*! @name ADMA_SYS_ADDR - ADMA System Address */
#define USDHC_ADMA_SYS_ADDR_ADS_ADDR_MASK        (0xFFFFFFFCU)
#define USDHC_ADMA_SYS_ADDR_ADS_ADDR_SHIFT       (2U)
#define USDHC_ADMA_SYS_ADDR_ADS_ADDR(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_ADMA_SYS_ADDR_ADS_ADDR_SHIFT)) & USDHC_ADMA_SYS_ADDR_ADS_ADDR_MASK)

/*! @name VEND_SPEC - Vendor Specific Register */
#define USDHC_VEND_SPEC_VSELECT_MASK             (0x2U)
#define USDHC_VEND_SPEC_VSELECT_SHIFT            (1U)
#define USDHC_VEND_SPEC_VSELECT(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC_VSELECT_SHIFT)) & USDHC_VEND_SPEC_VSELECT_MASK)
#define USDHC_VEND_SPEC_CONFLICT_CHK_EN_MASK     (0x4U)
#define USDHC_VEND_SPEC_CONFLICT_CHK_EN_SHIFT    (2U)
#define USDHC_VEND_SPEC_CONFLICT_CHK_EN(x)       (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC_CONFLICT_CHK_EN_SHIFT)) & USDHC_VEND_SPEC_CONFLICT_CHK_EN_MASK)
#define USDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_MASK  (0x8U)
#define USDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_SHIFT (3U)
#define USDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN(x)    (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_SHIFT)) & USDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_MASK)
#define USDHC_VEND_SPEC_FRC_SDCLK_ON_MASK        (0x100U)
#define USDHC_VEND_SPEC_FRC_SDCLK_ON_SHIFT       (8U)
#define USDHC_VEND_SPEC_FRC_SDCLK_ON(x)          (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC_FRC_SDCLK_ON_SHIFT)) & USDHC_VEND_SPEC_FRC_SDCLK_ON_MASK)
#define USDHC_VEND_SPEC_CRC_CHK_DIS_MASK         (0x8000U)
#define USDHC_VEND_SPEC_CRC_CHK_DIS_SHIFT        (15U)
#define USDHC_VEND_SPEC_CRC_CHK_DIS(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC_CRC_CHK_DIS_SHIFT)) & USDHC_VEND_SPEC_CRC_CHK_DIS_MASK)
#define USDHC_VEND_SPEC_CMD_BYTE_EN_MASK         (0x80000000U)
#define USDHC_VEND_SPEC_CMD_BYTE_EN_SHIFT        (31U)
#define USDHC_VEND_SPEC_CMD_BYTE_EN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC_CMD_BYTE_EN_SHIFT)) & USDHC_VEND_SPEC_CMD_BYTE_EN_MASK)

/*! @name MMC_BOOT - MMC Boot Register */
#define USDHC_MMC_BOOT_DTOCV_ACK_MASK            (0xFU)
#define USDHC_MMC_BOOT_DTOCV_ACK_SHIFT           (0U)
#define USDHC_MMC_BOOT_DTOCV_ACK(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_MMC_BOOT_DTOCV_ACK_SHIFT)) & USDHC_MMC_BOOT_DTOCV_ACK_MASK)
#define USDHC_MMC_BOOT_BOOT_ACK_MASK             (0x10U)
#define USDHC_MMC_BOOT_BOOT_ACK_SHIFT            (4U)
#define USDHC_MMC_BOOT_BOOT_ACK(x)               (((uint32_t)(((uint32_t)(x)) << USDHC_MMC_BOOT_BOOT_ACK_SHIFT)) & USDHC_MMC_BOOT_BOOT_ACK_MASK)
#define USDHC_MMC_BOOT_BOOT_MODE_MASK            (0x20U)
#define USDHC_MMC_BOOT_BOOT_MODE_SHIFT           (5U)
#define USDHC_MMC_BOOT_BOOT_MODE(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_MMC_BOOT_BOOT_MODE_SHIFT)) & USDHC_MMC_BOOT_BOOT_MODE_MASK)
#define USDHC_MMC_BOOT_BOOT_EN_MASK              (0x40U)
#define USDHC_MMC_BOOT_BOOT_EN_SHIFT             (6U)
#define USDHC_MMC_BOOT_BOOT_EN(x)                (((uint32_t)(((uint32_t)(x)) << USDHC_MMC_BOOT_BOOT_EN_SHIFT)) & USDHC_MMC_BOOT_BOOT_EN_MASK)
#define USDHC_MMC_BOOT_AUTO_SABG_EN_MASK         (0x80U)
#define USDHC_MMC_BOOT_AUTO_SABG_EN_SHIFT        (7U)
#define USDHC_MMC_BOOT_AUTO_SABG_EN(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_MMC_BOOT_AUTO_SABG_EN_SHIFT)) & USDHC_MMC_BOOT_AUTO_SABG_EN_MASK)
#define USDHC_MMC_BOOT_DISABLE_TIME_OUT_MASK     (0x100U)
#define USDHC_MMC_BOOT_DISABLE_TIME_OUT_SHIFT    (8U)
#define USDHC_MMC_BOOT_DISABLE_TIME_OUT(x)       (((uint32_t)(((uint32_t)(x)) << USDHC_MMC_BOOT_DISABLE_TIME_OUT_SHIFT)) & USDHC_MMC_BOOT_DISABLE_TIME_OUT_MASK)
#define USDHC_MMC_BOOT_BOOT_BLK_CNT_MASK         (0xFFFF0000U)
#define USDHC_MMC_BOOT_BOOT_BLK_CNT_SHIFT        (16U)
#define USDHC_MMC_BOOT_BOOT_BLK_CNT(x)           (((uint32_t)(((uint32_t)(x)) << USDHC_MMC_BOOT_BOOT_BLK_CNT_SHIFT)) & USDHC_MMC_BOOT_BOOT_BLK_CNT_MASK)

/*! @name VEND_SPEC2 - Vendor Specific 2 Register */
#define USDHC_VEND_SPEC2_CARD_INT_D3_TEST_MASK   (0x8U)
#define USDHC_VEND_SPEC2_CARD_INT_D3_TEST_SHIFT  (3U)
#define USDHC_VEND_SPEC2_CARD_INT_D3_TEST(x)     (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC2_CARD_INT_D3_TEST_SHIFT)) & USDHC_VEND_SPEC2_CARD_INT_D3_TEST_MASK)
#define USDHC_VEND_SPEC2_ACMD23_ARGU2_EN_MASK    (0x1000U)
#define USDHC_VEND_SPEC2_ACMD23_ARGU2_EN_SHIFT   (12U)
#define USDHC_VEND_SPEC2_ACMD23_ARGU2_EN(x)      (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC2_ACMD23_ARGU2_EN_SHIFT)) & USDHC_VEND_SPEC2_ACMD23_ARGU2_EN_MASK)
#define USDHC_VEND_SPEC2_AHB_RST_MASK            (0x4000U)
#define USDHC_VEND_SPEC2_AHB_RST_SHIFT           (14U)
#define USDHC_VEND_SPEC2_AHB_RST(x)              (((uint32_t)(((uint32_t)(x)) << USDHC_VEND_SPEC2_AHB_RST_SHIFT)) & USDHC_VEND_SPEC2_AHB_RST_MASK)


/*!
 * @}
 */ /* end of group USDHC_Register_Masks */


/* USDHC - Peripheral instance base addresses */
/** Peripheral USDHC0 base address */
#define USDHC0_BASE                              (0x4003E000u)
/** Peripheral USDHC0 base pointer */
#define USDHC0                                   ((USDHC_Type *)USDHC0_BASE)
/** Array initializer of USDHC peripheral base addresses */
#define USDHC_BASE_ADDRS                         { USDHC0_BASE }
/** Array initializer of USDHC peripheral base pointers */
#define USDHC_BASE_PTRS                          { USDHC0 }
/** Interrupt vectors for the USDHC peripheral type */
#define USDHC_IRQS                               { USDHC0_IRQn }

/*!
 * @}
 */ /* end of group USDHC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- VREF Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VREF_Peripheral_Access_Layer VREF Peripheral Access Layer
 * @{
 */

/** VREF - Register Layout Typedef */
typedef struct {
  __IO uint8_t TRM;                                /**< VREF Trim Register, offset: 0x0 */
  __IO uint8_t SC;                                 /**< VREF Status and Control Register, offset: 0x1 */
       uint8_t RESERVED_0[3];
  __IO uint8_t TRM4;                               /**< VREF Trim 2.1V Register, offset: 0x5 */
} VREF_Type;

/* ----------------------------------------------------------------------------
   -- VREF Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VREF_Register_Masks VREF Register Masks
 * @{
 */

/*! @name TRM - VREF Trim Register */
#define VREF_TRM_TRIM_MASK                       (0x3FU)
#define VREF_TRM_TRIM_SHIFT                      (0U)
#define VREF_TRM_TRIM(x)                         (((uint8_t)(((uint8_t)(x)) << VREF_TRM_TRIM_SHIFT)) & VREF_TRM_TRIM_MASK)
#define VREF_TRM_CHOPEN_MASK                     (0x40U)
#define VREF_TRM_CHOPEN_SHIFT                    (6U)
#define VREF_TRM_CHOPEN(x)                       (((uint8_t)(((uint8_t)(x)) << VREF_TRM_CHOPEN_SHIFT)) & VREF_TRM_CHOPEN_MASK)

/*! @name SC - VREF Status and Control Register */
#define VREF_SC_MODE_LV_MASK                     (0x3U)
#define VREF_SC_MODE_LV_SHIFT                    (0U)
#define VREF_SC_MODE_LV(x)                       (((uint8_t)(((uint8_t)(x)) << VREF_SC_MODE_LV_SHIFT)) & VREF_SC_MODE_LV_MASK)
#define VREF_SC_VREFST_MASK                      (0x4U)
#define VREF_SC_VREFST_SHIFT                     (2U)
#define VREF_SC_VREFST(x)                        (((uint8_t)(((uint8_t)(x)) << VREF_SC_VREFST_SHIFT)) & VREF_SC_VREFST_MASK)
#define VREF_SC_ICOMPEN_MASK                     (0x20U)
#define VREF_SC_ICOMPEN_SHIFT                    (5U)
#define VREF_SC_ICOMPEN(x)                       (((uint8_t)(((uint8_t)(x)) << VREF_SC_ICOMPEN_SHIFT)) & VREF_SC_ICOMPEN_MASK)
#define VREF_SC_REGEN_MASK                       (0x40U)
#define VREF_SC_REGEN_SHIFT                      (6U)
#define VREF_SC_REGEN(x)                         (((uint8_t)(((uint8_t)(x)) << VREF_SC_REGEN_SHIFT)) & VREF_SC_REGEN_MASK)
#define VREF_SC_VREFEN_MASK                      (0x80U)
#define VREF_SC_VREFEN_SHIFT                     (7U)
#define VREF_SC_VREFEN(x)                        (((uint8_t)(((uint8_t)(x)) << VREF_SC_VREFEN_SHIFT)) & VREF_SC_VREFEN_MASK)

/*! @name TRM4 - VREF Trim 2.1V Register */
#define VREF_TRM4_TRIM2V1_MASK                   (0x3FU)
#define VREF_TRM4_TRIM2V1_SHIFT                  (0U)
#define VREF_TRM4_TRIM2V1(x)                     (((uint8_t)(((uint8_t)(x)) << VREF_TRM4_TRIM2V1_SHIFT)) & VREF_TRM4_TRIM2V1_MASK)
#define VREF_TRM4_VREF2V1_EN_MASK                (0x80U)
#define VREF_TRM4_VREF2V1_EN_SHIFT               (7U)
#define VREF_TRM4_VREF2V1_EN(x)                  (((uint8_t)(((uint8_t)(x)) << VREF_TRM4_VREF2V1_EN_SHIFT)) & VREF_TRM4_VREF2V1_EN_MASK)


/*!
 * @}
 */ /* end of group VREF_Register_Masks */


/* VREF - Peripheral instance base addresses */
/** Peripheral VREF base address */
#define VREF_BASE                                (0x4004D000u)
/** Peripheral VREF base pointer */
#define VREF                                     ((VREF_Type *)VREF_BASE)
/** Array initializer of VREF peripheral base addresses */
#define VREF_BASE_ADDRS                          { VREF_BASE }
/** Array initializer of VREF peripheral base pointers */
#define VREF_BASE_PTRS                           { VREF }

/*!
 * @}
 */ /* end of group VREF_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- WDOG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WDOG_Peripheral_Access_Layer WDOG Peripheral Access Layer
 * @{
 */

/** WDOG - Register Layout Typedef */
typedef struct {
  __IO uint32_t CS;                                /**< Watchdog Control and Status Register, offset: 0x0 */
  __IO uint32_t CNT;                               /**< Watchdog Counter Register, offset: 0x4 */
  __IO uint32_t TOVAL;                             /**< Watchdog Timeout Value Register, offset: 0x8 */
  __IO uint32_t WIN;                               /**< Watchdog Window Register, offset: 0xC */
} WDOG_Type;

/* ----------------------------------------------------------------------------
   -- WDOG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WDOG_Register_Masks WDOG Register Masks
 * @{
 */

/*! @name CS - Watchdog Control and Status Register */
#define WDOG_CS_STOP_MASK                        (0x1U)
#define WDOG_CS_STOP_SHIFT                       (0U)
#define WDOG_CS_STOP(x)                          (((uint32_t)(((uint32_t)(x)) << WDOG_CS_STOP_SHIFT)) & WDOG_CS_STOP_MASK)
#define WDOG_CS_WAIT_MASK                        (0x2U)
#define WDOG_CS_WAIT_SHIFT                       (1U)
#define WDOG_CS_WAIT(x)                          (((uint32_t)(((uint32_t)(x)) << WDOG_CS_WAIT_SHIFT)) & WDOG_CS_WAIT_MASK)
#define WDOG_CS_DBG_MASK                         (0x4U)
#define WDOG_CS_DBG_SHIFT                        (2U)
#define WDOG_CS_DBG(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_DBG_SHIFT)) & WDOG_CS_DBG_MASK)
#define WDOG_CS_TST_MASK                         (0x18U)
#define WDOG_CS_TST_SHIFT                        (3U)
#define WDOG_CS_TST(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_TST_SHIFT)) & WDOG_CS_TST_MASK)
#define WDOG_CS_UPDATE_MASK                      (0x20U)
#define WDOG_CS_UPDATE_SHIFT                     (5U)
#define WDOG_CS_UPDATE(x)                        (((uint32_t)(((uint32_t)(x)) << WDOG_CS_UPDATE_SHIFT)) & WDOG_CS_UPDATE_MASK)
#define WDOG_CS_INT_MASK                         (0x40U)
#define WDOG_CS_INT_SHIFT                        (6U)
#define WDOG_CS_INT(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_INT_SHIFT)) & WDOG_CS_INT_MASK)
#define WDOG_CS_EN_MASK                          (0x80U)
#define WDOG_CS_EN_SHIFT                         (7U)
#define WDOG_CS_EN(x)                            (((uint32_t)(((uint32_t)(x)) << WDOG_CS_EN_SHIFT)) & WDOG_CS_EN_MASK)
#define WDOG_CS_CLK_MASK                         (0x300U)
#define WDOG_CS_CLK_SHIFT                        (8U)
#define WDOG_CS_CLK(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_CLK_SHIFT)) & WDOG_CS_CLK_MASK)
#define WDOG_CS_RCS_MASK                         (0x400U)
#define WDOG_CS_RCS_SHIFT                        (10U)
#define WDOG_CS_RCS(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_RCS_SHIFT)) & WDOG_CS_RCS_MASK)
#define WDOG_CS_ULK_MASK                         (0x800U)
#define WDOG_CS_ULK_SHIFT                        (11U)
#define WDOG_CS_ULK(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_ULK_SHIFT)) & WDOG_CS_ULK_MASK)
#define WDOG_CS_PRES_MASK                        (0x1000U)
#define WDOG_CS_PRES_SHIFT                       (12U)
#define WDOG_CS_PRES(x)                          (((uint32_t)(((uint32_t)(x)) << WDOG_CS_PRES_SHIFT)) & WDOG_CS_PRES_MASK)
#define WDOG_CS_CMD32EN_MASK                     (0x2000U)
#define WDOG_CS_CMD32EN_SHIFT                    (13U)
#define WDOG_CS_CMD32EN(x)                       (((uint32_t)(((uint32_t)(x)) << WDOG_CS_CMD32EN_SHIFT)) & WDOG_CS_CMD32EN_MASK)
#define WDOG_CS_FLG_MASK                         (0x4000U)
#define WDOG_CS_FLG_SHIFT                        (14U)
#define WDOG_CS_FLG(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_FLG_SHIFT)) & WDOG_CS_FLG_MASK)
#define WDOG_CS_WIN_MASK                         (0x8000U)
#define WDOG_CS_WIN_SHIFT                        (15U)
#define WDOG_CS_WIN(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_WIN_SHIFT)) & WDOG_CS_WIN_MASK)

/*! @name CNT - Watchdog Counter Register */
#define WDOG_CNT_CNTLOW_MASK                     (0xFFU)
#define WDOG_CNT_CNTLOW_SHIFT                    (0U)
#define WDOG_CNT_CNTLOW(x)                       (((uint32_t)(((uint32_t)(x)) << WDOG_CNT_CNTLOW_SHIFT)) & WDOG_CNT_CNTLOW_MASK)
#define WDOG_CNT_CNTHIGH_MASK                    (0xFF00U)
#define WDOG_CNT_CNTHIGH_SHIFT                   (8U)
#define WDOG_CNT_CNTHIGH(x)                      (((uint32_t)(((uint32_t)(x)) << WDOG_CNT_CNTHIGH_SHIFT)) & WDOG_CNT_CNTHIGH_MASK)

/*! @name TOVAL - Watchdog Timeout Value Register */
#define WDOG_TOVAL_TOVALLOW_MASK                 (0xFFU)
#define WDOG_TOVAL_TOVALLOW_SHIFT                (0U)
#define WDOG_TOVAL_TOVALLOW(x)                   (((uint32_t)(((uint32_t)(x)) << WDOG_TOVAL_TOVALLOW_SHIFT)) & WDOG_TOVAL_TOVALLOW_MASK)
#define WDOG_TOVAL_TOVALHIGH_MASK                (0xFF00U)
#define WDOG_TOVAL_TOVALHIGH_SHIFT               (8U)
#define WDOG_TOVAL_TOVALHIGH(x)                  (((uint32_t)(((uint32_t)(x)) << WDOG_TOVAL_TOVALHIGH_SHIFT)) & WDOG_TOVAL_TOVALHIGH_MASK)

/*! @name WIN - Watchdog Window Register */
#define WDOG_WIN_WINLOW_MASK                     (0xFFU)
#define WDOG_WIN_WINLOW_SHIFT                    (0U)
#define WDOG_WIN_WINLOW(x)                       (((uint32_t)(((uint32_t)(x)) << WDOG_WIN_WINLOW_SHIFT)) & WDOG_WIN_WINLOW_MASK)
#define WDOG_WIN_WINHIGH_MASK                    (0xFF00U)
#define WDOG_WIN_WINHIGH_SHIFT                   (8U)
#define WDOG_WIN_WINHIGH(x)                      (((uint32_t)(((uint32_t)(x)) << WDOG_WIN_WINHIGH_SHIFT)) & WDOG_WIN_WINHIGH_MASK)


/*!
 * @}
 */ /* end of group WDOG_Register_Masks */


/* WDOG - Peripheral instance base addresses */
/** Peripheral WDOG0 base address */
#define WDOG0_BASE                               (0x4002A000u)
/** Peripheral WDOG0 base pointer */
#define WDOG0                                    ((WDOG_Type *)WDOG0_BASE)
/** Peripheral WDOG1 base address */
#define WDOG1_BASE                               (0x41026000u)
/** Peripheral WDOG1 base pointer */
#define WDOG1                                    ((WDOG_Type *)WDOG1_BASE)
/** Array initializer of WDOG peripheral base addresses */
#define WDOG_BASE_ADDRS                          { WDOG0_BASE, WDOG1_BASE }
/** Array initializer of WDOG peripheral base pointers */
#define WDOG_BASE_PTRS                           { WDOG0, WDOG1 }
/** Interrupt vectors for the WDOG peripheral type */
#define WDOG_IRQS                                { WDOG0_IRQn, NotAvail_IRQn }
/* Extra definition */
#define WDOG_UPDATE_KEY                          (0xD928C520U)
#define WDOG_REFRESH_KEY                         (0xB480A602U)


/*!
 * @}
 */ /* end of group WDOG_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- XRDC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XRDC_Peripheral_Access_Layer XRDC Peripheral Access Layer
 * @{
 */

/** XRDC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control Register, offset: 0x0 */
       uint8_t RESERVED_0[236];
  __I  uint32_t HWCFG0;                            /**< Hardware Configuration Register 0, offset: 0xF0 */
  __I  uint32_t HWCFG1;                            /**< Hardware Configuration Register 1, offset: 0xF4 */
  __I  uint32_t HWCFG2;                            /**< Hardware Configuration Register 2, offset: 0xF8 */
  __I  uint32_t HWCFG3;                            /**< Hardware Configuration Register 3, offset: 0xFC */
  __I  uint8_t MDACFG[35];                         /**< Master Domain Assignment Configuration Register, array offset: 0x100, array step: 0x1 */
       uint8_t RESERVED_1[29];
  __I  uint8_t MRCFG[2];                           /**< Memory Region Configuration Register, array offset: 0x140, array step: 0x1 */
       uint8_t RESERVED_2[186];
  __IO uint32_t FDID;                              /**< Fault Domain ID, offset: 0x1FC */
  __I  uint32_t DERRLOC[3];                        /**< Domain Error Location Register, array offset: 0x200, array step: 0x4 */
       uint8_t RESERVED_3[500];
  __IO uint32_t DERR_W[19][4];                     /**< Domain Error Word0 Register..Domain Error Word3 Register, array offset: 0x400, array step: index*0x10, index2*0x4 */
       uint8_t RESERVED_4[464];
  __IO uint32_t PID[33];                           /**< Process Identifier, array offset: 0x700, array step: 0x4 */
       uint8_t RESERVED_5[124];
  struct {                                         /* offset: 0x800, array step: 0x20 */
    __IO uint32_t MDA_W[2];                          /**< Master Domain Assignment, array offset: 0x800, array step: index*0x20, index2*0x4 */
         uint8_t RESERVED_0[24];
  } MDA[35];
       uint8_t RESERVED_6[928];
  __IO uint32_t PDAC_W[289][2];                    /**< Peripheral Domain Access Control, array offset: 0x1000, array step: index*0x8, index2*0x4 */
       uint8_t RESERVED_7[1784];
  struct {                                         /* offset: 0x2000, array step: 0x20 */
    __IO uint32_t MRGD_W[5];                         /**< Memory Region Descriptor, array offset: 0x2000, array step: index*0x20, index2*0x4 */
         uint8_t RESERVED_0[12];
  } MRGD[24];
} XRDC_Type;

/* ----------------------------------------------------------------------------
   -- XRDC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XRDC_Register_Masks XRDC Register Masks
 * @{
 */

/*! @name CR - Control Register */
#define XRDC_CR_GVLDM_MASK                       (0x1U)
#define XRDC_CR_GVLDM_SHIFT                      (0U)
#define XRDC_CR_GVLDM(x)                         (((uint32_t)(((uint32_t)(x)) << XRDC_CR_GVLDM_SHIFT)) & XRDC_CR_GVLDM_MASK)
#define XRDC_CR_HRL_MASK                         (0x1EU)
#define XRDC_CR_HRL_SHIFT                        (1U)
#define XRDC_CR_HRL(x)                           (((uint32_t)(((uint32_t)(x)) << XRDC_CR_HRL_SHIFT)) & XRDC_CR_HRL_MASK)
#define XRDC_CR_VAW_MASK                         (0x100U)
#define XRDC_CR_VAW_SHIFT                        (8U)
#define XRDC_CR_VAW(x)                           (((uint32_t)(((uint32_t)(x)) << XRDC_CR_VAW_SHIFT)) & XRDC_CR_VAW_MASK)
#define XRDC_CR_GVLDP_MASK                       (0x4000U)
#define XRDC_CR_GVLDP_SHIFT                      (14U)
#define XRDC_CR_GVLDP(x)                         (((uint32_t)(((uint32_t)(x)) << XRDC_CR_GVLDP_SHIFT)) & XRDC_CR_GVLDP_MASK)
#define XRDC_CR_GVLDC_MASK                       (0x8000U)
#define XRDC_CR_GVLDC_SHIFT                      (15U)
#define XRDC_CR_GVLDC(x)                         (((uint32_t)(((uint32_t)(x)) << XRDC_CR_GVLDC_SHIFT)) & XRDC_CR_GVLDC_MASK)
#define XRDC_CR_LK1_MASK                         (0x40000000U)
#define XRDC_CR_LK1_SHIFT                        (30U)
#define XRDC_CR_LK1(x)                           (((uint32_t)(((uint32_t)(x)) << XRDC_CR_LK1_SHIFT)) & XRDC_CR_LK1_MASK)

/*! @name HWCFG0 - Hardware Configuration Register 0 */
#define XRDC_HWCFG0_NDID_MASK                    (0xFFU)
#define XRDC_HWCFG0_NDID_SHIFT                   (0U)
#define XRDC_HWCFG0_NDID(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG0_NDID_SHIFT)) & XRDC_HWCFG0_NDID_MASK)
#define XRDC_HWCFG0_NMSTR_MASK                   (0xFF00U)
#define XRDC_HWCFG0_NMSTR_SHIFT                  (8U)
#define XRDC_HWCFG0_NMSTR(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG0_NMSTR_SHIFT)) & XRDC_HWCFG0_NMSTR_MASK)
#define XRDC_HWCFG0_NMRC_MASK                    (0xFF0000U)
#define XRDC_HWCFG0_NMRC_SHIFT                   (16U)
#define XRDC_HWCFG0_NMRC(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG0_NMRC_SHIFT)) & XRDC_HWCFG0_NMRC_MASK)
#define XRDC_HWCFG0_NPAC_MASK                    (0xF000000U)
#define XRDC_HWCFG0_NPAC_SHIFT                   (24U)
#define XRDC_HWCFG0_NPAC(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG0_NPAC_SHIFT)) & XRDC_HWCFG0_NPAC_MASK)
#define XRDC_HWCFG0_MID_MASK                     (0xF0000000U)
#define XRDC_HWCFG0_MID_SHIFT                    (28U)
#define XRDC_HWCFG0_MID(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG0_MID_SHIFT)) & XRDC_HWCFG0_MID_MASK)

/*! @name HWCFG1 - Hardware Configuration Register 1 */
#define XRDC_HWCFG1_DID_MASK                     (0xFU)
#define XRDC_HWCFG1_DID_SHIFT                    (0U)
#define XRDC_HWCFG1_DID(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG1_DID_SHIFT)) & XRDC_HWCFG1_DID_MASK)

/*! @name HWCFG2 - Hardware Configuration Register 2 */
#define XRDC_HWCFG2_PIDP0_MASK                   (0x1U)
#define XRDC_HWCFG2_PIDP0_SHIFT                  (0U)
#define XRDC_HWCFG2_PIDP0(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP0_SHIFT)) & XRDC_HWCFG2_PIDP0_MASK)
#define XRDC_HWCFG2_PIDP1_MASK                   (0x2U)
#define XRDC_HWCFG2_PIDP1_SHIFT                  (1U)
#define XRDC_HWCFG2_PIDP1(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP1_SHIFT)) & XRDC_HWCFG2_PIDP1_MASK)
#define XRDC_HWCFG2_PIDP2_MASK                   (0x4U)
#define XRDC_HWCFG2_PIDP2_SHIFT                  (2U)
#define XRDC_HWCFG2_PIDP2(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP2_SHIFT)) & XRDC_HWCFG2_PIDP2_MASK)
#define XRDC_HWCFG2_PIDP3_MASK                   (0x8U)
#define XRDC_HWCFG2_PIDP3_SHIFT                  (3U)
#define XRDC_HWCFG2_PIDP3(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP3_SHIFT)) & XRDC_HWCFG2_PIDP3_MASK)
#define XRDC_HWCFG2_PIDP4_MASK                   (0x10U)
#define XRDC_HWCFG2_PIDP4_SHIFT                  (4U)
#define XRDC_HWCFG2_PIDP4(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP4_SHIFT)) & XRDC_HWCFG2_PIDP4_MASK)
#define XRDC_HWCFG2_PIDP5_MASK                   (0x20U)
#define XRDC_HWCFG2_PIDP5_SHIFT                  (5U)
#define XRDC_HWCFG2_PIDP5(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP5_SHIFT)) & XRDC_HWCFG2_PIDP5_MASK)
#define XRDC_HWCFG2_PIDP6_MASK                   (0x40U)
#define XRDC_HWCFG2_PIDP6_SHIFT                  (6U)
#define XRDC_HWCFG2_PIDP6(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP6_SHIFT)) & XRDC_HWCFG2_PIDP6_MASK)
#define XRDC_HWCFG2_PIDP7_MASK                   (0x80U)
#define XRDC_HWCFG2_PIDP7_SHIFT                  (7U)
#define XRDC_HWCFG2_PIDP7(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP7_SHIFT)) & XRDC_HWCFG2_PIDP7_MASK)
#define XRDC_HWCFG2_PIDP8_MASK                   (0x100U)
#define XRDC_HWCFG2_PIDP8_SHIFT                  (8U)
#define XRDC_HWCFG2_PIDP8(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP8_SHIFT)) & XRDC_HWCFG2_PIDP8_MASK)
#define XRDC_HWCFG2_PIDP9_MASK                   (0x200U)
#define XRDC_HWCFG2_PIDP9_SHIFT                  (9U)
#define XRDC_HWCFG2_PIDP9(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP9_SHIFT)) & XRDC_HWCFG2_PIDP9_MASK)
#define XRDC_HWCFG2_PIDP10_MASK                  (0x400U)
#define XRDC_HWCFG2_PIDP10_SHIFT                 (10U)
#define XRDC_HWCFG2_PIDP10(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP10_SHIFT)) & XRDC_HWCFG2_PIDP10_MASK)
#define XRDC_HWCFG2_PIDP11_MASK                  (0x800U)
#define XRDC_HWCFG2_PIDP11_SHIFT                 (11U)
#define XRDC_HWCFG2_PIDP11(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP11_SHIFT)) & XRDC_HWCFG2_PIDP11_MASK)
#define XRDC_HWCFG2_PIDP12_MASK                  (0x1000U)
#define XRDC_HWCFG2_PIDP12_SHIFT                 (12U)
#define XRDC_HWCFG2_PIDP12(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP12_SHIFT)) & XRDC_HWCFG2_PIDP12_MASK)
#define XRDC_HWCFG2_PIDP13_MASK                  (0x2000U)
#define XRDC_HWCFG2_PIDP13_SHIFT                 (13U)
#define XRDC_HWCFG2_PIDP13(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP13_SHIFT)) & XRDC_HWCFG2_PIDP13_MASK)
#define XRDC_HWCFG2_PIDP14_MASK                  (0x4000U)
#define XRDC_HWCFG2_PIDP14_SHIFT                 (14U)
#define XRDC_HWCFG2_PIDP14(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP14_SHIFT)) & XRDC_HWCFG2_PIDP14_MASK)
#define XRDC_HWCFG2_PIDP15_MASK                  (0x8000U)
#define XRDC_HWCFG2_PIDP15_SHIFT                 (15U)
#define XRDC_HWCFG2_PIDP15(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP15_SHIFT)) & XRDC_HWCFG2_PIDP15_MASK)
#define XRDC_HWCFG2_PIDP16_MASK                  (0x10000U)
#define XRDC_HWCFG2_PIDP16_SHIFT                 (16U)
#define XRDC_HWCFG2_PIDP16(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP16_SHIFT)) & XRDC_HWCFG2_PIDP16_MASK)
#define XRDC_HWCFG2_PIDP17_MASK                  (0x20000U)
#define XRDC_HWCFG2_PIDP17_SHIFT                 (17U)
#define XRDC_HWCFG2_PIDP17(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP17_SHIFT)) & XRDC_HWCFG2_PIDP17_MASK)
#define XRDC_HWCFG2_PIDP18_MASK                  (0x40000U)
#define XRDC_HWCFG2_PIDP18_SHIFT                 (18U)
#define XRDC_HWCFG2_PIDP18(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP18_SHIFT)) & XRDC_HWCFG2_PIDP18_MASK)
#define XRDC_HWCFG2_PIDP19_MASK                  (0x80000U)
#define XRDC_HWCFG2_PIDP19_SHIFT                 (19U)
#define XRDC_HWCFG2_PIDP19(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP19_SHIFT)) & XRDC_HWCFG2_PIDP19_MASK)
#define XRDC_HWCFG2_PIDP20_MASK                  (0x100000U)
#define XRDC_HWCFG2_PIDP20_SHIFT                 (20U)
#define XRDC_HWCFG2_PIDP20(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP20_SHIFT)) & XRDC_HWCFG2_PIDP20_MASK)
#define XRDC_HWCFG2_PIDP21_MASK                  (0x200000U)
#define XRDC_HWCFG2_PIDP21_SHIFT                 (21U)
#define XRDC_HWCFG2_PIDP21(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP21_SHIFT)) & XRDC_HWCFG2_PIDP21_MASK)
#define XRDC_HWCFG2_PIDP22_MASK                  (0x400000U)
#define XRDC_HWCFG2_PIDP22_SHIFT                 (22U)
#define XRDC_HWCFG2_PIDP22(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP22_SHIFT)) & XRDC_HWCFG2_PIDP22_MASK)
#define XRDC_HWCFG2_PIDP23_MASK                  (0x800000U)
#define XRDC_HWCFG2_PIDP23_SHIFT                 (23U)
#define XRDC_HWCFG2_PIDP23(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP23_SHIFT)) & XRDC_HWCFG2_PIDP23_MASK)
#define XRDC_HWCFG2_PIDP24_MASK                  (0x1000000U)
#define XRDC_HWCFG2_PIDP24_SHIFT                 (24U)
#define XRDC_HWCFG2_PIDP24(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP24_SHIFT)) & XRDC_HWCFG2_PIDP24_MASK)
#define XRDC_HWCFG2_PIDP25_MASK                  (0x2000000U)
#define XRDC_HWCFG2_PIDP25_SHIFT                 (25U)
#define XRDC_HWCFG2_PIDP25(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP25_SHIFT)) & XRDC_HWCFG2_PIDP25_MASK)
#define XRDC_HWCFG2_PIDP26_MASK                  (0x4000000U)
#define XRDC_HWCFG2_PIDP26_SHIFT                 (26U)
#define XRDC_HWCFG2_PIDP26(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP26_SHIFT)) & XRDC_HWCFG2_PIDP26_MASK)
#define XRDC_HWCFG2_PIDP27_MASK                  (0x8000000U)
#define XRDC_HWCFG2_PIDP27_SHIFT                 (27U)
#define XRDC_HWCFG2_PIDP27(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP27_SHIFT)) & XRDC_HWCFG2_PIDP27_MASK)
#define XRDC_HWCFG2_PIDP28_MASK                  (0x10000000U)
#define XRDC_HWCFG2_PIDP28_SHIFT                 (28U)
#define XRDC_HWCFG2_PIDP28(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP28_SHIFT)) & XRDC_HWCFG2_PIDP28_MASK)
#define XRDC_HWCFG2_PIDP29_MASK                  (0x20000000U)
#define XRDC_HWCFG2_PIDP29_SHIFT                 (29U)
#define XRDC_HWCFG2_PIDP29(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP29_SHIFT)) & XRDC_HWCFG2_PIDP29_MASK)
#define XRDC_HWCFG2_PIDP30_MASK                  (0x40000000U)
#define XRDC_HWCFG2_PIDP30_SHIFT                 (30U)
#define XRDC_HWCFG2_PIDP30(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP30_SHIFT)) & XRDC_HWCFG2_PIDP30_MASK)
#define XRDC_HWCFG2_PIDP31_MASK                  (0x80000000U)
#define XRDC_HWCFG2_PIDP31_SHIFT                 (31U)
#define XRDC_HWCFG2_PIDP31(x)                    (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG2_PIDP31_SHIFT)) & XRDC_HWCFG2_PIDP31_MASK)

/*! @name HWCFG3 - Hardware Configuration Register 3 */
#define XRDC_HWCFG3_PIDPn_MASK                   (0xFFFFFFFFU)
#define XRDC_HWCFG3_PIDPn_SHIFT                  (0U)
#define XRDC_HWCFG3_PIDPn(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_HWCFG3_PIDPn_SHIFT)) & XRDC_HWCFG3_PIDPn_MASK)

/*! @name MDACFG - Master Domain Assignment Configuration Register */
#define XRDC_MDACFG_NMDAR_MASK                   (0xFU)
#define XRDC_MDACFG_NMDAR_SHIFT                  (0U)
#define XRDC_MDACFG_NMDAR(x)                     (((uint8_t)(((uint8_t)(x)) << XRDC_MDACFG_NMDAR_SHIFT)) & XRDC_MDACFG_NMDAR_MASK)
#define XRDC_MDACFG_NCM_MASK                     (0x80U)
#define XRDC_MDACFG_NCM_SHIFT                    (7U)
#define XRDC_MDACFG_NCM(x)                       (((uint8_t)(((uint8_t)(x)) << XRDC_MDACFG_NCM_SHIFT)) & XRDC_MDACFG_NCM_MASK)

/* The count of XRDC_MDACFG */
#define XRDC_MDACFG_COUNT                        (35U)

/*! @name MRCFG - Memory Region Configuration Register */
#define XRDC_MRCFG_NMRGD_MASK                    (0x1FU)
#define XRDC_MRCFG_NMRGD_SHIFT                   (0U)
#define XRDC_MRCFG_NMRGD(x)                      (((uint8_t)(((uint8_t)(x)) << XRDC_MRCFG_NMRGD_SHIFT)) & XRDC_MRCFG_NMRGD_MASK)

/* The count of XRDC_MRCFG */
#define XRDC_MRCFG_COUNT                         (2U)

/*! @name FDID - Fault Domain ID */
#define XRDC_FDID_FDID_MASK                      (0xFU)
#define XRDC_FDID_FDID_SHIFT                     (0U)
#define XRDC_FDID_FDID(x)                        (((uint32_t)(((uint32_t)(x)) << XRDC_FDID_FDID_SHIFT)) & XRDC_FDID_FDID_MASK)

/*! @name DERRLOC - Domain Error Location Register */
#define XRDC_DERRLOC_MRCINST_MASK                (0xFFFFU)
#define XRDC_DERRLOC_MRCINST_SHIFT               (0U)
#define XRDC_DERRLOC_MRCINST(x)                  (((uint32_t)(((uint32_t)(x)) << XRDC_DERRLOC_MRCINST_SHIFT)) & XRDC_DERRLOC_MRCINST_MASK)
#define XRDC_DERRLOC_PACINST_MASK                (0xF0000U)
#define XRDC_DERRLOC_PACINST_SHIFT               (16U)
#define XRDC_DERRLOC_PACINST(x)                  (((uint32_t)(((uint32_t)(x)) << XRDC_DERRLOC_PACINST_SHIFT)) & XRDC_DERRLOC_PACINST_MASK)

/* The count of XRDC_DERRLOC */
#define XRDC_DERRLOC_COUNT                       (3U)

/*! @name DERR_W - Domain Error Word0 Register..Domain Error Word3 Register */
#define XRDC_DERR_W_EDID_MASK                    (0xFU)
#define XRDC_DERR_W_EDID_SHIFT                   (0U)
#define XRDC_DERR_W_EDID(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_DERR_W_EDID_SHIFT)) & XRDC_DERR_W_EDID_MASK)
#define XRDC_DERR_W_EADDR_MASK                   (0xFFFFFFFFU)
#define XRDC_DERR_W_EADDR_SHIFT                  (0U)
#define XRDC_DERR_W_EADDR(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_DERR_W_EADDR_SHIFT)) & XRDC_DERR_W_EADDR_MASK)
#define XRDC_DERR_W_EATR_MASK                    (0x700U)
#define XRDC_DERR_W_EATR_SHIFT                   (8U)
#define XRDC_DERR_W_EATR(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_DERR_W_EATR_SHIFT)) & XRDC_DERR_W_EATR_MASK)
#define XRDC_DERR_W_ERW_MASK                     (0x800U)
#define XRDC_DERR_W_ERW_SHIFT                    (11U)
#define XRDC_DERR_W_ERW(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_DERR_W_ERW_SHIFT)) & XRDC_DERR_W_ERW_MASK)
#define XRDC_DERR_W_EPORT_MASK                   (0x7000000U)
#define XRDC_DERR_W_EPORT_SHIFT                  (24U)
#define XRDC_DERR_W_EPORT(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_DERR_W_EPORT_SHIFT)) & XRDC_DERR_W_EPORT_MASK)
#define XRDC_DERR_W_EST_MASK                     (0xC0000000U)
#define XRDC_DERR_W_EST_SHIFT                    (30U)
#define XRDC_DERR_W_EST(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_DERR_W_EST_SHIFT)) & XRDC_DERR_W_EST_MASK)
#define XRDC_DERR_W_RECR_MASK                    (0xC0000000U)
#define XRDC_DERR_W_RECR_SHIFT                   (30U)
#define XRDC_DERR_W_RECR(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_DERR_W_RECR_SHIFT)) & XRDC_DERR_W_RECR_MASK)

/* The count of XRDC_DERR_W */
#define XRDC_DERR_W_COUNT                        (19U)

/* The count of XRDC_DERR_W */
#define XRDC_DERR_W_COUNT2                       (4U)

/*! @name PID - Process Identifier */
#define XRDC_PID_PID_MASK                        (0x3FU)
#define XRDC_PID_PID_SHIFT                       (0U)
#define XRDC_PID_PID(x)                          (((uint32_t)(((uint32_t)(x)) << XRDC_PID_PID_SHIFT)) & XRDC_PID_PID_MASK)
#define XRDC_PID_SP4SM_MASK                      (0x8000000U)
#define XRDC_PID_SP4SM_SHIFT                     (27U)
#define XRDC_PID_SP4SM(x)                        (((uint32_t)(((uint32_t)(x)) << XRDC_PID_SP4SM_SHIFT)) & XRDC_PID_SP4SM_MASK)
#define XRDC_PID_TSM_MASK                        (0x10000000U)
#define XRDC_PID_TSM_SHIFT                       (28U)
#define XRDC_PID_TSM(x)                          (((uint32_t)(((uint32_t)(x)) << XRDC_PID_TSM_SHIFT)) & XRDC_PID_TSM_MASK)
#define XRDC_PID_LK2_MASK                        (0x60000000U)
#define XRDC_PID_LK2_SHIFT                       (29U)
#define XRDC_PID_LK2(x)                          (((uint32_t)(((uint32_t)(x)) << XRDC_PID_LK2_SHIFT)) & XRDC_PID_LK2_MASK)

/* The count of XRDC_PID */
#define XRDC_PID_COUNT                           (33U)

/*! @name MDA_W - Master Domain Assignment */
#define XRDC_MDA_W_DID_MASK                      (0xFU)
#define XRDC_MDA_W_DID_SHIFT                     (0U)
#define XRDC_MDA_W_DID(x)                        (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_DID_SHIFT)) & XRDC_MDA_W_DID_MASK)
#define XRDC_MDA_W_DIDS_MASK                     (0x30U)
#define XRDC_MDA_W_DIDS_SHIFT                    (4U)
#define XRDC_MDA_W_DIDS(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_DIDS_SHIFT)) & XRDC_MDA_W_DIDS_MASK)
#define XRDC_MDA_W_PA_MASK                       (0x30U)
#define XRDC_MDA_W_PA_SHIFT                      (4U)
#define XRDC_MDA_W_PA(x)                         (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_PA_SHIFT)) & XRDC_MDA_W_PA_MASK)
#define XRDC_MDA_W_SA_MASK                       (0xC0U)
#define XRDC_MDA_W_SA_SHIFT                      (6U)
#define XRDC_MDA_W_SA(x)                         (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_SA_SHIFT)) & XRDC_MDA_W_SA_MASK)
#define XRDC_MDA_W_PE_MASK                       (0xC0U)
#define XRDC_MDA_W_PE_SHIFT                      (6U)
#define XRDC_MDA_W_PE(x)                         (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_PE_SHIFT)) & XRDC_MDA_W_PE_MASK)
#define XRDC_MDA_W_PIDM_MASK                     (0x3F00U)
#define XRDC_MDA_W_PIDM_SHIFT                    (8U)
#define XRDC_MDA_W_PIDM(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_PIDM_SHIFT)) & XRDC_MDA_W_PIDM_MASK)
#define XRDC_MDA_W_DIDB_MASK                     (0x100U)
#define XRDC_MDA_W_DIDB_SHIFT                    (8U)
#define XRDC_MDA_W_DIDB(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_DIDB_SHIFT)) & XRDC_MDA_W_DIDB_MASK)
#define XRDC_MDA_W_PID_MASK                      (0x3F0000U)
#define XRDC_MDA_W_PID_SHIFT                     (16U)
#define XRDC_MDA_W_PID(x)                        (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_PID_SHIFT)) & XRDC_MDA_W_PID_MASK)
#define XRDC_MDA_W_DFMT_MASK                     (0x20000000U)
#define XRDC_MDA_W_DFMT_SHIFT                    (29U)
#define XRDC_MDA_W_DFMT(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_DFMT_SHIFT)) & XRDC_MDA_W_DFMT_MASK)
#define XRDC_MDA_W_LK1_MASK                      (0x40000000U)
#define XRDC_MDA_W_LK1_SHIFT                     (30U)
#define XRDC_MDA_W_LK1(x)                        (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_LK1_SHIFT)) & XRDC_MDA_W_LK1_MASK)
#define XRDC_MDA_W_VLD_MASK                      (0x80000000U)
#define XRDC_MDA_W_VLD_SHIFT                     (31U)
#define XRDC_MDA_W_VLD(x)                        (((uint32_t)(((uint32_t)(x)) << XRDC_MDA_W_VLD_SHIFT)) & XRDC_MDA_W_VLD_MASK)

/* The count of XRDC_MDA_W */
#define XRDC_MDA_W_COUNT                         (35U)

/* The count of XRDC_MDA_W */
#define XRDC_MDA_W_COUNT2                        (2U)

/*! @name PDAC_W - Peripheral Domain Access Control */
#define XRDC_PDAC_W_D0ACP_MASK                   (0x7U)
#define XRDC_PDAC_W_D0ACP_SHIFT                  (0U)
#define XRDC_PDAC_W_D0ACP(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_PDAC_W_D0ACP_SHIFT)) & XRDC_PDAC_W_D0ACP_MASK)
#define XRDC_PDAC_W_D1ACP_MASK                   (0x38U)
#define XRDC_PDAC_W_D1ACP_SHIFT                  (3U)
#define XRDC_PDAC_W_D1ACP(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_PDAC_W_D1ACP_SHIFT)) & XRDC_PDAC_W_D1ACP_MASK)
#define XRDC_PDAC_W_D2ACP_MASK                   (0x1C0U)
#define XRDC_PDAC_W_D2ACP_SHIFT                  (6U)
#define XRDC_PDAC_W_D2ACP(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_PDAC_W_D2ACP_SHIFT)) & XRDC_PDAC_W_D2ACP_MASK)
#define XRDC_PDAC_W_EAL_MASK                     (0x3000000U)
#define XRDC_PDAC_W_EAL_SHIFT                    (24U)
#define XRDC_PDAC_W_EAL(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_PDAC_W_EAL_SHIFT)) & XRDC_PDAC_W_EAL_MASK)
#define XRDC_PDAC_W_EALO_MASK                    (0xF000000U)
#define XRDC_PDAC_W_EALO_SHIFT                   (24U)
#define XRDC_PDAC_W_EALO(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_PDAC_W_EALO_SHIFT)) & XRDC_PDAC_W_EALO_MASK)
#define XRDC_PDAC_W_LK2_MASK                     (0x60000000U)
#define XRDC_PDAC_W_LK2_SHIFT                    (29U)
#define XRDC_PDAC_W_LK2(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_PDAC_W_LK2_SHIFT)) & XRDC_PDAC_W_LK2_MASK)
#define XRDC_PDAC_W_VLD_MASK                     (0x80000000U)
#define XRDC_PDAC_W_VLD_SHIFT                    (31U)
#define XRDC_PDAC_W_VLD(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_PDAC_W_VLD_SHIFT)) & XRDC_PDAC_W_VLD_MASK)

/* The count of XRDC_PDAC_W */
#define XRDC_PDAC_W_COUNT                        (289U)

/* The count of XRDC_PDAC_W */
#define XRDC_PDAC_W_COUNT2                       (2U)

/*! @name MRGD_W - Memory Region Descriptor */
#define XRDC_MRGD_W_D0SEL_MASK                   (0x7U)
#define XRDC_MRGD_W_D0SEL_SHIFT                  (0U)
#define XRDC_MRGD_W_D0SEL(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_D0SEL_SHIFT)) & XRDC_MRGD_W_D0SEL_MASK)
#define XRDC_MRGD_W_ACCSET1_MASK                 (0xFFFU)
#define XRDC_MRGD_W_ACCSET1_SHIFT                (0U)
#define XRDC_MRGD_W_ACCSET1(x)                   (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_ACCSET1_SHIFT)) & XRDC_MRGD_W_ACCSET1_MASK)
#define XRDC_MRGD_W_D1SEL_MASK                   (0x38U)
#define XRDC_MRGD_W_D1SEL_SHIFT                  (3U)
#define XRDC_MRGD_W_D1SEL(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_D1SEL_SHIFT)) & XRDC_MRGD_W_D1SEL_MASK)
#define XRDC_MRGD_W_SRTADDR_MASK                 (0xFFFFFFE0U)
#define XRDC_MRGD_W_SRTADDR_SHIFT                (5U)
#define XRDC_MRGD_W_SRTADDR(x)                   (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_SRTADDR_SHIFT)) & XRDC_MRGD_W_SRTADDR_MASK)
#define XRDC_MRGD_W_ENDADDR_MASK                 (0xFFFFFFE0U)
#define XRDC_MRGD_W_ENDADDR_SHIFT                (5U)
#define XRDC_MRGD_W_ENDADDR(x)                   (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_ENDADDR_SHIFT)) & XRDC_MRGD_W_ENDADDR_MASK)
#define XRDC_MRGD_W_D2SEL_MASK                   (0x1C0U)
#define XRDC_MRGD_W_D2SEL_SHIFT                  (6U)
#define XRDC_MRGD_W_D2SEL(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_D2SEL_SHIFT)) & XRDC_MRGD_W_D2SEL_MASK)
#define XRDC_MRGD_W_LKAS1_MASK                   (0x1000U)
#define XRDC_MRGD_W_LKAS1_SHIFT                  (12U)
#define XRDC_MRGD_W_LKAS1(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_LKAS1_SHIFT)) & XRDC_MRGD_W_LKAS1_MASK)
#define XRDC_MRGD_W_ACCSET2_MASK                 (0xFFF0000U)
#define XRDC_MRGD_W_ACCSET2_SHIFT                (16U)
#define XRDC_MRGD_W_ACCSET2(x)                   (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_ACCSET2_SHIFT)) & XRDC_MRGD_W_ACCSET2_MASK)
#define XRDC_MRGD_W_EALO_MASK                    (0xF000000U)
#define XRDC_MRGD_W_EALO_SHIFT                   (24U)
#define XRDC_MRGD_W_EALO(x)                      (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_EALO_SHIFT)) & XRDC_MRGD_W_EALO_MASK)
#define XRDC_MRGD_W_EAL_MASK                     (0x3000000U)
#define XRDC_MRGD_W_EAL_SHIFT                    (24U)
#define XRDC_MRGD_W_EAL(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_EAL_SHIFT)) & XRDC_MRGD_W_EAL_MASK)
#define XRDC_MRGD_W_LKAS2_MASK                   (0x10000000U)
#define XRDC_MRGD_W_LKAS2_SHIFT                  (28U)
#define XRDC_MRGD_W_LKAS2(x)                     (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_LKAS2_SHIFT)) & XRDC_MRGD_W_LKAS2_MASK)
#define XRDC_MRGD_W_LK2_MASK                     (0x60000000U)
#define XRDC_MRGD_W_LK2_SHIFT                    (29U)
#define XRDC_MRGD_W_LK2(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_LK2_SHIFT)) & XRDC_MRGD_W_LK2_MASK)
#define XRDC_MRGD_W_VLD_MASK                     (0x80000000U)
#define XRDC_MRGD_W_VLD_SHIFT                    (31U)
#define XRDC_MRGD_W_VLD(x)                       (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_VLD_SHIFT)) & XRDC_MRGD_W_VLD_MASK)
#define XRDC_MRGD_W_CR_MASK                      (0x80000000U)
#define XRDC_MRGD_W_CR_SHIFT                     (31U)
#define XRDC_MRGD_W_CR(x)                        (((uint32_t)(((uint32_t)(x)) << XRDC_MRGD_W_CR_SHIFT)) & XRDC_MRGD_W_CR_MASK)

/* The count of XRDC_MRGD_W */
#define XRDC_MRGD_W_COUNT                        (24U)

/* The count of XRDC_MRGD_W */
#define XRDC_MRGD_W_COUNT2                       (5U)


/*!
 * @}
 */ /* end of group XRDC_Register_Masks */


/* XRDC - Peripheral instance base addresses */
/** Peripheral XRDC base address */
#define XRDC_BASE                                (0x40014000u)
/** Peripheral XRDC base pointer */
#define XRDC                                     ((XRDC_Type *)XRDC_BASE)
/** Array initializer of XRDC peripheral base addresses */
#define XRDC_BASE_ADDRS                          { XRDC_BASE }
/** Array initializer of XRDC peripheral base pointers */
#define XRDC_BASE_PTRS                           { XRDC }

/*!
 * @}
 */ /* end of group XRDC_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #pragma pop
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang system_header
  #endif
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma system_include
#endif

/**
 * @brief Mask and left-shift a bit field value for use in a register bit range.
 * @param field Name of the register bit field.
 * @param value Value of the bit field.
 * @return Masked and shifted value.
 */
#define NXP_VAL2FLD(field, value)    (((value) << (field ## _SHIFT)) & (field ## _MASK))
/**
 * @brief Mask and right-shift a register value to extract a bit field value.
 * @param field Name of the register bit field.
 * @param value Value of the register.
 * @return Masked and shifted bit field value.
 */
#define NXP_FLD2VAL(field, value)    (((value) & (field ## _MASK)) >> (field ## _SHIFT))

/*!
 * @}
 */ /* end of group Bit_Field_Generic_Macros */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/* No SDK compatibility issues. */

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* _K32W042S1M2_CM4_H_ */

