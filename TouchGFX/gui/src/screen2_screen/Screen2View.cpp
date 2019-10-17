#include <gui/screen2_screen/Screen2View.hpp>


Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
	Screen2ViewBase::setupScreen();
	  TIM5->CCR1=10;
	  TimeView();
}

void Screen2View::tearDownScreen()
{
   Screen2ViewBase::tearDownScreen();
}
void Screen2View::handleTickEvent()
{
        if (!textClock.isMoveAnimationRunning())
            {
        	   TimeView();
        	    circle.invalidate();
                circle.setArc(presenter->getSecond()*6,0);
                circle.invalidate();
                textClock.invalidate();
            }

}
void Screen2View:: TimeView(){
	      hour = presenter->getHour();
		  minute = presenter->getMinute();
	       Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%02d",hour);
	       Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d",minute);
	     //  textClock.invalidate();
}
