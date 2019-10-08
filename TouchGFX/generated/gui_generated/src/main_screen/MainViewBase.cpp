/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{
    tiledImage1.setBitmap(Bitmap(BITMAP_BLUE_TEXTURES_CARBON_FIBRE_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    clock_m.setPosition(5, 16, 145, 49);
    clock_m.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    clock_m.setLinespacing(0);
    Unicode::snprintf(clock_mBuffer1, CLOCK_MBUFFER1_SIZE, "%s", TypedText(T_SINGLEUSEID14).getText());
    clock_m.setWildcard1(clock_mBuffer1);
    Unicode::snprintf(clock_mBuffer2, CLOCK_MBUFFER2_SIZE, "%s", TypedText(T_SINGLEUSEID15).getText());
    clock_m.setWildcard2(clock_mBuffer2);
    clock_m.setTypedText(TypedText(T_SINGLEUSEID13));

    Power_main.setXY(20, 205);
    Power_main.setBitmaps(Bitmap(BITMAP_DARK_ICONS_POWER_48_ID), Bitmap(BITMAP_DARK_ICONS_POWER_48_ID));
    Power_main.setAction(buttonCallback);

    ButtonEqualizer.setXY(416, 205);
    ButtonEqualizer.setBitmaps(Bitmap(BITMAP_EQUALIZER_ID), Bitmap(BITMAP_EQUALIZER_ID));
    ButtonEqualizer.setAction(buttonCallback);

    add(tiledImage1);
    add(clock_m);
    add(Power_main);
    add(ButtonEqualizer);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Power_main)
    {
        //PowerOff
        //When Power_main clicked change screen to Screen2
        //Go to Screen2 with screen transition towards West
        application().gotoScreen2ScreenCoverTransitionWest();
    }
    else if (&src == &ButtonEqualizer)
    {
        //IntEqu
        //When ButtonEqualizer clicked change screen to Equalizer
        //Go to Equalizer with screen transition towards East
        application().gotoEqualizerScreenCoverTransitionEast();
    }
}
