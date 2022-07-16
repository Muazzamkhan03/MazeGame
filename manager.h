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
    bool win;
    Maze1 maze;
    Player player;
    public:
        Manager();
        void Clear();
        void Input();
        void checkWin();
        void Game();

};

#endif