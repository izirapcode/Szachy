#include <iostream>
#include "Headers/Board/Board.h"
#include "Headers/Pieces/Figures/Rook.h"
#include "Headers/Pieces/Figures/Knight.h"


void process_2d_array_pointer(Piece* (*array)[2][3])
{
    std::cout << __func__ << std::endl;
    for (size_t i = 0; i < 2; ++i)
    {
        std::cout << i << ": ";
        for (size_t j = 0; j < 3; ++j)
            (*array)[i][j]->print();
        std::cout << std::endl;
    }
}

int main() {

    int choice,x=0,y=0;

    Board board = board;
    board.initialize();

    //debug purpose
    while(true){
        std::cin>>choice;
        switch (choice)
        {
            case 1:
                board.printBoard();
                break;
            case 2:
                std::cout<<"x,y"<<std::endl;
                std::cin>>x;
                std::cin>>y;
                board.getBoardField(x,y)->move(&board.boardFields);
                break;
            case 3:
                return 0;
            default: std::cout << "Nothing"<< std::endl;
        }
    }
    return 0;
}
