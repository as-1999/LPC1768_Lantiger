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

	SystemInit();
	UART0_Init();
	UART2_Init();

    while (1) 
	{
		UART0_SendString("·����LandTiger��LPC17XX������\n");
		UART0_SendString("http://www.PowerAVR.com\n");
		UART0_SendString("http://www.PowerMCU.com\n");
	    UART0_SendString("����֧�� QQ��173982240 �绰��13711373586\n");
		UART2_SendString("·����LandTiger��UART���Գ���\n");
		UART2_SendString("http://www.PowerAVR.com\n");
		UART2_SendString("http://www.PowerMCU.com\n");
        Delay(3000);
    }
}
