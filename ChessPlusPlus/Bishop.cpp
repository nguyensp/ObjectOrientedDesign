#include "Bishop.hpp"

Bishop::Bishop() : ChessPiece('B') {
}

bool Bishop::canMove() {
    return true;
}
