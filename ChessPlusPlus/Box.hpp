#pragma once
#include "ChessPiece.hpp"

class Box {
public:
    int xCoordinate;
    int yCoordinate;
    ChessPiece chessPiece;
    
    Box(int x, int y);
    
    int getXCoordinate();
    int getYCoordinate();
};
