//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Queen.h"

void Queen::move(Piece * (*array)[8][8]) {

}

void Queen::print() {
    std::cout << "q";
}

bool Queen::isMoveValid(Piece *(*array)[8][8], int x, int y) {
    return false;
}
