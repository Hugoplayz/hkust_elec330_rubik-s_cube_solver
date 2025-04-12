#include "includes/turn.h"
#include "includes/cube.h"
#include <stdio.h>

void left_clockwise(Cube *c) //red facing self, white at bottom
{
    int temp[4];
    temp[0] = c->block[2][0];
    temp[1] = c->block[2][3];
    temp[2] = c->block[2][6];
    temp[3] = c->block[1][0];
    temp[4] = c->block[1][1];

    c->block[2][0] = c->block[5][0];
    c->block[2][3] = c->block[5][3];
    c->block[2][6] = c->block[5][6];

    c->block[5][0] = c->block[4][8];
    c->block[5][3] = c->block[4][5];
    c->block[5][6] = c->block[4][2];

    c->block[4][8] = c->block[0][0];
    c->block[4][5] = c->block[0][3];
    c->block[4][2] = c->block[0][6];

    c->block[0][0] = temp[0];
    c->block[0][3] = temp[1];
    c->block[0][6] = temp[2];

    c->block[1][0] = c->block[1][6];
    c->block[1][6] = c->block[1][8];
    c->block[1][8] = c->block[1][2];
    c->block[1][2] = temp[3];

    c->block[1][1] = c->block[1][3];
    c->block[1][3] = c->block[1][7];
    c->block[1][7] = c->block[1][5];
    c->block[1][5] = temp[4];

    Cube* d = c; //i dont know why i need this but it wont work without this 2 line
    c = d; //i dont know why i need this but it wont work without this 2 line


};
void left_counterclockwise(Cube *c)
{

};
void right_clockwise(Cube *c)
{

};
void right_counterclockwise(Cube *c)
{

};
void up_clockwise(Cube *c)
{

};
void up_counterclockwise(Cube *c)
{

};
void down_clockwise(Cube *c)
{

};
void down_counterclockwise(Cube *c)
{

};
void front_clockwise(Cube *c)
{

};
void front_counterclockwise(Cube *c)
{

};
void back_clockwise(Cube *c)
{

};
void back_counterclockwise(Cube *c)
{
    
};

