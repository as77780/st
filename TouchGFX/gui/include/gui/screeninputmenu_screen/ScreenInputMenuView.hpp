#ifndef SCREENINPUTMENUVIEW_HPP
#define SCREENINPUTMENUVIEW_HPP

#include <gui_generated/screeninputmenu_screen/ScreenInputMenuViewBase.hpp>
#include <gui/screeninputmenu_screen/ScreenInputMenuPresenter.hpp>

class ScreenInputMenuView : public ScreenInputMenuViewBase
{
public:
    ScreenInputMenuView();
    virtual ~ScreenInputMenuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENINPUTMENUVIEW_HPP
