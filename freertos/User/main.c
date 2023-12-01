#include "bsp_led.h"
#include "bsp_usart.h"

#define SOFT_DELAY Delay(0x0FFFFF);

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}

int main()
{

	LED_init();
	USART_Config();

	while(1) {
		LED_CTRL(ON);
		SOFT_DELAY;
		LED_CTRL(OFF);
		SOFT_DELAY;
		Usart_SendString( DEBUG_USARTx,"这是一个串口打印实验\n");
		printf("123456\n");
	}

	return 0;
}
