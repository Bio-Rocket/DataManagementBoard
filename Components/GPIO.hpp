/**
 ******************************************************************************
 * File Name          : GPIO.hpp
 * Description        :
 *
 *    GPIO contains all GPIO pins wrapped in a namespace and corresponding functions
 *
 *    All GPIO pins should be controlled through this abstraction layer to ensure readable control.
 *
 ******************************************************************************
*/
#ifndef AVIONICS_INCLUDE_SOAR_CORE_GPIO_H
#define AVIONICS_INCLUDE_SOAR_CORE_GPIO_H
#include "SystemDefines.hpp"
#include "main.h"
#include "stm32f4xx_hal.h"

namespace GPIO
{
    namespace LED1
    {
        inline void On() { HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET); }
        inline void Off() { HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET); }
        inline void Toggle() { HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin); }

        inline bool IsOn() { return HAL_GPIO_ReadPin(LED_1_GPIO_Port, LED_1_Pin) == GPIO_PIN_SET; }
    }

    namespace LED2
    {
        inline void On() { HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET); }
        inline void Off() { HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET); }
        inline void Toggle() { HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin); }

        inline bool IsOn() { return HAL_GPIO_ReadPin(LED_2_GPIO_Port, LED_2_Pin) == GPIO_PIN_SET; }
    }
    
    namespace LED3
    {
        inline void On() { HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET); }
        inline void Off() { HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET); }
        inline void Toggle() { HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin); }

        inline bool IsOn() { return HAL_GPIO_ReadPin(LED_3_GPIO_Port, LED_3_Pin) == GPIO_PIN_SET; }
    }

    namespace SOL10 // Main engine valve GPIO Open/Close should ONLY be touched by MEVManager
    {
        inline void Open() { HAL_GPIO_WritePin(SOL_10_GPIO_Port, SOL_10_Pin, GPIO_PIN_SET); }
        inline void Close() { HAL_GPIO_WritePin(SOL_10_GPIO_Port, SOL_10_Pin, GPIO_PIN_RESET); }

        inline bool IsOpen() { return HAL_GPIO_ReadPin(SOL_10_GPIO_Port, SOL_10_Pin) == GPIO_PIN_SET; }
    }

	
	namespace SOL11
	{
		inline void Open() { HAL_GPIO_WritePin(SOL_11_GPIO_Port, SOL_11_Pin, GPIO_PIN_RESET); }
		inline void Close() { HAL_GPIO_WritePin(SOL_11_GPIO_Port, SOL_11_Pin, GPIO_PIN_SET); }

		inline bool IsOpen() { return HAL_GPIO_ReadPin(SOL_11_GPIO_Port, SOL_11_Pin) == GPIO_PIN_RESET; }
	}	

    namespace SOL12
    {
        inline void Open() { HAL_GPIO_WritePin(SOL_12_GPIO_Port, SOL_12_Pin, GPIO_PIN_RESET); }
        inline void Close() { HAL_GPIO_WritePin(SOL_12_GPIO_Port, SOL_12_Pin, GPIO_PIN_SET); }

        inline bool IsOpen() { return HAL_GPIO_ReadPin(SOL_12_GPIO_Port, SOL_12_Pin) == GPIO_PIN_RESET; }
    }

    namespace SOL13
    {
        inline void Open() { HAL_GPIO_WritePin(SOL_13_GPIO_Port, SOL_13_Pin, GPIO_PIN_RESET); }
        inline void Close() { HAL_GPIO_WritePin(SOL_13_GPIO_Port, SOL_13_Pin, GPIO_PIN_SET); }

        inline bool IsOpen() { return HAL_GPIO_ReadPin(SOL_13_GPIO_Port, SOL_13_Pin) == GPIO_PIN_RESET; }
    }

    namespace SOL14
    {
        inline void Open() { HAL_GPIO_WritePin(SOL_14_GPIO_Port, SOL_14_Pin, GPIO_PIN_RESET); }
        inline void Close() { HAL_GPIO_WritePin(SOL_14_GPIO_Port, SOL_14_Pin, GPIO_PIN_SET); }

        inline bool IsOpen() { return HAL_GPIO_ReadPin(SOL_14_GPIO_Port, SOL_14_Pin) == GPIO_PIN_RESET; }
    }

    namespace ABORT
    {
        inline void Open() { HAL_GPIO_WritePin(ABORT_GPIO_Port, ABORT_Pin, GPIO_PIN_RESET); }
        inline void Close() { HAL_GPIO_WritePin(ABORT_GPIO_Port, ABORT_Pin, GPIO_PIN_SET); }

        inline bool IsActive() { return HAL_GPIO_ReadPin(ABORT_GPIO_Port, ABORT_Pin) == GPIO_PIN_RESET; }
    }


}

#endif /* AVIONICS_INCLUDE_SOAR_CORE_GPIO_H */
