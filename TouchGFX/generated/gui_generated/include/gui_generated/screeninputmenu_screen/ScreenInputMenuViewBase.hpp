/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENINPUTMENUVIEWBASE_HPP
#define SCREENINPUTMENUVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screeninputmenu_screen/ScreenInputMenuPresenter.hpp>
#include <touchgfx/widgets/TiledImage.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class ScreenInputMenuViewBase : public touchgfx::View<ScreenInputMenuPresenter>
{
public:
    ScreenInputMenuViewBase();
    virtual ~ScreenInputMenuViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TiledImage tiledImage1;
    touchgfx::RadioButton radioButton1;
    touchgfx::RadioButton radioButton2;
    touchgfx::RadioButton radioButton3;
    touchgfx::RadioButton radioButton4;
    touchgfx::Button buttonBack;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea2_1;
    touchgfx::TextArea textArea2_1_1;
    touchgfx::TextArea textArea2_1_2;
    touchgfx::RadioButtonGroup<4> radioButtonGroup1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenInputMenuViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENINPUTMENUVIEWBASE_HPP
