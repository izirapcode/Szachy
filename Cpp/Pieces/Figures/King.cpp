//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/King.h"
#include "../../../Headers/Board/Board.h"

void King::move(Piece * (*array)[8][8]) {

}

void King::print() {
    std::cout << "k";
}

bool King::isMoveValid(Piece *(*array)[8][8], int x, int y) {
    return false;
}
