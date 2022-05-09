#pragma once

#include "ChessPiece.hpp"

class King : public ChessPiece {
public:
    King();
    
    bool canMove();
};
