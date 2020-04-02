//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_ROOK_H
#define SZACHY_ROOK_H


#include "../Piece.h"

class Rook : public Piece {
public:
    void move() override;

    void print() override;

};


#endif //SZACHY_ROOK_H
