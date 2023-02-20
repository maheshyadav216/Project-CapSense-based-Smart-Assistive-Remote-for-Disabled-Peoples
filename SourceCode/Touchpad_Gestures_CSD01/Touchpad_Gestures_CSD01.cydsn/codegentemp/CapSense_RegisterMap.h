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
#define CapSense_SNS_STATUS0_SIZE                           (2u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x80000018u)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (26u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xAA80001Au)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (28u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6F80001Cu)

#define CapSense_TOUCHPAD0_RESOLUTION_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.resolution)
#define CapSense_TOUCHPAD0_RESOLUTION_OFFSET                (30u)
#define CapSense_TOUCHPAD0_RESOLUTION_SIZE                  (2u)
#define CapSense_TOUCHPAD0_RESOLUTION_PARAM_ID              (0xAB80001Eu)

#define CapSense_TOUCHPAD0_FINGER_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.fingerTh)
#define CapSense_TOUCHPAD0_FINGER_TH_OFFSET                 (32u)
#define CapSense_TOUCHPAD0_FINGER_TH_SIZE                   (2u)
#define CapSense_TOUCHPAD0_FINGER_TH_PARAM_ID               (0xAB800020u)

#define CapSense_TOUCHPAD0_NOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.noiseTh)
#define CapSense_TOUCHPAD0_NOISE_TH_OFFSET                  (34u)
#define CapSense_TOUCHPAD0_NOISE_TH_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NOISE_TH_PARAM_ID                (0x6F800022u)

#define CapSense_TOUCHPAD0_NNOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.nNoiseTh)
#define CapSense_TOUCHPAD0_NNOISE_TH_OFFSET                 (35u)
#define CapSense_TOUCHPAD0_NNOISE_TH_SIZE                   (1u)
#define CapSense_TOUCHPAD0_NNOISE_TH_PARAM_ID               (0x69800023u)

#define CapSense_TOUCHPAD0_HYSTERESIS_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.hysteresis)
#define CapSense_TOUCHPAD0_HYSTERESIS_OFFSET                (36u)
#define CapSense_TOUCHPAD0_HYSTERESIS_SIZE                  (1u)
#define CapSense_TOUCHPAD0_HYSTERESIS_PARAM_ID              (0x62800024u)

#define CapSense_TOUCHPAD0_ON_DEBOUNCE_VALUE                (CapSense_dsRam.wdgtList.touchpad0.onDebounce)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_OFFSET               (37u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_PARAM_ID             (0x64800025u)

#define CapSense_TOUCHPAD0_LOW_BSLN_RST_VALUE               (CapSense_dsRam.wdgtList.touchpad0.lowBslnRst)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_OFFSET              (38u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_PARAM_ID            (0x6E800026u)

#define CapSense_TOUCHPAD0_IDAC_MOD0_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.idacMod[0u])
#define CapSense_TOUCHPAD0_IDAC_MOD0_OFFSET                 (39u)
#define CapSense_TOUCHPAD0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_TOUCHPAD0_IDAC_MOD0_PARAM_ID               (0x4E000027u)

#define CapSense_TOUCHPAD0_ROW_IDAC_MOD0_VALUE              (CapSense_dsRam.wdgtList.touchpad0.rowIdacMod[0u])
#define CapSense_TOUCHPAD0_ROW_IDAC_MOD0_OFFSET             (40u)
#define CapSense_TOUCHPAD0_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_TOUCHPAD0_ROW_IDAC_MOD0_PARAM_ID           (0x47000028u)

#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_VALUE            (CapSense_dsRam.wdgtList.touchpad0.idacGainIndex)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_OFFSET           (41u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_PARAM_ID         (0x4C800029u)

#define CapSense_TOUCHPAD0_SNS_CLK_VALUE                    (CapSense_dsRam.wdgtList.touchpad0.snsClk)
#define CapSense_TOUCHPAD0_SNS_CLK_OFFSET                   (42u)
#define CapSense_TOUCHPAD0_SNS_CLK_SIZE                     (2u)
#define CapSense_TOUCHPAD0_SNS_CLK_PARAM_ID                 (0xA580002Au)

#define CapSense_TOUCHPAD0_ROW_SNS_CLK_VALUE                (CapSense_dsRam.wdgtList.touchpad0.rowSnsClk)
#define CapSense_TOUCHPAD0_ROW_SNS_CLK_OFFSET               (44u)
#define CapSense_TOUCHPAD0_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_TOUCHPAD0_ROW_SNS_CLK_PARAM_ID             (0xA880002Cu)

#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_VALUE             (CapSense_dsRam.wdgtList.touchpad0.snsClkSource)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_OFFSET            (46u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_PARAM_ID          (0x4780002Eu)

#define CapSense_TOUCHPAD0_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_dsRam.wdgtList.touchpad0.rowSnsClkSource)
#define CapSense_TOUCHPAD0_ROW_SNS_CLK_SOURCE_OFFSET        (47u)
#define CapSense_TOUCHPAD0_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_TOUCHPAD0_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4180002Fu)

#define CapSense_TOUCHPAD0_GESTURE_ID_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.gestureId)
#define CapSense_TOUCHPAD0_GESTURE_ID_OFFSET                (48u)
#define CapSense_TOUCHPAD0_GESTURE_ID_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GESTURE_ID_PARAM_ID              (0x6B000030u)

#define CapSense_TOUCHPAD0_POS_X_VALUE                      (CapSense_dsRam.wdgtList.touchpad0.posX)
#define CapSense_TOUCHPAD0_POS_X_OFFSET                     (50u)
#define CapSense_TOUCHPAD0_POS_X_SIZE                       (2u)
#define CapSense_TOUCHPAD0_POS_X_PARAM_ID                   (0x84000032u)

#define CapSense_TOUCHPAD0_POS_Y_VALUE                      (CapSense_dsRam.wdgtList.touchpad0.posY)
#define CapSense_TOUCHPAD0_POS_Y_OFFSET                     (52u)
#define CapSense_TOUCHPAD0_POS_Y_SIZE                       (2u)
#define CapSense_TOUCHPAD0_POS_Y_PARAM_ID                   (0x89000034u)

