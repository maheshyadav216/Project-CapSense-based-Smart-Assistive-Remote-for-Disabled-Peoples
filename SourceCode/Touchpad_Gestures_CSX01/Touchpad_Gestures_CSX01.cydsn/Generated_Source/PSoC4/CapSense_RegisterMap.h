/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x48000018u)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (26u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xAA80001Au)

#define CapSense_MOD_CSX_CLK_VALUE                          (CapSense_dsRam.modCsxClk)
#define CapSense_MOD_CSX_CLK_OFFSET                         (28u)
#define CapSense_MOD_CSX_CLK_SIZE                           (1u)
#define CapSense_MOD_CSX_CLK_PARAM_ID                       (0x6F80001Cu)

#define CapSense_SNS_CSX_CLK_VALUE                          (CapSense_dsRam.snsCsxClk)
#define CapSense_SNS_CSX_CLK_OFFSET                         (30u)
#define CapSense_SNS_CSX_CLK_SIZE                           (2u)
#define CapSense_SNS_CSX_CLK_PARAM_ID                       (0xAB80001Eu)

#define CapSense_TOUCHPAD0_RESOLUTION_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.resolution)
#define CapSense_TOUCHPAD0_RESOLUTION_OFFSET                (32u)
#define CapSense_TOUCHPAD0_RESOLUTION_SIZE                  (2u)
#define CapSense_TOUCHPAD0_RESOLUTION_PARAM_ID              (0xAB800020u)

#define CapSense_TOUCHPAD0_FINGER_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.fingerTh)
#define CapSense_TOUCHPAD0_FINGER_TH_OFFSET                 (34u)
#define CapSense_TOUCHPAD0_FINGER_TH_SIZE                   (2u)
#define CapSense_TOUCHPAD0_FINGER_TH_PARAM_ID               (0xA7800022u)

#define CapSense_TOUCHPAD0_NOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.noiseTh)
#define CapSense_TOUCHPAD0_NOISE_TH_OFFSET                  (36u)
#define CapSense_TOUCHPAD0_NOISE_TH_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NOISE_TH_PARAM_ID                (0x62800024u)

#define CapSense_TOUCHPAD0_NNOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.nNoiseTh)
#define CapSense_TOUCHPAD0_NNOISE_TH_OFFSET                 (37u)
#define CapSense_TOUCHPAD0_NNOISE_TH_SIZE                   (1u)
#define CapSense_TOUCHPAD0_NNOISE_TH_PARAM_ID               (0x64800025u)

#define CapSense_TOUCHPAD0_HYSTERESIS_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.hysteresis)
#define CapSense_TOUCHPAD0_HYSTERESIS_OFFSET                (38u)
#define CapSense_TOUCHPAD0_HYSTERESIS_SIZE                  (1u)
#define CapSense_TOUCHPAD0_HYSTERESIS_PARAM_ID              (0x6E800026u)

#define CapSense_TOUCHPAD0_ON_DEBOUNCE_VALUE                (CapSense_dsRam.wdgtList.touchpad0.onDebounce)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_OFFSET               (39u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_PARAM_ID             (0x68800027u)

#define CapSense_TOUCHPAD0_LOW_BSLN_RST_VALUE               (CapSense_dsRam.wdgtList.touchpad0.lowBslnRst)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_OFFSET              (40u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_PARAM_ID            (0x61800028u)

#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_VALUE            (CapSense_dsRam.wdgtList.touchpad0.idacGainIndex)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_OFFSET           (41u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_PARAM_ID         (0x67800029u)

#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_VALUE             (CapSense_dsRam.wdgtList.touchpad0.snsClkSource)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_OFFSET            (42u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_PARAM_ID          (0x4680002Au)

#define CapSense_TOUCHPAD0_GESTURE_ID_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.gestureId)
#define CapSense_TOUCHPAD0_GESTURE_ID_OFFSET                (43u)
#define CapSense_TOUCHPAD0_GESTURE_ID_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GESTURE_ID_PARAM_ID              (0x6600002Bu)

#define CapSense_TOUCHPAD0_VELOCITY_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.velocity)
#define CapSense_TOUCHPAD0_VELOCITY_OFFSET                  (44u)
#define CapSense_TOUCHPAD0_VELOCITY_SIZE                    (4u)
#define CapSense_TOUCHPAD0_VELOCITY_PARAM_ID                (0xEA00002Cu)

#define CapSense_TOUCHPAD0_TOUCH0_X_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].x)
#define CapSense_TOUCHPAD0_TOUCH0_X_OFFSET                  (48u)
#define CapSense_TOUCHPAD0_TOUCH0_X_SIZE                    (2u)
#define CapSense_TOUCHPAD0_TOUCH0_X_PARAM_ID                (0x88000030u)

#define CapSense_TOUCHPAD0_TOUCH0_Y_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].y)
#define CapSense_TOUCHPAD0_TOUCH0_Y_OFFSET                  (50u)
#define CapSense_TOUCHPAD0_TOUCH0_Y_SIZE                    (2u)
#define CapSense_TOUCHPAD0_TOUCH0_Y_PARAM_ID                (0x84000032u)

#define CapSense_TOUCHPAD0_TOUCH0_Z_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].z)
#define CapSense_TOUCHPAD0_TOUCH0_Z_OFFSET                  (52u)
#define CapSense_TOUCHPAD0_TOUCH0_Z_SIZE                    (1u)
#define CapSense_TOUCHPAD0_TOUCH0_Z_PARAM_ID                (0x41000034u)

#define CapSense_TOUCHPAD0_TOUCH0_ID_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.touch[0u].id)
#define CapSense_TOUCHPAD0_TOUCH0_ID_OFFSET                 (53u)
#define CapSense_TOUCHPAD0_TOUCH0_ID_SIZE                   (1u)
#define CapSense_TOUCHPAD0_TOUCH0_ID_PARAM_ID               (0x47000035u)

#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[0u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_OFFSET              (56u)
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_PARAM_ID            (0x8A000038u)

#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[0u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_OFFSET             (58u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_PARAM_ID           (0x8600003Au)

#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[0u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_OFFSET         (60u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_PARAM_ID       (0x4300003Cu)

#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[0u].diff)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_OFFSET              (62u)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_PARAM_ID            (0x8700003Eu)

#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[0u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_OFFSET (64u)
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x42000040u)

#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[0u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_OFFSET        (65u)
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_PARAM_ID      (0x44000041u)

#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[1u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_OFFSET              (66u)
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_PARAM_ID            (0x86000042u)

#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[1u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_OFFSET             (68u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_PARAM_ID           (0x8B000044u)

#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[1u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_OFFSET         (70u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_PARAM_ID       (0x4F000046u)

#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[1u].diff)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_OFFSET              (72u)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_PARAM_ID            (0x88000048u)

#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[1u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_OFFSET (74u)
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C00004Au)

#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[1u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_OFFSET        (75u)
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_PARAM_ID      (0x4A00004Bu)

#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[2u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_OFFSET              (76u)
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_PARAM_ID            (0x8900004Cu)

#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[2u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_OFFSET             (78u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_PARAM_ID           (0x8500004Eu)

#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[2u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_OFFSET         (80u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_PARAM_ID       (0x47000050u)

#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[2u].diff)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_OFFSET              (82u)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_PARAM_ID            (0x83000052u)

#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[2u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_OFFSET (84u)
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x46000054u)

#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[2u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_OFFSET        (85u)
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_PARAM_ID      (0x40000055u)

#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[3u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_OFFSET              (86u)
#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_PARAM_ID            (0x82000056u)

#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[3u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_OFFSET             (88u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_PARAM_ID           (0x8D000058u)

#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[3u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_OFFSET         (90u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_PARAM_ID       (0x4900005Au)

