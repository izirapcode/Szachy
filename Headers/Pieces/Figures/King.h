//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_KING_H
#define SZACHY_KING_H


#include "../Piece.h"

class King : public Piece {
public:
    void move() override;

    void print() override;
};

#endif //SZACHY_KING_H
