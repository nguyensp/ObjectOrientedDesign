#include "ChessPiece.hpp"

ChessPiece::ChessPiece() {
    symbol = '?';
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
