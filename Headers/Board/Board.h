/**
 * Class with method of chess board
 */

#ifndef SZACHY_BOARD_H
#define SZACHY_BOARD_H

#include <vector>
#include "../Pieces/Piece.h"

class Board {
private:
    /// Board
    std::vector<std::vector< Piece*> > boardFields;
public:
    const std::vector<std::vector<Piece *>> &getBoardFields() const;

    void setBoardFields(const std::vector<std::vector<Piece *>> &boardFields);

    /// Initialization of starting layout of chess board
    void initialize();
    ///
    /// \param x  1st coordinate
    /// \param y  2nd coordinate
    /// \return Figure on specifing board field
    Piece * getBoardField(int x, int y);

    /// Console print of board, 0 as empty field
    void printBoard();

    /// Setting board field with figure
    /// \param piece figure
    void setBoardField(Piece* piece);

};


#endif //SZACHY_BOARD_H
