//
// Created by User on 02.04.2020.
//

#include "Square.h"

#ifndef SZACHY_PIECE_H
#define SZACHY_PIECE_H

#endif //SZACHY_PIECE_H
class Piece{
protected:
    Square square;
public:
    const Square &getSquare() const;

    void setSquare(const Square &square);

    virtual void move() = 0;
};