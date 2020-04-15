//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Bishop.h"

void Bishop::move(Piece * (*array)[8][8]) {

}

void Bishop::print() {
    std::cout << "b";
}

bool Bishop::isMoveValid(Piece *(*array)[8][8], int x, int y) {
    return false;
}
