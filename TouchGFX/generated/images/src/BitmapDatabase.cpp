// -alpha_dither yes -dither 2 -non_opaque_image_format ARGB8888 -opaque_image_format RGB888 0x00000000
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif


const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { 0,0,0,0,0,0,0,0,0 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
