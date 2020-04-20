//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Rook.h"
#include "../../../Headers/Util/MoveUtil.h"

void Rook::move(std::vector<std::vector<Piece *>> array) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x,&y);
    if(!isMoveValid(array, x, y))
        return;
    array[x][y] = array[this->getX()][this->getY()];
    array[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

void Rook::print() {
    std::cout << "r";
}

bool Rook::isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) {
        if( getX() == x){
            if( getY() < y)
                return moveRight(array, x, y);
            else if(getY() > y)
                return moveLeft(array, x, y);
        }else if(getY() == y){
            if( getX() > x)
                return moveUp(array, x, y);
            else if( getX() < x )
                return moveDown(array, x, y);
        }
    return false;
}

bool Rook::moveLeft(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getY() -1; i > y; i--) {
        if (array[x][i] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Rook::moveRight(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getY() + 1; i < y; i++) {
        if (array[x][i] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Rook::moveUp(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getX() -1; i > x; i--) {
        if (array[i][y] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Rook::moveDown(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getX() + 1; i < x; i++) {
        if (array[i][y] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}