#define CapSense_TOUCHPAD0_COL0_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[0u].raw[0u])
#define CapSense_TOUCHPAD0_COL0_RAW0_OFFSET                 (54u)
#define CapSense_TOUCHPAD0_COL0_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL0_RAW0_PARAM_ID               (0x85000036u)

#define CapSense_TOUCHPAD0_COL0_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[0u].bsln[0u])
#define CapSense_TOUCHPAD0_COL0_BSLN0_OFFSET                (56u)
#define CapSense_TOUCHPAD0_COL0_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_COL0_BSLN0_PARAM_ID              (0x8A000038u)

#define CapSense_TOUCHPAD0_COL0_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[0u].bslnExt[0u])
#define CapSense_TOUCHPAD0_COL0_BSLN_EXT0_OFFSET            (58u)
#define CapSense_TOUCHPAD0_COL0_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_COL0_BSLN_EXT0_PARAM_ID          (0x4E00003Au)

#define CapSense_TOUCHPAD0_COL0_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[0u].diff)
#define CapSense_TOUCHPAD0_COL0_DIFF_OFFSET                 (60u)
#define CapSense_TOUCHPAD0_COL0_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL0_DIFF_PARAM_ID               (0x8B00003Cu)

#define CapSense_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[0u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_OFFSET    (62u)
#define CapSense_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4F00003Eu)

#define CapSense_TOUCHPAD0_COL0_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[0u].idacComp[0u])
#define CapSense_TOUCHPAD0_COL0_IDAC_COMP0_OFFSET           (63u)
#define CapSense_TOUCHPAD0_COL0_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_COL0_IDAC_COMP0_PARAM_ID         (0x4900003Fu)

#define CapSense_TOUCHPAD0_COL1_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[1u].raw[0u])
#define CapSense_TOUCHPAD0_COL1_RAW0_OFFSET                 (64u)
#define CapSense_TOUCHPAD0_COL1_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL1_RAW0_PARAM_ID               (0x8A000040u)

#define CapSense_TOUCHPAD0_COL1_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[1u].bsln[0u])
#define CapSense_TOUCHPAD0_COL1_BSLN0_OFFSET                (66u)
#define CapSense_TOUCHPAD0_COL1_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_COL1_BSLN0_PARAM_ID              (0x86000042u)

#define CapSense_TOUCHPAD0_COL1_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[1u].bslnExt[0u])
#define CapSense_TOUCHPAD0_COL1_BSLN_EXT0_OFFSET            (68u)
#define CapSense_TOUCHPAD0_COL1_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_COL1_BSLN_EXT0_PARAM_ID          (0x43000044u)

#define CapSense_TOUCHPAD0_COL1_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[1u].diff)
#define CapSense_TOUCHPAD0_COL1_DIFF_OFFSET                 (70u)
#define CapSense_TOUCHPAD0_COL1_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL1_DIFF_PARAM_ID               (0x87000046u)

#define CapSense_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[1u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_OFFSET    (72u)
#define CapSense_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_PARAM_ID  (0x40000048u)

#define CapSense_TOUCHPAD0_COL1_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[1u].idacComp[0u])
#define CapSense_TOUCHPAD0_COL1_IDAC_COMP0_OFFSET           (73u)
#define CapSense_TOUCHPAD0_COL1_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_COL1_IDAC_COMP0_PARAM_ID         (0x46000049u)

#define CapSense_TOUCHPAD0_COL2_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[2u].raw[0u])
#define CapSense_TOUCHPAD0_COL2_RAW0_OFFSET                 (74u)
#define CapSense_TOUCHPAD0_COL2_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL2_RAW0_PARAM_ID               (0x8400004Au)

#define CapSense_TOUCHPAD0_COL2_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[2u].bsln[0u])
#define CapSense_TOUCHPAD0_COL2_BSLN0_OFFSET                (76u)
#define CapSense_TOUCHPAD0_COL2_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_COL2_BSLN0_PARAM_ID              (0x8900004Cu)

#define CapSense_TOUCHPAD0_COL2_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[2u].bslnExt[0u])
#define CapSense_TOUCHPAD0_COL2_BSLN_EXT0_OFFSET            (78u)
#define CapSense_TOUCHPAD0_COL2_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_COL2_BSLN_EXT0_PARAM_ID          (0x4D00004Eu)

#define CapSense_TOUCHPAD0_COL2_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[2u].diff)
#define CapSense_TOUCHPAD0_COL2_DIFF_OFFSET                 (80u)
#define CapSense_TOUCHPAD0_COL2_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL2_DIFF_PARAM_ID               (0x8F000050u)

#define CapSense_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[2u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_OFFSET    (82u)
#define CapSense_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4B000052u)

#define CapSense_TOUCHPAD0_COL2_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[2u].idacComp[0u])
#define CapSense_TOUCHPAD0_COL2_IDAC_COMP0_OFFSET           (83u)
#define CapSense_TOUCHPAD0_COL2_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_COL2_IDAC_COMP0_PARAM_ID         (0x4D000053u)

#define CapSense_TOUCHPAD0_COL3_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[3u].raw[0u])
#define CapSense_TOUCHPAD0_COL3_RAW0_OFFSET                 (84u)
#define CapSense_TOUCHPAD0_COL3_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL3_RAW0_PARAM_ID               (0x8E000054u)

#define CapSense_TOUCHPAD0_COL3_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[3u].bsln[0u])
#define CapSense_TOUCHPAD0_COL3_BSLN0_OFFSET                (86u)
#define CapSense_TOUCHPAD0_COL3_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_COL3_BSLN0_PARAM_ID              (0x82000056u)

#define CapSense_TOUCHPAD0_COL3_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[3u].bslnExt[0u])
#define CapSense_TOUCHPAD0_COL3_BSLN_EXT0_OFFSET            (88u)
#define CapSense_TOUCHPAD0_COL3_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_COL3_BSLN_EXT0_PARAM_ID          (0x45000058u)

#define CapSense_TOUCHPAD0_COL3_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[3u].diff)
#define CapSense_TOUCHPAD0_COL3_DIFF_OFFSET                 (90u)
#define CapSense_TOUCHPAD0_COL3_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL3_DIFF_PARAM_ID               (0x8100005Au)

#define CapSense_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[3u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_OFFSET    (92u)
#define CapSense_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4400005Cu)

