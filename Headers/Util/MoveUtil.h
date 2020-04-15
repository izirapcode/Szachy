//
// Created by User on 15.04.2020.
//

#ifndef SZACHY_MOVEUTIL_H
#define SZACHY_MOVEUTIL_H


#include "../Pieces/Piece.h"

class MoveUtil {
public:
    static void setAndValidateMovePoint(int* x, int* y);
    static bool isFriendlyFire(Piece * (*array)[8][8], int x, int y, char color);
};


#endif //SZACHY_MOVEUTIL_H
