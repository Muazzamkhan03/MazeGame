# include "game.h"

void Game::Play(){
    while(!checkWin()){
        maze.Display(player.getX(),player.getY());
        Input();
        Clear();
    }
    std::cout<<"Congrats, you finished the maze\n";
    
}