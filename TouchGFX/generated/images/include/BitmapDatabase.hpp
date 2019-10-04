// Generated by imageconverter. Please, do not edit!

#ifndef BITMAPDATABASE_HPP
#define BITMAPDATABASE_HPP

#include <touchgfx/hal/Types.hpp>
#include <touchgfx/Bitmap.hpp>

const uint16_t BITMAP_DOWN_ARROW_ID = 0; // Size: 32x19 pixels
const uint16_t BITMAP_DOWN_ARROW_PRESSED_ID = 1; // Size: 32x19 pixels
const uint16_t BITMAP_UP_ARROW_ID = 2; // Size: 32x19 pixels
const uint16_t BITMAP_UP_ARROW_PRESSED_ID = 3; // Size: 32x19 pixels
const uint16_t BITMAP_BLUE_TEXTURES_CARBON_FIBRE_ID = 4; // Size: 24x22 pixels
const uint16_t BITMAP_BTN_ROUND_ID = 5; // Size: 97x60 pixels
const uint16_t BITMAP_BTN_ROUND_PRESSED_ID = 6; // Size: 97x60 pixels
const uint16_t BITMAP_CONFIGURATION_ID = 7; // Size: 48x48 pixels

namespace BitmapDatabase
{
#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

class BitmapData;
const touchgfx::Bitmap::BitmapData* getInstance();
uint16_t getInstanceSize();
}

#endif
