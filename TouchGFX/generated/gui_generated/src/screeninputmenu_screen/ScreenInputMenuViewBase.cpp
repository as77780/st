/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screeninputmenu_screen/ScreenInputMenuViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

ScreenInputMenuViewBase::ScreenInputMenuViewBase() :
    buttonCallback(this, &ScreenInputMenuViewBase::buttonCallbackHandler)
{
    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_TEXTURES_CARBON_FIBRE_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    radioButton1.setXY(41, 22);
    radioButton1.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    radioButton1.setSelected(true);
    radioButton1.setDeselectionEnabled(false);

    radioButton2.setXY(41, 78);
    radioButton2.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    radioButton2.setSelected(false);
    radioButton2.setDeselectionEnabled(false);

    radioButton3.setXY(41, 136);
    radioButton3.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    radioButton3.setSelected(false);
    radioButton3.setDeselectionEnabled(false);

    radioButton4.setXY(41, 193);
    radioButton4.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    radioButton4.setSelected(false);
    radioButton4.setDeselectionEnabled(false);

    buttonBack.setXY(404, 193);
    buttonBack.setBitmaps(touchgfx::Bitmap(BITMAP_IC_ID), touchgfx::Bitmap(BITMAP_IC_ID));
    buttonBack.setAction(buttonCallback);

    textArea1.setXY(360, 10);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(69, 250, 121));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID28));

    textArea2.setXY(112, 32);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID29));

    textArea2_1.setXY(112, 88);
    textArea2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));

    textArea2_1_1.setXY(113, 146);
    textArea2_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_1_1.setLinespacing(0);
    textArea2_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID31));

    textArea2_1_2.setXY(113, 203);
    textArea2_1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_1_2.setLinespacing(0);
    textArea2_1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID32));

    add(tiledImage1);
    add(radioButton1);
    add(radioButton2);
    add(radioButton3);
    add(radioButton4);
    add(buttonBack);
    add(textArea1);
    add(textArea2);
    add(textArea2_1);
    add(textArea2_1_1);
    add(textArea2_1_2);
    radioButtonGroup1.add(radioButton1);
    radioButtonGroup1.add(radioButton2);
    radioButtonGroup1.add(radioButton3);
    radioButtonGroup1.add(radioButton4);
}

void ScreenInputMenuViewBase::setupScreen()
{

}

void ScreenInputMenuViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonBack)
    {
        //InteractionToMenu
        //When buttonBack clicked change screen to Main
        //Go to Main with screen transition towards North
        application().gotoMainScreenSlideTransitionNorth();
    }
}
