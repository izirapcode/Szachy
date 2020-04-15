//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Bishop.h"
#include "../../../Headers/Util/MoveUtil.h"

void Bishop::move(Piece * (*array)[8][8]) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x,&y);
    if(!isMoveValid(array, x, y))
        return;
    (*array)[x][y] = (*array)[this->getX()][this->getY()];
    (*array)[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

void Bishop::print() {
    std::cout << "b";
}

bool Bishop::isMoveValid(Piece *(*array)[8][8], int x, int y) {
    return false;
}
