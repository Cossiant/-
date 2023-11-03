#include "include.h"

void LED_Init() {
    
}

void LED_Light() {
    for (int i = 0; i < 7; ++i) {
        GPIOC->ODR = ~(PC8_Pin << i);
				HAL_GPIO_WritePin(HC573_LE_GPIO_Port, HC573_LE_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(HC573_LE_GPIO_Port, HC573_LE_Pin, GPIO_PIN_RESET);
        HAL_Delay(100);
    }
    for (int i = 0; i < 7; ++i) {
        GPIOC->ODR = ~(PC15_Pin >> i);
				HAL_GPIO_WritePin(HC573_LE_GPIO_Port, HC573_LE_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(HC573_LE_GPIO_Port, HC573_LE_Pin, GPIO_PIN_RESET);
        HAL_Delay(100);
    }
}