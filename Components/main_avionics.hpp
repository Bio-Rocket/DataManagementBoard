/**
 ******************************************************************************
 * File Name          : Main.hpp
 * Description        : Header file for Main.cpp, acts as an interface between
 *  STM32CubeIDE and our application.
 ******************************************************************************
*/
#ifndef AVIONICS_INCLUDE_SOAR_MAIN_H
#define AVIONICS_INCLUDE_SOAR_MAIN_H
#include "Mutex.hpp"
#include "stm32f405xx.h" // Board specific include, note: this may need to be changed for different boards
#include "stm32f4xx_hal.h"

/* Interface Functions ------------------------------------------------------------------*/
/* These functions act as our program's 'main' and any functions inside CubeIDE's main --*/
void run_main();
void run_StartDefaultTask();

/* Global Functions ------------------------------------------------------------------*/
void print(const char* format, ...);
void soar_assert_debug(bool condition, const char* file, uint16_t line, const char* str = nullptr, ...);

/* Global Variable Interfaces ------------------------------------------------------------------*/
/* All must be extern from main_avionics.cpp -------------------------------------------------*/
namespace Global
{
    extern Mutex vaListMutex;
}

/* System Handles ------------------------------------------------------------------*/
/* This should be the only place externs are allowed -------------------------------*/

//UART Handles
//extern UART_HandleTypeDef huart1;   // UART1 - Radio
//extern UART_HandleTypeDef huart2;   // UART2 - Upper PBB
//extern UART_HandleTypeDef huart3;   // UART3 - Debug
//extern UART_HandleTypeDef huart4;   // UART4 - Lower PBB
extern UART_HandleTypeDef huart5;   // UART5 - GPS
//extern UART_HandleTypeDef huart6;   // UART5 - PMB

//SPI Handles
extern SPI_HandleTypeDef hspi1;      // SPI1 - IMU
extern SPI_HandleTypeDef hspi2;      // SPI2 - Flash
extern SPI_HandleTypeDef hspi3;      // SPI3 - Barometer

//CRC Handles
extern CRC_HandleTypeDef hcrc;       // CRC - Hardware CRC System Handle

//DMA Handles
extern DMA_HandleTypeDef hdma_uart5_rx; // DMA UART 4 RX -
//extern DMA_HandleTypeDef hdma_uart5_rx; // DMA UART 5 RX -
//extern DMA_HandleTypeDef hdma_uart5_tx; // DMA UART 5 TX -

namespace SystemHandles {

    // Aliases

    //constexpr UART_HandleTypeDef* RADIO_UART = &huart1;
    //constexpr UART_HandleTypeDef* U_PBB_UART = &huart2;
    //constexpr UART_HandleTypeDef* DEBUG_UART = &huart3;
    //constexpr UART_HandleTypeDef* L_PBB_UART = &huart4;
    constexpr UART_HandleTypeDef* GPS_UART = &huart5;
    //constexpr UART_HandleTypeDef* PMB_UART = &huart6;

    constexpr SPI_HandleTypeDef* IMU_SPI = &hspi1;
    constexpr SPI_HandleTypeDef* FLASH_SPI = &hspi2;
    constexpr SPI_HandleTypeDef* BARO_SPI = &hspi3;

    constexpr CRC_HandleTypeDef* CRC_Handle = &hcrc;

    // DMA Aliases

    //TODO: ADD

}

#endif /* AVIONICS_INCLUDE_SOAR_MAIN_H */
