//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Rook.h"
#include "../../../Headers/Util/MoveUtil.h"

void Rook::move(Piece * (*array)[8][8]) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x,&y);
    if(!isMoveValid(array, x, y))
        return;
    (*array)[x][y] = (*array)[this->getX()][this->getY()];
    (*array)[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

char Rook::print() {
    return 'r';
}

bool Rook::isMoveValid(Piece *(*array)[8][8], int x, int y) {
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

bool Rook::moveLeft(Piece *(*array)[8][8], int x, int y) {
    for(int i=this->getY() -1; i > y; i--) {
        if ((*array)[x][i] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Rook::moveRight(Piece *(*array)[8][8], int x, int y) {
    for(int i=this->getY() + 1; i < y; i++) {
        if ((*array)[x][i] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Rook::moveUp(Piece *(*array)[8][8], int x, int y) {
    for(int i=this->getX() -1; i > x; i--) {
        if ((*array)[i][y] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Rook::moveDown(Piece *(*array)[8][8], int x, int y) {
    for(int i=this->getX() + 1; i < x; i++) {
        if ((*array)[i][y] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}
