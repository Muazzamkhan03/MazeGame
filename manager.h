#ifndef MANAGER
#define MANAGER

#include <iostream>
#include "maze.h"
#include "player.h"

#define KEY_UP 'w'
#define KEY_DOWN 's'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'

class Manager{
    Maze1 maze;
    Player player;
    public:
        void Clear();
        void Input();
        bool checkWin();
        void Game();

};

#endif