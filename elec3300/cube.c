#include "includes/cube.h"
#include <stdio.h>

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

void midpair(Cube* c, int face, int block)
{

    
};