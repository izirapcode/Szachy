/**
 * Implementation of knight
 */

#ifndef SZACHY_KNIGHT_H
#define SZACHY_KNIGHT_H


#include "../Piece.h"
#include "../../Board/Board.h"

class Knight : public Piece {

public:
    void move(std::vector<std::vector<Piece *>> array) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) override;
};
#endif //SZACHY_KNIGHT_H
