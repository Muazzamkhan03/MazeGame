#include "manager.h"

void Manager::levelChoice(int choice){
    this->level = choice;
    maze.level(this->level);
}

void Manager::Clear(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void Manager::Input(){
    int move;
    std::cout<<"\nUse arrows key to move\n";
    
    
    switch(move = getch()){
            case KEY_UP:
            if( ((player.getY())-1) >= 0 ){
                if(maze.getElement((player.getY()-1), player.getX()) == '.' || maze.getElement((player.getY()-1), player.getX()) == '^'){//if it is not the limit or it is not the wall(#) move player 
                player.decY();
            }
        }
        break;

        case KEY_DOWN:
        if( (player.getY()+1) <= 11 ){
            if(maze.getElement((player.getY()+1), player.getX()) == '.' || maze.getElement((player.getY()+1), player.getX()) == 'v'){
                player.incY();
            }
        }
        break;

        case KEY_RIGHT:
        if( player.getX()+1 <= 11 ){
            if(maze.getElement(player.getY(), (player.getX()+1)) == '.' || maze.getElement(player.getY(), (player.getX()+1)) == '>'){
                player.incX();
            }
        }
        break;

        case KEY_LEFT:
            if( player.getX()-1 >= 0 ){
            if(maze.getElement(player.getY(), (player.getX()-1)) == '.' || maze.getElement(player.getY(), (player.getX()-1)) == '<'){
                player.decX();
            }
        }
    }
}

bool Manager::checkWin(){
    switch(this->level){
        case 1:
            if(player.getX()==8 && player.getY() ==10){  //x-2, y-1
                return true;
            }
            return false;
            break;

        case 2:
            if(player.getX()==5 && player.getY() ==10){  //x-2, y-1
                return true;
            }
            return false;
            break;

        case 3:
            if(player.getX()==4 && player.getY() ==10){  //x-2, y-1
                return true;
            }
            return false;
            break;
        
        case 4:
            if(player.getX()==8 && player.getY() ==0){  //x-2, y-1
                return true;
            }
            return false;
            break;
        
        case 5:
            if(player.getX()==4 && player.getY() ==10){  //x-2, y-1
                return true;
            }
            return false;
            break;
            
        default:
            break;
    }

}

