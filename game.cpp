/*
Authors: Chuks Egbuchunam, Zehao Huang, Jiaqi Ma
         Brandon Scheitlin, Trent Matthews
Assignment Title: Breakout
Assignment Details: Make a game that breaks blocks
                    with a ball and paddle.
Due Date: After Thanksgiving
Date Created: 11/11/2014
Date Last Modified: 11/12/2014
*/
/*
Data Abstraction
Make objects and make sure the data is in the private area.
Input
Get what key strokes the user is pressing.
Process
Whatever key the person presses make the paddle move in that
direction. Also see if the ball has hit the paddle.
Output
Show the movement of the paddle.
Assumptions
The person will know what the arrow keys are.
*/


#include "gLibrary.h"


    Game::Game()
    {
        gameOver = false;
        active = true;
        gameBall.setSpeed(.2);
    }

void Game::play()
{
    int count = 3;
    srand(time(0));
    for(int r = 0; r < WALL_ROWS; r++)
    {
        for(int c = 0; c < WALL_COLS; c++)
        {

            wall[r][c].setColor(ink(rand()%15+1));
            wall[r][c].setLoc(Point(c * 21 + 14, r * 3 + 12));
            wall[r][c].draw(screen);
        }
    }


    while(!gameOver)
    {
        paddle.draw(screen);
        gameBall.setOldDir(gameBall.getDir());
        if (kbhit())
        {

            key = getch();
            if (key == 224)
            {
                key = getch();
            }
            if (key == 77 && !paddle.paddleHitWall(paddle, 224))
            {
                paddle.move(1);
            }
            if (key == 75 && !paddle.paddleHitWall(paddle, 15))
            {
                paddle.move(-1);
            }
            paddle.erase(screen);
            paddle.draw(screen);
        }
        if (gameBall.ballHitLeftWall(gameBall, 0))
        {
            gameBall.setDir(Reflections.leftBoundaryReflection(gameBall));
            gameBall.setOldDir(gameBall.getDir());
        }
        if (gameBall.ballHitTopWall(gameBall, 4))
        {
            gameBall.setDir(Reflections.topBoundaryReflection(gameBall));
            gameBall.setOldDir(gameBall.getDir());
        }
        if (gameBall.ballHitRightWall(gameBall, 240) == true)
        {
            gameBall.setDir(Reflections.rightBoundaryReflection(gameBall));
            gameBall.setOldDir(gameBall.getDir());
        }

        if (paddle.hitByBall(gameBall))
        {
            gameBall.setDir(paddle.ballHitOuterPaddle(gameBall));
            gameBall.setDir(paddle.ballHitInnerPaddle(gameBall));
            gameBall.setDir(paddle.ballHitMiddlePaddle(gameBall));
            gameBall.setSpeed(gameBall.getSpeed() + .02);
            gameBall.setOldDir(gameBall.getDir());
        }


            gameBall.erase(screen);
            gameBall.draw(screen);
            gameBall.setOldLoc(gameBall.getLoc());
            gameBall.move(1, 1);
            Sleep(10);


        if(gameBall.ballHitBottomWall(gameBall, 97))
        {
            count --;
            cout << "Lives = " << count;
            Sleep(2000);
            if(count == 0)
            {
                gameOver = true;
            }
            gameBall.setLoc(point);
            gameBall.setDir(3.14/2);
        }
        for(int r = 0; r < WALL_ROWS; r++)
        {
            for(int c = 0; c < WALL_COLS; c++)
            {
                if (wall[r][c].getColor() !=  black)
                {
                           switch(wall[r][c].ballHitBrick(gameBall))
                           {
                               case 1: gameBall.setDir(gameBall.newDir());
                               case 2: gameBall.setDir(gameBall.newDir());
                                wall[r][c].setColor(black);
                                    wall[r][c].draw(screen);
                           }
                            if((gameBall.getLoc().getX() >= wall[r][c].getLoc().getX() - 10) && (gameBall.getLoc().getX() <= wall[r][c].getLoc().getX() + 12))
                            {
                                if(gameBall.getLoc().getY() >= wall[r][c].getLoc().getY() && gameBall.getLoc().getY() <= wall[r][c].getLoc().getY() + 4)
                                {
                                    gameBall.setDir(-gameBall.getDir());
                                    wall[r][c].setColor(black);
                                    wall[r][c].draw(screen);
                                }
                            }




                }
            }
        }


    }

    }

