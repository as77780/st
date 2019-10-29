#ifndef UART_DMA_H
#define UART_DMA_H

#include "stm32f4xx_hal.h"

void DMA1_RecieveComplete(void);
void DMA1_TransmitComplete(void);

#endif
