#include <iostream>
#include "Headers/Board/Board.h"
#include "Headers/Pieces/Figures/Rook.h"
#include "Headers/Pieces/Figures/Knight.h"
#include "Headers/Util/MoveUtil.h"

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
                MoveUtil::setAndValidateMovePoint(&x, &y);
                if(board.getBoardField(x,y) != nullptr)
                    board.getBoardField(x,y)->move(board.getBoardFields());
                break;
            case 3:
                return 0;
            default: std::cout << "Nothing"<< std::endl;
        }
    }
    return 0;
}
