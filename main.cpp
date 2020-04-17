#include <windows.h>
#include "Headers/Board/Board.h"
#include "Headers/Gui/Window.h"

/*int main() {

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
                if(board.boardFields[x][y] != nullptr)
                    board.getBoardField(x,y)->move(&board.boardFields);
                break;
            case 3:
                return 0;
            default: std::cout << "Nothing"<< std::endl;
        }
    }
}*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ){

    Window window;
    HWND hwnd;
    MSG message;

    Board board = board;
    board.initialize();

    window.setBoard(board);

    window.init(hInstance);
    if( !RegisterClassEx( &window.getWc()) )
    {
        MessageBox( NULL, "Error", NULL, MB_OK );
        return 1;
    }

    DWORD dwStyle=(WS_CAPTION | WS_SYSMENU);

    hwnd = CreateWindowEx( WS_EX_CLIENTEDGE, "Chess", "Chess", dwStyle,
                           CW_USEDEFAULT, CW_USEDEFAULT, 805, 830, NULL, NULL, hInstance, NULL );

    ShowWindow( hwnd, nCmdShow );
    UpdateWindow( hwnd );

    while( GetMessage( & message, NULL, 0, 0 ) )
    {
        TranslateMessage( & message );
        DispatchMessage( & message );
    }
    return message.wParam;

}