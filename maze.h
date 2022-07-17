#ifndef MAZE
#define MAZE

#include <iostream>
#include <limits>

class Maze{
    private:
        char maze[11][10];
    public:
        Maze();
        void level(int);
        void Display(int , int );
        char getElement(int, int);

};

#endif
