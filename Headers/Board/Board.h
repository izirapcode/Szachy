//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_BOARD_H
#define SZACHY_BOARD_H


#include "../Pieces/Piece.h"

class Board {
public:
    Piece * boardFields[8][8];
    void initialize();
    Piece * getBoardField(int x, int y);
    void printBoard();
    void setBoardField(Piece* piece);

};


#endif //SZACHY_BOARD_H
