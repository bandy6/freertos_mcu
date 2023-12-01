#include "bsp_led.h"
#include "bsp_usart.h"

#define SOFT_DELAY Delay(0x0FFFFF);

void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
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
		Usart_SendString( DEBUG_USARTx,"����һ�����ڴ�ӡʵ��\n");
		printf("123456\n");
	}

	return 0;
}
