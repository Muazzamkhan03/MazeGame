#include "manager.h"

int main(){
    Manager mazeGame;
    int level;
    std::cout<<"***** WELCOME TO MAZE GAME *****\n"
             <<"Enter the level you want to play (1,2,3,4,5) \n";
    std::cin>>level;
    mazeGame.levelChoice(level);
    mazeGame.Game();
}