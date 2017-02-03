/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "stm32f4_discovery.h"
#include "bspTP3/bspTP3.h"
//#include "menu.h"


void APP_GetData(uint8_t dato);
//void menu_msg(int choice);
//void dectobin(uint16_t num);
//float adc_volt(float adc);

void mensaje_error(void);
void menu_opciones(int);

typedef enum {	ESTADO_INICIO,
				ESTADO_ADC,
				ESTADO_LEDS,
				ESTADO_SW } states;

states menu = ESTADO_INICIO;

uint8_t txBuffer[200];
int size;

int main(void)
	{
	BSP_Init();
	menu_opciones(menu);

	while(1){
		}
	}

void APP_GetData(uint8_t dato){

	switch (menu)
		{
		case ESTADO_INICIO:
			{
			if	(dato == '0')
				menu = ESTADO_INICIO;

			else if	(dato == '1')
				menu = ESTADO_ADC;

			else if (dato == '2')
				menu = ESTADO_LEDS;

			else if	(dato == '3')
				menu = ESTADO_SW;

			else
				mensaje_error();
			}
		break;

		case ESTADO_ADC:
			{
			if	(dato == '0')
			menu = ESTADO_INICIO;

			else if (dato == '1')
				{
				char outbin [12];
				uint resto = 0;
				uint16_t num = BSP_ADC_GetValue();

				int i;
				size = sprintf(txBuffer,"\nValor ADC: ",num);
				TransmitData (txBuffer, size);

				for (i = 0; i <= 11; i++)
					{
					resto = num%2;

					if (resto != 0)
						outbin [i] = 1;
					else
						outbin [i] = 0;

					num=num/2;
					}

					i++;
					if (num == 1)
						outbin [i] = 1;
					else
						outbin [i] = 0;
					i--;
					for (int j = 0; j <= 11; j++)
						{
						i--;
						size = sprintf(txBuffer,"%d",outbin[i]);
						TransmitData (txBuffer, size);
						}
					size = sprintf(txBuffer,"\r\n");
					TransmitData (txBuffer, size);
				}

			else if	(dato == '2')
				{
				size = sprintf(txBuffer,"\nValor ADC: %d \r\n",BSP_ADC_GetValue());
				TransmitData (txBuffer, size);
				}
			else if	(dato == '3')
				{
				size = sprintf(txBuffer,"\nValor ADC: %2.2fV \r\n",BSP_ADC_GetValue()*(3.3/4095));
				TransmitData (txBuffer, size);
				}
			else
				mensaje_error();
		}
		break;

		case ESTADO_LEDS:
			{
			if	(dato == '0')
			menu = ESTADO_INICIO;

			else if (dato == '1')
				{
				LedToggle(LED_ROJO);
				if(Get_LED_State(LED_ROJO))
					size = sprintf(txBuffer,"\nLED_ROJO ON \r\n");
				else
					{
					size = sprintf(txBuffer,"\nLED_ROJO OFF \r\n");
					TransmitData (txBuffer, size);
					}
				}

			else if (dato == '2')
				{
				LedToggle(LED_VERDE);
				if(Get_LED_State(LED_VERDE))
					size = sprintf(txBuffer,"\nLED_VERDE ON \r\n");
				else
					{
					size = sprintf(txBuffer,"\nLED_VERDE OFF \r\n");
					TransmitData (txBuffer, size);
					}
									}

			else if (dato == '3')
				{
				LedToggle(LED_NARANJA);
				if(Get_LED_State(LED_NARANJA))
					size = sprintf(txBuffer,"\nLED_NARANJA ON \r\n");
				else
					{
					size = sprintf(txBuffer,"\nLED_NARANJA OFF \r\n");
					TransmitData (txBuffer, size);
					}
				}

			else if (dato == '4')
				{
				LedToggle(LED_AZUL);
				if(Get_LED_State(LED_AZUL))
					size = sprintf(txBuffer,"\nLED_AZUL ON \r\n");
				else
					{
					size = sprintf(txBuffer,"\nLED_AZUL OFF \r\n");
					TransmitData (txBuffer, size);
					}
				}
				else
					mensaje_error();
			}
			break;

		case ESTADO_SW:
			{
			if	(dato == '1')
				{
				if(BSP_SW_GetState(SW_UP))
					size = sprintf(txBuffer,"\nSW1 : 1 \n");
				else
					{
					size = sprintf(txBuffer,"\nSW1 : 0 \n");
					TransmitData (txBuffer, size);
					}
				}

			else if	(dato == '2')
				{
				if(BSP_SW_GetState(SW_LEFT))
					size = sprintf(txBuffer,"\nSW2 : 1 \n");
				else
					{
					size = sprintf(txBuffer,"\nSW2 : 0 \n");
					TransmitData (txBuffer, size);
					}
				}

			else if	(dato == '3')
				{
				if(BSP_SW_GetState(SW_DOWN))
					size = sprintf(txBuffer,"\nSW3 : 1 \n");
				else
					{
					size = sprintf(txBuffer,"\nSW3 : 0 \n");
					TransmitData (txBuffer, size);
					}
				}

			else if	(dato == '4')
				{
				if(BSP_SW_GetState(SW_RIGHT))
					size = sprintf(txBuffer,"\nSW4 : 1 \n");
				else
					{
					size = sprintf(txBuffer,"\nSW4 : 0 \n");
					TransmitData (txBuffer, size);
					}
				}
			else if	(dato == '0')
				menu = ESTADO_INICIO;
			else
				mensaje_error();
			}
		break;
	}
	menu_opciones(menu);
}

void menu_opciones(int menu)
	{
	switch (menu)
		{
		case 0:
			{
			size = sprintf(txBuffer,"\n0. Menu anterior.\r\n1. Obtener valor ADC.\r\n2. Manejo de LEDs.\r\n3. Estado de SW.\r\n");
			TransmitData (txBuffer, size);
			}
		break;

		case 1:
			{
			size = sprintf(txBuffer,"\n0. Menu anterior.\r\n1. Obtener binario.\r\n2. Obtener decimal.\r\n3. Obtener Volt.\r\n"),
			TransmitData (txBuffer, size);
			}
		break;

		case 2:
			{
			size = sprintf(txBuffer,"\n0. Menu anterior.\r\n1. Toggle Led R.\r\n2. Toggle Led V.\r\n3. Toggle Led N.\r\n4. Toggle Led A.\r\n");
			TransmitData (txBuffer, size);
			}
		break;

		case 3:
			{
			size = sprintf(txBuffer,"\n0. Menu anterior.\r\n1. SW1.\r\n2. SW2.\r\n3. SW3.\r\n4. SW4.\r\n");
			TransmitData (txBuffer, size);
			}
		}
	}



void mensaje_error(void)
	{
	size = sprintf(txBuffer,"\nComando Invalido!!\nSeleccione una de las siguientes opciones:\n");
	TransmitData (txBuffer, size);
	}

