/*
 * bspTP3.c
 *
 *  Created on: 1 de feb. de 2017
 *      Author: jmLerda
 */

#ifndef BSPTP3_BSPTP3_H_
#define BSPTP3_BSPTP3_H_

#include "stm32f4xx.h"

typedef enum { SW_UP = 0, SW_LEFT = 1, SW_DOWN = 2, SW_RIGHT = 3 } SW_TypeDef;

#define SWn	4

#define SW_UP_PIN		GPIO_PIN_4
#define SW_LEFT_PIN     GPIO_PIN_5
#define SW_DOWN_PIN     GPIO_PIN_6
#define SW_RIGHT_PIN    GPIO_PIN_2
//#define ALL_SW			SW_UP_PIN | SW_LEFT_PIN | SW_DOWN_PIN | SW_RIGHT_PIN
//#define boton discovery    GPIO_PIN_x
#define SW_PORT 							GPIOE

#define LED_VERDE 			GPIO_PIN_12
#define LED_NARANJA 		GPIO_PIN_13
#define LED_ROJO 			GPIO_PIN_14
#define LED_AZUL 			GPIO_PIN_15
#define ALL_LEDS 			LED_VERDE | LED_NARANJA | LED_ROJO | LED_AZUL
#define LEDS_PORT 			GPIOD


#define SW_GPIO_CLK_ENABLE()           __GPIOE_CLK_ENABLE()


#define EXP_BOARD_POT_PIN				GPIO_PIN_2
#define EXP_BOARD_POT_PORT              GPIOC
#define EXP_BOARD_POT_PIN_CLK_ENABLE()	__GPIOC_CLK_ENABLE()
#define EXP_BOARD_POT_ADC_CLK_ENABLE()	__ADC1_CLK_ENABLE()
#define EXP_BOARD_POT_CLK_DISABLE()     __GPIOD_CLK_DISABLE()
#define EXP_BOARD_POT_CHANNEL			ADC_CHANNEL_12

void BSP_Init(void);

void BSP_UART_Init(void);
void BSP_RCC_Init(void);
void BSP_SW_Init(void);
uint32_t BSP_SW_GetState(SW_TypeDef sw);
uint16_t BSP_ADC_GetValue(void);
void BSP_ADC_Init(void);
uint32_t Get_LED_State(uint16_t led);
void LedToggle(uint16_t led);

void TransmitData(uint8_t *buffer, uint8_t size);

#endif /* BSPTP3_BSPTP3_H_ */
