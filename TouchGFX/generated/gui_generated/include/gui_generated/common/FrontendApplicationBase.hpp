/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // Screen1
    void gotoScreen1ScreenNoTransition();

    void gotoScreen1ScreenSlideTransitionWest();


    // Screen2
    void gotoScreen2ScreenCoverTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Screen1
    void gotoScreen1ScreenNoTransitionImpl();

    void gotoScreen1ScreenSlideTransitionWestImpl();


    // Screen2
    void gotoScreen2ScreenCoverTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
