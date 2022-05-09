#pragma once

#include "ChessPiece.hpp"

class Queen : public ChessPiece {
public:
    Queen();
    
    bool canMove();
};
