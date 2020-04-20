//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Pawn.h"
#include "../../../Headers/Util/MoveUtil.h"


void Pawn::print() {
  std::cout << "p";
}

void Pawn::move(std::vector<std::vector<Piece *>> array) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x,&y);
    if(!isMoveValid(array, x, y))
        return;
    array[x][y] = array[this->getX()][this->getY()];
    array[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

bool Pawn::isFirstMove() {
    bool isBlackFirstMove = this->getColor() == 'b' && this->getY() == 1;
    bool isWhiteFirstMove = this->getColor() == 'w' && this->getY() == 6;
    return isBlackFirstMove || isWhiteFirstMove;
}

bool Pawn::isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) {
    if(this->getColor() == 'b'){
        if(isFirstMove()){
            if(this->getX() +2 == x && this->getY() == y)
                if( array[y][getX() + 1] == nullptr && array[y][getX() + 2] == nullptr )
                    return true;
        }
        if(this->getY() == y){
            if( getX() + 1 == x )
                if(array[x][y] == nullptr)
                    return true;
        }else if(this->getY() + 1 == y || this->getY() -1 == y){
            if( getX() + 1 == x )
                if(array[x][y] != nullptr)
                    if(array[x][y]->getColor() == 'w')
                    return true;
        }
    } else{
        if(isFirstMove()){
            if(this->getX() -2 == x && this->getY() == y)
                if( array[getX() -1][y] == nullptr && array[getX() -1 ][y] == nullptr )
                    return true;
        }
        if(this->getY() == y){
            if( getX() -1  == x )
                if(array[x][y] == nullptr)
                    return true;
        }else if(this->getY() + 1 == y || this->getY() -1 == y){
            if( getX() + 1 == x )
                if(array[x][y] != nullptr)
                    if(array[x][y]->getColor() == 'b')
                    return true;
        }
    }
    return false;
}
