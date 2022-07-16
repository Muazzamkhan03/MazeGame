#include "manager.h"

Manager::Manager(){
    win = false;
}

void Manager::Clear(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void Manager::Input(){
    char move;
    std::cout<<"Make a move\n";
    std::cin>>move;
    
    switch(move){
            case KEY_UP:
            if( ((player.getY())-1) >= 0 ){
                if(maze.getElement((player.getY()-1), player.getX()) != '|'&& maze.getElement((player.getY()-1), player.getX()) != '_'){//if it is not the limit or it is not the wall(#) move player 
                player.decY();
            }
        }
        break;

        case KEY_DOWN:
        if( (player.getY()+1) <= 4 ){
            if(maze.getElement((player.getY()+1), player.getX()) != '|'&& maze.getElement((player.getY()+1), player.getX()) != '_'){
                player.incY();
            }
        }
        break;

        case KEY_RIGHT:
        if( player.getX()+1 <= 4 ){
            if(maze.getElement(player.getY(), (player.getX()+1)) != '|'&& maze.getElement(player.getY(), (player.getX()+1)) != '_'){
                player.incX();
            }
        }
        break;

        case KEY_LEFT:
            if( player.getX()-1 >= 0 ){
            if(maze.getElement(player.getY(), (player.getX()-1)) != '|'&& maze.getElement(player.getY(), (player.getX()-1)) != '_'){
                player.decX();
            }
        }
    }
}

void Manager::checkWin(){
    if(player.getX()==3 && player.getY() ==4){  //x-2, y-1
        win = true;
    }
    win = false;
}

void Manager::Game(){
    while(!win){
        maze.Display(player.getX(),player.getY());
        Input();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        Clear();
        checkWin();
    }
    std::cout<<"Congrats, you finished the maze\n";

}
