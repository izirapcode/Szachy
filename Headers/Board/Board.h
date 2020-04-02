//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_BOARD_H
#define SZACHY_BOARD_H


#include "../Pieces/Piece.h"

class Board {
protected:
    Piece* boardFields [8][8];
public:
    Board();
    Piece * getBoardField(int x, int y);
    void printBoard();
    void setBoardField(Piece* piece, int x, int y);
};


#endif //SZACHY_BOARD_H
