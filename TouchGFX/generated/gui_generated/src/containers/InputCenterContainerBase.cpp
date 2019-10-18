/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/InputCenterContainerBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

InputCenterContainerBase::InputCenterContainerBase()
{
    setWidth(72);
    setHeight(57);

    TextInputCenter.setPosition(0, -4, 72, 57);
    TextInputCenter.setColor(touchgfx::Color::getColorFrom24BitRGB(213, 115, 0));
    TextInputCenter.setLinespacing(0);
    Unicode::snprintf(TextInputCenterBuffer, TEXTINPUTCENTER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID25).getText());
    TextInputCenter.setWildcard(TextInputCenterBuffer);
    TextInputCenter.setTypedText(touchgfx::TypedText(T_SINGLEUSEID24));

    add(TextInputCenter);
}

void InputCenterContainerBase::initialize()
{
	
}
