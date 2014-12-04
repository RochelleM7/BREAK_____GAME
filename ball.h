#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED

#include "gLibrary.h"

class ball
{
    public:
        ball(Point = Point(), ink = red, char = SQUARE, double = .2, double = 7*3.14/4);
        void draw(Plotter&);
        void move(int = 1, int = 1);
        Point getLoc();
        void setLoc(Point);
        ink getColor();
        char getShape();
        double getSpeed();
        void setSpeed(double);
        void erase(Plotter&);
        bool ballHitRightWall(ball, int);
        bool ballHitLeftWall(ball, int);
        bool ballHitTopWall(ball b, int row);
        bool ballHitBottomWall(ball b, int row);
        void setDir(double d);
        double getDir();
        Point getOldLoc();
        void setOldLoc(Point);
        void setOldDir(double d);
        double getOldDir();
        double newDir();
        double keepBallinZerotoTwoPi();

    private:
        Point loc, oldLoc;
        ink color;
        char shape;
        double speed, dir, oldDir;
};

#endif // BALL_H_INCLUDED
