#ifndef CELL_H
#define CELL_H

class Cell {
    private:
        bool alive;
        // Age?
        // Generation?
        // Current Neighbours?
        int neighbours;

    public:
        // Constructor Declaration
        Cell() : alive(false) {} // Default Constructor
        Cell(bool alive);

        // Method Declaration
        void setAlive(bool newState);
        bool isAlive();
        void switchAlive();

        int getNeighbours();
        void setNeighbours(int n);
};

#endif