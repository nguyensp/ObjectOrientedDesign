#pragma once

class ChessPiece {
public:
    char symbol;
    bool killed;
    bool white;
    
    ChessPiece();
    
    bool isKilled();
    bool isWhite();
    virtual bool canMove();
};
