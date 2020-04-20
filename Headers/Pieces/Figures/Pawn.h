/**
 * Implementation of pawn
 */

#ifndef SZACHY_PAWN_H
#define SZACHY_PAWN_H


#include "../Piece.h"

class Pawn : public Piece {
private:
    bool isFirstMove();
public:
    void move(std::vector<std::vector<Piece *>> array) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) override;
};

#endif //SZACHY_PAWN_H