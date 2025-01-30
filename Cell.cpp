#include "Cell.h"

// Constructor Implementation
Cell::Cell(bool alive) : alive(alive), neighbours(0) {}

// Method Imlpementation
void Cell::setAlive(bool newState) {
    alive = newState;
}

bool Cell::isAlive() {
    return alive;
} 

void Cell::switchAlive() {
    alive = !alive;
}

int Cell::getNeighbours() {
    return neighbours;
}

void Cell::setNeighbours(int n) {
    neighbours = n;
}
