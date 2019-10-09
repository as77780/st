/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef INPUTCENTERCONTAINER_BASE_HPP
#define INPUTCENTERCONTAINER_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class InputCenterContainerBase : public touchgfx::Container
{
public:
    InputCenterContainerBase();
    virtual ~InputCenterContainerBase() {}

    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TextAreaWithOneWildcard TextInputCenter;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTINPUTCENTER_SIZE = 10;
    touchgfx::Unicode::UnicodeChar TextInputCenterBuffer[TEXTINPUTCENTER_SIZE];

private:

};

#endif // INPUTCENTERCONTAINER_BASE_HPP