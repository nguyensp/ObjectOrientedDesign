#pragma once

#include "ChessPiece.hpp"

class Pawn : public ChessPiece  {
public:
    Pawn();
    
    bool canMove();
};
