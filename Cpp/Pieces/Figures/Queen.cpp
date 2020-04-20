//
// Created by User on 02.04.2020.
//

#include <iostream>
#include <vector>
#include "../../../Headers/Pieces/Figures/Queen.h"
#include "../../../Headers/Util/MoveUtil.h"

void Queen::move(std::vector<std::vector<Piece *>> array) {
    int x,y;
    MoveUtil::setAndValidateMovePoint(&x,&y);
    if(!isMoveValid(array, x, y))
        return;
    array[x][y] = array[this->getX()][this->getY()];
    array[this->getX()][this->getY()] = nullptr;
    setX(x);
    setY(y);
}

void Queen::print() {
    std::cout << "q";
}

bool Queen::isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) {
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
    return moveLikeBishop(array, x, y);
}


bool Queen::moveLeft(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getY() -1; i > y; i--) {
        if (array[x][i] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Queen::moveRight(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getY() + 1; i < y; i++) {
        if (array[x][i] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Queen::moveUp(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getX() -1; i > x; i--) {
        if (array[i][y] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Queen::moveDown(std::vector<std::vector<Piece *>> array, int x, int y) {
    for(int i=this->getX() + 1; i < x; i++) {
        if (array[i][y] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);
}

bool Queen::moveLikeBishop(std::vector<std::vector<Piece *>> array, int x, int y) {
    int xModif=0,yModif=0;
    int xTemp = getX(), yTemp = getY();
    std::vector<Square> squares;

    int counter = abs(getX() - x) - 1;

    if( getX() < x)
        xModif = 1;
    else if( getX() > x)
        xModif = -1;

    if( getY() < y)
        yModif = 1;
    else if( getY() > y)
        yModif = -1;

    for(int i = 0; i < counter; i++){
        Square square;
        xTemp = xTemp + xModif;
        yTemp = yTemp + yModif;

        square.setX(xTemp);
        square.setY(yTemp);
        squares.push_back(square);
    }
    xTemp = xTemp + xModif;
    yTemp = yTemp + yModif;
    if( !(xTemp == x && yTemp ==y) )
        return false;

    for (auto & element : squares) {
        if (array[element.getX()][element.getY()] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);

}
