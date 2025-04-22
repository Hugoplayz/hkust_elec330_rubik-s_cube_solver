#ifndef TURN_H
#define TURN_H

#include "cube.h"

void left_clockwise(Cube *c);
void left_counterclockwise(Cube *c);
void right_clockwise(Cube *c);
void right_counterclockwise(Cube *c);
void up_clockwise(Cube *c);
void up_counterclockwise(Cube *c);
void down_clockwise(Cube *c);
void down_counterclockwise(Cube *c);
void front_clockwise(Cube *c);
void front_counterclockwise(Cube *c);
void back_clockwise(Cube *c);
void back_counterclockwise(Cube *c);

#endif