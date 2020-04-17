//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/King.h"
#include "../../../Headers/Util/MoveUtil.h"

void King::move(Piece * (*array)[8][8]) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x, &y);
    if(!isMoveValid(array, x, y))
        return;
    (*array)[x][y] = (*array)[this->getX()][this->getY()];
    (*array)[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

char King::print() {
    return 'k';
}

bool King::isMoveValid(Piece *(*array)[8][8], int x, int y) {
    if(getX() == x && getY() == y)
        return false;
    return abs(getX() - x) > 2 && abs(getY() - y) > 2;
}
