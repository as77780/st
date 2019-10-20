#include <gui/main_screen/MainView.hpp>

MainView::MainView():
scrollWheelAnimateToCallback(this, &MainView::scrollWheelAnimateToHandler)
{

}

void MainView::setupScreen()
{
	scrollWheelVolume.setAnimateToCallback(scrollWheelAnimateToCallback);
    MainViewBase::setupScreen();
    TIM5->CCR1=100;
  	 GetTimeOut();

}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}


void MainView::handleTickEvent()
{
	GetTimeOut();
}


 void  MainView::GetTimeOut()
        {
          	    digitalClock1.setTime24Hour(presenter->getHour(), presenter->getMinute(), presenter->getSecond());
	           // digitalClock1.invalidate();
	 	 }
 void  MainView::scrollWheelVolumeUpdateItem(InputContainer1& item, int16_t itemIndex)
    {
	 item.updateText(itemIndex);
    }

 void  MainView::scrollWheelVolumeUpdateCenterItem(InputCenterContainer& item, int16_t itemIndex)
    {
	 item.updateText(itemIndex);
    }

 void  MainView::scrollWheelAnimateToHandler(int16_t itemSelected)
 {
	switch (itemSelected)
	     {
	     case 0:
	    	 GetTimeOut();
	         break;

	 case 1:
	   	 GetTimeOut();
	        break;
	     }
 }

