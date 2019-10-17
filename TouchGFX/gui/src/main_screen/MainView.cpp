#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
    TIM5->CCR1=100;
  	  scrollWheelInput.animateToItem(1);
   GetTimeOut();

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
//	clock_m.invalidate();
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
          	   hour = presenter->getHour();
	            minute = presenter->getMinute();
	            second= presenter->getSecond();
	            digitalClock1.setTime24Hour(hour, minute, second);
	 	    //	Unicode::snprintf(clock_mBuffer1, CLOCK_MBUFFER1_SIZE, "%02d",hour);
	 	    //	Unicode::snprintf(clock_mBuffer2, CLOCK_MBUFFER2_SIZE, "%02d",minute);
	 	    //	clock_m.invalidate();
 }
