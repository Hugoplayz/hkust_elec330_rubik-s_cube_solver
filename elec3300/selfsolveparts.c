#include "includes/selfsolveparts.h"


void whitebasecross(Cube* c)
{
    
    
};
void holewitebase(Cube* c)
{

};
void secondfloor(Cube* c)
{

};
void thirdfloor(Cube* c)
{
    int check = 0; //counting the number of times of checking, usually 3;
int state = 0; // indicating the current solving state
int internal_state = 0; // indicating which checking state inside a state
int ckeck_score = 0; // score check
int count = 0; 
int x = -1;
int y = -1;

displayCube(&c);
while (state == 0) {     // intend to make upper yellow +
    if (this->block[5][4] == 5 && this->block[5][1] != 5 && this->block[5][3] != 5 && this->block[5][5] != 5 && this->block[5][7] != 5) { // check top only middle yellow
        // F U R U' R' F' U F R U R' U' F'
        state += 1;          // pass to next state
    }
    else if (this->block[5][4] == 5 && this->block[5][1] == 5 && this->block[5][3] == 5) { // check top left L
        // F U R U' R' F'
        state += 1;
    }
    else if (this->block[5][4] == 5 && this->block[5][3] == 5 && this->block[5][5] == 5) { // check top horizontal
        // F R U R' U' F'
        state += 1;
    }
    else {
        // U 
    }
}
displayCube(&c);
while (state == 1) { // intend to match the side
    int check_score = 0;
    int x = -1;
    int y = -1;
    int count = 0;
    for (int i = 1; i < 5; i++) {
        if (this->block[i][1] == this->block[i][4]) {
            check_score += 1;
            if (x == -1) { // storing which block have the same color
                x = i;
            }
            else {
                y = i;
            }
        }
    }
    if (check_score == 4) {
        state += 1
    }
    else if (check_score == 2) { // Having 2 blocks same color
        if (abs(x -y) == 1) {  // The two color blocks stay side by side
            if (x * y == 12) { // green orange
                count = 0;
            }
            else if (x * y == 4) { //orange blue
                count = 1;
            }
            else if (x * y == 2) { //blue red
                count = 2;
            }
            else if (x * y == 6) { //red green
            count = 3;
            }
            for (int i = 0; i < count; i++) {
                // U
            }
            // R U R' U  R U U R' U 
            for (int i = 0; i < count; i++) {
                // U'
            }
            state += 1;
        }
        else { // The two color blocks stay opposite
            if (x * y == 3) {
                count = 0;
            }
            else if (x * y == 8) {
                count = 1;
            }
            for (int i = 0; i < count; i++) {
                // U
            }
            // R U R' U  R U U R' U U U R U R' U  R U U R' U U'
            for (int i = 0; i < count; i++) {
                // U'
            }
            state += 1;
        }

    }
    else {
        // U
    }
}
displayCube(&c);
while (state == 2) { // intend to match the corner
    if (this->block[2][2] * this->block[5][8] * this->block[3][0] == 30 && this->block[5][2] * this->block[3][2] * this->block[4][0] == 60) { //a all corner in the right position
        state += 1;
    }
    else if (this->block[2][2] * this->block[5][8] * this->block[3][0] == 30) { //yellow green red corner in the right position
        // U R U' L' u R' U' L
    }
    else if (this->block[5][2] * this->block[3][2] * this->block[4][0] == 60) { //yellow green orange 
        // U U R U' L' u R' U' L U'
    }
    else if (this->block[5][0] * this->block[1][0] * this->block[4][2] == 20) { //yellow blue orange
        // U U U R U' L' u R' U' L U' U'
    }
    else if (this->block[5][6] * this->block[1][2] * this->block[2][0] == 10) { //yellow blue red
        // U U U U R U' L' u R' U' L U' U' U'
    }
    else { //no corner in the right position
        // U R U' L' u R' U' L
    }
}
displayCube(&c);
while (state == 3) { //intend to complete the whole cube
int count = 0;
    if (this->block[5][0] == 5 && this->block[5][2] == 5 && this->block[5][6] == 5 && this->block[5][8] == 5) { //cube complete
        for (int i = 0; i < count; i++) {
            // U
        }
        state += 1;
    }
    else if (this->block[5][8] != 5) { // bottom right not yellow on top
        // R' D' R D R' D' R D
    }
    else if (this->block[5][6] != 5) { // bottom left not yellow on top
        // U'
        count += 1;
    }
    else if (this->block[5][0] != 5) { // top left not yellow on top
        // U' U'
        count += 2;
    }
    else if (this->block[5][2] != 5) { // top right not yellow on top
        // U' U' U'
        count += 3;
    }
}
displayCube(&c);
}

//***********Smart Fuction************
void sf1(Cube* c) // R' D' R D
{
    right_counterclockwise(&c);
    down_counterclockwise(&c);
    right_clockwise(&c);
    down_clockwise(&c); 
}
void sf2(Cube* c) // R U R' U'
{
    right_clockwise(&c);
    up_clockwise(&c);
    right_counterclockwise(&c);
    up_counterclockwise(&c); 
}
