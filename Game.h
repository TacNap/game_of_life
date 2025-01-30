#ifndef GAME_H
#define GAME_H
#include "Grid.h"

class Game {
private:
    Grid grid;
    //Grid bufferGrid;

    size_t iterations;
    // If necessary, Buffer grid gets created here too.
    // Standard options defined here.
    // Neighbourhood Size
    // Number of Iterations
    // Overflow, etc...

public:
    Game();

    void initialise();
    void step();
    void print();
};

#endif