#define CapSense_TOUCHPAD0_COL3_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[3u].idacComp[0u])
#define CapSense_TOUCHPAD0_COL3_IDAC_COMP0_OFFSET           (93u)
#define CapSense_TOUCHPAD0_COL3_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_COL3_IDAC_COMP0_PARAM_ID         (0x4200005Du)

#define CapSense_TOUCHPAD0_COL4_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[4u].raw[0u])
#define CapSense_TOUCHPAD0_COL4_RAW0_OFFSET                 (94u)
#define CapSense_TOUCHPAD0_COL4_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL4_RAW0_PARAM_ID               (0x8000005Eu)

#define CapSense_TOUCHPAD0_COL4_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[4u].bsln[0u])
#define CapSense_TOUCHPAD0_COL4_BSLN0_OFFSET                (96u)
#define CapSense_TOUCHPAD0_COL4_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_COL4_BSLN0_PARAM_ID              (0x80000060u)

#define CapSense_TOUCHPAD0_COL4_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[4u].bslnExt[0u])
#define CapSense_TOUCHPAD0_COL4_BSLN_EXT0_OFFSET            (98u)
#define CapSense_TOUCHPAD0_COL4_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_COL4_BSLN_EXT0_PARAM_ID          (0x44000062u)

#define CapSense_TOUCHPAD0_COL4_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[4u].diff)
#define CapSense_TOUCHPAD0_COL4_DIFF_OFFSET                 (100u)
#define CapSense_TOUCHPAD0_COL4_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL4_DIFF_PARAM_ID               (0x81000064u)

#define CapSense_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[4u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_OFFSET    (102u)
#define CapSense_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_PARAM_ID  (0x45000066u)

#define CapSense_TOUCHPAD0_COL4_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[4u].idacComp[0u])
#define CapSense_TOUCHPAD0_COL4_IDAC_COMP0_OFFSET           (103u)
#define CapSense_TOUCHPAD0_COL4_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_COL4_IDAC_COMP0_PARAM_ID         (0x43000067u)

#define CapSense_TOUCHPAD0_COL5_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[5u].raw[0u])
#define CapSense_TOUCHPAD0_COL5_RAW0_OFFSET                 (104u)
#define CapSense_TOUCHPAD0_COL5_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL5_RAW0_PARAM_ID               (0x82000068u)

#define CapSense_TOUCHPAD0_COL5_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[5u].bsln[0u])
#define CapSense_TOUCHPAD0_COL5_BSLN0_OFFSET                (106u)
#define CapSense_TOUCHPAD0_COL5_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_COL5_BSLN0_PARAM_ID              (0x8E00006Au)

#define CapSense_TOUCHPAD0_COL5_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[5u].bslnExt[0u])
#define CapSense_TOUCHPAD0_COL5_BSLN_EXT0_OFFSET            (108u)
#define CapSense_TOUCHPAD0_COL5_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_COL5_BSLN_EXT0_PARAM_ID          (0x4B00006Cu)

#define CapSense_TOUCHPAD0_COL5_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[5u].diff)
#define CapSense_TOUCHPAD0_COL5_DIFF_OFFSET                 (110u)
#define CapSense_TOUCHPAD0_COL5_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL5_DIFF_PARAM_ID               (0x8F00006Eu)

#define CapSense_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[5u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_OFFSET    (112u)
#define CapSense_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4D000070u)

#define CapSense_TOUCHPAD0_COL5_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[5u].idacComp[0u])
#define CapSense_TOUCHPAD0_COL5_IDAC_COMP0_OFFSET           (113u)
#define CapSense_TOUCHPAD0_COL5_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_COL5_IDAC_COMP0_PARAM_ID         (0x4B000071u)

#define CapSense_TOUCHPAD0_COL6_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[6u].raw[0u])
#define CapSense_TOUCHPAD0_COL6_RAW0_OFFSET                 (114u)
#define CapSense_TOUCHPAD0_COL6_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL6_RAW0_PARAM_ID               (0x89000072u)

#define CapSense_TOUCHPAD0_COL6_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[6u].bsln[0u])
#define CapSense_TOUCHPAD0_COL6_BSLN0_OFFSET                (116u)
#define CapSense_TOUCHPAD0_COL6_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_COL6_BSLN0_PARAM_ID              (0x84000074u)

#define CapSense_TOUCHPAD0_COL6_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[6u].bslnExt[0u])
#define CapSense_TOUCHPAD0_COL6_BSLN_EXT0_OFFSET            (118u)
#define CapSense_TOUCHPAD0_COL6_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_COL6_BSLN_EXT0_PARAM_ID          (0x40000076u)

#define CapSense_TOUCHPAD0_COL6_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[6u].diff)
#define CapSense_TOUCHPAD0_COL6_DIFF_OFFSET                 (120u)
#define CapSense_TOUCHPAD0_COL6_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_COL6_DIFF_PARAM_ID               (0x87000078u)

#define CapSense_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[6u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_OFFSET    (122u)
#define CapSense_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4300007Au)

#define CapSense_TOUCHPAD0_COL6_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[6u].idacComp[0u])
#define CapSense_TOUCHPAD0_COL6_IDAC_COMP0_OFFSET           (123u)
#define CapSense_TOUCHPAD0_COL6_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_COL6_IDAC_COMP0_PARAM_ID         (0x4500007Bu)

#define CapSense_TOUCHPAD0_ROW0_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[7u].raw[0u])
#define CapSense_TOUCHPAD0_ROW0_RAW0_OFFSET                 (124u)
#define CapSense_TOUCHPAD0_ROW0_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW0_RAW0_PARAM_ID               (0x8600007Cu)

#define CapSense_TOUCHPAD0_ROW0_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[7u].bsln[0u])
#define CapSense_TOUCHPAD0_ROW0_BSLN0_OFFSET                (126u)
#define CapSense_TOUCHPAD0_ROW0_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_ROW0_BSLN0_PARAM_ID              (0x8A00007Eu)

#define CapSense_TOUCHPAD0_ROW0_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[7u].bslnExt[0u])
#define CapSense_TOUCHPAD0_ROW0_BSLN_EXT0_OFFSET            (128u)
#define CapSense_TOUCHPAD0_ROW0_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_ROW0_BSLN_EXT0_PARAM_ID          (0x4C000080u)

