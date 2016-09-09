/*
 * bsp.h
 *
 *  Created on: 26 de ago. de 2016
 *      Author: Matias Labedz
 */

#ifndef BSPTP3_BSPTP3_H_
#define BSPTP3_BSPTP3_H_

#include "stm32f4xx.h"

typedef enum {
	SW_UP = 0, SW_LEFT = 1, SW_DOWN = 2, SW_RIGHT = 3
} SW_TypeDef;

#define SWn	4

#define SW_UP_PIN                         GPIO_PIN_4
#define SW_LEFT_PIN                         GPIO_PIN_5
#define SW_DOWN_PIN                         GPIO_PIN_6
#define SW_RIGHT_PIN                         GPIO_PIN_2

#define SW_PORT 							GPIOE

#define SW_GPIO_CLK_ENABLE()           __GPIOE_CLK_ENABLE()


#define EXP_BOARD_POT_PIN				   GPIO_PIN_2
#define EXP_BOARD_POT_PORT                   GPIOC
#define EXP_BOARD_POT_PIN_CLK_ENABLE()           __GPIOC_CLK_ENABLE()
#define EXP_BOARD_POT_ADC_CLK_ENABLE()		__ADC1_CLK_ENABLE()
#define EXP_BOARD_POT_CLK_DISABLE()          __GPIOD_CLK_DISABLE()
#define EXP_BOARD_POT_CHANNEL				   ADC_CHANNEL_12

void BSP_Init(void);

void BSP_UART_Init(void);
void BSP_RCC_Init(void);
void BSP_SW_Init(void);
uint32_t BSP_SW_GetState(SW_TypeDef sw);
void BSP_ADC_Init(void);
uint16_t BSP_ADC_GetValue(void);

void TransmitData(uint8_t *buffer, uint8_t size);

#endif /* BSPTP3_BSPTP3_H_ */
