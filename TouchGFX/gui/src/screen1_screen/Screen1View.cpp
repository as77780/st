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
	if(count<=9){++count;}
		Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d",count);
		textCounter.invalidate();
}

void Screen1View::FunctionDown()

{
	if(count>=1){--count;}
	Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d",count);
	textCounter.invalidate();
}
