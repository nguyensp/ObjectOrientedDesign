#include "King.hpp"

King::King() : ChessPiece('K') {
}

bool King::canMove() {
    return true;
}
