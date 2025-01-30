#include "Grid.h"
#include "Cell.h"
#include <iostream>


// Constructor
Grid::Grid() {
    for(size_t y = 0; y <= HEIGHT+(2*BUFFER); y++) {
        for(size_t x = 0; x <= WIDTH+(2*BUFFER); x++) {
            grid[y][x] = Cell(false);
        }
    }
}

// Get Properties
size_t Grid::getWidth() { return WIDTH; }
size_t Grid::getHeight() { return HEIGHT; }

Cell& Grid::at(size_t x, size_t y) {
    return grid[y][x];
}

// Grid Features
void Grid::print() {
    for(size_t y = MinHEIGHT; y <= HEIGHT; y++) {
        for(size_t x = MinWIDTH; x <= WIDTH; x++) {
            cout << (grid[y][x].isAlive() ? "▓▓▓" : "░░░");
        }
        cout << endl << endl;
    }
}

void Grid::clear() {
    for(size_t y = MinHEIGHT; y <= HEIGHT; y++) {
        for(size_t x = MinWIDTH; x <= WIDTH; x++) {
            grid[y][x].setAlive(false);
        }
    }
}

void Grid::randomise(int resources) {
    for(size_t y = MinHEIGHT; y <= HEIGHT; y++) {
        for(size_t x = MinWIDTH; x <= WIDTH; x++) {
            if ((rand() % 100) <= resources) {
                grid[y][x].setAlive(true);
            }

        }
        cout << endl;
    }
}

// Simulation
int Grid::countNeighbours(size_t x, size_t y) {
    int n = 0;
    for(int i = -1; i <= 1; i++) {
        for(int ii = -1; ii <= 1; ii++) {
            if(i == 0 && ii == 0) { continue; } // Don't count centre cell.
            n += (grid[y+i][x+ii].isAlive() ? 1 : 0); 
        }
    }

    return n;
}


