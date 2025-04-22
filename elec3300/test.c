#include <stdio.h>
#include <stdlib.h>
#include "includes/cube.h"
#include"includes/turn.h"
#include <time.h>
#include "includes/selfsolveparts.h"
#include <string.h>
#include "include/search.h"

void sut(char *c)
{
    // Extract the first token
    char * token = strtok(c, " ");
    // loop through the string to extract all other tokens
    while( token != NULL ) {
       printf( "%s\n", token ); //printing each token
       token = strtok(NULL, " ");
    }

}
void testforkociemba()
{
    Cube c;
    char str[99] = "";
    char* facelets = str;
    solvedCubeInit(&c);
    randomCubeInit(&c);
    displayCube(&c);
    cubetostring(&c ,facelets);
    char *sol = solution(
        facelets,
        24,
        1000,
        0,
        "cache"
    );
    puts(sol);
    // sut(sol);
    stringToTurns(&c,sol);
    displayCube(&c);

}

void testforselfsolve()
{
    Cube c;
    solvedCubeInit(&c);
    randomCubeInit(&c);
    puts("cross");
    whitebasecross(&c);
    displayCube(&c);
    puts("base");
    holewitebase(&c);
    displayCube(&c);
    puts("2nd");
    secondfloor(&c);
    displayCube(&c);
    puts("3rd");
    thirdfloor(&c);
    displayCube(&c);
}

int main()
{
testforselfsolve();
return 0;

}

