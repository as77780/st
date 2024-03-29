#include <STM32F4TouchController.hpp>

/* USER CODE BEGIN BSP user includes */
#include "stm32f429i_discovery_ts.h"
/* USER CODE END BSP user includes */

extern "C"
{

uint32_t LCD_GetXSize();
uint32_t LCD_GetYSize();
}

using namespace touchgfx;

void STM32F4TouchController::init()
{
   /* USER CODE BEGIN F4TouchController_init */

    /* Add code for touch controller Initialization*/
    BSP_TS_Init(LCD_GetXSize(), LCD_GetYSize());

  /* USER CODE END  F4TouchController_init  */
}

bool STM32F4TouchController::sampleTouch(int32_t& x, int32_t& y)
{
  /* USER CODE BEGIN  F4TouchController_sampleTouch  */

    TS_StateTypeDef state;
    BSP_TS_GetState(&state);
    if (state.TouchDetected)
    {
    	x=(((1081 * state.X) + (-18666))/1000);
    	y=(((1163 * state.Y) + (-21053))/1000);
       // x = state.X;
       // y = state.Y;
        return true;
    }
    return false;

 /* USER CODE END F4TouchController_sampleTouch */    
}
