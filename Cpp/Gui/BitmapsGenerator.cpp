//
// Created by User on 16.04.2020.
//

#include "../../Headers/Gui/BitmapsGenerator.h"

HBITMAP BitmapsGenerator::getChessBoard() {
    return (HBITMAP)LoadImage(NULL, "C:\\Users\\User\\CLionProjects\\Szachy\\Resources\\chessboard.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
}

HBITMAP BitmapsGenerator::getFigure() {
    return (HBITMAP)LoadImage(NULL, "C:\\Users\\User\\CLionProjects\\Szachy\\Resources\\tempFigure.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
}

