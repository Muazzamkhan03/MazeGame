# include "game.h"

void Game::Play(){
    while(!checkWin()){
        maze.Display(player.getX(),player.getY());
        Input();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        Clear();
    }
    std::cout<<"Congrats, you finished the maze\n";
    
}