#include <gui/screen2_screen/Screen2View.hpp>



Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
	Screen2ViewBase::setupScreen();
	  TIM5->CCR1=10;
	  hour = presenter->getHour();
	  minute = presenter->getMinute();
	     Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%02d", hour);
	     Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d", minute);
	     textClock.invalidate();


}

void Screen2View::tearDownScreen()
{
	presenter->saveHour(hour);
    presenter->saveMinute(minute);
    Screen2ViewBase::tearDownScreen();
}
void Screen2View::handleTickEvent()
{
	RTC_TimeTypeDef sTime = {0};
	RTC_DateTypeDef sDate = {0};


       	HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
    	HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN);
    	hour =sTime.Hours;
    	minute =sTime.Minutes ;

        if (!textClock.isMoveAnimationRunning())
            {
        	/*
               if (circle.getArcStart() + 340 == circle.getArcEnd())
                {
                    addStart = 2;
                    addEnd = 1;
                }
                else if (circle.getArcStart() + 20 == circle.getArcEnd())
                {
                    addStart = 1;
                    addEnd = 2;
                }
              */
                circle.invalidate();
             //   circle.setArc(circle.getArcStart() + addStart, circle.getArcEnd() + addEnd);
                circle.setArc(sTime.Seconds*6,0);
                circle.invalidate();
                Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%02d",hour);
                Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d",minute);
                textClock.invalidate();
            }





}
