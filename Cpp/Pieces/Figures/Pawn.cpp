//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Pawn.h"
#include "../../../Headers/Util/MoveUtil.h"


char Pawn::print() {
    return 'p';
}

void Pawn::move(Piece * (*array)[8][8]) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x,&y);
    if(!isMoveValid(array, x, y))
        return;
    (*array)[x][y] = (*array)[this->getX()][this->getY()];
    (*array)[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

bool Pawn::isFirstMove() {
    bool isBlackFirstMove = this->getColor() == 'b' && this->getY() == 1;
    bool isWhiteFirstMove = this->getColor() == 'w' && this->getY() == 6;
    return isBlackFirstMove || isWhiteFirstMove;
}

bool Pawn::isMoveValid(Piece * (*array)[8][8],int x, int y) {
    if(this->getColor() == 'b'){
        if(isFirstMove()){
            if(this->getY() +2 == y && this->getX() == x)
                if( (*array)[x][getY() + 1] == nullptr && (*array)[x][getY() + 2] == nullptr )
                    return true;
        }
        if(this->getX() == x){
            if( getY() + 1 == y )
                if((*array)[x][y] == nullptr)
                    return true;
        }else if(this->getX() + 1 == x || this->getX() -1 == x){
            if( getY() + 1 == y )
                if((*array)[x][y] != nullptr)
                    if((*array)[x][y]->getColor() == 'w')
                    return true;
        }
    } else{
        if(isFirstMove()){
            if(this->getY() -2 == y && this->getX() == x)
                if( (*array)[x][getY() -1] == nullptr && (*array)[x][getY() -1] == nullptr )
                    return true;
        }
        if(this->getX() == x){
            if( getY() -1  == y )
                if((*array)[x][y] == nullptr)
                    return true;
        }else if(this->getX() + 1 == x || this->getX() -1 == x){
            if( getY() + 1 == y )
                if((*array)[x][y] != nullptr)
                    if((*array)[x][y]->getColor() == 'b')
                    return true;
        }
    }
    return false;
}
