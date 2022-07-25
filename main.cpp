#include "game.h"

int main(){
    int level;
    char choice;

    std::cout<<"\n";
    std:: cout << "\t\t\t\t" <<  "         __   ___  __     _                  __  _    " << std::endl;
    std:: cout << "\t\t\t\t" <<  " |\\  /| |  |    / |      | ) |  | |\\  ||\\  ||   | )                 " << std::endl;
    std:: cout << "\t\t\t\t" <<  " | \\/ | |==|   /  |==    |/  |  | | \\ || \\ ||== |/        " << std::endl;
    std:: cout << "\t\t\t\t" <<  " |    | |  |  /__ |__    |\\  |__| |  \\||  \\||__ |\\          " << std::endl;
    std:: cout << "\t\t\t\t" <<  "===================================================" << std::endl;
    std:: cout << "                                     " << std::endl;
    std:: cout << "                                     " << std::endl;


    a:
    Game mazeGame;
    std::cout<<"Enter the level you want to play:  1  2  3  4  5 \n";
    std::cin>>level;
    mazeGame.levelChoice(level);

    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
    std::cout<<"Level: "<<level<<std::endl;
    mazeGame.Play();
    std::cout<<"Would you like to play again? Enter y to play again and press any key to exit\n";
    std::cin>> choice;

    if(choice == 'y' || choice == 'Y'){
        goto a;
    }
     
}