#ifndef MANAGER
#define MANAGER


#include "maze.h"
#include "player.h"

#define KEY_UP 'w'
#define KEY_DOWN 's'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'

class Manager{
    Maze maze;
    Player player;
    int level;
    char playagain;
    public:
        void levelChoice(int);
        void Clear();
        void Input();
        bool checkWin();
        void Game();

};

#endif