#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[3u].diff)
#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_OFFSET              (92u)
#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_PARAM_ID            (0x8C00005Cu)

#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[3u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_OFFSET (94u)
#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4800005Eu)

#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[3u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_OFFSET        (95u)
#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_PARAM_ID      (0x4E00005Fu)

#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[4u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_OFFSET              (96u)
#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_PARAM_ID            (0x80000060u)

#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[4u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_OFFSET             (98u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_PARAM_ID           (0x8C000062u)

#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[4u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_OFFSET         (100u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_PARAM_ID       (0x49000064u)

#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[4u].diff)
#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_OFFSET              (102u)
#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_PARAM_ID            (0x8D000066u)

#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[4u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_OFFSET (104u)
#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A000068u)

#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[4u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_OFFSET        (105u)
#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_PARAM_ID      (0x4C000069u)

#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[5u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_OFFSET              (106u)
#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_PARAM_ID            (0x8E00006Au)

#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[5u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_OFFSET             (108u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_PARAM_ID           (0x8300006Cu)

#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[5u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_OFFSET         (110u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_PARAM_ID       (0x4700006Eu)

#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[5u].diff)
#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_OFFSET              (112u)
#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_PARAM_ID            (0x85000070u)

#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[5u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_OFFSET (114u)
#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x41000072u)

#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[5u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_OFFSET        (115u)
#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_PARAM_ID      (0x47000073u)

#define CapSense_TOUCHPAD0_RX0_TX6_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[6u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX6_RAW0_OFFSET              (116u)
#define CapSense_TOUCHPAD0_RX0_TX6_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX6_RAW0_PARAM_ID            (0x84000074u)

#define CapSense_TOUCHPAD0_RX0_TX6_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[6u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX6_BSLN0_OFFSET             (118u)
#define CapSense_TOUCHPAD0_RX0_TX6_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX6_BSLN0_PARAM_ID           (0x88000076u)

#define CapSense_TOUCHPAD0_RX0_TX6_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[6u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX6_BSLN_EXT0_OFFSET         (120u)
#define CapSense_TOUCHPAD0_RX0_TX6_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX6_BSLN_EXT0_PARAM_ID       (0x4F000078u)

#define CapSense_TOUCHPAD0_RX0_TX6_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[6u].diff)
#define CapSense_TOUCHPAD0_RX0_TX6_DIFF_OFFSET              (122u)
#define CapSense_TOUCHPAD0_RX0_TX6_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX6_DIFF_PARAM_ID            (0x8B00007Au)

#define CapSense_TOUCHPAD0_RX0_TX6_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[6u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX6_NEG_BSLN_RST_CNT0_OFFSET (124u)
#define CapSense_TOUCHPAD0_RX0_TX6_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX6_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E00007Cu)

#define CapSense_TOUCHPAD0_RX0_TX6_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[6u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX6_IDAC_COMP0_OFFSET        (125u)
#define CapSense_TOUCHPAD0_RX0_TX6_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX6_IDAC_COMP0_PARAM_ID      (0x4800007Du)

#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[7u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_OFFSET              (126u)
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_PARAM_ID            (0x8A00007Eu)

#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[7u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_OFFSET             (128u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_PARAM_ID           (0x84000080u)

#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[7u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_OFFSET         (130u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_PARAM_ID       (0x40000082u)

#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[7u].diff)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_OFFSET              (132u)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_PARAM_ID            (0x85000084u)

#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[7u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_OFFSET (134u)
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x41000086u)

#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[7u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_OFFSET        (135u)
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_PARAM_ID      (0x47000087u)

#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[8u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_OFFSET              (136u)
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_PARAM_ID            (0x86000088u)

#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[8u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_OFFSET             (138u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_PARAM_ID           (0x8A00008Au)

#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[8u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_OFFSET         (140u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_PARAM_ID       (0x4F00008Cu)

#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[8u].diff)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_OFFSET              (142u)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_PARAM_ID            (0x8B00008Eu)

#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[8u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_OFFSET (144u)
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x49000090u)

#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[8u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_OFFSET        (145u)
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_PARAM_ID      (0x4F000091u)

#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[9u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_OFFSET              (146u)
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_PARAM_ID            (0x8D000092u)

#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[9u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_OFFSET             (148u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_PARAM_ID           (0x80000094u)

#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[9u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_OFFSET         (150u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_PARAM_ID       (0x44000096u)

#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[9u].diff)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_OFFSET              (152u)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_PARAM_ID            (0x83000098u)

#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[9u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_OFFSET (154u)
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4700009Au)

#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[9u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_OFFSET        (155u)
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_PARAM_ID      (0x4100009Bu)

#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[10u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_OFFSET              (156u)
#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_PARAM_ID            (0x8200009Cu)

#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[10u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_OFFSET             (158u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_PARAM_ID           (0x8E00009Eu)

#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[10u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_OFFSET         (160u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_PARAM_ID       (0x460000A0u)

#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[10u].diff)
#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_OFFSET              (162u)
#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_PARAM_ID            (0x820000A2u)

#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[10u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_OFFSET (164u)
#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x470000A4u)

#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[10u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_OFFSET        (165u)
#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_PARAM_ID      (0x410000A5u)

#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[11u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_OFFSET              (166u)
#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_PARAM_ID            (0x830000A6u)

#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[11u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_OFFSET             (168u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_PARAM_ID           (0x8C0000A8u)

#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[11u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_OFFSET         (170u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_PARAM_ID       (0x480000AAu)

#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[11u].diff)
#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_OFFSET              (172u)
#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_PARAM_ID            (0x8D0000ACu)

#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[11u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_OFFSET (174u)
#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x490000AEu)

#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[11u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_OFFSET        (175u)
#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_PARAM_ID      (0x4F0000AFu)

#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[12u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_OFFSET              (176u)
#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_PARAM_ID            (0x8B0000B0u)

#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[12u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_OFFSET             (178u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_PARAM_ID           (0x870000B2u)

#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[12u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_OFFSET         (180u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_PARAM_ID       (0x420000B4u)

#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[12u].diff)
#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_OFFSET              (182u)
#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_PARAM_ID            (0x860000B6u)

#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[12u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_OFFSET (184u)
#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x410000B8u)

#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[12u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_OFFSET        (185u)
#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_PARAM_ID      (0x470000B9u)

#define CapSense_TOUCHPAD0_RX1_TX6_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[13u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX6_RAW0_OFFSET              (186u)
#define CapSense_TOUCHPAD0_RX1_TX6_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX6_RAW0_PARAM_ID            (0x850000BAu)

#define CapSense_TOUCHPAD0_RX1_TX6_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[13u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX6_BSLN0_OFFSET             (188u)
#define CapSense_TOUCHPAD0_RX1_TX6_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX6_BSLN0_PARAM_ID           (0x880000BCu)

#define CapSense_TOUCHPAD0_RX1_TX6_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[13u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX6_BSLN_EXT0_OFFSET         (190u)
#define CapSense_TOUCHPAD0_RX1_TX6_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX6_BSLN_EXT0_PARAM_ID       (0x4C0000BEu)

#define CapSense_TOUCHPAD0_RX1_TX6_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[13u].diff)
#define CapSense_TOUCHPAD0_RX1_TX6_DIFF_OFFSET              (192u)
#define CapSense_TOUCHPAD0_RX1_TX6_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX6_DIFF_PARAM_ID            (0x890000C0u)

#define CapSense_TOUCHPAD0_RX1_TX6_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[13u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX6_NEG_BSLN_RST_CNT0_OFFSET (194u)
#define CapSense_TOUCHPAD0_RX1_TX6_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX6_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D0000C2u)

#define CapSense_TOUCHPAD0_RX1_TX6_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[13u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX6_IDAC_COMP0_OFFSET        (195u)
#define CapSense_TOUCHPAD0_RX1_TX6_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX6_IDAC_COMP0_PARAM_ID      (0x4B0000C3u)

