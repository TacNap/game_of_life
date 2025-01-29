#include "Grid.h"
#include "Cell.h"
#include <iostream>

// Constructor Implementation
Grid::Grid() {
    for(size_t y = 0; y < HEIGHT; y++) {
        for(size_t x = 0; x < WIDTH; x++) {
            grid[y][x] = Cell(false);
        }
    }
}
// Method Implementations
Cell& Grid::at(size_t x, size_t y) {
    return grid[y][x];
}

void Grid::print() {
    for(size_t y = 0; y < HEIGHT; y++) {
        for(size_t x = 0; x < WIDTH; x++) {
            cout << (grid[y][x].getAlive() ? "[x]" : "[ ]");
        }
        cout << endl;
    }
}

void Grid::clear() {
    for(size_t y = 0; y < HEIGHT; y++) {
        for(size_t x = 0; x < WIDTH; x++) {
            grid[y][x].setAlive(false);
        }
    }
}

void Grid::randomise() {
    for(size_t y = 0; y < HEIGHT; y++) {
        for(size_t x = 0; x < WIDTH; x++) {
            // roll random number from 1-100
            // if less than 50, set alive
            // temporarily set to even numbers
            if(x == 2 || y == 2) {
                grid[y][x].setAlive(true);
            }
        }
        cout << endl;
    }
}
