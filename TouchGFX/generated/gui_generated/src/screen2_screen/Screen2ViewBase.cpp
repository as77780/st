/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler)
{
    CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    tiledImage1.setBitmap(Bitmap(BITMAP_BLUE_TEXTURES_CARBON_FIBRE_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    buttonSettings.setXY(422, 10);
    buttonSettings.setBitmaps(Bitmap(BITMAP_CONFIGURATION_ID), Bitmap(BITMAP_CONFIGURATION_ID));
    buttonSettings.setAction(buttonCallback);

    textClock.setPosition(-295, 85, 295, 103);
    textClock.setColor(touchgfx::Color::getColorFrom24BitRGB(186, 186, 186));
    textClock.setLinespacing(0);
    Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%s", TypedText(T_SINGLEUSEID11).getText());
    textClock.setWildcard1(textClockBuffer1);
    Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%s", TypedText(T_SINGLEUSEID12).getText());
    textClock.setWildcard2(textClockBuffer2);
    textClock.setTypedText(TypedText(T_SINGLEUSEID10));

    circle.setPosition(480, 0, 339, 272);
    circle.setCenter(130, 130);
    circle.setRadius(125);
    circle.setLineWidth(6);
    circle.setArc(0, 0);
    circle.setCapPrecision(90);
    circlePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(186, 186, 186));
    circle.setPainter(circlePainter);

    add(tiledImage1);
    add(buttonSettings);
    add(textClock);
    add(circle);
}

void Screen2ViewBase::setupScreen()
{

}

//Called when the screen is done with transition/load
void Screen2ViewBase::afterTransition()
{
    //MoveCircleIntoPlace
    //When screen is entered move circle
    //Move circle to x:114, y:5 with CubicOut easing in 750 ms (45 Ticks)
    circle.clearMoveAnimationEndedAction();
    circle.startMoveAnimation(114, 5, 45, EasingEquations::cubicEaseOut, EasingEquations::cubicEaseOut);

    //MoveTextClockIntoPlace
    //When screen is entered move textClock
    //Move textClock to x:95, y:85 with CubicOut easing in 750 ms (45 Ticks)
    textClock.clearMoveAnimationEndedAction();
    textClock.startMoveAnimation(95, 85, 45, EasingEquations::cubicEaseOut, EasingEquations::cubicEaseOut);
}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonSettings)
    {
        //ChangeToScreen1
        //When buttonSettings clicked change screen to Screen1
        //Go to Screen1 with screen transition towards South
        application().gotoScreen1ScreenSlideTransitionSouth();
    }
}