#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[14u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_OFFSET              (196u)
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_PARAM_ID            (0x880000C4u)

#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[14u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_OFFSET             (198u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_PARAM_ID           (0x840000C6u)

#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[14u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_OFFSET         (200u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_PARAM_ID       (0x430000C8u)

#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[14u].diff)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_OFFSET              (202u)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_PARAM_ID            (0x870000CAu)

#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[14u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_OFFSET (204u)
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x420000CCu)

#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[14u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_OFFSET        (205u)
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_PARAM_ID      (0x440000CDu)

#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[15u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_OFFSET              (206u)
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_PARAM_ID            (0x860000CEu)

#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[15u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_OFFSET             (208u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_PARAM_ID           (0x8C0000D0u)

#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[15u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_OFFSET         (210u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_PARAM_ID       (0x480000D2u)

#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[15u].diff)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_OFFSET              (212u)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_PARAM_ID            (0x8D0000D4u)

#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[15u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_OFFSET (214u)
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x490000D6u)

#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[15u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_OFFSET        (215u)
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_PARAM_ID      (0x4F0000D7u)

#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[16u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_OFFSET              (216u)
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_PARAM_ID            (0x8E0000D8u)

#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[16u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_OFFSET             (218u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_PARAM_ID           (0x820000DAu)

#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[16u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_OFFSET         (220u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_PARAM_ID       (0x470000DCu)

#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[16u].diff)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_OFFSET              (222u)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_PARAM_ID            (0x830000DEu)

#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[16u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_OFFSET (224u)
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B0000E0u)

#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[16u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_OFFSET        (225u)
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_PARAM_ID      (0x4D0000E1u)

#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[17u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_OFFSET              (226u)
#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_PARAM_ID            (0x8F0000E2u)

#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[17u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_OFFSET             (228u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_PARAM_ID           (0x820000E4u)

#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[17u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_OFFSET         (230u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_PARAM_ID       (0x460000E6u)

#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[17u].diff)
#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_OFFSET              (232u)
#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_PARAM_ID            (0x810000E8u)

#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[17u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_OFFSET (234u)
#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x450000EAu)

#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[17u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_OFFSET        (235u)
#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_PARAM_ID      (0x430000EBu)

#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[18u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_OFFSET              (236u)
#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_PARAM_ID            (0x800000ECu)

#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[18u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_OFFSET             (238u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_PARAM_ID           (0x8C0000EEu)

#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[18u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_OFFSET         (240u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_PARAM_ID       (0x4E0000F0u)

#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[18u].diff)
#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_OFFSET              (242u)
#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_PARAM_ID            (0x8A0000F2u)

#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[18u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_OFFSET (244u)
#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F0000F4u)

#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[18u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_OFFSET        (245u)
#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_PARAM_ID      (0x490000F5u)

#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[19u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_OFFSET              (246u)
#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_PARAM_ID            (0x8B0000F6u)

#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[19u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_OFFSET             (248u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_PARAM_ID           (0x840000F8u)

#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[19u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_OFFSET         (250u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_PARAM_ID       (0x400000FAu)

#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[19u].diff)
#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_OFFSET              (252u)
#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_PARAM_ID            (0x850000FCu)

#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[19u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_OFFSET (254u)
#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x410000FEu)

#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[19u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_OFFSET        (255u)
#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_PARAM_ID      (0x470000FFu)

#define CapSense_TOUCHPAD0_RX2_TX6_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[20u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX6_RAW0_OFFSET              (256u)
#define CapSense_TOUCHPAD0_RX2_TX6_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX6_RAW0_PARAM_ID            (0x8C000100u)

#define CapSense_TOUCHPAD0_RX2_TX6_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[20u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX6_BSLN0_OFFSET             (258u)
#define CapSense_TOUCHPAD0_RX2_TX6_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX6_BSLN0_PARAM_ID           (0x80000102u)

#define CapSense_TOUCHPAD0_RX2_TX6_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[20u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX6_BSLN_EXT0_OFFSET         (260u)
#define CapSense_TOUCHPAD0_RX2_TX6_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX6_BSLN_EXT0_PARAM_ID       (0x45000104u)

#define CapSense_TOUCHPAD0_RX2_TX6_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[20u].diff)
#define CapSense_TOUCHPAD0_RX2_TX6_DIFF_OFFSET              (262u)
#define CapSense_TOUCHPAD0_RX2_TX6_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX6_DIFF_PARAM_ID            (0x81000106u)

#define CapSense_TOUCHPAD0_RX2_TX6_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[20u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX6_NEG_BSLN_RST_CNT0_OFFSET (264u)
#define CapSense_TOUCHPAD0_RX2_TX6_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX6_NEG_BSLN_RST_CNT0_PARAM_ID (0x46000108u)

#define CapSense_TOUCHPAD0_RX2_TX6_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[20u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX6_IDAC_COMP0_OFFSET        (265u)
#define CapSense_TOUCHPAD0_RX2_TX6_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX6_IDAC_COMP0_PARAM_ID      (0x40000109u)

#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[21u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_OFFSET              (266u)
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_PARAM_ID            (0x8200010Au)

#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[21u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_OFFSET             (268u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_PARAM_ID           (0x8F00010Cu)

#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[21u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_OFFSET         (270u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_PARAM_ID       (0x4B00010Eu)

#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[21u].diff)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_OFFSET              (272u)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_PARAM_ID            (0x89000110u)

#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[21u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_OFFSET (274u)
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D000112u)

#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[21u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_OFFSET        (275u)
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_PARAM_ID      (0x4B000113u)

#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[22u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_OFFSET              (276u)
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_PARAM_ID            (0x88000114u)

#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[22u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_OFFSET             (278u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_PARAM_ID           (0x84000116u)

#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[22u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_OFFSET         (280u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_PARAM_ID       (0x43000118u)

#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[22u].diff)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_OFFSET              (282u)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_PARAM_ID            (0x8700011Au)

#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[22u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_OFFSET (284u)
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4200011Cu)

#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[22u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_OFFSET        (285u)
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_PARAM_ID      (0x4400011Du)

#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[23u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_OFFSET              (286u)
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_PARAM_ID            (0x8600011Eu)

#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[23u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_OFFSET             (288u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_PARAM_ID           (0x86000120u)

#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[23u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_OFFSET         (290u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_PARAM_ID       (0x42000122u)

#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[23u].diff)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_OFFSET              (292u)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_PARAM_ID            (0x87000124u)

#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[23u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_OFFSET (294u)
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x43000126u)

#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[23u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_OFFSET        (295u)
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_PARAM_ID      (0x45000127u)

#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[24u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_OFFSET              (296u)
#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_PARAM_ID            (0x84000128u)

#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[24u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_OFFSET             (298u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_PARAM_ID           (0x8800012Au)

#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[24u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_OFFSET         (300u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_PARAM_ID       (0x4D00012Cu)

#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[24u].diff)
#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_OFFSET              (302u)
#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_PARAM_ID            (0x8900012Eu)

#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[24u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_OFFSET (304u)
#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B000130u)

#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[24u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_OFFSET        (305u)
#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_PARAM_ID      (0x4D000131u)

#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[25u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_OFFSET              (306u)
#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_PARAM_ID            (0x8F000132u)

#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[25u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_OFFSET             (308u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_PARAM_ID           (0x82000134u)

#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[25u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_OFFSET         (310u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_PARAM_ID       (0x46000136u)

#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[25u].diff)
#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_OFFSET              (312u)
#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_PARAM_ID            (0x81000138u)

#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[25u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_OFFSET (314u)
#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4500013Au)

#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[25u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_OFFSET        (315u)
#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_PARAM_ID      (0x4300013Bu)

