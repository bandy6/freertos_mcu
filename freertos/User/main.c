#include "bsp_led.h"

#define SOFT_DELAY Delay(0x0FFFFF);

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}

int main()
{

	LED_init();

	while(1) {
		LED_CTRL(ON);
		SOFT_DELAY;
		LED_CTRL(OFF);
		SOFT_DELAY;
	}

	return 0;
}
