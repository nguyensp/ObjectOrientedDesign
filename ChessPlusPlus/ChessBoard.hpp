#pragma once
#include <vector>
#include "Box.hpp"

class ChessBoard {
public:
    std::vector<std::vector<Box> > board;
    
    ChessBoard();
    
    void printBoard();
};

