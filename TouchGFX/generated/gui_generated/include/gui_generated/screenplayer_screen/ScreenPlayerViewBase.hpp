/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENPLAYERVIEWBASE_HPP
#define SCREENPLAYERVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenplayer_screen/ScreenPlayerPresenter.hpp>
#include <touchgfx/widgets/TiledImage.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class ScreenPlayerViewBase : public touchgfx::View<ScreenPlayerPresenter>
{
public:
    ScreenPlayerViewBase();
    virtual ~ScreenPlayerViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TiledImage tiledImage1;
    touchgfx::BoxWithBorder boxWithBorder1_1_1;
    touchgfx::BoxWithBorder boxWithBorder1_1;
    touchgfx::Button buttonBack;
    touchgfx::ButtonWithIcon buttonWithIcon1;
    touchgfx::ButtonWithIcon buttonWithIcon2;
    touchgfx::ButtonWithIcon buttonWithIcon3;
    touchgfx::ButtonWithIcon buttonWithIcon4;
    touchgfx::Box box1;
    touchgfx::TextArea textArea1;
    touchgfx::ButtonWithIcon buttonWithIcon5;
    touchgfx::ButtonWithIcon buttonWithIcon6;
    touchgfx::ButtonWithIcon buttonWithIcon7;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenPlayerViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENPLAYERVIEWBASE_HPP
