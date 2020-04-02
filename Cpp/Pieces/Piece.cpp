//
// Created by User on 02.04.2020.
//

#include "../../Headers/Pieces/Piece.h"
#include "../../Headers/Pieces/Square.h"

const Square &Piece::getSquare() const {
    return square;
}

void Piece::setSquare(const Square &square) {
    Piece::square = square;
}
