//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../Headers/Board/Board.h"
#include "../../Headers/Pieces/Figures/Pawn.h"
#include "../../Headers/Pieces/Figures/Rook.h"
#include "../../Headers/Pieces/Figures/Knight.h"
#include "../../Headers/Pieces/Figures/Bishop.h"
#include "../../Headers/Pieces/Figures/Queen.h"
#include "../../Headers/Pieces/Figures/King.h"

void Board::initialize() {

    for (int x = 0; x < 8; x++) {
        std::vector<Piece *> v1;
        for (int y = 0; y < 8; y++)
        {
            v1.push_back(nullptr);
        }
        boardFields.push_back(v1);
    }

    setBoardField(new Rook(0,0,'b'));
    setBoardField(new Knight(0,1,'b'));
    setBoardField(new Bishop(0,2,'b'));
    setBoardField(new Queen(0,3,'b'));
    setBoardField(new King(0,4,'b'));
    setBoardField(new Bishop(0,5,'b'));
    setBoardField(new Knight(0,6,'b'));
    setBoardField(new Rook(0,7,'b'));

    setBoardField(new Rook(7,0,'w'));
    setBoardField(new Knight(7,1,'w'));
    setBoardField(new Bishop(7,2,'w'));
    setBoardField(new Queen(7,3,'w'));
    setBoardField(new King(7,4,'w'));
    setBoardField(new Bishop(7,5,'w'));
    setBoardField(new Knight(7,6,'w'));
    setBoardField(new Rook(7,7,'w'));

    for (int i = 0; i < 8; i++)
    {
        setBoardField(new Pawn(1,i,'b'));
        setBoardField(new Pawn(6,i,'w'));
    }
}

void Board::setBoardField(Piece* piece) {
    boardFields[piece->getX()][piece->getY()] = piece;
}

Piece * Board::getBoardField(int x, int y) {
    return boardFields[x][y];
}

void Board::printBoard() {

    for (int x = 0; x < 8; x++){
        for(int y=0;y<8;y++){
            if(boardFields[x][y] != nullptr) {
                boardFields[x][y]->print();
            }
            else
                std::cout << "0";
        }
            std::cout<<std::endl;
    }

}

const std::vector<std::vector<Piece *>> &Board::getBoardFields() const {
    return boardFields;
}

void Board::setBoardFields(const std::vector<std::vector<Piece *>> &boardFields) {
    Board::boardFields = boardFields;
}
