//
// Created by User on 02.04.2020.
//

#include <iostream>
#include "../../../Headers/Pieces/Figures/Pawn.h"


void Pawn::print() {
  std::cout << "p";
}

void Pawn::move(Piece * (*array)[8][8]) {
    int x,y;
    std::cout<<"x,y"<<std::endl;
    std::cin>>x;
    std::cin>>y;

    (*array)[x][y] = (*array)[this->getX()][this->getY()];
    (*array)[this->getX()][this->getY()] = nullptr;
    setX(x);
    setX(y);
}
