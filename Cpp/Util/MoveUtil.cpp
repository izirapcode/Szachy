//
// Created by User on 15.04.2020.
//

#include <iostream>
#include "../../Headers/Util/MoveUtil.h"


void MoveUtil::setAndValidateMovePoint(int* x, int* y) {
    while(true) {
        char letter;
        char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        std::cout << "y,x" << std::endl;
        std::cin >> letter;
        std::cin >> *x;
        *x = *x-1;
        for(int i =0; i<8;i++)
            if(letters[i] == letter)
                *y = i;
        if( ( *x >= 0 && *x <= 7 ) && ( *y >= 0 && *y <= 7 ) )
            return;
    }
}

bool MoveUtil::isFriendlyFire(std::vector<std::vector<Piece *>> array, int x, int y, char color) {
    return array[x][y] != nullptr && array[x][y]->getColor() == color;
}
