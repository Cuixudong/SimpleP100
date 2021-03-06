/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

#include "malloc.h"

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
#define KEY0_Pin GPIO_PIN_3
#define KEY0_GPIO_Port GPIOE
#define KEY1_Pin GPIO_PIN_4
#define KEY1_GPIO_Port GPIOE
#define KEY2_Pin GPIO_PIN_5
#define KEY2_GPIO_Port GPIOE
#define BEEP_Pin GPIO_PIN_0
#define BEEP_GPIO_Port GPIOC
#define F_CS_Pin GPIO_PIN_4
#define F_CS_GPIO_Port GPIOA
#define LCD_RST_Pin GPIO_PIN_2
#define LCD_RST_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_10
#define LED1_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_11
#define LED2_GPIO_Port GPIOB
#define DIR3_Pin GPIO_PIN_11
#define DIR3_GPIO_Port GPIOD
#define DIR2_Pin GPIO_PIN_12
#define DIR2_GPIO_Port GPIOD
#define LED0_Pin GPIO_PIN_15
#define LED0_GPIO_Port GPIOA
#define SW_VOL_Pin GPIO_PIN_6
#define SW_VOL_GPIO_Port GPIOD
#define DCDC_EN_Pin GPIO_PIN_3
#define DCDC_EN_GPIO_Port GPIOB
#define LCD_BL_Pin GPIO_PIN_4
#define LCD_BL_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* ???????????????? */
#define ENABLE_INT()    __set_PRIMASK(0)    /* ???????????? */
#define DISABLE_INT()   __set_PRIMASK(1)    /* ???????????? */


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
