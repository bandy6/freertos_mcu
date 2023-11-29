#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "stm32f10x.h"

#define LED_GPIO_PORT  GPIOC
#define LED_GPIO_PIN   GPIO_Pin_13

#define ON  1
#define OFF 0

void LED_init(void);
void LED_CTRL(uint8_t ctl);

#endif //__BSP_LED_H

