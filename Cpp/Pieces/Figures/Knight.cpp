//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Knight.h"
#include "../../../Headers/Util/MoveUtil.h"

void Knight::move(std::vector<std::vector<Piece *>> array) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x,&y);
    if(!isMoveValid(array, x, y))
        return;
    array[x][y] = array[this->getX()][this->getY()];
    array[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

void Knight::print() {
    std::cout << "n";
}

bool Knight::isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) {
    if( getX() + 1 == x || getX() - 1 == x)
        if( getY() + 2 == y || getY() - 2 == y)
            return !MoveUtil::isFriendlyFire(array, x, y, color);
    if( getX() + 2 == x || getX() - 2 == x)
        if( getY() + 1 == y || getY() - 1 == y)
            return !MoveUtil::isFriendlyFire(array, x, y, color);
    return false;
}
