#include "includes/cube.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayCube(Cube* c)
{
    for (int i = 0; i < 6; i++)
    {
        printf("face:%d\n",i);
        for (int j = 0; j < 9; j++)
        {
            printf("%d ",c->block[i][j]);
            if (j == 2 || j == 5 || j == 8)
            {
                printf("\n");
            }
            
            
        }
        
    }
    
};

void unscanedCubeInit(Cube* c)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == 4)
            {
                c->block[i][j] = i;
            }
            
            c->block[i][j] = 6;
        }
        
    }
    
};

int solvecomplete(Cube* c)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (c->block[i][j] != i)
            {
                return False;
            }
            
        }
        
    }
    return True;
    
};

void solvedCubeInit(Cube* c)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            c->block[i][j] = i;
        }
        
    }
    
};

void randomCubeInit(Cube* c)
{
    srand (time(0));
    for (int i = 0; i < 20; i++)
    {
        switch (rand()%12)
        {
        case 0:
            left_clockwise(c);
            break;
        
        case 1:
            left_counterclockwise(c);
            break;   

        case 2:
            right_clockwise(c);
            break;   

        case 3:
            right_counterclockwise(c);
            break; 

        case 4:
            front_clockwise(c);
            break; 

        case 5:
            front_counterclockwise(c);
            break; 
        
        case 6:
            back_clockwise(c);
            break;

        case 7:
            back_counterclockwise(c);
            break;

        case 8:
            up_clockwise(c);
            break;

        case 9:
            up_counterclockwise(c);
            break;

        case 10:
            down_clockwise(c);
            break;

        case 11:
            down_counterclockwise(c);
            break;
        default:
            break;
        }
    }
    
};

