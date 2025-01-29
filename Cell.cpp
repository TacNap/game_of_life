#include "Cell.h"

// Constructor Implementation
Cell::Cell(bool alive) : alive(alive) {}

// Method Imlpementation
void Cell::setAlive(bool newState) {
    alive = newState;
}

bool Cell::getAlive() {
    return alive;
} 

void Cell::switchAlive() {
    alive = !alive;
}