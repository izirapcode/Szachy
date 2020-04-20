//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/King.h"
#include "../../../Headers/Util/MoveUtil.h"

void King::move(std::vector<std::vector<Piece *>> array) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x, &y);
    if(!isMoveValid(array, x, y))
        return;
    array[x][y] = array[this->getX()][this->getY()];
    array[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

void King::print() {
    std::cout << "k";
}

bool King::isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) {
    if(getX() == x && getY() == y)
        return false;
    return abs(getX() - x) > 2 && abs(getY() - y) > 2;
}
