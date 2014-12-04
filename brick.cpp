#include "gLibrary.h"
brick::brick(int w, int r, ink c, Point p, char sh)
{
    width = w;
    color = c;
    loc = p;
    loc.setX(200);
    loc.setY(40);
    shape = sh;
    rows = r;

}
void brick::setLoc(Point a)
{
    loc = a;
}
Point brick::getLoc()
{
    return loc;
}
void brick::draw(Plotter& g)
{
    g.setColor(getColor());
    for(int i = -width/2; i <= width/2; i ++)
    {
        for(int j = rows/2; j <= rows; j++)
        {
            g.plot(loc.getX() + i, loc.getY() + j, SQUARE);
        }
    }
}
ink brick::getColor()
{
    return color;
}
void brick::setColor(ink a)
{
    color = a;
}
char brick::getShape()
{
    return shape;
}
int brick::ballHitBrick(ball b)
{
    int hit;
    if(int(b.getLoc().getX()+12) == (getLoc().getX()) )
    {
        if((b.getLoc().getY() < getLoc().getY()+3 && b.getLoc().getY() > getLoc().getY()-1))
        {
            hit = 1;
        }
    }
    if(int(b.getLoc().getX()-10) == getLoc().getX())
    {
        if((b.getLoc().getY() > getLoc().getY()+3 && b.getLoc().getY() < getLoc().getY()-1))
        {
            hit = 2;
        }
    }
    return hit;
}
