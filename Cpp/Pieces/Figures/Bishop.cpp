//
// Created by User on 02.04.2020.
//

#include <iostream>
#include <vector>
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

char Bishop::print() {
    return 'b';
}

bool Bishop::isMoveValid(Piece *(*array)[8][8], int x, int y) {
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
        if ((*array)[element.getX()][element.getY()] != nullptr)
            return false;
    }
    return !MoveUtil::isFriendlyFire(array, x, y, color);

}