#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[26u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_OFFSET              (316u)
#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_PARAM_ID            (0x8000013Cu)

#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[26u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_OFFSET             (318u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_PARAM_ID           (0x8C00013Eu)

#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[26u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_OFFSET         (320u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_PARAM_ID       (0x49000140u)

#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[26u].diff)
#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_OFFSET              (322u)
#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_PARAM_ID            (0x8D000142u)

#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[26u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_OFFSET (324u)
#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x48000144u)

#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[26u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_OFFSET        (325u)
#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_PARAM_ID      (0x4E000145u)

#define CapSense_TOUCHPAD0_RX3_TX6_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[27u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX6_RAW0_OFFSET              (326u)
#define CapSense_TOUCHPAD0_RX3_TX6_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX6_RAW0_PARAM_ID            (0x8C000146u)

#define CapSense_TOUCHPAD0_RX3_TX6_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[27u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX6_BSLN0_OFFSET             (328u)
#define CapSense_TOUCHPAD0_RX3_TX6_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX6_BSLN0_PARAM_ID           (0x83000148u)

#define CapSense_TOUCHPAD0_RX3_TX6_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[27u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX6_BSLN_EXT0_OFFSET         (330u)
#define CapSense_TOUCHPAD0_RX3_TX6_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX6_BSLN_EXT0_PARAM_ID       (0x4700014Au)

#define CapSense_TOUCHPAD0_RX3_TX6_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[27u].diff)
#define CapSense_TOUCHPAD0_RX3_TX6_DIFF_OFFSET              (332u)
#define CapSense_TOUCHPAD0_RX3_TX6_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX6_DIFF_PARAM_ID            (0x8200014Cu)

#define CapSense_TOUCHPAD0_RX3_TX6_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[27u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX6_NEG_BSLN_RST_CNT0_OFFSET (334u)
#define CapSense_TOUCHPAD0_RX3_TX6_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX6_NEG_BSLN_RST_CNT0_PARAM_ID (0x4600014Eu)

#define CapSense_TOUCHPAD0_RX3_TX6_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[27u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX6_IDAC_COMP0_OFFSET        (335u)
#define CapSense_TOUCHPAD0_RX3_TX6_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX6_IDAC_COMP0_PARAM_ID      (0x4000014Fu)

#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[28u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_OFFSET              (336u)
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_PARAM_ID            (0x84000150u)

#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[28u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_OFFSET             (338u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_PARAM_ID           (0x88000152u)

#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[28u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_OFFSET         (340u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_PARAM_ID       (0x4D000154u)

#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[28u].diff)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_OFFSET              (342u)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_PARAM_ID            (0x89000156u)

#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[28u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_OFFSET (344u)
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E000158u)

#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[28u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_OFFSET        (345u)
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_PARAM_ID      (0x48000159u)

#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[29u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_OFFSET              (346u)
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_PARAM_ID            (0x8A00015Au)

#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[29u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_OFFSET             (348u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_PARAM_ID           (0x8700015Cu)

#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[29u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_OFFSET         (350u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_PARAM_ID       (0x4300015Eu)

#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[29u].diff)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_OFFSET              (352u)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_PARAM_ID            (0x8B000160u)

#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[29u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_OFFSET (354u)
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F000162u)

#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[29u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_OFFSET        (355u)
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_PARAM_ID      (0x49000163u)

#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[30u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_OFFSET              (356u)
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_PARAM_ID            (0x8A000164u)

#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[30u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_OFFSET             (358u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_PARAM_ID           (0x86000166u)

#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[30u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_OFFSET         (360u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_PARAM_ID       (0x41000168u)

#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[30u].diff)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_OFFSET              (362u)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_PARAM_ID            (0x8500016Au)

#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[30u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_OFFSET (364u)
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4000016Cu)

#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[30u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_OFFSET        (365u)
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_PARAM_ID      (0x4600016Du)

#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[31u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_OFFSET              (366u)
#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_PARAM_ID            (0x8400016Eu)

#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[31u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_OFFSET             (368u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_PARAM_ID           (0x8E000170u)

#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[31u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_OFFSET         (370u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_PARAM_ID       (0x4A000172u)

#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[31u].diff)
#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_OFFSET              (372u)
#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_PARAM_ID            (0x8F000174u)

#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[31u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_OFFSET (374u)
#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B000176u)

#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[31u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_OFFSET        (375u)
#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_PARAM_ID      (0x4D000177u)

#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[32u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_OFFSET              (376u)
#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_PARAM_ID            (0x8C000178u)

#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[32u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_OFFSET             (378u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_PARAM_ID           (0x8000017Au)

#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[32u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_OFFSET         (380u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_PARAM_ID       (0x4500017Cu)

#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[32u].diff)
#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_OFFSET              (382u)
#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_PARAM_ID            (0x8100017Eu)

#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[32u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_OFFSET (384u)
#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x47000180u)

#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[32u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_OFFSET        (385u)
#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_PARAM_ID      (0x41000181u)

#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[33u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_OFFSET              (386u)
#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_PARAM_ID            (0x83000182u)

#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[33u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_OFFSET             (388u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_PARAM_ID           (0x8E000184u)

#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[33u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_OFFSET         (390u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_PARAM_ID       (0x4A000186u)

#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[33u].diff)
#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_OFFSET              (392u)
#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_PARAM_ID            (0x8D000188u)

#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[33u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_OFFSET (394u)
#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4900018Au)

#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[33u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_OFFSET        (395u)
#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_PARAM_ID      (0x4F00018Bu)

#define CapSense_TOUCHPAD0_RX4_TX6_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[34u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX6_RAW0_OFFSET              (396u)
#define CapSense_TOUCHPAD0_RX4_TX6_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX6_RAW0_PARAM_ID            (0x8C00018Cu)

#define CapSense_TOUCHPAD0_RX4_TX6_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[34u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX6_BSLN0_OFFSET             (398u)
#define CapSense_TOUCHPAD0_RX4_TX6_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX6_BSLN0_PARAM_ID           (0x8000018Eu)

#define CapSense_TOUCHPAD0_RX4_TX6_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[34u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX6_BSLN_EXT0_OFFSET         (400u)
#define CapSense_TOUCHPAD0_RX4_TX6_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX6_BSLN_EXT0_PARAM_ID       (0x42000190u)

#define CapSense_TOUCHPAD0_RX4_TX6_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[34u].diff)
#define CapSense_TOUCHPAD0_RX4_TX6_DIFF_OFFSET              (402u)
#define CapSense_TOUCHPAD0_RX4_TX6_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX6_DIFF_PARAM_ID            (0x86000192u)

#define CapSense_TOUCHPAD0_RX4_TX6_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[34u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX6_NEG_BSLN_RST_CNT0_OFFSET (404u)
#define CapSense_TOUCHPAD0_RX4_TX6_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX6_NEG_BSLN_RST_CNT0_PARAM_ID (0x43000194u)

#define CapSense_TOUCHPAD0_RX4_TX6_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[34u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX6_IDAC_COMP0_OFFSET        (405u)
#define CapSense_TOUCHPAD0_RX4_TX6_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX6_IDAC_COMP0_PARAM_ID      (0x45000195u)

#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[35u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_OFFSET              (406u)
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_PARAM_ID            (0x87000196u)

#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[35u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_OFFSET             (408u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_PARAM_ID           (0x88000198u)

#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[35u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_OFFSET         (410u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_PARAM_ID       (0x4C00019Au)

#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[35u].diff)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_OFFSET              (412u)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_PARAM_ID            (0x8900019Cu)

#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[35u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_OFFSET (414u)
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D00019Eu)

#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[35u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_OFFSET        (415u)
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_PARAM_ID      (0x4B00019Fu)

#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[36u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_OFFSET              (416u)
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_PARAM_ID            (0x850001A0u)

