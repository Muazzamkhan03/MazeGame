#ifndef MAZE
#define MAZE

#include <iostream>

class Maze{
    private:
        char maze[5][5];
    public:
        Maze();
        void Display(int , int );
        char getElement(int, int);

};

#endif