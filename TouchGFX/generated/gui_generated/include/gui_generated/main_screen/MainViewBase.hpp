/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/TiledImage.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/RepeatButton.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class MainViewBase : public touchgfx::View<MainPresenter>
{
public:
    MainViewBase();
    virtual ~MainViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void FunVolUP()
    {
        // Override and implement this function in Main
    }

    virtual void FunVolDown()
    {
        // Override and implement this function in Main
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TiledImage tiledImage1;
    touchgfx::Button Power_main;
    touchgfx::Button ButtonEqualizer;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::Button buttonInput;
    touchgfx::Box box1;
    touchgfx::RepeatButton ButVolUP;
    touchgfx::RepeatButton ButVolDown;
    touchgfx::TextAreaWithOneWildcard textVolume;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTVOLUME_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textVolumeBuffer[TEXTVOLUME_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MAINVIEWBASE_HPP
