#ifndef WALL_H_INCLUDED
#define WALL_H_INCLUDED

#include "gLibrary.h"

class sideBoundariesReflections
{
  public:
  
  // description: calculate the reflection of the top boundary
  // return:      double
  // pre:         object exists
  // post:        return the reflection of the top boundary
  double topBoundaryReflection(ball b);
  
  // description: calculate the reflection of the left boundary
  // return:      double
  // pre:         object exists
  // post:        return the reflection of the left boundary
  double leftBoundaryReflection(ball b);
  
  // description: calculate the reflection of the right boundary
  // return:      double
  // pre:         object exists
  // post:        return the reflection of the right boundary
  double rightBoundaryReflection(ball b);

};

#endif // WALL_H_INCLUDED
