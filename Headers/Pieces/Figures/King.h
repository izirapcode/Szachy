/**
 * Implementation of king
 */

#ifndef SZACHY_KING_H
#define SZACHY_KING_H


#include "../Piece.h"
#include "../../Board/Board.h"

class King : public Piece {
public:
    void move(std::vector<std::vector<Piece *>> array) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) override;
};

#endif //SZACHY_KING_H
