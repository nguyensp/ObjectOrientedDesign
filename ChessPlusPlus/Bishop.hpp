#pragma once

#include "ChessPiece.hpp"

class Bishop : public ChessPiece {
public:
    Bishop();
    
    bool canMove();
};
