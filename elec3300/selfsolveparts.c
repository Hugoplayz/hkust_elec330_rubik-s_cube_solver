#include "includes/selfsolveparts.h"


void whitebasecross(Cube* c)
{
int state = 0;
int check = 0;

while (state == 0) { // intend to make a flower
    if (this->block[5][1] == 0 && this->block[5][3] == 0 && this->block[5][5] == 0 && this->block[5][7] == 0) {
        state += 1;
    }
    else {
        for (int i = 0; i < 4; i++) { // the white face has white side
            if (this->block[0][1] == 0) {
                while (this->block[5][7] == 0) {
                    up_clockwise(&c); // U
                }
                front_clockwise(&c); // F
                front_clockwise(&c); // F
            }
            down_clockwise(&c); // D
        }
        if (this->block[2][5] == 0) { // side middle side has white
            while (this->block[5][5] == 0) {
                up_clockwise(&c); // U
            }
            right_clockwise(&c); // R
        }
        if (this->block[2][3] == 0) {
            while (this->block[5][3] == 0) {
                up_clockwise(&c); // U
            }
            left_counterclockwise(&c); // L'
        }
        if (this->block[1][5] == 0) {
            while (this->block[5][7] == 0) {
                up_clockwise(&c); // U
            }
            front_clockwise(&c); // F
        }
        if (this->block[1][3] == 0) {
            while (this->block[5][1] == 0) {
                up_clockwise(&c); // U
            }
            back_counterclockwise(&c); // B'
        }
        if (this->block[4][5] == 0) {
            while (this->block[5][3] == 0) {
                up_clockwise(&c); // U
            }
            left_clockwise(&c); // L
        }
        if (this->block[4][3] == 0) {
            while (this->block[5][5] == 0) {
                up_clockwise(&c); // U
            }
            right_counterclockwise(&c); // R'
        }
        if (this->block[3][5] == 0) {
            while (this->block[5][1] == 0) {
                up_clockwise(&c); // U
            }
            back_clockwise(&c); // B
        }
        if (this->block[3][3] == 0) {
            while (this->block[5][7] == 0) {
                up_clockwise(&c); // U
            }
            front_counterclockwise(&c); // F'
        }
        for (int i = 0; i < 4; i++) {
            if (this->block[2][7] == 0) { // side base side has white
                while (this->block[5][5] == 0) {
                    up_clockwise(&c); // U
                }
                front_counterclockwise(&c); // F'
                right_clockwise(&c);        // R
                front_clockwise(&c);        // F
            }
            down_clockwise(&c); // D
        }
        for (int i = 0; i < 4; i++) {
            if (this->block[2][1] == 0) { // side top side has white
                front_counterclockwise(&c); // F'
                left_clockwise(&c);         // L
                down_clockwise(&c);         // D
                left_counterclockwise(&c);  // L'
                front_clockwise(&c);        // F
                front_clockwise(&c);        // F
            }
            up_clockwise(&c); // U
        }
    }
}

while (state == 1) { // intend to make white cross
    if (this->block[0][1] == 0 && this->block[0][3] == 0 && this->block[0][5] == 0 && this->block[0][7] == 0) {
        state += 1;
    }
    else {
        if (this->block[1][1] == this->block[1][4]) {
            left_clockwise(&c);            // L
            left_clockwise(&c);            // L
        }
        if (this->block[2][1] == this->block[2][4]) {
            front_clockwise(&c);           // F
            front_clockwise(&c);           // F
        }
        if (this->block[3][1] == this->block[3][4]) {
            right_clockwise(&c);           // R
            right_clockwise(&c);           // R
        }
        if (this->block[4][1] == this->block[4][4]) {
            back_clockwise(&c);            // B
            back_clockwise(&c);            // B
        }
        up_clockwise(&c); // U
    }
}
    
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
        front_clockwise(&c);
        up_clockwise(&c);
        right_clockwise(&c);
        up_counterclockwise(&c);
        right_counterclockwise(&c);
        front_counterclockwise(&c);
        up_clockwise(&c);
        front_clockwise(&c);
        right_clockwise(&c);
        up_clockwise(&c);
        right_counterclockwise(&c);
        up_counterclockwise(&c);
        front_counterclockwise(&c);
        state += 1;          // pass to next state
    }
    else if (this->block[5][4] == 5 && this->block[5][1] == 5 && this->block[5][3] == 5) { // check top left L
        front_clockwise(&c);
        up_clockwise(&c);
        right_clockwise(&c);
        up_counterclockwise(&c);
        right_counterclockwise(&c);
        front_counterclockwise(&c);
        state += 1;
    }
    else if (this->block[5][4] == 5 && this->block[5][3] == 5 && this->block[5][5] == 5) { // check top horizontal
        front_clockwise(&c);
        right_clockwise(&c);
        up_clockwise(&c);
        right_counterclockwise(&c);
        up_counterclockwise(&c);
        front_counterclockwise(&c);
        state += 1;
    }
    else {
        up_clockwise(&c); 
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
        state += 1;
    }
    else if (check_score == 2) { // Having 2 blocks same color
        if (abs(x - y) == 1) {  // The two color blocks stay side by side
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
                up_clockwise(&c);
            }
            right_clockwise(&c);
            up_clockwise(&c);
            right_counterclockwise(&c);
            up_clockwise(&c);
            right_clockwise(&c);
            up_clockwise(&c);
            up_clockwise(&c);
            right_counterclockwise(&c);
            up_clockwise(&c);
            for (int i = 0; i < count; i++) {
                up_counterclockwise(&c);
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
                up_clockwise(&c);
            }
            right_clockwise(&c);
            up_clockwise(&c);
            right_counterclockwise(&c);
            up_clockwise(&c);
            right_clockwise(&c);
            up_clockwise(&c);
            up_clockwise(&c);
            right_counterclockwise(&c);
            up_clockwise(&c);
            up_clockwise(&c);
            up_clockwise(&c);
            right_clockwise(&c);
            up_clockwise(&c);
            right_counterclockwise(&c);
            up_clockwise(&c);
            right_clockwise(&c);
            up_clockwise(&c);
            up_clockwise(&c);
            right_counterclockwise(&c);
            up_clockwise(&c);
            up_counterclockwise(&c);
            for (int i = 0; i < count; i++) {
                up_counterclockwise(&c);
            }
            state += 1;
        }

    }
    else {
        up_clockwise(&c);
    }
}
displayCube(&c);
while (state == 2) { // intend to match the corner
    if (this->block[2][2] * this->block[5][8] * this->block[3][0] == 30 && this->block[5][2] * this->block[3][2] * this->block[4][0] == 60) { //a all corner in the right position
        state += 1;
    }
    else if (this->block[2][2] * this->block[5][8] * this->block[3][0] == 30) { //yellow green red corner in the right position
        up_clockwise(&c);
        right_clockwise(&c);
        up_counterclockwise(&c);
        left_clockwise(&c);
        up_clockwise(&c);
        right_counterclockwise(&c);
        up_counterclockwise(&c);
        left_counterclockwise(&c);
    }
    else if (this->block[5][2] * this->block[3][2] * this->block[4][0] == 60) { //yellow green orange 
        up_clockwise(&c);
        up_clockwise(&c);
        right_clockwise(&c);
        up_counterclockwise(&c);
        left_clockwise(&c);
        up_clockwise(&c);
        right_counterclockwise(&c);
        up_counterclockwise(&c);
        left_counterclockwise(&c);
    }
    else if (this->block[5][0] * this->block[1][0] * this->block[4][2] == 20) { //yellow blue orange
        up_clockwise(&c);
        up_clockwise(&c);
        up_clockwise(&c);
        right_clockwise(&c);
        up_counterclockwise(&c);
        left_clockwise(&c);
        up_clockwise(&c);
        right_counterclockwise(&c);
        up_counterclockwise(&c);
        left_counterclockwise(&c);
    }
    else if (this->block[5][6] * this->block[1][2] * this->block[2][0] == 10) { //yellow blue red
        up_clockwise(&c);
        up_clockwise(&c);
        up_clockwise(&c);
        up_clockwise(&c);
        right_clockwise(&c);
        up_counterclockwise(&c);
        left_clockwise(&c);
        up_clockwise(&c);
        right_counterclockwise(&c);
        up_counterclockwise(&c);
        left_counterclockwise(&c);
    }
    else { //no corner in the right position
        up_clockwise(&c);
        right_clockwise(&c);
        up_counterclockwise(&c);
        left_clockwise(&c);
        up_clockwise(&c);
        right_counterclockwise(&c);
        up_counterclockwise(&c);
        left_counterclockwise(&c);
    }
}
displayCube(&c);
while (state == 3) { //intend to complete the whole cube
    int count = 0;
    if (this->block[5][0] == 5 && this->block[5][2] == 5 && this->block[5][6] == 5 && this->block[5][8] == 5) { //cube complete
        for (int i = 0; i < count; i++) {
            up_clockwise(&c);
        }
        state += 1;
    }
    else if (this->block[5][8] != 5) { // bottom right not yellow on top
        right_clockwise(&c);
        down_counterclockwise(&c);
        right_clockwise(&c);
        down_counterclockwise(&c);
        right_clockwise(&c);
        down_counterclockwise(&c);
    }
    else if (this->block[5][6] != 5) { // bottom left not yellow on top
        up_counterclockwise(&c);
        count += 1;
    }
    else if (this->block[5][0] != 5) { // top left not yellow on top
        up_counterclockwise(&c);
        up_counterclockwise(&c);
        count += 2;
    }
    else if (this->block[5][2] != 5) { // top right not yellow on top
        up_counterclockwise(&c);
        up_counterclockwise(&c);
        up_counterclockwise(&c);
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
