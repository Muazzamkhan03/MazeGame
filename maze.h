#ifndef MAZE
#define MAZE

#include <iostream>

class Maze1{
    private:
        char maze[5][5];
    public:
        Maze1();
        void Display(int , int );
        char getElement(int, int);

};

#endif