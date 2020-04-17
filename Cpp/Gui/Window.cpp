//
// Created by User on 16.04.2020.
//

#include <vector>
#include "../../Headers/Gui/Window.h"
#include "../../Headers/Gui/BitmapsGenerator.h"
#include "../../Headers/Util/GuiUtils.h"


void Window::init(HINSTANCE hInstance) {


    LRESULT CALLBACK (*a)(HWND, UINT, WPARAM, LPARAM)  = &Window::WndProc;

    wc.cbSize = sizeof( WNDCLASSEX );
    wc.style = 0;
    wc.lpfnWndProc = a;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon( NULL, IDI_APPLICATION );
    wc.hCursor = LoadCursor( NULL, IDC_ARROW );

    wc.hbrBackground = CreatePatternBrush(BitmapsGenerator::getChessBoard());
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "Chess";
    wc.hIconSm = LoadIcon( NULL, IDI_APPLICATION );
}

const WNDCLASSEX &Window::getWc() const {
    return wc;
}

void Window::setWc(const WNDCLASSEX &wc) {
    Window::wc = wc;
}

void Window::drawFigures(HDC hdc, HDC hdcNowy, HBITMAP hbmMaska, HBITMAP hbmObraz, HBITMAP hbmOld) {
    BITMAP bmInfo;

    GetObject( hbmObraz, sizeof( bmInfo ), & bmInfo );

    std::vector<std::vector<char>> vector = board.printBoard();

    for(int i = 0; i >8; i++)
        for(int j = 0; i >8; i++)
        {
            if(vector[i][j] != '0'){
                hbmOld =( HBITMAP ) SelectObject( hdcNowy, hbmMaska );
                BitBlt( hdc, i*100, j*100, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCAND );
                SelectObject( hdcNowy, hbmObraz );
                BitBlt( hdc, i*100, j*100, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCPAINT );
            }
        }


}

LRESULT Window::WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {

    switch( msg )
    {
        case WM_CLOSE:
            DestroyWindow( hwnd );
            break;

        case WM_DESTROY:
            PostQuitMessage( 0 );
            break;
        case WM_PAINT:
        {
            PAINTSTRUCT ps; // deklaracja struktury
            HDC hdc = BeginPaint( hwnd, & ps );
            HBITMAP hbmObraz, hbmOld, hbmMaska;
            hbmObraz = BitmapsGenerator::getFigure();
            hbmMaska = GuiUtils::CreateBitmapMask( hbmObraz, RGB( 255, 255, 255 ) );
            HDC hdcNowy = CreateCompatibleDC( hdc );

            drawFigures(hdc, hdcNowy, hbmMaska, hbmObraz, hbmOld);

            ReleaseDC( hwnd, hdc );
            SelectObject( hdcNowy, hbmOld );
            DeleteDC( hdcNowy );
            DeleteObject( hbmMaska );
            DeleteObject( hbmObraz );

            EndPaint( hwnd, & ps ); // zwalniamy hdc
        }
            break;
        default:
            return DefWindowProc( hwnd, msg, wParam, lParam );
    }

    return 0;
}

const Board &Window::getBoard() const {
    return board;
}

void Window::setBoard(const Board &board) {
    Window::board = board;
}
