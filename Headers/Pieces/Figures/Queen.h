//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_QUEEN_H
#define SZACHY_QUEEN_H


#include "../Piece.h"

class Queen : public Piece {
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
};

#endif //SZACHY_QUEEN_H
