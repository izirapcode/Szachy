//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Rook.h"

void Rook::move(Piece * (*array)[8][8]) {

}

void Rook::print() {
    std::cout << "r";
}

bool Rook::isMoveValid(Piece *(*array)[8][8], int x, int y) {
    return false;
}
