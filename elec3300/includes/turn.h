#ifndef TURN_H
#define TURN_H

#include "cube.h"

void left_clockwise(Cube *c);           // L
void left_counterclockwise(Cube *c);    // L'
void right_clockwise(Cube *c);          // R
void right_counterclockwise(Cube *c);   // R'
void up_clockwise(Cube *c);             // U
void up_counterclockwise(Cube *c);      // U'
void down_clockwise(Cube *c);           // D
void down_counterclockwise(Cube *c);    // D'
void front_clockwise(Cube *c);          // F
void front_counterclockwise(Cube *c);   // F'
void back_clockwise(Cube *c);           // B
void back_counterclockwise(Cube *c);    // B'

#endif
