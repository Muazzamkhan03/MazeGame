#include "maze.h"

Maze::Maze(){
    maze[0][0] = '_'; maze[0][1] = 'v'; maze[0][2] = '_'; maze[0][3] = '_'; maze[0][4] = '_';
    maze[1][0] = '|'; maze[1][1] = '.'; maze[1][2] = '.'; maze[1][3] = '|'; maze[1][4] = '|';
    maze[2][0] = '|'; maze[2][1] = '|'; maze[2][2] = '.'; maze[2][3] = '|'; maze[2][4] = '|';
    maze[3][0] = '|'; maze[3][1] = '.'; maze[3][2] = '.'; maze[3][3] = '.'; maze[3][4] = '|'; 
    maze[4][0] = '|'; maze[4][1] = '_'; maze[4][2] = '_'; maze[4][3] = 'v'; maze[4][4] = '|';
}

void Maze::Display(int pX, int pY){
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    if(j==pX && i==pY){//instead of the maze char, put player's 'P' 
                        std::cout<<"P ";
                        continue;
                    }
                    std::cout<<maze[i][j]<<" ";
                }
                std::cout<<"\n";
            }
}

char Maze::getElement(int i, int j){
    return maze[i][j];
}