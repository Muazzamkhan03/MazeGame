#include "game.h"

int main(){
    Game mazeGame;
    int level;
    char choice;
    
    std::cout<<"\n***** MAZE RUNNER  *****\n";

    a:
    std::cout<<"Enter the level you want to play:  1  2  3  4  5 \n";
    std::cin>>level;
    mazeGame.levelChoice(level);

    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
    std::cout<<"\nUse arrow keys to move\n";
    mazeGame.Play();
    std::cout<<"Would you like to play again? Enter y to play again and n to exit\n";
    std::cin>> choice;

    if(choice == 'y' || choice == 'Y'){
        goto a;
    }
     
}