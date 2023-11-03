/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PC13_Pin GPIO_PIN_13
#define PC13_GPIO_Port GPIOC
#define PC14_Pin GPIO_PIN_14
#define PC14_GPIO_Port GPIOC
#define PC15_Pin GPIO_PIN_15
#define PC15_GPIO_Port GPIOC
#define PC1_Pin GPIO_PIN_1
#define PC1_GPIO_Port GPIOC
#define PC2_Pin GPIO_PIN_2
#define PC2_GPIO_Port GPIOC
#define PC3_Pin GPIO_PIN_3
#define PC3_GPIO_Port GPIOC
#define PC4_Pin GPIO_PIN_4
#define PC4_GPIO_Port GPIOC
#define PC5_Pin GPIO_PIN_5
#define PC5_GPIO_Port GPIOC
#define PC6_Pin GPIO_PIN_6
#define PC6_GPIO_Port GPIOC
#define PC7_Pin GPIO_PIN_7
#define PC7_GPIO_Port GPIOC
#define PC8_Pin GPIO_PIN_8
#define PC8_GPIO_Port GPIOC
#define PC9_Pin GPIO_PIN_9
#define PC9_GPIO_Port GPIOC
#define PC10_Pin GPIO_PIN_10
#define PC10_GPIO_Port GPIOC
#define PC11_Pin GPIO_PIN_11
#define PC11_GPIO_Port GPIOC
#define PC12_Pin GPIO_PIN_12
#define PC12_GPIO_Port GPIOC
#define HC573_LE_Pin GPIO_PIN_2
#define HC573_LE_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
