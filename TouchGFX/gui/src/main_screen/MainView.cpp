#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
    TIM5->CCR1=100;
    hour = presenter->getHour();
    	  minute = presenter->getMinute();
    	  Unicode::snprintf(clock_mBuffer1, CLOCK_MBUFFER1_SIZE, "%02d",hour);
    	  	 	    	Unicode::snprintf(clock_mBuffer2, CLOCK_MBUFFER2_SIZE, "%02d",minute);
    	  	 	    	clock_m.invalidate();
 //  scrollWheelInput.animateToItem(1);
  //  GetTimeOut();

}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}


void MainView::handleTickEvent()
{
	if (tickCount == 60)
	    {
		GetTimeOut();
	    tickCount = 0;
	    }
	tickCount++;
	clock_m.invalidate();
}
 void MainView::scrollWheelInputUpdateItem(InputContainer1& item, int16_t itemIndex)
    {
	 item.updateText(itemIndex);
    }

 void MainView::scrollWheelInputUpdateCenterItem(InputCenterContainer& item, int16_t itemIndex)
    {
	 item.updateText(itemIndex);
    }
 void  MainView::GetTimeOut(){
          	 RTC_TimeTypeDef sTime = {0};
	 		 RTC_DateTypeDef sDate = {0};
	 	       	HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
	 	    	HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN);
	 	    	hour =sTime.Hours;
	 	    	minute =sTime.Minutes ;
	 	    	Unicode::snprintf(clock_mBuffer1, CLOCK_MBUFFER1_SIZE, "%02d",hour);
	 	    	Unicode::snprintf(clock_mBuffer2, CLOCK_MBUFFER2_SIZE, "%02d",minute);
 }