#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[36u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_OFFSET             (418u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_PARAM_ID           (0x890001A2u)

#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[36u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_OFFSET         (420u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_PARAM_ID       (0x4C0001A4u)

#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[36u].diff)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_OFFSET              (422u)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_PARAM_ID            (0x880001A6u)

#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[36u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_OFFSET (424u)
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F0001A8u)

#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[36u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_OFFSET        (425u)
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_PARAM_ID      (0x490001A9u)

#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[37u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_OFFSET              (426u)
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_PARAM_ID            (0x8B0001AAu)

#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[37u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_OFFSET             (428u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_PARAM_ID           (0x860001ACu)

#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[37u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_OFFSET         (430u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_PARAM_ID       (0x420001AEu)

#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[37u].diff)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_OFFSET              (432u)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_PARAM_ID            (0x800001B0u)

#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[37u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_OFFSET (434u)
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x440001B2u)

#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[37u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_OFFSET        (435u)
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_PARAM_ID      (0x420001B3u)

#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[38u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_OFFSET              (436u)
#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_PARAM_ID            (0x810001B4u)

#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[38u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_OFFSET             (438u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_PARAM_ID           (0x8D0001B6u)

#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[38u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_OFFSET         (440u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_PARAM_ID       (0x4A0001B8u)

#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[38u].diff)
#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_OFFSET              (442u)
#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_PARAM_ID            (0x8E0001BAu)

#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[38u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_OFFSET (444u)
#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B0001BCu)

#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[38u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_OFFSET        (445u)
#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_PARAM_ID      (0x4D0001BDu)

#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[39u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_OFFSET              (446u)
#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_PARAM_ID            (0x8F0001BEu)

#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[39u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_OFFSET             (448u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_PARAM_ID           (0x820001C0u)

#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[39u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_OFFSET         (450u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_PARAM_ID       (0x460001C2u)

#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[39u].diff)
#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_OFFSET              (452u)
#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_PARAM_ID            (0x830001C4u)

#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[39u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_OFFSET (454u)
#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x470001C6u)

#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[39u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_OFFSET        (455u)
#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_PARAM_ID      (0x410001C7u)

#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[40u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_OFFSET              (456u)
#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_PARAM_ID            (0x800001C8u)

#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[40u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_OFFSET             (458u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_PARAM_ID           (0x8C0001CAu)

#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[40u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_OFFSET         (460u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_PARAM_ID       (0x490001CCu)

#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[40u].diff)
#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_OFFSET              (462u)
#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_PARAM_ID            (0x8D0001CEu)

#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[40u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_OFFSET (464u)
#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F0001D0u)

#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[40u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_OFFSET        (465u)
#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_PARAM_ID      (0x490001D1u)

#define CapSense_TOUCHPAD0_RX5_TX6_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[41u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX6_RAW0_OFFSET              (466u)
#define CapSense_TOUCHPAD0_RX5_TX6_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX6_RAW0_PARAM_ID            (0x8B0001D2u)

#define CapSense_TOUCHPAD0_RX5_TX6_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[41u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX6_BSLN0_OFFSET             (468u)
#define CapSense_TOUCHPAD0_RX5_TX6_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX6_BSLN0_PARAM_ID           (0x860001D4u)

#define CapSense_TOUCHPAD0_RX5_TX6_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[41u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX6_BSLN_EXT0_OFFSET         (470u)
#define CapSense_TOUCHPAD0_RX5_TX6_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX6_BSLN_EXT0_PARAM_ID       (0x420001D6u)

#define CapSense_TOUCHPAD0_RX5_TX6_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[41u].diff)
#define CapSense_TOUCHPAD0_RX5_TX6_DIFF_OFFSET              (472u)
#define CapSense_TOUCHPAD0_RX5_TX6_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX6_DIFF_PARAM_ID            (0x850001D8u)

#define CapSense_TOUCHPAD0_RX5_TX6_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[41u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX6_NEG_BSLN_RST_CNT0_OFFSET (474u)
#define CapSense_TOUCHPAD0_RX5_TX6_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX6_NEG_BSLN_RST_CNT0_PARAM_ID (0x410001DAu)

#define CapSense_TOUCHPAD0_RX5_TX6_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[41u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX6_IDAC_COMP0_OFFSET        (475u)
#define CapSense_TOUCHPAD0_RX5_TX6_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX6_IDAC_COMP0_PARAM_ID      (0x470001DBu)

#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[42u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_OFFSET              (476u)
#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX0_RAW0_PARAM_ID            (0x840001DCu)

#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[42u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_OFFSET             (478u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN0_PARAM_ID           (0x880001DEu)

#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[42u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_OFFSET         (480u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX0_BSLN_EXT0_PARAM_ID       (0x400001E0u)

#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[42u].diff)
#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_OFFSET              (482u)
#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX0_DIFF_PARAM_ID            (0x840001E2u)

#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[42u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_OFFSET (484u)
#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x410001E4u)

#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[42u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_OFFSET        (485u)
#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX0_IDAC_COMP0_PARAM_ID      (0x470001E5u)

#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[43u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_OFFSET              (486u)
#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX1_RAW0_PARAM_ID            (0x850001E6u)

#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[43u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_OFFSET             (488u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN0_PARAM_ID           (0x8A0001E8u)

#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[43u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_OFFSET         (490u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX1_BSLN_EXT0_PARAM_ID       (0x4E0001EAu)

#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[43u].diff)
#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_OFFSET              (492u)
#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX1_DIFF_PARAM_ID            (0x8B0001ECu)

#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[43u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_OFFSET (494u)
#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F0001EEu)

#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[43u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_OFFSET        (495u)
#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX1_IDAC_COMP0_PARAM_ID      (0x490001EFu)

#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[44u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_OFFSET              (496u)
#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX2_RAW0_PARAM_ID            (0x8D0001F0u)

#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[44u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_OFFSET             (498u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN0_PARAM_ID           (0x810001F2u)

#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[44u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_OFFSET         (500u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX2_BSLN_EXT0_PARAM_ID       (0x440001F4u)

#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[44u].diff)
#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_OFFSET              (502u)
#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX2_DIFF_PARAM_ID            (0x800001F6u)

#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[44u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_OFFSET (504u)
#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x470001F8u)

#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[44u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_OFFSET        (505u)
#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX2_IDAC_COMP0_PARAM_ID      (0x410001F9u)

#define CapSense_TOUCHPAD0_RX6_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[45u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX3_RAW0_OFFSET              (506u)
#define CapSense_TOUCHPAD0_RX6_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX3_RAW0_PARAM_ID            (0x830001FAu)

#define CapSense_TOUCHPAD0_RX6_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[45u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX3_BSLN0_OFFSET             (508u)
#define CapSense_TOUCHPAD0_RX6_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX3_BSLN0_PARAM_ID           (0x8E0001FCu)

#define CapSense_TOUCHPAD0_RX6_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[45u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX3_BSLN_EXT0_OFFSET         (510u)
#define CapSense_TOUCHPAD0_RX6_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX3_BSLN_EXT0_PARAM_ID       (0x4A0001FEu)

#define CapSense_TOUCHPAD0_RX6_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[45u].diff)
#define CapSense_TOUCHPAD0_RX6_TX3_DIFF_OFFSET              (512u)
#define CapSense_TOUCHPAD0_RX6_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX3_DIFF_PARAM_ID            (0x88000200u)

#define CapSense_TOUCHPAD0_RX6_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[45u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX3_NEG_BSLN_RST_CNT0_OFFSET (514u)
#define CapSense_TOUCHPAD0_RX6_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C000202u)

#define CapSense_TOUCHPAD0_RX6_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[45u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX3_IDAC_COMP0_OFFSET        (515u)
#define CapSense_TOUCHPAD0_RX6_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX3_IDAC_COMP0_PARAM_ID      (0x4A000203u)

