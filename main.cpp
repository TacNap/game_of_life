#include <iostream>
#include <string>
#include "Grid.h"
#include "Cell.h"
using namespace std;

int main() {
    // Initialise Grid
    Grid grid;

    // Test Cell Get
    cout << (grid.at(1,1).getAlive() ? "Fail" : "Pass") << endl; // Passes if cell is initialised to Dead

    // Set random and print
    grid.randomise();
    grid.print();

    // Clear and print
    grid.clear();
    grid.print();


    


    


    return 0;

}