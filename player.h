# ifndef PLAYER
# define PLAYER

class Player{
    private:
        int Posx;
        int Posy;
    public:
        Player();
        int getX();
        int getY();
        void incX();
        void incY();
        void decX();
        void decY();

};

# endif