#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::FunctionUP()
{
	//count++;
		Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%02d",++count);
		textCounter.invalidate();
}

void Screen1View::FunctionDown()

{
	Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%02d",--count);
	textCounter.invalidate();
}
