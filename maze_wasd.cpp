#include <iostream>
#include <stdlib.h>
#include <limits>

#define KEY_UP 'w'
#define KEY_DOWN 's'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'

// S: Start
// #: Wall
// .: Space
// F: Finish
// P: Player

const char maze[5][5]={{'_','v','_','_','_'},
                       {'|','.','.','|','|'},
                       {'|','|','.','|','|'},
                       {'|','.','.','.','|'},
                       {'|','_','_','v','|'}};

//MANAGER
void Clear(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//MANAGER
void InputHandle(int &pX, int &pY){
    char move;
    std::cout<<"Make a move\n";
    std::cin>>move;
    
    switch(move){
            case KEY_UP:
            if( pY-1 >= 0 ){
                if(maze[pY-1][pX] != '|'&&maze[pY-1][pX] != '_'){//if it is not the limit or it is not the wall(#) move player 
                pY--;
            }
        }
        break;

        case KEY_DOWN:
        if( pY+1 <= 4 ){
            if(maze[pY+1][pX] != '|'&&maze[pY+1][pX] != '_'){
                pY++;
            }
        }
        break;

        case KEY_RIGHT:
        if( pX+1 <= 4 ){
            if(maze[pY][pX+1] != '|'&&maze[pY][pX+1] != '_'){
                pX++;
            }
        }
        break;

        case KEY_LEFT:
            if( pX-1 >= 0 ){
            if(maze[pY][pX-1] != '|'&&maze[pY][pX-1] != '_'){
                pX--;
            }
        }
}
}

// IN MAZE CLASS 
void Display(int &pX, int &pY){
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

// IN MANAGER CLASS 
bool CheckWinCondition(int &pX, int &pY){
    if(pX==3 && pY ==4){  //x-2, y-1
        return true;
    }
    return false;
}

int main(){

//movement
int playerPosX=1;
int playerPosY=0;

while(!CheckWinCondition(playerPosX,playerPosY)){//if player is not in the finish, loop 
    Display(playerPosX, playerPosY);//Show current maze
    InputHandle(playerPosX, playerPosY);//take input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    Clear();//Clear the screen
}
std::cout<<"Congrats, you finished the maze!";     


}