#define CapSense_TOUCHPAD0_ROW0_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[7u].diff)
#define CapSense_TOUCHPAD0_ROW0_DIFF_OFFSET                 (130u)
#define CapSense_TOUCHPAD0_ROW0_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW0_DIFF_PARAM_ID               (0x88000082u)

#define CapSense_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[7u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_OFFSET    (132u)
#define CapSense_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4D000084u)

#define CapSense_TOUCHPAD0_ROW0_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[7u].idacComp[0u])
#define CapSense_TOUCHPAD0_ROW0_IDAC_COMP0_OFFSET           (133u)
#define CapSense_TOUCHPAD0_ROW0_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_ROW0_IDAC_COMP0_PARAM_ID         (0x4B000085u)

#define CapSense_TOUCHPAD0_ROW1_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[8u].raw[0u])
#define CapSense_TOUCHPAD0_ROW1_RAW0_OFFSET                 (134u)
#define CapSense_TOUCHPAD0_ROW1_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW1_RAW0_PARAM_ID               (0x89000086u)

#define CapSense_TOUCHPAD0_ROW1_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[8u].bsln[0u])
#define CapSense_TOUCHPAD0_ROW1_BSLN0_OFFSET                (136u)
#define CapSense_TOUCHPAD0_ROW1_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_ROW1_BSLN0_PARAM_ID              (0x86000088u)

#define CapSense_TOUCHPAD0_ROW1_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[8u].bslnExt[0u])
#define CapSense_TOUCHPAD0_ROW1_BSLN_EXT0_OFFSET            (138u)
#define CapSense_TOUCHPAD0_ROW1_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_ROW1_BSLN_EXT0_PARAM_ID          (0x4200008Au)

#define CapSense_TOUCHPAD0_ROW1_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[8u].diff)
#define CapSense_TOUCHPAD0_ROW1_DIFF_OFFSET                 (140u)
#define CapSense_TOUCHPAD0_ROW1_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW1_DIFF_PARAM_ID               (0x8700008Cu)

#define CapSense_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[8u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_OFFSET    (142u)
#define CapSense_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4300008Eu)

#define CapSense_TOUCHPAD0_ROW1_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[8u].idacComp[0u])
#define CapSense_TOUCHPAD0_ROW1_IDAC_COMP0_OFFSET           (143u)
#define CapSense_TOUCHPAD0_ROW1_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_ROW1_IDAC_COMP0_PARAM_ID         (0x4500008Fu)

#define CapSense_TOUCHPAD0_ROW2_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[9u].raw[0u])
#define CapSense_TOUCHPAD0_ROW2_RAW0_OFFSET                 (144u)
#define CapSense_TOUCHPAD0_ROW2_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW2_RAW0_PARAM_ID               (0x81000090u)

#define CapSense_TOUCHPAD0_ROW2_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[9u].bsln[0u])
#define CapSense_TOUCHPAD0_ROW2_BSLN0_OFFSET                (146u)
#define CapSense_TOUCHPAD0_ROW2_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_ROW2_BSLN0_PARAM_ID              (0x8D000092u)

#define CapSense_TOUCHPAD0_ROW2_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[9u].bslnExt[0u])
#define CapSense_TOUCHPAD0_ROW2_BSLN_EXT0_OFFSET            (148u)
#define CapSense_TOUCHPAD0_ROW2_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_ROW2_BSLN_EXT0_PARAM_ID          (0x48000094u)

#define CapSense_TOUCHPAD0_ROW2_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[9u].diff)
#define CapSense_TOUCHPAD0_ROW2_DIFF_OFFSET                 (150u)
#define CapSense_TOUCHPAD0_ROW2_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW2_DIFF_PARAM_ID               (0x8C000096u)

#define CapSense_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[9u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_OFFSET    (152u)
#define CapSense_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4B000098u)

#define CapSense_TOUCHPAD0_ROW2_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[9u].idacComp[0u])
#define CapSense_TOUCHPAD0_ROW2_IDAC_COMP0_OFFSET           (153u)
#define CapSense_TOUCHPAD0_ROW2_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_ROW2_IDAC_COMP0_PARAM_ID         (0x4D000099u)

#define CapSense_TOUCHPAD0_ROW3_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[10u].raw[0u])
#define CapSense_TOUCHPAD0_ROW3_RAW0_OFFSET                 (154u)
#define CapSense_TOUCHPAD0_ROW3_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW3_RAW0_PARAM_ID               (0x8F00009Au)

#define CapSense_TOUCHPAD0_ROW3_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[10u].bsln[0u])
#define CapSense_TOUCHPAD0_ROW3_BSLN0_OFFSET                (156u)
#define CapSense_TOUCHPAD0_ROW3_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_ROW3_BSLN0_PARAM_ID              (0x8200009Cu)

#define CapSense_TOUCHPAD0_ROW3_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[10u].bslnExt[0u])
#define CapSense_TOUCHPAD0_ROW3_BSLN_EXT0_OFFSET            (158u)
#define CapSense_TOUCHPAD0_ROW3_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_ROW3_BSLN_EXT0_PARAM_ID          (0x4600009Eu)

#define CapSense_TOUCHPAD0_ROW3_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[10u].diff)
#define CapSense_TOUCHPAD0_ROW3_DIFF_OFFSET                 (160u)
#define CapSense_TOUCHPAD0_ROW3_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW3_DIFF_PARAM_ID               (0x8E0000A0u)

#define CapSense_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[10u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_OFFSET    (162u)
#define CapSense_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4A0000A2u)

#define CapSense_TOUCHPAD0_ROW3_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[10u].idacComp[0u])
#define CapSense_TOUCHPAD0_ROW3_IDAC_COMP0_OFFSET           (163u)
#define CapSense_TOUCHPAD0_ROW3_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_ROW3_IDAC_COMP0_PARAM_ID         (0x4C0000A3u)

#define CapSense_TOUCHPAD0_ROW4_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[11u].raw[0u])
#define CapSense_TOUCHPAD0_ROW4_RAW0_OFFSET                 (164u)
#define CapSense_TOUCHPAD0_ROW4_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW4_RAW0_PARAM_ID               (0x8F0000A4u)

#define CapSense_TOUCHPAD0_ROW4_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[11u].bsln[0u])
#define CapSense_TOUCHPAD0_ROW4_BSLN0_OFFSET                (166u)
#define CapSense_TOUCHPAD0_ROW4_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_ROW4_BSLN0_PARAM_ID              (0x830000A6u)

