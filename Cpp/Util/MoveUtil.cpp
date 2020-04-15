//
// Created by User on 15.04.2020.
//

#include <iostream>
#include "../../Headers/Util/MoveUtil.h"


void MoveUtil::setAndValidateMovePoint(int* x, int* y) {
    while(true) {
        std::cout << "x,y" << std::endl;
        std::cin >> *x;
        std::cin >> *y;
        if( ( *x >= 0 && *x <= 7 ) && ( *y >= 0 && *y <= 7 ) )
            return;
    }
}

bool MoveUtil::isFriendlyFire(Piece * (*array)[8][8], int x, int y, char color) {
    return (*array)[x][y] != nullptr && (*array)[x][y]->getColor() == color;
}
