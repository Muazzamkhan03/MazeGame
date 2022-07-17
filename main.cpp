#include "manager.h"

int main(){
    Manager mazeGame;
    int level;
    std::cout<<"\n";
    std::cout<<"***** WELCOME TO MAZE GAME *****\n"
             <<"Enter the level you want to play: \n 1 \n 2 \n 3 \n 4 \n 5 \n";
    std::cin>>level;
    mazeGame.levelChoice(level);

    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
    
    mazeGame.Game();
}