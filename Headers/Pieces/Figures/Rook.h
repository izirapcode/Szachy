/**
 * Implementation of rook
 */

#ifndef SZACHY_ROOK_H
#define SZACHY_ROOK_H


#include "../Piece.h"
#include "../../Board/Board.h"

class Rook : public Piece {
private:
    bool moveLeft(Piece *(*array)[8][8], int x, int y);
    bool moveRight(Piece *(*array)[8][8], int x, int y);
    bool moveDown(Piece *(*array)[8][8], int x, int y);
    bool moveUp(Piece *(*array)[8][8], int x, int y);
public:
    void move(Piece * (*array)[8][8]) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(Piece * (*array)[8][8], int x, int y) override;

};


#endif //SZACHY_ROOK_H
