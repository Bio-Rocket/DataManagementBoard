/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

#include "stm32f4xx_ll_usart.h"
#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_dma.h"

#include "stm32f4xx_ll_exti.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPS_POWER_Pin GPIO_PIN_14
#define GPS_POWER_GPIO_Port GPIOC
#define SOL_14_Pin GPIO_PIN_0
#define SOL_14_GPIO_Port GPIOC
#define SOL_11_Pin GPIO_PIN_1
#define SOL_11_GPIO_Port GPIOC
#define SOL_10_Pin GPIO_PIN_2
#define SOL_10_GPIO_Port GPIOC
#define SOL_13_Pin GPIO_PIN_3
#define SOL_13_GPIO_Port GPIOC
#define LOWER_TX_Pin GPIO_PIN_0
#define LOWER_TX_GPIO_Port GPIOA
#define LOWER_RX_Pin GPIO_PIN_1
#define LOWER_RX_GPIO_Port GPIOA
#define UPPER_TX_Pin GPIO_PIN_2
#define UPPER_TX_GPIO_Port GPIOA
#define UPPER_RX_Pin GPIO_PIN_3
#define UPPER_RX_GPIO_Port GPIOA
#define IMU_CS_Pin GPIO_PIN_4
#define IMU_CS_GPIO_Port GPIOA
#define IMU_SPI_SCK_Pin GPIO_PIN_5
#define IMU_SPI_SCK_GPIO_Port GPIOA
#define IMU_SPI_MISO_Pin GPIO_PIN_6
#define IMU_SPI_MISO_GPIO_Port GPIOA
#define IMU_SPI_MOSI_Pin GPIO_PIN_7
#define IMU_SPI_MOSI_GPIO_Port GPIOA
#define IMU_INT_1_Pin GPIO_PIN_5
#define IMU_INT_1_GPIO_Port GPIOC
#define IMU_INT_2_Pin GPIO_PIN_0
#define IMU_INT_2_GPIO_Port GPIOB
#define DEBUG_TX_Pin GPIO_PIN_10
#define DEBUG_TX_GPIO_Port GPIOB
#define DEBUG_RX_Pin GPIO_PIN_11
#define DEBUG_RX_GPIO_Port GPIOB
#define SPI_FLASH_SCK_Pin GPIO_PIN_13
#define SPI_FLASH_SCK_GPIO_Port GPIOB
#define SPI_FLASH_MISO_Pin GPIO_PIN_14
#define SPI_FLASH_MISO_GPIO_Port GPIOB
#define SPI_FLASH_MOSI_Pin GPIO_PIN_15
#define SPI_FLASH_MOSI_GPIO_Port GPIOB
#define PMB_TX_Pin GPIO_PIN_6
#define PMB_TX_GPIO_Port GPIOC
#define PMB_RX_Pin GPIO_PIN_7
#define PMB_RX_GPIO_Port GPIOC
#define LED_2_Pin GPIO_PIN_8
#define LED_2_GPIO_Port GPIOC
#define LED_1_Pin GPIO_PIN_9
#define LED_1_GPIO_Port GPIOC
#define RADIO_TX_Pin GPIO_PIN_9
#define RADIO_TX_GPIO_Port GPIOA
#define RADIO_RX_Pin GPIO_PIN_10
#define RADIO_RX_GPIO_Port GPIOA
#define LED_3_Pin GPIO_PIN_11
#define LED_3_GPIO_Port GPIOA
#define SOL_12_Pin GPIO_PIN_12
#define SOL_12_GPIO_Port GPIOA
#define ABORT_Pin GPIO_PIN_15
#define ABORT_GPIO_Port GPIOA
#define BARO_SPI_SCK_Pin GPIO_PIN_10
#define BARO_SPI_SCK_GPIO_Port GPIOC
#define BARO_SPI_MISO_Pin GPIO_PIN_11
#define BARO_SPI_MISO_GPIO_Port GPIOC
#define GPS_TX_Pin GPIO_PIN_12
#define GPS_TX_GPIO_Port GPIOC
#define GPS_RX_Pin GPIO_PIN_2
#define GPS_RX_GPIO_Port GPIOD
#define BARO_CS_Pin GPIO_PIN_4
#define BARO_CS_GPIO_Port GPIOB
#define BARO_SPI_MOSI_Pin GPIO_PIN_5
#define BARO_SPI_MOSI_GPIO_Port GPIOB
#define SPI_MEM_WP_Pin GPIO_PIN_6
#define SPI_MEM_WP_GPIO_Port GPIOB
#define SPI_FLASH_CS_Pin GPIO_PIN_7
#define SPI_FLASH_CS_GPIO_Port GPIOB
#define BUZZER_PWM_Pin GPIO_PIN_8
#define BUZZER_PWM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
