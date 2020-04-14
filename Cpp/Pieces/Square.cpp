//
// Created by User on 02.04.2020.
//

#include "../../Headers/Pieces/Square.h"

int Square::getX() const {
    return x;
}

void Square::setX(int x) {
    Square::x = x;
}

int Square::getY() const {
    return y;
}

void Square::setY(int y) {
    Square::y = y;
}

char Square::getColor() const {
    return color;
}

void Square::setColor(char color) {
    Square::color = color;
}
