//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_KNIGHT_H
#define SZACHY_KNIGHT_H


#include "../Piece.h"
#include "../../Board/Board.h"

class Knight : public Piece {

public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(Piece * (*array)[8][8], int x, int y) override;
};
#endif //SZACHY_KNIGHT_H
