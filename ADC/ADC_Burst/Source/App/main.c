/****************************************Copyright (c)****************************************************
**                                 http://www.PowerAVR.com
**								   http://www.PowerMCU.com
**--------------File Info---------------------------------------------------------------------------------
** File name:           main.c
** Last modified Date:  2010-05-12
** Last Version:        V1.00
** Descriptions:        The main() function example template
**
**--------------------------------------------------------------------------------------------------------
** Created by:          PowerAVR
** Created date:        2010-05-10
** Version:             V1.00
** Descriptions:        ��дʾ������
**
**--------------------------------------------------------------------------------------------------------       
*********************************************************************************************************/
#include "LPC17xx.h"
#include "uart.h"
#include "adc.h"

/*********************************************************************************************************
** Function name:       Delay
** Descriptions:        �����ʱ
** input parameters:    ulTime
** output parameters:   ��
** Returned value:      ��
*********************************************************************************************************/
void Delay (uint32_t Time)
{
    uint32_t i;
    
    i = 0;
    while (Time--) {
        for (i = 0; i < 5000; i++);
    }
}

int main(void)
{
	uint32_t ADC_Data;
volatile uint32_t ADC_Buf = 0;
	uint8_t i;

	SystemInit();
	UART0_Init();
	UART2_Init();
	ADC_Init();

    while (1) 
	{
	 	ADC_Data = 0;
        for(i = 0;i < 8; i++) 
		{
            ADC_Buf   = ADC_Get();
            ADC_Data += ADC_Buf;
        }
        ADC_Data = (ADC_Data / 8);                    /* ����8�ν����ǲ�����          */
        ADC_Data = (ADC_Data * 3300)/4096;
		UART0_SendString("ADͨ��5�����ѹ�ǣ�");
        UART0_SendChar(ADC_Data);		              /* �����ݷ��͵�������ʾ         */
		UART0_SendByte('m');
		UART0_SendByte('V');
		UART0_SendByte('\n');
		UART2_SendString("·����LandTiger��ADC���Գ���\n");
        Delay(1000);
    }
}
