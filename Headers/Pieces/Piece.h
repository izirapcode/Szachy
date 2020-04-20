/**
 * Interface for every chess figure
 */
#include <vector>
#include "Square.h"


#ifndef SZACHY_PIECE_H
#define SZACHY_PIECE_H

class Piece : public Square{
public:
    ///
    /// \param x 1st matrix coordinate
    /// \param y 2nd matrix coordinate
    /// \param color color of figure 'b' - black, 'w' -white
    Piece(int x,int y, char color);
    /// Move of figure
    /// \param array matrix of Piece* used as chess board
    virtual void move(std::vector<std::vector<Piece *>>) = 0;

    /// Figure print
    /// 'p' - pawn
    /// 'r' - rook
    /// 'n' - knight
    /// 'b' - bishop
    /// 'q' - queen
    /// 'k' - king
    virtual void print() = 0;

    ///
    /// \param array matrix of Piece* used as chess board
    /// \param x 1st coordinate of new position
    /// \param y 2nd coordinate of new position
    /// \return whether move is valid
    virtual bool isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) = 0;
};

#endif //SZACHY_PIECE_H