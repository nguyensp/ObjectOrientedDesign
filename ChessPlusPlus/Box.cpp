#include "Box.hpp"

Box::Box(int x, int y) {
    this->xCoordinate = x;
    this->yCoordinate = y;
}

int Box::getXCoordinate() {
    return this->xCoordinate;
}

int Box::getYCoordinate() {
    return this->yCoordinate;
}
