/*******************************************************************************
* File Name: main.c
*
* Version: 1.10
*
* Description:
* This code example demonstrates the PSoC 4 CSD CapSense Component with a touchpad widget
* and the use of both gestures and the CapSense tuner. LEDs are also used to show when 
* specific gestures are detected.
*
******************************************************************************
* Copyright (2019-2020), Cypress Semiconductor Corporation.
******************************************************************************
* This software, including source code, documentation and related materials
* ("Software") is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and 
* foreign), United States copyright laws and international treaty provisions. 
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the 
* Cypress source code and derivative works for the sole purpose of creating 
* custom software in support of licensee product, such licensee product to be
* used only in conjunction with Cypress's integrated circuit as specified in the
* applicable agreement. Any reproduction, modification, translation, compilation,
* or representation of this Software except as specified above is prohibited 
* without the express written permission of Cypress.
* 
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, 
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes to the Software without notice. 
* Cypress does not assume any liability arising out of the application or use
* of Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use as critical components in any products 
* where a malfunction or failure may reasonably be expected to result in 
* significant injury or death ("ACTIVE Risk Product"). By including Cypress's 
* product in a ACTIVE Risk Product, the manufacturer of such system or application
* assumes all risk of such use and in doing so indemnifies Cypress against all
* liability. Use of this Software may be limited by and subject to the applicable
* Cypress software license agreement.
*******************************************************************************/

#include "project.h"

/* PWM duty cycles for zero and fifty percent */
#define PWM_LED_OFF         10001
#define PWM_LED_HALF_POWER  5000

/* Scales x and y value of the touchpad to PWM compare value */
#define PWM_SCALAR          100

/*  */
#define LED_OFF             1
#define LED_ON              0

/*******************************************************************************
* Function Name: main
********************************************************************************
* Summary:
*  The main function performs the following actions:
*   1. Starts all hardware Components
*   2. Starts the timestamp
*   3. Initial scan of all CapSense widgets
*   4. Checks if scan is complete
*   4. Process all data and update time stamp
*   5. Checks if there was a gesture or if the touchpad was touched
*   6. Sends all data to the CapSense Tuner
*   7. Scans all CapSense widgets and returns to step four
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
int main(void)
{
    /* Stores the current touchpad X and Y values */
    uint32 Xcord;
    uint16 Ycord;
    
    /* Stores the current gesture */
    uint32 gesture;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Starts all Componenets */
    EZI2C_Start();
    CapSense_Start();
    PWM_Blue_Start();
    PWM_Green_Start();
    
    /* Set up communication data buffer to CapSense data structure to be exposed to
       I2C master */
    EZI2C_EzI2CSetBuffer1(sizeof(CapSense_dsRam), sizeof(CapSense_dsRam), (uint8 *)&CapSense_dsRam);
    
    /* Sets up a callback function using sysTick timer isr, the callback function
       is part of the CySysTickSetCallback API */
    CapSense_dsRam.timestampInterval = 2u;
    CySysTickStart();
    CySysTickSetCallback(0u, CapSense_IncrementGestureTimestamp);
    
    CapSense_ScanAllWidgets();
    
    for(;;)
    {
        /* Checks if the scan was completed before trying to process data */
        if(CapSense_NOT_BUSY == CapSense_IsBusy())
        {
            CapSense_ProcessAllWidgets();
            
            /* Stores the current detected gesture */
            gesture = CapSense_DecodeWidgetGestures(CapSense_TOUCHPAD0_WDGT_ID);
            
            /* Stores current finger position on the touchpad */            
            Xcord = CapSense_GetXYCoordinates(CapSense_TOUCHPAD0_WDGT_ID);
            Ycord = Xcord >> 16;
            Xcord = (uint16)Xcord;
            
            
            /* Controls specific LEDs based on the gesture that was captured */
            switch(gesture)
            {
            case CapSense_ONE_FINGER_SINGLE_CLICK:
                PWM_Blue_WriteCompare(PWM_LED_HALF_POWER);
                PWM_Green_WriteCompare(PWM_LED_HALF_POWER);
                break;
            case CapSense_ONE_FINGER_EDGE_SWIPE_LEFT:
                /* If Led was off turn it to half power, if on turn it off */
                PWM_Blue_WriteCompare(PWM_Blue_ReadCompare() == PWM_LED_OFF ? PWM_LED_HALF_POWER: PWM_LED_OFF);
                break;
            case CapSense_ONE_FINGER_EDGE_SWIPE_RIGTH:
                /* If Led was off turn it to half power, if on turn it off */
                PWM_Green_WriteCompare(PWM_Green_ReadCompare() == PWM_LED_OFF ? PWM_LED_HALF_POWER: PWM_LED_OFF);
                break;
            case CapSense_ONE_FINGER_ROTATE_CW:
                /* Turns off the red LED */
                Red_LED_Write(LED_OFF);
                break;
            case CapSense_ONE_FINGER_ROTATE_CCW:
                /* Turns on the red LED */
                Red_LED_Write(LED_ON);
                break;
            default:
                /* Check if the touchpad was touched */
                if(CapSense_GetXYCoordinates(CapSense_TOUCHPAD0_WDGT_ID) != CapSense_TOUCHPAD_NO_TOUCH)
                {
                    /* Change the PWM compare value based on finger position as long as the light was not off */
                    PWM_Blue_WriteCompare(PWM_Blue_ReadCompare() == PWM_LED_OFF ? PWM_LED_OFF : (Xcord * PWM_SCALAR));
                    PWM_Green_WriteCompare(PWM_Green_ReadCompare() == PWM_LED_OFF ? PWM_LED_OFF : (Ycord * PWM_SCALAR));
                }
                break;
            }
            
            /* Required to maintain sychronization with tuner interface */
            CapSense_RunTuner();
            
            /* Initiates the next scan of all widgets */
            CapSense_ScanAllWidgets();
        }
    }
}