#define CapSense_TOUCHPAD0_ROW4_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[11u].bslnExt[0u])
#define CapSense_TOUCHPAD0_ROW4_BSLN_EXT0_OFFSET            (168u)
#define CapSense_TOUCHPAD0_ROW4_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_ROW4_BSLN_EXT0_PARAM_ID          (0x440000A8u)

#define CapSense_TOUCHPAD0_ROW4_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[11u].diff)
#define CapSense_TOUCHPAD0_ROW4_DIFF_OFFSET                 (170u)
#define CapSense_TOUCHPAD0_ROW4_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW4_DIFF_PARAM_ID               (0x800000AAu)

#define CapSense_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[11u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_OFFSET    (172u)
#define CapSense_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_PARAM_ID  (0x450000ACu)

#define CapSense_TOUCHPAD0_ROW4_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[11u].idacComp[0u])
#define CapSense_TOUCHPAD0_ROW4_IDAC_COMP0_OFFSET           (173u)
#define CapSense_TOUCHPAD0_ROW4_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_ROW4_IDAC_COMP0_PARAM_ID         (0x430000ADu)

#define CapSense_TOUCHPAD0_ROW5_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[12u].raw[0u])
#define CapSense_TOUCHPAD0_ROW5_RAW0_OFFSET                 (174u)
#define CapSense_TOUCHPAD0_ROW5_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW5_RAW0_PARAM_ID               (0x810000AEu)

#define CapSense_TOUCHPAD0_ROW5_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[12u].bsln[0u])
#define CapSense_TOUCHPAD0_ROW5_BSLN0_OFFSET                (176u)
#define CapSense_TOUCHPAD0_ROW5_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_ROW5_BSLN0_PARAM_ID              (0x8B0000B0u)

#define CapSense_TOUCHPAD0_ROW5_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[12u].bslnExt[0u])
#define CapSense_TOUCHPAD0_ROW5_BSLN_EXT0_OFFSET            (178u)
#define CapSense_TOUCHPAD0_ROW5_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_ROW5_BSLN_EXT0_PARAM_ID          (0x4F0000B2u)

#define CapSense_TOUCHPAD0_ROW5_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[12u].diff)
#define CapSense_TOUCHPAD0_ROW5_DIFF_OFFSET                 (180u)
#define CapSense_TOUCHPAD0_ROW5_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW5_DIFF_PARAM_ID               (0x8A0000B4u)

#define CapSense_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[12u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_OFFSET    (182u)
#define CapSense_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4E0000B6u)

#define CapSense_TOUCHPAD0_ROW5_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[12u].idacComp[0u])
#define CapSense_TOUCHPAD0_ROW5_IDAC_COMP0_OFFSET           (183u)
#define CapSense_TOUCHPAD0_ROW5_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_ROW5_IDAC_COMP0_PARAM_ID         (0x480000B7u)

#define CapSense_TOUCHPAD0_ROW6_RAW0_VALUE                  (CapSense_dsRam.snsList.touchpad0[13u].raw[0u])
#define CapSense_TOUCHPAD0_ROW6_RAW0_OFFSET                 (184u)
#define CapSense_TOUCHPAD0_ROW6_RAW0_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW6_RAW0_PARAM_ID               (0x890000B8u)

#define CapSense_TOUCHPAD0_ROW6_BSLN0_VALUE                 (CapSense_dsRam.snsList.touchpad0[13u].bsln[0u])
#define CapSense_TOUCHPAD0_ROW6_BSLN0_OFFSET                (186u)
#define CapSense_TOUCHPAD0_ROW6_BSLN0_SIZE                  (2u)
#define CapSense_TOUCHPAD0_ROW6_BSLN0_PARAM_ID              (0x850000BAu)

#define CapSense_TOUCHPAD0_ROW6_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.touchpad0[13u].bslnExt[0u])
#define CapSense_TOUCHPAD0_ROW6_BSLN_EXT0_OFFSET            (188u)
#define CapSense_TOUCHPAD0_ROW6_BSLN_EXT0_SIZE              (1u)
#define CapSense_TOUCHPAD0_ROW6_BSLN_EXT0_PARAM_ID          (0x400000BCu)

#define CapSense_TOUCHPAD0_ROW6_DIFF_VALUE                  (CapSense_dsRam.snsList.touchpad0[13u].diff)
#define CapSense_TOUCHPAD0_ROW6_DIFF_OFFSET                 (190u)
#define CapSense_TOUCHPAD0_ROW6_DIFF_SIZE                   (2u)
#define CapSense_TOUCHPAD0_ROW6_DIFF_PARAM_ID               (0x840000BEu)

#define CapSense_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.touchpad0[13u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_OFFSET    (192u)
#define CapSense_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_PARAM_ID  (0x410000C0u)

#define CapSense_TOUCHPAD0_ROW6_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.touchpad0[13u].idacComp[0u])
#define CapSense_TOUCHPAD0_ROW6_IDAC_COMP0_OFFSET           (193u)
#define CapSense_TOUCHPAD0_ROW6_IDAC_COMP0_SIZE             (1u)
#define CapSense_TOUCHPAD0_ROW6_IDAC_COMP0_PARAM_ID         (0x470000C1u)

#define CapSense_TOUCHPAD0_SIZE_VALUE                       (CapSense_dsRam.gestures.size)
#define CapSense_TOUCHPAD0_SIZE_OFFSET                      (194u)
#define CapSense_TOUCHPAD0_SIZE_SIZE                        (1u)
#define CapSense_TOUCHPAD0_SIZE_PARAM_ID                    (0x4D0000C2u)

#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_VALUE      (CapSense_dsRam.gestures.panActiveDistanceX)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_OFFSET     (195u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_SIZE       (1u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_X_PARAM_ID   (0x600000C3u)

#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_VALUE      (CapSense_dsRam.gestures.panActiveDistanceY)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_OFFSET     (196u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_SIZE       (1u)
#define CapSense_TOUCHPAD0_PAN_ACTIVE_DISTANCE_Y_PARAM_ID   (0x6B0000C4u)

