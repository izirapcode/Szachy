//
// Created by User on 02.04.2020.
//

#include "Square.h"


#ifndef SZACHY_PIECE_H
#define SZACHY_PIECE_H

class Piece : public Square{
public:
    Piece(int x,int y, char color);
    virtual void move(Piece * (*array)[8][8]) = 0;
    virtual void print() = 0;
};

#endif //SZACHY_PIECE_H