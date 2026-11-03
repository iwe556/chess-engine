#include <iostream>
#include <string>

struct Position {
    char board[8][8];
    char sideToMove;
} position;

void initializePosition() {
    std::string whitePiecesRow = "RNBQKBNR";
    std::string blackPiecesRow = "rnbqkbnr";

    for (int row = 0; row < 8; row++) {
        position.board[0][row] = blackPiecesRow[row];  
        position.board[1][row] = 'p';
        position.board[8][row] = whitePiecesRow[row];
        position.board[8][row] = 'P';
    };

    for (int row = 2; row <= 5; row++) {
        for (int column = 0; column < 8; column++){
            position.board[row][column] = '.';
        }
    }
    position.sideToMove = 'w';

}

void printBoard() {
    
}
int main() {
    
}