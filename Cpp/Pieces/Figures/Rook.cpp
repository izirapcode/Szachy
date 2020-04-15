//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Rook.h"

void Rook::move(Piece * (*array)[8][8]) {
    int x,y;
    std::cout<<"x,y"<<std::endl;
    std::cin>>x;
    std::cin>>y;
    if(!isMoveValid(array, x, y))
        return;
    (*array)[x][y] = (*array)[this->getX()][this->getY()];
    (*array)[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

void Rook::print() {
    std::cout << "r";
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
    if( (*array)[x][y] != nullptr && (*array)[x][y]->getColor() == this->getColor())
        return false;
    return true;
}

bool Rook::moveRight(Piece *(*array)[8][8], int x, int y) {
    for(int i=this->getY() + 1; i < y; i++) {
        if ((*array)[x][i] != nullptr)
            return false;
    }
    if( (*array)[x][y] != nullptr && (*array)[x][y]->getColor() == this->getColor())
        return false;
    return true;
}

bool Rook::moveUp(Piece *(*array)[8][8], int x, int y) {
    for(int i=this->getX() -1; i > x; i--) {
        if ((*array)[i][y] != nullptr)
            return false;
    }
    if( (*array)[x][y] != nullptr && (*array)[x][y]->getColor() == this->getColor())
        return false;
    return true;
}

bool Rook::moveDown(Piece *(*array)[8][8], int x, int y) {
    for(int i=this->getX() + 1; i < x; i++) {
        if ((*array)[i][y] != nullptr)
            return false;
    }
    if( (*array)[x][y] != nullptr && (*array)[x][y]->getColor() == this->getColor())
        return false;
    return true;
}
