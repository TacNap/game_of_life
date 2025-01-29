#ifndef CELL_H
#define CELL_H

class Cell {
    private:
        bool alive;
        // Age?
        // Generation?
        // Current Neighbours?

    public:
        // Constructor Declaration
        Cell() : alive(false) {} // Default Constructor
        Cell(bool alive);

        // Method Declaration
        void setAlive(bool newState);
        bool getAlive();
        void switchAlive();
};

#endif