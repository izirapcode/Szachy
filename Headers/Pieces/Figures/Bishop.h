//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_BISHOP_H
#define SZACHY_BISHOP_H


#include "../Piece.h"
#include "../../Board/Board.h"

class Bishop : public Piece {
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
};


#endif //SZACHY_BISHOP_H
