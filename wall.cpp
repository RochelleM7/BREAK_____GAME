#include "gLibrary.h"

double sideBoundariesReflections::topBoundaryReflection(ball b)
{
    double reflection;
    if(b.getOldDir() == 3.14/4)
    {
        reflection = 7*3.14/4;
    }
    if (b.getOldDir() == 7*3.14/4)
    {
        reflection = (7*3.14/4);
    }
    if (b.getOldDir() == 5*3.14/4)
    {
        reflection = 5*3.14/4;
    }
    if (b.getOldDir() == 3*3.14/4)
    {
        reflection = 5*3.14/4;
    }
    if (b.getOldDir() == 3.14/2)
    {
        reflection = 3*3.14/2;
    }
    if(b.getOldDir() == 3.14/6)
    {
        reflection = 11*3.14/6;
    }
    if (b.getOldDir() == 11*3.14/6)
    {
        reflection = (11*3.14/6);
    }
    if (b.getOldDir() == 7*3.14/6)
    {
        reflection = 7*3.14/6;
    }
    if (b.getOldDir() == 5*3.14/6)
    {
        reflection = 7*3.14/6;
    }
    if(b.getOldDir() == 3.14/3)
    {
        reflection = 5*3.14/3;
    }
    if (b.getOldDir() == 5*3.14/3)
    {
        reflection = (5*3.14/3);
    }
    if (b.getOldDir() == 2*3.14/3)
    {
        reflection = 4*3.14/3;
    }
    if (b.getOldDir() == 4*3.14/3)
    {
        reflection = 4*3.14/3;
    }
    return reflection;

}
double sideBoundariesReflections::leftBoundaryReflection(ball b)
{
    double reflection;
    if(b.getOldDir() == 3*3.14/4)
    {
        reflection = 3.14/4;
    }
    if (b.getOldDir() == 3.14/4)
    {
        reflection = (3.14/4);
    }
    if (b.getOldDir() == 7*3.14/4)
    {
        reflection = 7*3.14/4;
    }
    if (b.getOldDir() == 5*3.14/4)
    {
        reflection = 7*3.14/4;
    }
    if(b.getOldDir() == 5*3.14/6)
    {
        reflection = 3.14/6;
    }
    if (b.getOldDir() == 3.14/6)
    {
        reflection = 3.14/6;
    }
    if (b.getOldDir() == 7*3.14/6)
    {
        reflection = 11*3.14/6;
    }
    if (b.getOldDir() == 11*3.14/6)
    {
        reflection = 11*3.14/6;
    }
    if(b.getOldDir() == 3.14/3)
    {
        reflection = 3.14/3;
    }
    if (b.getOldDir() == 2*3.14/3)
    {
        reflection = (3.14/3);
    }
    if (b.getOldDir() == 4*3.14/3)
    {
        reflection = 5*3.14/3;
    }
    if (b.getOldDir() == 5*3.14/3)
    {
        reflection = 5*3.14/3;
    }
    return reflection;

}
double sideBoundariesReflections::rightBoundaryReflection(ball b)
{
    double reflection;
    if(b.getOldDir() == 3*3.14/4)
    {
        reflection = 3*3.14/4;
    }
    if (b.getOldDir() == 3.14/4)
    {
        reflection = 3*3.14/4;
    }
    if (b.getOldDir() == 7*3.14/4)
    {
        reflection = 5*3.14/4;
    }
    if (b.getOldDir() == 5*3.14/4)
    {
        reflection = 5*3.14/4;
    }
    if(b.getOldDir() == 5*3.14/6)
    {
        reflection = 5*3.14/6;
    }
    if (b.getOldDir() == 3.14/6)
    {
        reflection = 5*3.14/6;
    }
    if (b.getOldDir() == 7*3.14/6)
    {
        reflection = 7*3.14/6;
    }
    if (b.getOldDir() == 11*3.14/6)
    {
        reflection = 7*3.14/6;
    }
    if(b.getOldDir() == 3.14/3)
    {
        reflection = 2*3.14/3;
    }
    if (b.getOldDir() == 2*3.14/3)
    {
        reflection = 2*3.14/3;
    }
    if (b.getOldDir() == 4*3.14/3)
    {
        reflection = 4*3.14/3;
    }
    if (b.getOldDir() == 5*3.14/3)
    {
        reflection = 4*3.14/3;
    }
    return reflection;

}
