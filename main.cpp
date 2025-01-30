#include <iostream>
#include <string>
#include "Grid.h"
#include "Cell.h"
#include "Game.h"
using namespace std;

int main() {
    Game game;
    game.initialise();
    game.print();
    cout << endl;
    game.step();
    game.print();

    return 0;

}