#include "includes/turn.h"
#include "includes/cube.h"


void left_clockwise(Cube *c) //red facing self, white at bottom
{
    int temp[5];
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

};
void left_counterclockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[2][0];
    temp[1] = c->block[2][3];
    temp[2] = c->block[2][6];
    temp[3] = c->block[1][0];
    temp[4] = c->block[1][1];

    c->block[2][0] = c->block[0][0];
    c->block[2][3] = c->block[0][3];
    c->block[2][6] = c->block[0][6];

    c->block[0][0] = c->block[4][8];
    c->block[0][3] = c->block[4][5];
    c->block[0][6] = c->block[4][2];

    c->block[4][8] = c->block[5][0];
    c->block[4][5] = c->block[5][3];
    c->block[4][2] = c->block[5][6];

    c->block[5][0] = temp[0];
    c->block[5][3] = temp[1];
    c->block[5][6] = temp[2];

    c->block[1][0] = c->block[1][2];
    c->block[1][2] = c->block[1][8];
    c->block[1][8] = c->block[1][6];
    c->block[1][6] = temp[3];

    c->block[1][1] = c->block[1][5];
    c->block[1][5] = c->block[1][7];
    c->block[1][7] = c->block[1][3];
    c->block[1][3] = temp[4];

};
void right_clockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[2][2];
    temp[1] = c->block[2][5];
    temp[2] = c->block[2][8];
    temp[3] = c->block[3][0];
    temp[4] = c->block[3][1];

    c->block[2][2] = c->block[0][2];
    c->block[2][5] = c->block[0][5];
    c->block[2][8] = c->block[0][8];

    c->block[0][2] = c->block[4][6];
    c->block[0][5] = c->block[4][3];
    c->block[0][8] = c->block[4][0];

    c->block[4][6] = c->block[5][2];
    c->block[4][3] = c->block[5][5];
    c->block[4][0] = c->block[5][8];

    c->block[5][2] = temp[0];
    c->block[5][5] = temp[1];
    c->block[5][8] = temp[2];

    c->block[3][0] = c->block[3][6];
    c->block[3][6] = c->block[3][8];
    c->block[3][8] = c->block[3][2];
    c->block[3][2] = temp[3];

    c->block[3][1] = c->block[3][3];
    c->block[3][3] = c->block[3][7];
    c->block[3][7] = c->block[3][5];
    c->block[3][5] = temp[4];

};
void right_counterclockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[2][2];
    temp[1] = c->block[2][5];
    temp[2] = c->block[2][8];
    temp[3] = c->block[3][0];
    temp[4] = c->block[3][1];

    c->block[2][2] = c->block[5][2];
    c->block[2][5] = c->block[5][5];
    c->block[2][8] = c->block[5][8];

    c->block[5][2] = c->block[4][6];
    c->block[5][5] = c->block[4][3];
    c->block[5][8] = c->block[4][0];

    c->block[4][6] = c->block[0][2];
    c->block[4][3] = c->block[0][5];
    c->block[4][0] = c->block[0][8];

    c->block[0][2] = temp[0];
    c->block[0][5] = temp[1];
    c->block[0][8] = temp[2];

    c->block[3][0] = c->block[3][2];
    c->block[3][2] = c->block[3][8];
    c->block[3][8] = c->block[3][6];
    c->block[3][6] = temp[3];

    c->block[3][1] = c->block[3][5];
    c->block[3][5] = c->block[3][7];
    c->block[3][7] = c->block[3][3];
    c->block[3][3] = temp[4];

};
void up_clockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[2][0];
    temp[1] = c->block[2][1];
    temp[2] = c->block[2][2];
    temp[3] = c->block[5][0];
    temp[4] = c->block[5][1];

    c->block[2][0] = c->block[3][0];
    c->block[2][1] = c->block[3][1];
    c->block[2][2] = c->block[3][2];

    c->block[3][0] = c->block[4][0];
    c->block[3][1] = c->block[4][1];
    c->block[3][2] = c->block[4][2];

    c->block[4][0] = c->block[1][0];
    c->block[4][1] = c->block[1][1];
    c->block[4][2] = c->block[1][2];

    c->block[1][0] = temp[0];
    c->block[1][1] = temp[1];
    c->block[1][2] = temp[2];

    c->block[5][0] = c->block[5][6];
    c->block[5][6] = c->block[5][8];
    c->block[5][8] = c->block[5][2];
    c->block[5][2] = temp[3];

    c->block[5][1] = c->block[5][3];
    c->block[5][3] = c->block[5][7];
    c->block[5][7] = c->block[5][5];
    c->block[5][5] = temp[4];
};
void up_counterclockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[2][0];
    temp[1] = c->block[2][1];
    temp[2] = c->block[2][2];
    temp[3] = c->block[5][0];
    temp[4] = c->block[5][1];

    c->block[2][0] = c->block[1][0];
    c->block[2][1] = c->block[1][1];
    c->block[2][2] = c->block[1][2];

    c->block[1][0] = c->block[4][0];
    c->block[1][1] = c->block[4][1];
    c->block[1][2] = c->block[4][2];

    c->block[4][0] = c->block[3][0];
    c->block[4][1] = c->block[3][1];
    c->block[4][2] = c->block[3][2];

    c->block[3][0] = temp[0];
    c->block[3][1] = temp[1];
    c->block[3][2] = temp[2];

    c->block[5][0] = c->block[5][2];
    c->block[5][2] = c->block[5][8];
    c->block[5][8] = c->block[5][6];
    c->block[5][6] = temp[3];

    c->block[5][1] = c->block[5][5];
    c->block[5][5] = c->block[5][7];
    c->block[5][7] = c->block[5][3];
    c->block[5][3] = temp[4];

};
void down_clockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[2][6];
    temp[1] = c->block[2][7];
    temp[2] = c->block[2][8];
    temp[3] = c->block[0][0];
    temp[4] = c->block[0][1];

    c->block[2][6] = c->block[1][6];
    c->block[2][7] = c->block[1][7];
    c->block[2][8] = c->block[1][8];

    c->block[1][6] = c->block[4][6];
    c->block[1][7] = c->block[4][7];
    c->block[1][8] = c->block[4][8];

    c->block[4][6] = c->block[3][6];
    c->block[4][7] = c->block[3][7];
    c->block[4][8] = c->block[3][8];

    c->block[3][6] = temp[0];
    c->block[3][7] = temp[1];
    c->block[3][8] = temp[2];

    c->block[0][0] = c->block[0][6];
    c->block[0][6] = c->block[0][8];
    c->block[0][8] = c->block[0][2];
    c->block[0][2] = temp[3];

    c->block[0][1] = c->block[0][3];
    c->block[0][3] = c->block[0][7];
    c->block[0][7] = c->block[0][5];
    c->block[0][5] = temp[4];

};
void down_counterclockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[2][6];
    temp[1] = c->block[2][7];
    temp[2] = c->block[2][8];
    temp[3] = c->block[0][0];
    temp[4] = c->block[0][1];

    c->block[2][6] = c->block[3][6];
    c->block[2][7] = c->block[3][7];
    c->block[2][8] = c->block[3][8];

    c->block[3][6] = c->block[4][6];
    c->block[3][7] = c->block[4][7];
    c->block[3][8] = c->block[4][8];

    c->block[4][6] = c->block[1][6];
    c->block[4][7] = c->block[1][7];
    c->block[4][8] = c->block[1][8];

    c->block[1][6] = temp[0];
    c->block[1][7] = temp[1];
    c->block[1][8] = temp[2];

    c->block[0][0] = c->block[0][2];
    c->block[0][2] = c->block[0][8];
    c->block[0][8] = c->block[0][6];
    c->block[0][6] = temp[3];

    c->block[0][1] = c->block[0][5];
    c->block[0][5] = c->block[0][7];
    c->block[0][7] = c->block[0][3];
    c->block[0][3] = temp[4];
};
void front_clockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[5][6];
    temp[1] = c->block[5][7];
    temp[2] = c->block[5][8];
    temp[3] = c->block[2][0];
    temp[4] = c->block[2][1];

    c->block[5][6] = c->block[1][8];
    c->block[5][7] = c->block[1][5];
    c->block[5][8] = c->block[1][2];

    c->block[1][8] = c->block[0][2];
    c->block[1][5] = c->block[0][1];
    c->block[1][2] = c->block[0][0];

    c->block[0][2] = c->block[3][0];
    c->block[0][1] = c->block[3][3];
    c->block[0][0] = c->block[3][6];

    c->block[3][0] = temp[0];
    c->block[3][3] = temp[1];
    c->block[3][6] = temp[2];

    c->block[2][0] = c->block[2][6];
    c->block[2][6] = c->block[2][8];
    c->block[2][8] = c->block[2][2];
    c->block[2][2] = temp[3];

    c->block[2][1] = c->block[2][3];
    c->block[2][3] = c->block[2][7];
    c->block[2][7] = c->block[2][5];
    c->block[2][5] = temp[4];
};
void front_counterclockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[5][6];
    temp[1] = c->block[5][7];
    temp[2] = c->block[5][8];
    temp[3] = c->block[2][0];
    temp[4] = c->block[2][1];

    c->block[5][6] = c->block[3][0];
    c->block[5][7] = c->block[3][3];
    c->block[5][8] = c->block[3][6];

    c->block[3][0] = c->block[0][2];
    c->block[3][3] = c->block[0][1];
    c->block[3][6] = c->block[0][0];

    c->block[0][2] = c->block[1][8];
    c->block[0][1] = c->block[1][5];
    c->block[0][0] = c->block[1][2];

    c->block[1][8] = temp[0];
    c->block[1][5] = temp[1];
    c->block[1][2] = temp[2];

    c->block[2][0] = c->block[2][2];
    c->block[2][2] = c->block[2][8];
    c->block[2][8] = c->block[2][6];
    c->block[2][6] = temp[3];

    c->block[2][1] = c->block[2][5];
    c->block[2][5] = c->block[2][7];
    c->block[2][7] = c->block[2][3];
    c->block[2][3] = temp[4];

};
void back_clockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[5][0];
    temp[1] = c->block[5][1];
    temp[2] = c->block[5][2];
    temp[3] = c->block[4][0];
    temp[4] = c->block[4][1];

    c->block[5][0] = c->block[3][2];
    c->block[5][1] = c->block[3][5];
    c->block[5][2] = c->block[3][8];

    c->block[3][2] = c->block[0][8];
    c->block[3][5] = c->block[0][7];
    c->block[3][8] = c->block[0][6];

    c->block[0][8] = c->block[1][6];
    c->block[0][7] = c->block[1][3];
    c->block[0][6] = c->block[1][0];

    c->block[1][6] = temp[0];
    c->block[1][3] = temp[1];
    c->block[1][0] = temp[2];

    c->block[4][0] = c->block[4][6];
    c->block[4][6] = c->block[4][8];
    c->block[4][8] = c->block[4][2];
    c->block[4][2] = temp[3];

    c->block[4][1] = c->block[4][3];
    c->block[4][3] = c->block[4][7];
    c->block[4][7] = c->block[4][5];
    c->block[4][5] = temp[4];
};
void back_counterclockwise(Cube *c)
{
    int temp[5];
    temp[0] = c->block[5][0];
    temp[1] = c->block[5][1];
    temp[2] = c->block[5][2];
    temp[3] = c->block[4][0];
    temp[4] = c->block[4][1];

    c->block[5][0] = c->block[1][6];
    c->block[5][1] = c->block[1][3];
    c->block[5][2] = c->block[1][0];

    c->block[1][6] = c->block[0][8];
    c->block[1][3] = c->block[0][7];
    c->block[1][0] = c->block[0][6];

    c->block[0][8] = c->block[3][2];
    c->block[0][7] = c->block[3][5];
    c->block[0][6] = c->block[3][8];

    c->block[3][2] = temp[0];
    c->block[3][5] = temp[1];
    c->block[3][8] = temp[2];

    c->block[4][0] = c->block[4][2];
    c->block[4][2] = c->block[4][8];
    c->block[4][8] = c->block[4][6];
    c->block[4][6] = temp[3];

    c->block[4][1] = c->block[4][5];
    c->block[4][5] = c->block[4][7];
    c->block[4][7] = c->block[4][3];
    c->block[4][3] = temp[4];
    
};

