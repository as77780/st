#include "stm32f4xx_hal.h"
#include "stm32f4xx_ll_dma.h"
 //#include "stm32f4xx_ll_usart.h"

 uint8_t fl_rx;
 uint8_t  fl_tx;
void DMA1_RecieveComplete(void)
{
	 if(LL_DMA_IsActiveFlag_TC4(DMA1))
	  {
	    LL_DMA_ClearFlag_TC4(DMA1);
	    DMA1_TransmitComplete();
	  }
	  else if(LL_DMA_IsActiveFlag_TE4(DMA1))
	  {
	   // LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_4);
	  //  LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_5);
	  }
  fl_rx = 1;
}
void DMA1_TransmitComplete(void)
{
  fl_tx = 1;
}


void uart_dma_tx_link(uint32_t rx_str){
	LL_DMA_DisableStream(DMA1,LL_DMA_STREAM_1);

	LL_DMA_SetMemoryIncMode(DMA1, LL_DMA_STREAM_1, LL_DMA_MEMORY_INCREMENT);
	LL_DMA_SetChannelSelection(DMA1, LL_DMA_STREAM_1, LL_DMA_CHANNEL_5);
  //  LL_DMA_SetDataTransferDirection(DMA1, LL_DMA_STREAM_1, LL_DMA_DIRECTION_MEMORY_TO_PERIPH);
    LL_DMA_ConfigAddresses(DMA1, LL_DMA_STREAM_1,LL_USART_DMA_GetRegAddr(UART7),(uint32_t)&rx_str,LL_DMA_DIRECTION_MEMORY_TO_PERIPH);
    LL_USART_EnableDMAReq_TX(UART7);
}