#define CapSense_TOUCHPAD0_RX6_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[46u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX4_RAW0_OFFSET              (516u)
#define CapSense_TOUCHPAD0_RX6_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX4_RAW0_PARAM_ID            (0x89000204u)

#define CapSense_TOUCHPAD0_RX6_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[46u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX4_BSLN0_OFFSET             (518u)
#define CapSense_TOUCHPAD0_RX6_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX4_BSLN0_PARAM_ID           (0x85000206u)

#define CapSense_TOUCHPAD0_RX6_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[46u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX4_BSLN_EXT0_OFFSET         (520u)
#define CapSense_TOUCHPAD0_RX6_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX4_BSLN_EXT0_PARAM_ID       (0x42000208u)

#define CapSense_TOUCHPAD0_RX6_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[46u].diff)
#define CapSense_TOUCHPAD0_RX6_TX4_DIFF_OFFSET              (522u)
#define CapSense_TOUCHPAD0_RX6_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX4_DIFF_PARAM_ID            (0x8600020Au)

#define CapSense_TOUCHPAD0_RX6_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[46u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX4_NEG_BSLN_RST_CNT0_OFFSET (524u)
#define CapSense_TOUCHPAD0_RX6_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300020Cu)

#define CapSense_TOUCHPAD0_RX6_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[46u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX4_IDAC_COMP0_OFFSET        (525u)
#define CapSense_TOUCHPAD0_RX6_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX4_IDAC_COMP0_PARAM_ID      (0x4500020Du)

#define CapSense_TOUCHPAD0_RX6_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[47u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX5_RAW0_OFFSET              (526u)
#define CapSense_TOUCHPAD0_RX6_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX5_RAW0_PARAM_ID            (0x8700020Eu)

#define CapSense_TOUCHPAD0_RX6_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[47u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX5_BSLN0_OFFSET             (528u)
#define CapSense_TOUCHPAD0_RX6_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX5_BSLN0_PARAM_ID           (0x8D000210u)

#define CapSense_TOUCHPAD0_RX6_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[47u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX5_BSLN_EXT0_OFFSET         (530u)
#define CapSense_TOUCHPAD0_RX6_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX5_BSLN_EXT0_PARAM_ID       (0x49000212u)

#define CapSense_TOUCHPAD0_RX6_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[47u].diff)
#define CapSense_TOUCHPAD0_RX6_TX5_DIFF_OFFSET              (532u)
#define CapSense_TOUCHPAD0_RX6_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX5_DIFF_PARAM_ID            (0x8C000214u)

#define CapSense_TOUCHPAD0_RX6_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[47u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX5_NEG_BSLN_RST_CNT0_OFFSET (534u)
#define CapSense_TOUCHPAD0_RX6_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x48000216u)

#define CapSense_TOUCHPAD0_RX6_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[47u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX5_IDAC_COMP0_OFFSET        (535u)
#define CapSense_TOUCHPAD0_RX6_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX5_IDAC_COMP0_PARAM_ID      (0x4E000217u)

#define CapSense_TOUCHPAD0_RX6_TX6_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[48u].raw[0u])
#define CapSense_TOUCHPAD0_RX6_TX6_RAW0_OFFSET              (536u)
#define CapSense_TOUCHPAD0_RX6_TX6_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX6_RAW0_PARAM_ID            (0x8F000218u)

#define CapSense_TOUCHPAD0_RX6_TX6_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[48u].bsln[0u])
#define CapSense_TOUCHPAD0_RX6_TX6_BSLN0_OFFSET             (538u)
#define CapSense_TOUCHPAD0_RX6_TX6_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX6_TX6_BSLN0_PARAM_ID           (0x8300021Au)

#define CapSense_TOUCHPAD0_RX6_TX6_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[48u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX6_TX6_BSLN_EXT0_OFFSET         (540u)
#define CapSense_TOUCHPAD0_RX6_TX6_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX6_TX6_BSLN_EXT0_PARAM_ID       (0x4600021Cu)

#define CapSense_TOUCHPAD0_RX6_TX6_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[48u].diff)
#define CapSense_TOUCHPAD0_RX6_TX6_DIFF_OFFSET              (542u)
#define CapSense_TOUCHPAD0_RX6_TX6_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX6_TX6_DIFF_PARAM_ID            (0x8200021Eu)

#define CapSense_TOUCHPAD0_RX6_TX6_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[48u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX6_TX6_NEG_BSLN_RST_CNT0_OFFSET (544u)
#define CapSense_TOUCHPAD0_RX6_TX6_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX6_TX6_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A000220u)

#define CapSense_TOUCHPAD0_RX6_TX6_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[48u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX6_TX6_IDAC_COMP0_OFFSET        (545u)
#define CapSense_TOUCHPAD0_RX6_TX6_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX6_TX6_IDAC_COMP0_PARAM_ID      (0x4C000221u)

#define CapSense_TOUCHPAD0_SIZE_VALUE                       (CapSense_dsRam.gestures.size)
#define CapSense_TOUCHPAD0_SIZE_OFFSET                      (546u)
#define CapSense_TOUCHPAD0_SIZE_SIZE                        (1u)
#define CapSense_TOUCHPAD0_SIZE_PARAM_ID                    (0x46000222u)

#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_VALUE      (CapSense_dsRam.gestures.panActiveDistanceX)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_OFFSET     (547u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_SIZE       (1u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_PARAM_ID   (0x6B000223u)

#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_VALUE      (CapSense_dsRam.gestures.panActiveDistanceY)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_OFFSET     (548u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_SIZE       (1u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_PARAM_ID   (0x60000224u)

#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_VALUE               (CapSense_dsRam.gestures.zoomActiveDistanceX)
#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_OFFSET              (549u)
#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_PARAM_ID            (0x66000225u)

#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_VALUE               (CapSense_dsRam.gestures.zoomActiveDistanceY)
#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_OFFSET              (550u)
#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_PARAM_ID            (0x6C000226u)

#define CapSense_TOUCHPAD0_STFK_POS_TH_VALUE                (CapSense_dsRam.gestures.flickActiveDistanceX)
#define CapSense_TOUCHPAD0_STFK_POS_TH_OFFSET               (551u)
#define CapSense_TOUCHPAD0_STFK_POS_TH_SIZE                 (1u)
#define CapSense_TOUCHPAD0_STFK_POS_TH_PARAM_ID             (0x6A000227u)

#define CapSense_TOUCHPAD0_STFK_YPOS_TH_VALUE               (CapSense_dsRam.gestures.flickActiveDistanceY)
#define CapSense_TOUCHPAD0_STFK_YPOS_TH_OFFSET              (552u)
#define CapSense_TOUCHPAD0_STFK_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_STFK_YPOS_TH_PARAM_ID            (0x63000228u)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_VALUE              (CapSense_dsRam.gestures.stScrollThreshold1X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_OFFSET             (553u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_PARAM_ID           (0x65000229u)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_VALUE              (CapSense_dsRam.gestures.stScrollThreshold2X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_OFFSET             (554u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_PARAM_ID           (0x6F00022Au)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_VALUE              (CapSense_dsRam.gestures.stScrollThreshold3X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_OFFSET             (555u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_PARAM_ID           (0x6900022Bu)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_VALUE              (CapSense_dsRam.gestures.stScrollThreshold4X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_OFFSET             (556u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_PARAM_ID           (0x6200022Cu)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_VALUE              (CapSense_dsRam.gestures.stScrollThreshold1Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_OFFSET             (557u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_PARAM_ID           (0x6400022Du)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_VALUE              (CapSense_dsRam.gestures.stScrollThreshold2Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_OFFSET             (558u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_PARAM_ID           (0x6E00022Eu)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_VALUE              (CapSense_dsRam.gestures.stScrollThreshold3Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_OFFSET             (559u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_PARAM_ID           (0x6800022Fu)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_VALUE              (CapSense_dsRam.gestures.stScrollThreshold4Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_OFFSET             (560u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_PARAM_ID           (0x64000230u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_VALUE          (CapSense_dsRam.gestures.stScrollStep1)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_OFFSET         (561u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_PARAM_ID       (0x62000231u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_VALUE          (CapSense_dsRam.gestures.stScrollStep2)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_OFFSET         (562u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_PARAM_ID       (0x68000232u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_VALUE          (CapSense_dsRam.gestures.stScrollStep3)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_OFFSET         (563u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_PARAM_ID       (0x6E000233u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_VALUE          (CapSense_dsRam.gestures.stScrollStep4)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_OFFSET         (564u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_PARAM_ID       (0x65000234u)

