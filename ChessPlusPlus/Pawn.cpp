#include "Pawn.hpp"

Pawn::Pawn() : ChessPiece{'P'} {
}

bool Pawn::canMove() {
    return true;
}