#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_VALUE               (CapSense_dsRam.gestures.zoomActiveDistanceX)
#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_OFFSET              (197u)
#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTZM_XPOS_TH_PARAM_ID            (0x6D0000C5u)

#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_VALUE               (CapSense_dsRam.gestures.zoomActiveDistanceY)
#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_OFFSET              (198u)
#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTZM_YPOS_TH_PARAM_ID            (0x670000C6u)

#define CapSense_TOUCHPAD0_STFK_POS_TH_VALUE                (CapSense_dsRam.gestures.flickActiveDistanceX)
#define CapSense_TOUCHPAD0_STFK_POS_TH_OFFSET               (199u)
#define CapSense_TOUCHPAD0_STFK_POS_TH_SIZE                 (1u)
#define CapSense_TOUCHPAD0_STFK_POS_TH_PARAM_ID             (0x610000C7u)

#define CapSense_TOUCHPAD0_STFK_YPOS_TH_VALUE               (CapSense_dsRam.gestures.flickActiveDistanceY)
#define CapSense_TOUCHPAD0_STFK_YPOS_TH_OFFSET              (200u)
#define CapSense_TOUCHPAD0_STFK_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_STFK_YPOS_TH_PARAM_ID            (0x680000C8u)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_VALUE              (CapSense_dsRam.gestures.stScrollThreshold1X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_OFFSET             (201u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH1_PARAM_ID           (0x6E0000C9u)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_VALUE              (CapSense_dsRam.gestures.stScrollThreshold2X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_OFFSET             (202u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH2_PARAM_ID           (0x640000CAu)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_VALUE              (CapSense_dsRam.gestures.stScrollThreshold3X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_OFFSET             (203u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH3_PARAM_ID           (0x620000CBu)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_VALUE              (CapSense_dsRam.gestures.stScrollThreshold4X)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_OFFSET             (204u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH4_PARAM_ID           (0x690000CCu)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_VALUE              (CapSense_dsRam.gestures.stScrollThreshold1Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_OFFSET             (205u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH1_PARAM_ID           (0x6F0000CDu)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_VALUE              (CapSense_dsRam.gestures.stScrollThreshold2Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_OFFSET             (206u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH2_PARAM_ID           (0x650000CEu)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_VALUE              (CapSense_dsRam.gestures.stScrollThreshold3Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_OFFSET             (207u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH3_PARAM_ID           (0x630000CFu)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_VALUE              (CapSense_dsRam.gestures.stScrollThreshold4Y)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_OFFSET             (208u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH4_PARAM_ID           (0x6F0000D0u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_VALUE          (CapSense_dsRam.gestures.stScrollStep1)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_OFFSET         (209u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP1_PARAM_ID       (0x690000D1u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_VALUE          (CapSense_dsRam.gestures.stScrollStep2)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_OFFSET         (210u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP2_PARAM_ID       (0x630000D2u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_VALUE          (CapSense_dsRam.gestures.stScrollStep3)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_OFFSET         (211u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP3_PARAM_ID       (0x650000D3u)

#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_VALUE          (CapSense_dsRam.gestures.stScrollStep4)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_OFFSET         (212u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_SIZE           (1u)
#define CapSense_TOUCHPAD0_STSL_SCROLL_STEP4_PARAM_ID       (0x6E0000D4u)

#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_VALUE              (CapSense_dsRam.gestures.stScrollDebounce)
#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_OFFSET             (213u)
#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_SIZE               (1u)
#define CapSense_TOUCHPAD0_STSL_DEBOUNCE_PARAM_ID           (0x680000D5u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold1X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_OFFSET             (214u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH1_PARAM_ID           (0x620000D6u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold2X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_OFFSET             (215u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH2_PARAM_ID           (0x640000D7u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold3X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_OFFSET             (216u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH3_PARAM_ID           (0x6D0000D8u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold4X)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_OFFSET             (217u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH4_PARAM_ID           (0x6B0000D9u)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold1Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_OFFSET             (218u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH1_PARAM_ID           (0x610000DAu)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold2Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_OFFSET             (219u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH2_PARAM_ID           (0x670000DBu)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold3Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_OFFSET             (220u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH3_PARAM_ID           (0x6C0000DCu)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_VALUE              (CapSense_dsRam.gestures.dtScrollThreshold4Y)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_OFFSET             (221u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH4_PARAM_ID           (0x6A0000DDu)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_VALUE          (CapSense_dsRam.gestures.dtScrollStep1)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_OFFSET         (222u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP1_PARAM_ID       (0x600000DEu)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_VALUE          (CapSense_dsRam.gestures.dtScrollStep2)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_OFFSET         (223u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP2_PARAM_ID       (0x660000DFu)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_VALUE          (CapSense_dsRam.gestures.dtScrollStep3)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_OFFSET         (224u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP3_PARAM_ID       (0x600000E0u)

#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_VALUE          (CapSense_dsRam.gestures.dtScrollStep4)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_OFFSET         (225u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_SIZE           (1u)
#define CapSense_TOUCHPAD0_DTSL_SCROLL_STEP4_PARAM_ID       (0x660000E1u)

#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_VALUE              (CapSense_dsRam.gestures.dtScrollDebounce)
#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_OFFSET             (226u)
#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTSL_DEBOUNCE_PARAM_ID           (0x6C0000E2u)

#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_VALUE  (CapSense_dsRam.gestures.dtScrollToZoomDebounce)
#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_OFFSET (227u)
#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_SIZE   (1u)
#define CapSense_TOUCHPAD0_DTZM_SCROLL_ZOOM_DEBOUNCE_PARAM_ID (0x6A0000E3u)

#define CapSense_TOUCHPAD0_STSL_XPOS_TH_VALUE               (CapSense_dsRam.gestures.stInScrActiveDistanceX)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH_OFFSET              (228u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_STSL_XPOS_TH_PARAM_ID            (0x610000E4u)

#define CapSense_TOUCHPAD0_STSL_YPOS_TH_VALUE               (CapSense_dsRam.gestures.stInScrActiveDistanceY)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH_OFFSET              (229u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_STSL_YPOS_TH_PARAM_ID            (0x670000E5u)

#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_VALUE           (CapSense_dsRam.gestures.stInScrCountLevel)
#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_OFFSET          (230u)
#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_SIZE            (1u)
#define CapSense_TOUCHPAD0_STSL_COUNT_LEVEL_PARAM_ID        (0x6D0000E6u)

