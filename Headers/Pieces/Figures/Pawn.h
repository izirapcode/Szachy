//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_PAWN_H
#define SZACHY_PAWN_H


#include "../Piece.h"

class Pawn : public Piece {
private:
    bool isFirstMove();
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(Piece * (*array)[8][8], int x, int y) override;
};

#endif //SZACHY_PAWN_H