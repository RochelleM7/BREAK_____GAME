#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "gLibrary.h"



class Game
{
    public:
    Game();
    void play();

    private:
    int key;
    Plotter screen;
    paddleType paddle;
    ball gameBall;
    brick wall[WALL_ROWS][WALL_COLS];
    sideBoundariesReflections Reflections;
    bool gameOver, active;
    Point point;


};

#endif // GAME_H_INCLUDED
