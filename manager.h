#ifndef MANAGER
#define MANAGER

#include <conio.h>


#include "maze.h"
#include "player.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

class Manager{
    int level;
    protected:
        Maze maze;
        Player player;
    public:
        void levelChoice(int);
        void Clear();
        void Input();
        bool checkWin();

};

#endif