#include "ChessPiece.hpp"

ChessPiece::ChessPiece() {
    symbol = '_';
    killed = false;
}

ChessPiece::ChessPiece(char s) {
    symbol = s;
    killed = false;
}

bool ChessPiece::isKilled() {
    return this->killed;
}

bool ChessPiece::isWhite() {
    return this->white;
}

bool ChessPiece::canMove() {
    return false;
}

char ChessPiece::getSymbol() {
    return symbol;
}
