/**
 * Implementation of bishop
 */

#ifndef SZACHY_BISHOP_H
#define SZACHY_BISHOP_H


#include "../Piece.h"
#include "../../Board/Board.h"

class Bishop : public Piece {
public:
    void move(std::vector<std::vector<Piece *>> array) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) override;
};


#endif //SZACHY_BISHOP_H
