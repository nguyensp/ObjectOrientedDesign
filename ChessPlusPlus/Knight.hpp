#pragma once

#include "ChessPiece.hpp"

class Knight : public ChessPiece {
public:
    Knight();
    
    bool canMove();
};
