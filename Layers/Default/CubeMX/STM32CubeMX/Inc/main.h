/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
extern int stdio_init   (void);
extern int app_main     (void);
extern int shield_setup (void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define I2C1_PERIPH_CLOCK_FREQ 32000000
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI15_10_IRQn
#define ARD_A1_Pin GPIO_PIN_0
#define ARD_A1_GPIO_Port GPIOA
#define ARD_A1_EXTI_IRQn EXTI0_IRQn
#define ARD_A0_Pin GPIO_PIN_1
#define ARD_A0_GPIO_Port GPIOA
#define ARD_A0_EXTI_IRQn EXTI1_IRQn
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define USER_LED_Pin GPIO_PIN_5
#define USER_LED_GPIO_Port GPIOA
#define ARD_D9_Pin GPIO_PIN_7
#define ARD_D9_GPIO_Port GPIOC
#define ARD_D9_EXTI_IRQn EXTI9_5_IRQn
#define ARD_D7_Pin GPIO_PIN_8
#define ARD_D7_GPIO_Port GPIOA
#define ARD_D7_EXTI_IRQn EXTI9_5_IRQn
#define ARD_D8_Pin GPIO_PIN_9
#define ARD_D8_GPIO_Port GPIOA
#define ARD_D8_EXTI_IRQn EXTI9_5_IRQn
#define ARD_D2_Pin GPIO_PIN_10
#define ARD_D2_GPIO_Port GPIOA
#define ARD_D2_EXTI_IRQn EXTI15_10_IRQn
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define ARD_D3_Pin GPIO_PIN_3
#define ARD_D3_GPIO_Port GPIOB
#define ARD_D3_EXTI_IRQn EXTI3_IRQn
#define ARD_D5_Pin GPIO_PIN_4
#define ARD_D5_GPIO_Port GPIOB
#define ARD_D5_EXTI_IRQn EXTI4_IRQn
#define ARD_D4_Pin GPIO_PIN_5
#define ARD_D4_GPIO_Port GPIOB
#define ARD_D4_EXTI_IRQn EXTI9_5_IRQn
#define ARD_D10_Pin GPIO_PIN_6
#define ARD_D10_GPIO_Port GPIOB
#define ARD_D10_EXTI_IRQn EXTI9_5_IRQn
#define ARD_D21_Pin GPIO_PIN_8
#define ARD_D21_GPIO_Port GPIOB
#define ARD_D20_Pin GPIO_PIN_9
#define ARD_D20_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
