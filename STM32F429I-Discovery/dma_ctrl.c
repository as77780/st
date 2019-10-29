#include "dma_ctrl.h"
#include "stm32f4xx_hal.h"
//**************************************************************************
void uart_dma_tx_link(USART_TypeDef * USART,DMA_HandleTypeDef * DMA_Channel)
{
  CLEAR_BIT(DMA_Channel->CCR, DMA_CCR_EN);//
  //SET_BIT(DMA_Channel->CCR, DMA_CCR_TCIE);//���������� �� ���������� ��������
  SET_BIT(DMA_Channel->CCR, DMA_CCR_MINC);//��������� ������
  SET_BIT(DMA_Channel->CCR, DMA_CCR_DIR);//�� ������ � ���������
  
  WRITE_REG(DMA_Channel->CPAR, (uint32_t)&(USART->TDR));
    
  SET_BIT(USART->CR3, USART_CR3_DMAT );//��������� ������ ��� �� ��������  
}

void uart_dma_rx_link(USART_TypeDef * USART,DMA_HandleTypeDef * DMA_Channel, uint8_t* data, uint16_t len)
{
  CLEAR_BIT(DMA_Channel->CCR, DMA_CCR_EN);//
  SET_BIT(DMA_Channel->CCR, DMA_CCR_MINC);//��������� ������
  CLEAR_BIT(DMA_Channel->CCR, DMA_CCR_DIR);//�� ��������� � ������
  
  WRITE_REG(DMA_Channel->CNDTR, len);
  WRITE_REG(DMA_Channel->CMAR, (uint32_t)data);
  WRITE_REG(DMA_Channel->CPAR, (uint32_t)&(USART->RDR));
  SET_BIT(DMA_Channel->CCR, DMA_CCR_EN);//
  
  //SET_BIT(USART->CR1, USART_CR1_IDLEIE );//���������� IDLE
  SET_BIT(USART->CR3, USART_CR3_DMAR );//��������� ������ ��� �� �����  
}

void uart_dma_tx(DMA_HandleTypeDef * DMA_Channel, uint8_t* data, uint16_t len)
{
	
  CLEAR_BIT(DMA_Channel->CCR, DMA_CCR_EN);//
  
  WRITE_REG(DMA_Channel->CNDTR, len);
  WRITE_REG(DMA_Channel->CMAR, (uint32_t)data);
  
  SET_BIT(DMA_Channel->CCR, DMA_CCR_EN);//  
}

void uart_dma_rx(DMA_HandleTypeDef * DMA_Channel, uint8_t* data, uint16_t len)
{
  CLEAR_BIT(DMA_Channel->CCR, DMA_CCR_EN);//
  WRITE_REG(DMA_Channel->CNDTR, len);//���-�� ����� �����, ��������� ������ ������������ �� IRQ UART IDLE
  WRITE_REG(DMA_Channel->CMAR, (uint32_t)&data[0]);
  SET_BIT(DMA_Channel->CCR, DMA_CCR_EN);//  
}
