#include "maze.h"

Maze1::Maze1(){
    char maze[5][5] ={{'_','v','_','_','_'},
                       {'|','.','.','|','|'},
                       {'|','|','.','|','|'},
                       {'|','.','.','.','|'},
                       {'|','_','_','v','|'}};
}

void Maze1::Display(int pX, int pY){
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

char Maze1::getElement(int i, int j){
    return maze[i][j];
}