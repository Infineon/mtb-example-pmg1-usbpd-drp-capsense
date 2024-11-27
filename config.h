/******************************************************************************
* File Name: config.h
*
* Description: This header file defines the application configuration for the PMG1
*              MCU USBPD DRP Example for ModusToolBox.
*
* Related Document: See README.md
*
*******************************************************************************
* Copyright 2021-2024, Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
*
* This software, including source code, documentation and related
* materials ("Software") is owned by Cypress Semiconductor Corporation
* or one of its affiliates ("Cypress") and is protected by and subject to
* worldwide patent protection (United States and foreign),
* United States copyright laws and international treaty provisions.
* Therefore, you may use this Software only as provided in the license
* agreement accompanying the software package from which you
* obtained this Software ("EULA").
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software
* source code solely for use in connection with Cypress's
* integrated circuit products.  Any reproduction, modification, translation,
* compilation, or representation of this Software except as specified
* above is prohibited without the express written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
* reserves the right to make changes to the Software without notice. Cypress
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer
* of such system or application assumes all risk of such use and in doing
* so agrees to indemnify Cypress against all liability.
*******************************************************************************/
#ifndef _CONFIG_H_
#define _CONFIG_H_

/*******************************************************************************
 * Header files
 ******************************************************************************/
#include "cybsp.h"

/*******************************************************************************
 * Macros
 ******************************************************************************/
#define APP_VBUS_POLL_ADC_ID                    (CY_USBPD_ADC_ID_0)
#define APP_VBUS_POLL_ADC_INPUT                 (CY_USBPD_ADC_INPUT_AMUX_B)

/*
 * Macro defines additional delay in milliseconds before the PD stack starts sending
 * SRC_CAP message. This may be required to work with some non-compliant sink devices
 * which require more start up time for PD.
 */
#define DELAY_SRC_CAP_START_MS                  (100u)

/*
 * Port 0 LED timer. The timer is used to indicate the power role of Port 0.
 * When timer expires, LED glows if the Port 0 is in Source. LED Toggles if the Port 0
 * is in Sink.
 */
#define PORT_0_TIMER_ID                         (CY_PDUTILS_TIMER_USER_START_ID)

/*
 * Port 1 LED timer. The timer is used to indicate the power role of Port 1.
 * When timer expires, LED glows if the Port 1 is in Source. LED Toggles if the Port 1
 * is in Sink.
 */
#define PORT_1_TIMER_ID                         (CY_PDUTILS_TIMER_USER_START_ID + 1)

/* Delay for LED */
#define PORT_TIMER_DELAY                        (1000)

/* CY Assert Failure */
#define CY_ASSERT_FAILED                        (0u)

/*
 * Time period for EPR Exit mode
 */
#define EPR_MODE_EXIT_TIMER_PERIOD              (5u)


#endif /* _CONFIG_H_ */

/* End of file [] */
