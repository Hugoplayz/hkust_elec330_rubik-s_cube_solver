#include "includes/cube.h"
#include "includes/turn.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
    time_t t = time(0);
    printf("%d\n",t);
    srand (t);

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

void cubetostring(Cube* c, char*patternized)
{
    int face[6] = {5,3,2,0,1,4};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            switch (c->block[face[i]][j])
            {
            case 0:
                strcat(patternized, "D");
                break;
            
            case 1:
                strcat(patternized, "L");
                break;

            case 2:
                strcat(patternized, "F");
                break;

            case 3:
                strcat(patternized, "R");
                break;

            case 4:
                strcat(patternized, "B");
                break;

            case 5:
                strcat(patternized, "U");
                break;
        
            default:
                break;
            }
        }
        
    }
    return ;
    
    
};

void stringToTurns(Cube*c,char* input)
{
    char * token = strtok(input, " ");
    // loop through the string to extract all other tokens
    while( token != NULL ) {
       if (!strcmp(token,"U"))
       {
            up_clockwise(c);    
       }
       else if (!strcmp(token,"U'"))
       {
            up_counterclockwise(c);
       }
       else if (!strcmp(token,"U2"))
       {
            up_clockwise(c);
            up_clockwise(c);
       }
       else if (!strcmp(token,"F"))
       {
            front_clockwise(c);
       }
       else if (!strcmp(token,"F'"))
       {
            front_counterclockwise(c);
       }
       else if (!strcmp(token,"F2"))
       {
            front_clockwise(c);
            front_clockwise(c);
       }
       else if (!strcmp(token,"L"))
       {
            left_clockwise(c);
       }
       else if (!strcmp(token,"L'"))
       {
            left_counterclockwise(c);
       }
       else if (!strcmp(token,"L2"))
       {
            left_clockwise(c);
            left_clockwise(c);
       }
       else if (!strcmp(token,"R"))
       {
            right_clockwise(c);
       }
       else if (!strcmp(token,"R'"))
       {
            right_counterclockwise(c);
       }
       else if (!strcmp(token,"R2"))
       {
            right_clockwise(c);
            right_clockwise(c);
       }
       else if (!strcmp(token,"B"))
       {
            back_clockwise(c);
       }
       else if (!strcmp(token,"B'"))
       {
            back_counterclockwise(c);
       }
       else if (!strcmp(token,"B2"))
       {
            back_clockwise(c);
            back_clockwise(c);
       }
       else if (!strcmp(token,"D"))
       {
            down_clockwise(c);
       }
       else if (!strcmp(token,"D'"))
       {
            down_counterclockwise(c);
       }
       else if (!strcmp(token,"D2"))
       {
            down_clockwise(c);
            down_clockwise(c);
       }
        //printing each token
       token = strtok(NULL, " ");

    }
}
