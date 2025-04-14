#include <stdio.h>
#include <stdlib.h>
#include "includes/cube.h"
#include"includes/turn.h"
#include "includes/selfsolveparts.h"


int main()
{
    Cube c;
    solvedCubeInit(&c);
    displayCube(&c);
    left_clockwise(&c);
    displayCube(&c);
    left_clockwise(&c);
    displayCube(&c);

    
}
