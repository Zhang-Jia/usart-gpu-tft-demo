/*
 * peri_usart_gpu.h
 *
 *  Created on: 2015��11��23��
 *      Author: Administrator
 */

#ifndef APP_PERIPHERAL_PERI_USART_GPU_H_
#define APP_PERIPHERAL_PERI_USART_GPU_H_

#include "c_types.h"

void peri_usart_gpu_init(void);
uint8* peri_usart_gpu_get();
void peri_usart_gpu_set(char* dat);

#endif /* APP_PERIPHERAL_PERI_USART_GPU_H_ */