#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_VALUE              (CapSense_dsRam.gestures.stScrollDebounce)
#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_OFFSET             (565u)
#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_PARAM_ID           (0x63000235u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold1X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_OFFSET             (566u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_PARAM_ID           (0x69000236u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold2X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_OFFSET             (567u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_PARAM_ID           (0x6F000237u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold3X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_OFFSET             (568u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_PARAM_ID           (0x66000238u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold4X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_OFFSET             (569u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_PARAM_ID           (0x60000239u)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold1Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_OFFSET             (570u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_PARAM_ID           (0x6A00023Au)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold2Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_OFFSET             (571u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_PARAM_ID           (0x6C00023Bu)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold3Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_OFFSET             (572u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_PARAM_ID           (0x6700023Cu)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold4Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_OFFSET             (573u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_PARAM_ID           (0x6100023Du)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_VALUE          (CapSense_dsRam.gestures.dtScrollStep1)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_OFFSET         (574u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_PARAM_ID       (0x6B00023Eu)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_VALUE          (CapSense_dsRam.gestures.dtScrollStep2)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_OFFSET         (575u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_PARAM_ID       (0x6D00023Fu)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_VALUE          (CapSense_dsRam.gestures.dtScrollStep3)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_OFFSET         (576u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_PARAM_ID       (0x66000240u)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_VALUE          (CapSense_dsRam.gestures.dtScrollStep4)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_OFFSET         (577u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_PARAM_ID       (0x60000241u)

#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_VALUE              (CapSense_dsRam.gestures.dtScrollDebounce)
#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_OFFSET             (578u)
#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_PARAM_ID           (0x6A000242u)

#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_VALUE  (CapSense_dsRam.gestures.dtScrollToZoomDebounce)
#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_OFFSET (579u)
#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_SIZE   (1u)
#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_PARAM_ID (0x6C000243u)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH_VALUE               (CapSense_dsRam.gestures.stInScrActiveDistanceX)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH_OFFSET              (580u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH_PARAM_ID            (0x67000244u)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH_VALUE               (CapSense_dsRam.gestures.stInScrActiveDistanceY)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH_OFFSET              (581u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH_PARAM_ID            (0x61000245u)

#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_VALUE           (CapSense_dsRam.gestures.stInScrCountLevel)
#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_OFFSET          (582u)
#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_SIZE            (1u)
#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_PARAM_ID        (0x6B000246u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_VALUE               (CapSense_dsRam.gestures.dtInScrActiveDistanceX)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_OFFSET              (583u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_PARAM_ID            (0x6D000247u)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_VALUE               (CapSense_dsRam.gestures.dtInScrActiveDistanceY)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_OFFSET              (584u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_PARAM_ID            (0x64000248u)

#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_VALUE           (CapSense_dsRam.gestures.dtInScrCountLevel)
#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_OFFSET          (585u)
#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_SIZE            (1u)
#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_PARAM_ID        (0x62000249u)

#define CapSense_TOUCHPAD0_STES_POS_TH_VALUE                (CapSense_dsRam.gestures.edgeSwipeActiveDistance)
#define CapSense_TOUCHPAD0_STES_POS_TH_OFFSET               (586u)
#define CapSense_TOUCHPAD0_STES_POS_TH_SIZE                 (1u)
#define CapSense_TOUCHPAD0_STES_POS_TH_PARAM_ID             (0x6800024Au)

#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_VALUE          (CapSense_dsRam.gestures.topAngleThreshold)
#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_OFFSET         (587u)
#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_SIZE           (1u)
#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_PARAM_ID       (0x6E00024Bu)

#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_VALUE       (CapSense_dsRam.gestures.bottomAngleThreshold)
#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_OFFSET      (588u)
#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_SIZE        (1u)
#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_PARAM_ID    (0x6500024Cu)

#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_VALUE      (CapSense_dsRam.gestures.widthOfDisambiguation)
#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_OFFSET     (589u)
#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_SIZE       (1u)
#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_PARAM_ID   (0x6300024Du)

#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_VALUE            (CapSense_dsRam.gestures.stPanDebounce)
#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_OFFSET           (590u)
#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_SIZE             (1u)
#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_PARAM_ID         (0x6900024Eu)

#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_VALUE            (CapSense_dsRam.gestures.dtPanDebounce)
#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_OFFSET           (591u)
#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_SIZE             (1u)
#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_PARAM_ID         (0x4400024Fu)

#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_VALUE              (CapSense_dsRam.gestures.dtZoomDebounce)
#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_OFFSET             (592u)
#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_PARAM_ID           (0x63000250u)

#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_VALUE    (CapSense_dsRam.gestures.dtPanToZoomDebounce)
#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_OFFSET   (593u)
#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_SIZE     (1u)
#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_PARAM_ID (0x4E000251u)

#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_VALUE       (CapSense_dsRam.gestures.rotateDebounce)
#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_OFFSET      (594u)
#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_SIZE        (1u)
#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_PARAM_ID    (0x6F000252u)

#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_VALUE         (CapSense_dsRam.gestures.completedDebounce)
#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_OFFSET        (595u)
#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_SIZE          (1u)
#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_PARAM_ID      (0x69000253u)

#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_VALUE (CapSense_dsRam.gestures.doubleClickRadius)
#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_OFFSET (596u)
#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_SIZE (1u)
#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_PARAM_ID (0x62000254u)

#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_VALUE (CapSense_dsRam.gestures.clickRadiusX)
#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_OFFSET (597u)
#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_SIZE  (1u)
#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_PARAM_ID (0x64000255u)

#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_VALUE (CapSense_dsRam.gestures.clickRadiusY)
#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_OFFSET (598u)
#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_SIZE  (1u)
#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_PARAM_ID (0x6E000256u)

#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_VALUE           (CapSense_dsRam.gestures.settlingTimeout)
#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_OFFSET          (600u)
#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_SIZE            (2u)
#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_PARAM_ID        (0xA9000258u)

#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_VALUE           (CapSense_dsRam.gestures.resolutionX)
#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_OFFSET          (602u)
#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_SIZE            (2u)
#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_PARAM_ID        (0xA500025Au)

#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_VALUE           (CapSense_dsRam.gestures.resolutionY)
#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_OFFSET          (604u)
#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_SIZE            (2u)
#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_PARAM_ID        (0xA800025Cu)

#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_VALUE   (CapSense_dsRam.gestures.flickSampleTime)
#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_OFFSET  (606u)
#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_SIZE    (2u)
#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_PARAM_ID (0xA400025Eu)

#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_VALUE      (CapSense_dsRam.gestures.edgeSwipeTimeout)
#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_OFFSET     (608u)
#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_SIZE       (2u)
#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_PARAM_ID   (0xA4000260u)

#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.dtClickTimeoutMax)
#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_OFFSET   (610u)
#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_PARAM_ID (0xA8000262u)

#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.dtClickTimeoutMin)
#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_OFFSET   (612u)
#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_PARAM_ID (0xA5000264u)

