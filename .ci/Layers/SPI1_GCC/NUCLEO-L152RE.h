/*---------------------------------------------------------------------------
 * Copyright (c) 2025 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#ifndef NUCLEO_L152RE_H_
#define NUCLEO_L152RE_H_

#include "GPIO_STM32.h"
#include "Driver_I2C.h"
#include "Driver_SPI.h"
#include "Driver_USART.h"

// Arduino Connector Digital I/O
#define ARDUINO_UNO_D0      GPIO_PIN_ID_PORTA(3U)
#define ARDUINO_UNO_D1      GPIO_PIN_ID_PORTA(2U)
#define ARDUINO_UNO_D2      GPIO_PIN_ID_PORTA(10U)
#define ARDUINO_UNO_D3      GPIO_PIN_ID_PORTB(3U)
#define ARDUINO_UNO_D4      GPIO_PIN_ID_PORTB(5U)
#define ARDUINO_UNO_D5      GPIO_PIN_ID_PORTB(4U)
#define ARDUINO_UNO_D6      GPIO_PIN_ID_PORTB(10U)
#define ARDUINO_UNO_D7      GPIO_PIN_ID_PORTA(8U)
#define ARDUINO_UNO_D8      GPIO_PIN_ID_PORTA(9U)
#define ARDUINO_UNO_D9      GPIO_PIN_ID_PORTC(7U)
#define ARDUINO_UNO_D10     GPIO_PIN_ID_PORTB(6U)
#define ARDUINO_UNO_D14     GPIO_PIN_ID_PORTA(0U)
#define ARDUINO_UNO_D15     GPIO_PIN_ID_PORTA(1U)
#define ARDUINO_UNO_D16     GPIO_PIN_ID_PORTA(4U)
#define ARDUINO_UNO_D17     GPIO_PIN_ID_PORTB(0U)
#define ARDUINO_UNO_D18     GPIO_PIN_ID_PORTC(1U)
#define ARDUINO_UNO_D19     GPIO_PIN_ID_PORTC(0U)

// CMSIS Driver instances on Arduino Connector
#define ARDUINO_UNO_I2C     1           // I2C1
#define ARDUINO_UNO_SPI     1           // SPI1

// CMSIS Driver instance for STDIO retarget
#define RETARGET_STDIO_UART 2

// CMSIS Drivers
extern ARM_DRIVER_I2C       ARM_Driver_I2C_(ARDUINO_UNO_I2C);           // Arduino I2C
extern ARM_DRIVER_SPI       ARM_Driver_SPI_(ARDUINO_UNO_SPI);           // Arduino SPI
extern ARM_DRIVER_USART     ARM_Driver_USART_(RETARGET_STDIO_UART);     // ST-LINK

#ifdef   CMSIS_shield_header
#include CMSIS_shield_header
#endif

#endif // NUCLEO_L152RE_H_
