#include "Game.h"
#include "Grid.h"

Game::Game() : iterations(100) {
    // DO I NEED TO MAKE A GRID HERE? EVIDENTLY NOT 
}

void Game::initialise() {
    grid.randomise(20);
    //bufferGrid = currentGrid;
}

void Game::step() {
    // Loop once to count neighbours
    for(size_t y = 0; y < grid.getHeight(); y++) {
        for(size_t x = 0; x < grid.getWidth(); x++) {
            Cell& cell = grid.at(x,y); // does this need to be a reference?
            cell.setNeighbours(grid.countNeighbours(x, y));
        }
    }

    // Loop again to simulate
    for(size_t y = 0; y < grid.getHeight(); y++) {
        for(size_t x = 0; x < grid.getWidth(); x++) {
            Cell& cell = grid.at(x,y); // does this need to be a reference?
            // if Alive with inadequate neighbours; kill it
            if(cell.isAlive() & !(cell.getNeighbours() == 2 || cell.getNeighbours() == 3)) {
                cell.setAlive(false);
            } 

            // If dead with sufficient neighbours; resurrect it
            if(!cell.isAlive() && cell.getNeighbours() == 3) {
                cell.setAlive(true);
            }
        }
    }

    // Make these functions later
}

void Game::print() {
    grid.print();
}
