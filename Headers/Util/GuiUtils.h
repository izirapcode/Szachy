/**
 * Help methods for gui
 */

#ifndef SZACHY_GUIUTILS_H
#define SZACHY_GUIUTILS_H


#include <windef.h>

class GuiUtils {
public:
    ///
    /// \param hbmColour Bitmap
    /// \param crTransparent RGB Color
    /// \return Bitmap mask for specified color
    static HBITMAP CreateBitmapMask(HBITMAP hbmColour, COLORREF crTransparent);
};


#endif //SZACHY_GUIUTILS_H
