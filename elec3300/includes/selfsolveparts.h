#ifndef SELFSOLOVEPARTS_H
#define SELFSOLVEPARTS_H

#include "cube.h"
#include "turn.h"

void whitebasecross(Cube* c);
void holewitebase(Cube* c);
void secondfloor(Cube* c);
void thirdfloor(Cube* c);

void sf1(Cube* c);
void sf2(Cube* c);
void sf3(Cube* c);
void sf4(Cube* c);
void sf5(Cube* c);
void sf6(Cube* c);
void sf7(Cube* c);
void sf8(Cube* c);
int secpair(Cube* c,int face);
int getTotalYellow(Cube* c);
int getTotalCorrectCorners(Cube* c);

#endif