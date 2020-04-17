//
// Created by User on 02.04.2020.
//

#include <vector>
#include "../../Headers/Board/Board.h"
#include "../../Headers/Pieces/Figures/Pawn.h"
#include "../../Headers/Pieces/Figures/Rook.h"
#include "../../Headers/Pieces/Figures/Knight.h"
#include "../../Headers/Pieces/Figures/Bishop.h"
#include "../../Headers/Pieces/Figures/Queen.h"
#include "../../Headers/Pieces/Figures/King.h"

void Board::initialize() {

    for (int x = 0; x < 8; x++)
        for(int y=0;y<8;y++)
            boardFields[x][y] = nullptr;

    setBoardField(new Rook(0,0,'b'));
    setBoardField(new Knight(1,0,'b'));
    setBoardField(new Bishop(2,0,'b'));
    setBoardField(new Queen(3,0,'b'));
    setBoardField(new King(4,0,'b'));
    setBoardField(new Bishop(5,0,'b'));
    setBoardField(new Knight(6,0,'b'));
    setBoardField(new Rook(7,0,'b'));

    setBoardField(new Rook(0,7,'w'));
    setBoardField(new Knight(1,7,'w'));
    setBoardField(new Bishop(2,7,'w'));
    setBoardField(new Queen(3,7,'w'));
    setBoardField(new King(4,7,'w'));
    setBoardField(new Bishop(5,7,'w'));
    setBoardField(new Knight(6,7,'w'));
    setBoardField(new Rook(7,7,'w'));

    for (int i = 0; i < 8; i++)
    {
        setBoardField(new Pawn(i,1,'b'));
        setBoardField(new Pawn(i,6,'w'));
    }
}

void Board::setBoardField(Piece* piece) {
    boardFields[piece->getX()][piece->getY()] = piece;
}

Piece * Board::getBoardField(int x, int y) {
    return boardFields[x][y];
}

std::vector<std::vector<char>> Board::printBoard() {

    std::vector<std::vector<char> > vec(8);
    for (int x = 0; x < 8; x++){
        vec[x] = std::vector<char>(8);
        for(int y=0;y<8;y++){
            if(boardFields[x][y] != nullptr) {
                vec[x][y] = boardFields[x][y]->print();
            }
            else
                vec[x][y] = '0';
        }
    }

    return vec;
}
