//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_QUEEN_H
#define SZACHY_QUEEN_H


#include "../Piece.h"

class Queen : public Piece {
private:
    bool moveLeft(Piece *(*array)[8][8], int x, int y);
    bool moveRight(Piece *(*array)[8][8], int x, int y);
    bool moveDown(Piece *(*array)[8][8], int x, int y);
    bool moveUp(Piece *(*array)[8][8], int x, int y);
    bool moveLikeBishop(Piece *(*array)[8][8], int x, int y);
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(Piece * (*array)[8][8], int x, int y) override;
};

#endif //SZACHY_QUEEN_H
