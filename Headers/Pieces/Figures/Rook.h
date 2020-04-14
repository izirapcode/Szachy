//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_ROOK_H
#define SZACHY_ROOK_H


#include "../Piece.h"
#include "../../Board/Board.h"

class Rook : public Piece {
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;

};


#endif //SZACHY_ROOK_H
