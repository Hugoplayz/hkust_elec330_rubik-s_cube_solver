#ifndef CUBE_H
#define CUBE_H
#define True 1
#define False 0
#define and &&
#define or ||

struct cube
{
    int block[6][9] ;
};
typedef struct cube Cube;

void displayCube(Cube* c);

void unscanedCubeInit(Cube* c);

void solvedCubeInit(Cube* c);

int solvecomplete(Cube* c);

void midpair(Cube* c, int face, int block);

void randomCubeInit(Cube* c);

//         555
//         555
//         555
//   111 | 222 | 333 | 444 |
//   111 | 222 | 333 | 444 |
//   111 | 222 | 333 | 444 |
//         000
//         000
//         000

// 0 = White
// 1 = Blue
// 2 = Red
// 3 = Green
// 4 = Orange
// 5 = Yellow
// 6 = not yet scan
#endif
