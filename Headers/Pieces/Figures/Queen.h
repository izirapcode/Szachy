/**
 * Implementation of queen
 */

#ifndef SZACHY_QUEEN_H
#define SZACHY_QUEEN_H


#include "../Piece.h"

class Queen : public Piece {
private:
    bool moveLeft(std::vector<std::vector<Piece *>> array, int x, int y);
    bool moveRight(std::vector<std::vector<Piece *>> array, int x, int y);
    bool moveDown(std::vector<std::vector<Piece *>> array, int x, int y);
    bool moveUp(std::vector<std::vector<Piece *>> array, int x, int y);
    bool moveLikeBishop(std::vector<std::vector<Piece *>> array, int x, int y);
public:
    void move(std::vector<std::vector<Piece *>> array) override;
    using Piece::Piece;
    void print() override;
    bool isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) override;
};

#endif //SZACHY_QUEEN_H
