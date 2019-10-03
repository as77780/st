#include <gui/screen2_screen/Screen2View.hpp>



Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();

    hour = presenter->getHour();
    minute = presenter->getMinute();

    Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%02d", hour);
    Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d", minute);
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

    {
       	HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
    	HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN);
        Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%02d",sTime.Hours);
        Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d",sTime.Minutes);

        textClock.invalidate();
        circle.invalidate();
        circle.setArc(sTime.Seconds*6,0);
        circle.invalidate();
        }

}
