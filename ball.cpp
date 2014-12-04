#include "gLibrary.h"

ball::ball (Point p, ink c, char sh, double sp, double d)
{
        loc = p;
        color = c;
        shape = sh;
        speed = sp;
        dir = d;
        oldLoc = Point(-1, -1);
        oldDir = d;
}
void ball::draw (Plotter& g)
{
        if (oldLoc.getX() != loc.getX() || oldLoc.getY() != loc.getY())
        {
            g.setColor(black);
            g.plot(oldLoc.getX(), oldLoc.getY(), getShape());
            g.setColor(getColor());
            g.plot(loc.getX(), loc.getY(), getShape());
        }
        oldLoc = loc;
}
void ball::setOldLoc(Point loc)
{
    oldLoc = loc;
}
void ball::move(int n, int m)
{
        loc.setX((loc.getX() + speed * cos(dir)) * n);
        loc.setY((loc.getY() - speed * sin(dir)) * m);
}
Point ball::getLoc()
{
        return loc;
}
void ball::setLoc(Point p)
{
    loc = p;
}
ink ball::getColor()
{
    return color;
}
char ball::getShape()
{
    return shape;
}
double ball::getSpeed()
{
        return speed;
}
void ball::setSpeed(double s)
{
        speed = s;
}
void ball::erase(Plotter& g)
{
    g.setColor(black);
    g.plot(loc.getX(), loc.getY(), SQUARE);

}
bool ball::ballHitRightWall(ball b, int col)
{
    bool hitWall = false;
    if(loc.getX() >= col)
    {
        hitWall = true;
    }
    return hitWall;
}
bool ball::ballHitLeftWall(ball b, int col)
{
    bool hitWall = false;
    if(loc.getX() <= col)
    {
        hitWall = true;
    }
    return hitWall;
}
bool ball::ballHitTopWall(ball b, int row)
{
    bool hitWall = false;
    if(loc.getY() <= row)
    {
        hitWall = true;
    }
    return hitWall;
}
bool ball::ballHitBottomWall(ball b, int row)
{
    bool hitWall = false;
    if(loc.getY() >= row)
    {
        hitWall = true;
    }
    return hitWall;
}
void ball::setDir(double d)
{
    dir = d;
}
double ball::getDir ()
{
    return dir;
}
Point ball::getOldLoc()
{
    return oldLoc;
}
void ball::setOldDir(double d)
{
    oldDir = d;
}
double ball::getOldDir()
{
    return oldDir;
}
double ball::newDir()
{
    double reflection;
    while(getOldDir() >2*3.14)
    {
        setOldDir(getOldDir() - (2*3.14));
    }
    while(getOldDir() < 0)
    {
        setOldDir(getOldDir() + 2*3.14);
    }
    if (getOldDir() >= 0 && getOldDir() <= 3.14)
    {
        reflection = 3.14 - getOldDir();
    }
    if (getOldDir() >= 3.14 && getOldDir() <= 2*3.14)
    {
        reflection = 3.14 - getOldDir();
    }
    return reflection;
}
double ball::keepBallinZerotoTwoPi()
{
    if(getOldDir() > 2*3.14)
    {
        setOldDir(getOldDir() - 2*3.14);
    }
    if(getOldDir() < 0)
    {
        setOldDir(getOldDir() + 2*3.14);
    }
}
