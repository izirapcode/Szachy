//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_PAWN_H
#define SZACHY_PAWN_H


#include "../Piece.h"

class Pawn : public Piece {
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
};

#endif //SZACHY_PAWN_H