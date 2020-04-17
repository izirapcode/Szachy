//
// Created by User on 16.04.2020.
//

#include <windows.h>
#include "../../Headers/Util/GuiUtils.h"

HBITMAP GuiUtils::CreateBitmapMask(HBITMAP hbmColour, COLORREF crTransparent) {
    HDC hdcMem, hdcMem2;
    HBITMAP hbmMask, hbmOld, hbmOld2;
    BITMAP bm;

    GetObject( hbmColour, sizeof( BITMAP ), & bm );
    hbmMask = CreateBitmap( bm.bmWidth, bm.bmHeight, 1, 1, NULL );

    hdcMem = CreateCompatibleDC( NULL );
    hdcMem2 = CreateCompatibleDC( NULL );

    hbmOld =( HBITMAP ) SelectObject( hdcMem, hbmColour );
    hbmOld2 =( HBITMAP ) SelectObject( hdcMem2, hbmMask );

    SetBkColor( hdcMem, crTransparent );

    BitBlt( hdcMem2, 0, 0, bm.bmWidth, bm.bmHeight, hdcMem, 0, 0, SRCCOPY );
    BitBlt( hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, hdcMem2, 0, 0, SRCINVERT );

    SelectObject( hdcMem, hbmOld );
    SelectObject( hdcMem2, hbmOld2 );
    DeleteDC( hdcMem );
    DeleteDC( hdcMem2 );

    return hbmMask;
}