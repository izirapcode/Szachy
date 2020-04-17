/**
 * Implementation of bishop
 */

#ifndef SZACHY_BISHOP_H
#define SZACHY_BISHOP_H


#include "../Piece.h"
#include "../../Board/Board.h"

class Bishop : public Piece {
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    char print() override;
    bool isMoveValid(Piece * (*array)[8][8], int x, int y) override;
};


#endif //SZACHY_BISHOP_H