#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.stClickTimeoutMax)
#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_OFFSET   (614u)
#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_PARAM_ID (0xA9000266u)

#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.stClickTimeoutMin)
#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_OFFSET   (616u)
#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_PARAM_ID (0xA6000268u)

#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_VALUE    (CapSense_dsRam.gestures.stDoubleClickTimeoutMax)
#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_OFFSET   (618u)
#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_SIZE     (2u)
#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_PARAM_ID (0xAA00026Au)

#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_VALUE    (CapSense_dsRam.gestures.stDoubleClickTimeoutMin)
#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_OFFSET   (620u)
#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_SIZE     (2u)
#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_PARAM_ID (0xA700026Cu)

#define CapSense_TOUCHPAD0_GROUP_MASK_VALUE                 (CapSense_dsRam.gestures.groupMask)
#define CapSense_TOUCHPAD0_GROUP_MASK_OFFSET                (622u)
#define CapSense_TOUCHPAD0_GROUP_MASK_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP_MASK_PARAM_ID              (0x6300026Eu)

#define CapSense_TOUCHPAD0_GROUP1_START_VALUE               (CapSense_dsRam.gestures.group1Start)
#define CapSense_TOUCHPAD0_GROUP1_START_OFFSET              (623u)
#define CapSense_TOUCHPAD0_GROUP1_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP1_START_PARAM_ID            (0x6500026Fu)

#define CapSense_TOUCHPAD0_GROUP1_END_VALUE                 (CapSense_dsRam.gestures.group1End)
#define CapSense_TOUCHPAD0_GROUP1_END_OFFSET                (624u)
#define CapSense_TOUCHPAD0_GROUP1_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP1_END_PARAM_ID              (0x69000270u)

#define CapSense_TOUCHPAD0_GROUP2_START_VALUE               (CapSense_dsRam.gestures.group2Start)
#define CapSense_TOUCHPAD0_GROUP2_START_OFFSET              (625u)
#define CapSense_TOUCHPAD0_GROUP2_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP2_START_PARAM_ID            (0x6F000271u)

#define CapSense_TOUCHPAD0_GROUP2_END_VALUE                 (CapSense_dsRam.gestures.group2End)
#define CapSense_TOUCHPAD0_GROUP2_END_OFFSET                (626u)
#define CapSense_TOUCHPAD0_GROUP2_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP2_END_PARAM_ID              (0x65000272u)

#define CapSense_TOUCHPAD0_GROUP3_START_VALUE               (CapSense_dsRam.gestures.group3Start)
#define CapSense_TOUCHPAD0_GROUP3_START_OFFSET              (627u)
#define CapSense_TOUCHPAD0_GROUP3_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP3_START_PARAM_ID            (0x63000273u)

#define CapSense_TOUCHPAD0_GROUP3_END_VALUE                 (CapSense_dsRam.gestures.group3End)
#define CapSense_TOUCHPAD0_GROUP3_END_OFFSET                (628u)
#define CapSense_TOUCHPAD0_GROUP3_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP3_END_PARAM_ID              (0x68000274u)

#define CapSense_TOUCHPAD0_GROUP4_START_VALUE               (CapSense_dsRam.gestures.group4Start)
#define CapSense_TOUCHPAD0_GROUP4_START_OFFSET              (629u)
#define CapSense_TOUCHPAD0_GROUP4_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP4_START_PARAM_ID            (0x6E000275u)

#define CapSense_TOUCHPAD0_GROUP4_END_VALUE                 (CapSense_dsRam.gestures.group4End)
#define CapSense_TOUCHPAD0_GROUP4_END_OFFSET                (630u)
#define CapSense_TOUCHPAD0_GROUP4_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP4_END_PARAM_ID              (0x64000276u)

#define CapSense_TIMESTAMP_INTERVAL_VALUE                   (CapSense_dsRam.timestampInterval)
#define CapSense_TIMESTAMP_INTERVAL_OFFSET                  (632u)
#define CapSense_TIMESTAMP_INTERVAL_SIZE                    (4u)
#define CapSense_TIMESTAMP_INTERVAL_PARAM_ID                (0xC7000278u)

#define CapSense_TIMESTAMP_VALUE                            (CapSense_dsRam.timestamp)
#define CapSense_TIMESTAMP_OFFSET                           (636u)
#define CapSense_TIMESTAMP_SIZE                             (4u)
#define CapSense_TIMESTAMP_PARAM_ID                         (0xC600027Cu)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (640u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x68000280u)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (641u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x6E000281u)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (642u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x87000282u)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (644u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x8A000284u)

#define CapSense_SCAN_CSX_ISC_VALUE                         (CapSense_dsRam.scanCsxISC)
#define CapSense_SCAN_CSX_ISC_OFFSET                        (646u)
#define CapSense_SCAN_CSX_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSX_ISC_PARAM_ID                      (0x4E000286u)

#define CapSense_SCAN_CURRENT_ISC_VALUE                     (CapSense_dsRam.scanCurrentISC)
#define CapSense_SCAN_CURRENT_ISC_OFFSET                    (647u)
#define CapSense_SCAN_CURRENT_ISC_SIZE                      (1u)
#define CapSense_SCAN_CURRENT_ISC_PARAM_ID                  (0x48000287u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_VALUE              (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_TOUCHPAD0_PTR2WD_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_TOUCHPAD0_PTR2SNS_RAM_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_VALUE           (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_VALUE               (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_TOUCHPAD0_STATIC_CONFIG_VALUE              (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_VALUE              (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_TOUCHPAD0_TYPE_VALUE                       (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_TOUCHPAD0_TYPE_OFFSET                      (26u)
#define CapSense_TOUCHPAD0_TYPE_SIZE                        (1u)
#define CapSense_TOUCHPAD0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_TOUCHPAD0_NUM_COLS_VALUE                   (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_TOUCHPAD0_NUM_COLS_OFFSET                  (27u)
#define CapSense_TOUCHPAD0_NUM_COLS_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_TOUCHPAD0_NUM_ROWS_VALUE                   (CapSense_dsFlash.wdgtArray[0].numRows)
#define CapSense_TOUCHPAD0_NUM_ROWS_OFFSET                  (28u)
#define CapSense_TOUCHPAD0_NUM_ROWS_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NUM_ROWS_PARAM_ID                (0x5000001Cu)

#define CapSense_TOUCHPAD0_X_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[0].xResolution)
#define CapSense_TOUCHPAD0_X_RESOLUTION_OFFSET              (30u)
#define CapSense_TOUCHPAD0_X_RESOLUTION_SIZE                (2u)
#define CapSense_TOUCHPAD0_X_RESOLUTION_PARAM_ID            (0x9400001Eu)

#define CapSense_TOUCHPAD0_Y_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[0].yResolution)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_OFFSET              (32u)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_SIZE                (2u)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_PARAM_ID            (0x94000020u)

#define CapSense_TOUCHPAD0_X_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define CapSense_TOUCHPAD0_X_CENT_MULT_OFFSET               (36u)
#define CapSense_TOUCHPAD0_X_CENT_MULT_SIZE                 (4u)
#define CapSense_TOUCHPAD0_X_CENT_MULT_PARAM_ID             (0xDA000024u)

#define CapSense_TOUCHPAD0_Y_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[0].yCentroidMultiplier)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_OFFSET               (40u)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_PARAM_ID             (0xD9000028u)

#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_VALUE           (CapSense_dsFlash.wdgtArray[0].ptr2CsxTouchpad)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_OFFSET          (44u)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_SIZE            (4u)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_PARAM_ID        (0xD800002Cu)

#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[0].ptr2PosHistory)
#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_OFFSET           (48u)
#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_SIZE             (4u)
#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_PARAM_ID         (0xDE000030u)

#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_VALUE           (CapSense_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_OFFSET          (52u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_PARAM_ID        (0x58000034u)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
