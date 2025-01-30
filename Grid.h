#ifndef GRID_H
#define GRID_H
#include <array>
#include "Cell.h"
using namespace std;

// Constants for grid dimensions. This includes the buffer, which is dependent on neighbourhood size.
const size_t WIDTH = 10;
const size_t HEIGHT = 10;
const size_t MinWIDTH = 1;
const size_t MinHEIGHT = 1;
const size_t BUFFER = 1;

class Grid {
    private:
        array<array<Cell, WIDTH+(2*BUFFER)>, HEIGHT+(2*BUFFER)> grid;
    
    public:
        // Constructor
        Grid();

        // Methods
        void print(); 
        void clear(); 
        void randomise(int resources = 50);
        
        // Gets
        Cell& at(size_t x, size_t y);
        size_t getWidth();
        size_t getHeight();

        // Simulation
        int countNeighbours(size_t y, size_t x);


        
        

};

#endif