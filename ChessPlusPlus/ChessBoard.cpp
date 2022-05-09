#include <vector>
#include <iostream>
#include "ChessBoard.hpp"

using namespace std;

ChessBoard::ChessBoard() {
    for (int row = 0; row < 8; row++) {
        vector<Box> currentRow;
        this->board.push_back(currentRow);
        for (int col = 0; col < 8; col++) {
            Box currentBox = Box(row, col);
            this->board[row].push_back(currentBox);
        }
    }
}

void ChessBoard::printBoard() {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            char boxPiece = board[row][col].chessPiece.getSymbol();
            cout << "| " << boxPiece << " ";
        }
        cout << "|" << endl << endl;
    }
}
