#include "maze.h"

Maze::Maze(){
    // maze[0][0] = '_'; maze[0][1] = 'v'; maze[0][2] = '_'; maze[0][3] = '_'; maze[0][4] = '_';
    // maze[1][0] = '|'; maze[1][1] = '.'; maze[1][2] = '.'; maze[1][3] = '|'; maze[1][4] = '|';
    // maze[2][0] = '|'; maze[2][1] = '|'; maze[2][2] = '.'; maze[2][3] = '|'; maze[2][4] = '|';
    // maze[3][0] = '|'; maze[3][1] = '.'; maze[3][2] = '.'; maze[3][3] = '.'; maze[3][4] = '|'; 
    // maze[4][0] = '|'; maze[4][1] = '_'; maze[4][2] = '_'; maze[4][3] = 'v'; maze[4][4] = '|';
}

void Maze::level(int choice){
    switch(choice){
        case 1:
            break;
        case 2:
            maze[0][0] = '_'; maze[0][1] = 'v'; maze[0][2] = '_'; maze[0][3] = '_'; maze[0][4] = '_';maze[0][5] = '_'; maze[0][6] = '_'; maze[0][7] = '_'; maze[0][8] = '_'; maze[0][9] = '_'; maze[0][10] = '_';
            maze[1][0] = '|'; maze[1][1] = '.'; maze[1][2] = '.'; maze[1][3] = '|'; maze[1][4] = '.';maze[1][5] = '.'; maze[1][6] = '.'; maze[1][7] = '|'; maze[1][8] = '.'; maze[1][9] = '|'; maze[1][10] = '|';
            maze[2][0] = '|'; maze[2][1] = '.'; maze[2][2] = '_'; maze[2][3] = '|'; maze[2][4] = '.';maze[2][5] = '.'; maze[2][6] = '.'; maze[2][7] = '|'; maze[2][8] = '.'; maze[2][9] = '|'; maze[2][10] = '|';
            maze[3][0] = '|'; maze[3][1] = '.'; maze[3][2] = '.'; maze[3][3] = '.'; maze[3][4] = '.';maze[3][5] = '|'; maze[3][6] = '.'; maze[3][7] = '.'; maze[3][8] = '.'; maze[3][9] = '|'; maze[3][10] = '|';
            maze[4][0] = '|'; maze[4][1] = '_'; maze[4][2] = '_'; maze[4][3] = '_'; maze[4][4] = '_';maze[4][5] = '_'; maze[4][6] = '_'; maze[4][7] = '_'; maze[4][8] = '.'; maze[4][9] = '|'; maze[4][10] = '|';
            maze[5][0] = '|'; maze[5][1] = '.'; maze[5][2] = '.'; maze[5][3] = '.'; maze[5][4] = '.';maze[5][5] = '.'; maze[5][6] = '.'; maze[5][7] = '.'; maze[5][8] = '.'; maze[5][9] = '|'; maze[5][10] = '|';
            maze[6][0] = '|'; maze[6][1] = '.'; maze[6][2] = '|'; maze[6][3] = '_'; maze[6][4] = '_';maze[6][5] = '_'; maze[6][6] = '_'; maze[6][7] = '_'; maze[6][8] = '_'; maze[6][9] = '|'; maze[6][10] = '|';
            maze[7][0] = '|'; maze[7][1] = '.'; maze[7][2] = '|'; maze[7][3] = '_'; maze[7][4] = '_';maze[7][5] = '_'; maze[7][6] = '.'; maze[7][7] = '.'; maze[7][8] = '.'; maze[7][9] = '|'; maze[7][10] = '|';
            maze[8][0] = '|'; maze[8][1] = '.'; maze[8][2] = '|'; maze[8][3] = '_'; maze[8][4] = '_';maze[8][5] = '|'; maze[8][6] = '.'; maze[8][7] = '|'; maze[8][8] = '.'; maze[8][9] = '|'; maze[8][10] = '|';
            maze[9][0] = '|'; maze[9][1] = '.'; maze[9][2] = '.'; maze[9][3] = '.'; maze[9][4] = '.';maze[9][5] = '.'; maze[9][6] = '.'; maze[9][7] = '|'; maze[9][8] = '.'; maze[9][9] = '|'; maze[9][10] = '|';
            maze[10][0]= '|'; maze[10][1]= '_'; maze[10][2]= '_'; maze[10][3]= '_'; maze[10][4]= '_';maze[10][5]= '_'; maze[10][6]= '_'; maze[10][7]= '_'; maze[10][8]= 'v'; maze[10][9]= '_'; maze[10][10] = '|';
           
            break;
        default:
            break;
    }
    
}

void Maze::Display(int pX, int pY){
            for(int i=0;i<11;i++){
                for(int j=0;j<11;j++){
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