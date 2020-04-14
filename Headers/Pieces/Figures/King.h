//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_KING_H
#define SZACHY_KING_H


#include "../Piece.h"
#include "../../Board/Board.h"

class King : public Piece {
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
};

#endif //SZACHY_KING_H
