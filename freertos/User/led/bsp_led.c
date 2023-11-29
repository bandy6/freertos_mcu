#include "bsp_led.h"


void LED_init(void) {
    /*定义一个GPIO_InitTypeDef类型的结构体*/
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    /*选择要控制的GPIO引脚*/
    GPIO_InitStructure.GPIO_Pin = LED_GPIO_PIN;

    /*设置引脚模式为通用推挽输出*/
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;

    /*设置引脚速率为50MHz */
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;

    /*调用库函数，初始化GPIO*/
    GPIO_Init(LED_GPIO_PORT, &GPIO_InitStructure);


    /* 关闭所有led灯	*/
    GPIO_SetBits(LED_GPIO_PORT, LED_GPIO_PIN);

}

void LED_CTRL(uint8_t ctl) {
    if(ctl == ON) {
		    GPIO_SetBits(LED_GPIO_PORT,LED_GPIO_PIN);
		} else {
		    GPIO_ResetBits(LED_GPIO_PORT,LED_GPIO_PIN);
		}
}