#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_VALUE               (CapSense_dsRam.gestures.dtInScrActiveDistanceX)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_OFFSET              (231u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTSL_XPOS_TH_PARAM_ID            (0x6B0000E7u)

#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_VALUE               (CapSense_dsRam.gestures.dtInScrActiveDistanceY)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_OFFSET              (232u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_SIZE                (1u)
#define CapSense_TOUCHPAD0_DTSL_YPOS_TH_PARAM_ID            (0x620000E8u)

#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_VALUE           (CapSense_dsRam.gestures.dtInScrCountLevel)
#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_OFFSET          (233u)
#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_SIZE            (1u)
#define CapSense_TOUCHPAD0_DTSL_COUNT_LEVEL_PARAM_ID        (0x640000E9u)

#define CapSense_TOUCHPAD0_STES_POS_TH_VALUE                (CapSense_dsRam.gestures.edgeSwipeActiveDistance)
#define CapSense_TOUCHPAD0_STES_POS_TH_OFFSET               (234u)
#define CapSense_TOUCHPAD0_STES_POS_TH_SIZE                 (1u)
#define CapSense_TOUCHPAD0_STES_POS_TH_PARAM_ID             (0x6E0000EAu)

#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_VALUE          (CapSense_dsRam.gestures.topAngleThreshold)
#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_OFFSET         (235u)
#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_SIZE           (1u)
#define CapSense_TOUCHPAD0_STES_TOP_ANGLE_TH_PARAM_ID       (0x680000EBu)

#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_VALUE       (CapSense_dsRam.gestures.bottomAngleThreshold)
#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_OFFSET      (236u)
#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_SIZE        (1u)
#define CapSense_TOUCHPAD0_STES_BOTTOM_ANGLE_TH_PARAM_ID    (0x630000ECu)

#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_VALUE      (CapSense_dsRam.gestures.widthOfDisambiguation)
#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_OFFSET     (237u)
#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_SIZE       (1u)
#define CapSense_TOUCHPAD0_STES_DISAM_AREA_WIDTH_PARAM_ID   (0x650000EDu)

#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_VALUE            (CapSense_dsRam.gestures.stPanDebounce)
#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_OFFSET           (238u)
#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_SIZE             (1u)
#define CapSense_TOUCHPAD0_ST_PAN_DEBOUNCE_PARAM_ID         (0x6F0000EEu)

#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_VALUE            (CapSense_dsRam.gestures.dtPanDebounce)
#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_OFFSET           (239u)
#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_SIZE             (1u)
#define CapSense_TOUCHPAD0_DT_PAN_DEBOUNCE_PARAM_ID         (0x420000EFu)

#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_VALUE              (CapSense_dsRam.gestures.dtZoomDebounce)
#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_OFFSET             (240u)
#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_SIZE               (1u)
#define CapSense_TOUCHPAD0_DTZM_DEBOUNCE_PARAM_ID           (0x650000F0u)

#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_VALUE    (CapSense_dsRam.gestures.dtPanToZoomDebounce)
#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_OFFSET   (241u)
#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_SIZE     (1u)
#define CapSense_TOUCHPAD0_DT_PAN_TO_ZOOM_DEBOUNCE_PARAM_ID (0x480000F1u)

#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_VALUE       (CapSense_dsRam.gestures.rotateDebounce)
#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_OFFSET      (242u)
#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_SIZE        (1u)
#define CapSense_TOUCHPAD0_STRT_ROTATE_DEBOUNCE_PARAM_ID    (0x690000F2u)

#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_VALUE         (CapSense_dsRam.gestures.completedDebounce)
#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_OFFSET        (243u)
#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_SIZE          (1u)
#define CapSense_TOUCHPAD0_COMPLETED_DEBOUNCE_PARAM_ID      (0x6F0000F3u)

#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_VALUE (CapSense_dsRam.gestures.doubleClickRadius)
#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_OFFSET (244u)
#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_SIZE (1u)
#define CapSense_TOUCHPAD0_STDC_MAX_RADIUS_DISPLACEMENT_PARAM_ID (0x640000F4u)

#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_VALUE (CapSense_dsRam.gestures.clickRadiusX)
#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_OFFSET (245u)
#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_SIZE  (1u)
#define CapSense_TOUCHPAD0_STSC_XMAX_POS_DISPLACEMENT_PARAM_ID (0x620000F5u)

#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_VALUE (CapSense_dsRam.gestures.clickRadiusY)
#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_OFFSET (246u)
#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_SIZE  (1u)
#define CapSense_TOUCHPAD0_STSC_YMAX_POS_DISPLACEMENT_PARAM_ID (0x680000F6u)

#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_VALUE           (CapSense_dsRam.gestures.settlingTimeout)
#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_OFFSET          (248u)
#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_SIZE            (2u)
#define CapSense_TOUCHPAD0_DT_SETTLING_TIME_PARAM_ID        (0xAF0000F8u)

#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_VALUE           (CapSense_dsRam.gestures.resolutionX)
#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_OFFSET          (250u)
#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_SIZE            (2u)
#define CapSense_TOUCHPAD0_GES_X_RESOLUTION_PARAM_ID        (0xA30000FAu)

#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_VALUE           (CapSense_dsRam.gestures.resolutionY)
#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_OFFSET          (252u)
#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_SIZE            (2u)
#define CapSense_TOUCHPAD0_GES_Y_RESOLUTION_PARAM_ID        (0xAE0000FCu)

#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_VALUE   (CapSense_dsRam.gestures.flickSampleTime)
#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_OFFSET  (254u)
#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_SIZE    (2u)
#define CapSense_TOUCHPAD0_STFK_MAX_SAMPLE_INTERVAL_PARAM_ID (0xA20000FEu)

#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_VALUE      (CapSense_dsRam.gestures.edgeSwipeTimeout)
#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_OFFSET     (256u)
#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_SIZE       (2u)
#define CapSense_TOUCHPAD0_STES_TIMEOUT_INTERVAL_PARAM_ID   (0xA7000100u)

#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.dtClickTimeoutMax)
#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_OFFSET   (258u)
#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_DTSC_MAX_TOUCH_DURATION_PARAM_ID (0xAB000102u)

