#ifndef GRID_H
#define GRID_H
#include <array>
#include "Cell.h"
using namespace std;

// Constants for grid dimensions
const size_t WIDTH = 10;
const size_t HEIGHT = 10;

class Grid {
    private:
        array<array<Cell, WIDTH>, HEIGHT> grid;
    
    public:
        // Constructor Declaration
        Grid();

        // Method Declaration
        void print();
        void clear(); // Set all to dead
        void randomise(); // Set all to random. Could use a % argument
        
        // Get Cell
        Cell& at(size_t x, size_t y);

};

#endif