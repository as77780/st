#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include "main.h"

class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    virtual void scrollWheelInputUpdateItem(InputContainer1& item, int16_t itemIndex);
    virtual void scrollWheelInputUpdateCenterItem(InputCenterContainer& item, int16_t itemIndex);
protected:
    int16_t hour;
    int16_t minute;
};
extern  RTC_HandleTypeDef hrtc;
#endif // MAIN_VIEW_HPP