#pragma once

class ChessPiece {
private:
    char symbol;
    bool killed;
    bool white;
public:
    ChessPiece();
    ChessPiece(char s);
    
    bool isKilled();
    bool isWhite();
    bool canMove();
    
    char getSymbol();
};