#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.dtClickTimeoutMin)
#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_OFFSET   (260u)
#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_DTSC_MIN_TOUCH_DURATION_PARAM_ID (0xA6000104u)

#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.stClickTimeoutMax)
#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_OFFSET   (262u)
#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_STSC_MAX_TOUCH_DURATION_PARAM_ID (0xAA000106u)

#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_VALUE    (CapSense_dsRam.gestures.stClickTimeoutMin)
#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_OFFSET   (264u)
#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_SIZE     (2u)
#define CapSense_TOUCHPAD0_STSC_MIN_TOUCH_DURATION_PARAM_ID (0xA5000108u)

#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_VALUE    (CapSense_dsRam.gestures.stDoubleClickTimeoutMax)
#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_OFFSET   (266u)
#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_SIZE     (2u)
#define CapSense_TOUCHPAD0_STDC_MAX_TOUCH_INTERVAL_PARAM_ID (0xA900010Au)

#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_VALUE    (CapSense_dsRam.gestures.stDoubleClickTimeoutMin)
#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_OFFSET   (268u)
#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_SIZE     (2u)
#define CapSense_TOUCHPAD0_STDC_MIN_TOUCH_INTERVAL_PARAM_ID (0xA400010Cu)

#define CapSense_TOUCHPAD0_GROUP_MASK_VALUE                 (CapSense_dsRam.gestures.groupMask)
#define CapSense_TOUCHPAD0_GROUP_MASK_OFFSET                (270u)
#define CapSense_TOUCHPAD0_GROUP_MASK_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP_MASK_PARAM_ID              (0x6000010Eu)

#define CapSense_TOUCHPAD0_GROUP1_START_VALUE               (CapSense_dsRam.gestures.group1Start)
#define CapSense_TOUCHPAD0_GROUP1_START_OFFSET              (271u)
#define CapSense_TOUCHPAD0_GROUP1_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP1_START_PARAM_ID            (0x6600010Fu)

#define CapSense_TOUCHPAD0_GROUP1_END_VALUE                 (CapSense_dsRam.gestures.group1End)
#define CapSense_TOUCHPAD0_GROUP1_END_OFFSET                (272u)
#define CapSense_TOUCHPAD0_GROUP1_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP1_END_PARAM_ID              (0x6A000110u)

#define CapSense_TOUCHPAD0_GROUP2_START_VALUE               (CapSense_dsRam.gestures.group2Start)
#define CapSense_TOUCHPAD0_GROUP2_START_OFFSET              (273u)
#define CapSense_TOUCHPAD0_GROUP2_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP2_START_PARAM_ID            (0x6C000111u)

#define CapSense_TOUCHPAD0_GROUP2_END_VALUE                 (CapSense_dsRam.gestures.group2End)
#define CapSense_TOUCHPAD0_GROUP2_END_OFFSET                (274u)
#define CapSense_TOUCHPAD0_GROUP2_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP2_END_PARAM_ID              (0x66000112u)

#define CapSense_TOUCHPAD0_GROUP3_START_VALUE               (CapSense_dsRam.gestures.group3Start)
#define CapSense_TOUCHPAD0_GROUP3_START_OFFSET              (275u)
#define CapSense_TOUCHPAD0_GROUP3_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP3_START_PARAM_ID            (0x60000113u)

#define CapSense_TOUCHPAD0_GROUP3_END_VALUE                 (CapSense_dsRam.gestures.group3End)
#define CapSense_TOUCHPAD0_GROUP3_END_OFFSET                (276u)
#define CapSense_TOUCHPAD0_GROUP3_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP3_END_PARAM_ID              (0x6B000114u)

#define CapSense_TOUCHPAD0_GROUP4_START_VALUE               (CapSense_dsRam.gestures.group4Start)
#define CapSense_TOUCHPAD0_GROUP4_START_OFFSET              (277u)
#define CapSense_TOUCHPAD0_GROUP4_START_SIZE                (1u)
#define CapSense_TOUCHPAD0_GROUP4_START_PARAM_ID            (0x6D000115u)

#define CapSense_TOUCHPAD0_GROUP4_END_VALUE                 (CapSense_dsRam.gestures.group4End)
#define CapSense_TOUCHPAD0_GROUP4_END_OFFSET                (278u)
#define CapSense_TOUCHPAD0_GROUP4_END_SIZE                  (1u)
#define CapSense_TOUCHPAD0_GROUP4_END_PARAM_ID              (0x67000116u)

#define CapSense_TIMESTAMP_INTERVAL_VALUE                   (CapSense_dsRam.timestampInterval)
#define CapSense_TIMESTAMP_INTERVAL_OFFSET                  (280u)
#define CapSense_TIMESTAMP_INTERVAL_SIZE                    (4u)
#define CapSense_TIMESTAMP_INTERVAL_PARAM_ID                (0xC4000118u)

#define CapSense_TIMESTAMP_VALUE                            (CapSense_dsRam.timestamp)
#define CapSense_TIMESTAMP_OFFSET                           (284u)
#define CapSense_TIMESTAMP_SIZE                             (4u)
#define CapSense_TIMESTAMP_PARAM_ID                         (0xC500011Cu)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (288u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x65000120u)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (289u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x63000121u)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (290u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8A000122u)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (292u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x87000124u)

#define CapSense_SCAN_CSD_ISC_VALUE                         (CapSense_dsRam.scanCsdISC)
#define CapSense_SCAN_CSD_ISC_OFFSET                        (294u)
#define CapSense_SCAN_CSD_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSD_ISC_PARAM_ID                      (0x43000126u)

#define CapSense_SCAN_CURRENT_ISC_VALUE                     (CapSense_dsRam.scanCurrentISC)
#define CapSense_SCAN_CURRENT_ISC_OFFSET                    (295u)
#define CapSense_SCAN_CURRENT_ISC_SIZE                      (1u)
#define CapSense_SCAN_CURRENT_ISC_PARAM_ID                  (0x45000127u)


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

#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[0].ptr2PosHistory)
#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_OFFSET           (44u)
#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_SIZE             (4u)
#define CapSense_TOUCHPAD0_PTR2POS_HISTORY_PARAM_ID         (0xD800002Cu)

#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_VALUE           (CapSense_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_OFFSET          (48u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_PARAM_ID        (0x59000030u)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
