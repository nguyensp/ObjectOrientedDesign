#include <vector>
#include <iostream>
#include <unordered_map>
#include "ChessBoard.hpp"
#include "Pawn.hpp"
#include "Rook.hpp"
#include "Knight.hpp"
#include "Bishop.hpp"
#include "Queen.hpp"
#include "King.hpp"

using namespace std;

ChessBoard::ChessBoard() {
    /*
    unordered_map<int, unordered_map<int, ChessPiece> > initialSettings =
    {
        {1, { {0, Pawn()} }}
        //{6, {{0, Pawn()}}, {1, Pawn()}}}
    };
    */
    for (int row = 0; row < 8; row++) {
        vector<Box> currentRow;
        this->board.push_back(currentRow);
        for (int col = 0; col < 8; col++) {
            Box currentBox = Box(row, col);
            if (row == 1 || row == 6) {
                currentBox.setChessPiece(Pawn());
            }
            if (row == 0 || row == 7) {
                if (col == 0 || col == 7)
                    currentBox.setChessPiece(Rook());
                if (col == 1 || col == 6)
                    currentBox.setChessPiece(Knight());
                if (col == 2 || col == 5)
                    currentBox.setChessPiece(Bishop());
                if (col == 3)
                    currentBox.setChessPiece(Queen());
                if (col == 4)
                    currentBox.setChessPiece(King());
            }
            /*if (initialSettings.find(row) != initialSettings.end()) {
                if (initialSettings[row].find(col) != initialSettings[row].end()) {
                    currentBox.setChessPiece(initialSettings[row][col]);
                }
            }
             */
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
