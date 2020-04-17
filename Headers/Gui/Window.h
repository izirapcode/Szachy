//
// Created by User on 16.04.2020.
//

#ifndef SZACHY_WINDOW_H
#define SZACHY_WINDOW_H


#include <windows.h>
#include "../Board/Board.h"

class Window {
private:
    WNDCLASSEX wc;
    Board board;
    void drawFigures(HDC hdc, HDC hdcNowy, HBITMAP hbmMaska, HBITMAP hbmObraz, HBITMAP hbmOld);
    LRESULT WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
public:
    ///Initialize gui window
   void init(HINSTANCE hInstance);
    ///
    /// \param hwnd
    /// \param msg
    /// \param wParam
    /// \param lParam
    /// \return

    const WNDCLASSEX &getWc() const;

    void setWc(const WNDCLASSEX &wc);

    const Board &getBoard() const;

    void setBoard(const Board &board);

};


#endif //SZACHY_WINDOW_H
