/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler),
    updateItemCallback(this, &MainViewBase::updateItemCallbackHandler)
{
    CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

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

    box1.setPosition(176, 16, 160, 52);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(46, 42, 42));

    scrollWheelInput.setPosition(174, 13, 162, 55);
    scrollWheelInput.setHorizontal(true);
    scrollWheelInput.setCircular(true);
    scrollWheelInput.setEasingEquation(EasingEquations::backEaseOut);
    scrollWheelInput.setSwipeAcceleration(10);
    scrollWheelInput.setDragAcceleration(10);
    scrollWheelInput.setNumberOfItems(4);
    scrollWheelInput.setSelectedItemOffset(52);
    scrollWheelInput.setSelectedItemExtraSize(0, 0);
    scrollWheelInput.setSelectedItemMargin(0, 0);
    scrollWheelInput.setDrawableSize(55, 0);
    scrollWheelInput.setDrawables(scrollWheelInputListItems, updateItemCallback,
                              scrollWheelInputSelectedListItems, updateItemCallback);
    scrollWheelInput.animateToItem(0, 0);

    textArea1.setXY(227, 68);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(TypedText(T_SINGLEUSEID26));

    line1.setPosition(217, 16, 10, 50);
    line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(10, 10, 10));
    line1.setPainter(line1Painter);
    line1.setStart(6, 5);
    line1.setEnd(6, 57);
    line1.setLineWidth(5);
    line1.setLineEndingStyle(Line::SQUARE_CAP_ENDING);

    line1_1.setPosition(275, 16, 10, 50);
    line1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(10, 10, 10));
    line1_1.setPainter(line1_1Painter);
    line1_1.setStart(6, 5);
    line1_1.setEnd(6, 57);
    line1_1.setLineWidth(5);
    line1_1.setLineEndingStyle(Line::SQUARE_CAP_ENDING);

    add(tiledImage1);
    add(clock_m);
    add(Power_main);
    add(ButtonEqualizer);
    add(box1);
    add(scrollWheelInput);
    add(textArea1);
    add(line1);
    add(line1_1);
}

void MainViewBase::setupScreen()
{
    scrollWheelInput.initialize();
    for (int i = 0; i < scrollWheelInputListItems.getNumberOfDrawables(); i++)
    {
        scrollWheelInputListItems[i].initialize();
    }
    for (int i = 0; i < scrollWheelInputSelectedListItems.getNumberOfDrawables(); i++)
    {
        scrollWheelInputSelectedListItems[i].initialize();
    }
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

void MainViewBase::updateItemCallbackHandler(DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &scrollWheelInputListItems)
    {
        Drawable* d = items->getDrawable(containerIndex);
        InputContainer1* cc = (InputContainer1*)d;
        scrollWheelInputUpdateItem(*cc, itemIndex);
    }
    else if (items == &scrollWheelInputSelectedListItems)
    {
        Drawable* d = items->getDrawable(containerIndex);
        InputCenterContainer* cc = (InputCenterContainer*)d;
        scrollWheelInputUpdateCenterItem(*cc, itemIndex);
    }
}
