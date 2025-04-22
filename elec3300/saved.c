#include "includes/selfsolveparts.h"
#include <stdio.h>
#include <time.h>
unsigned int retTime = 0;

void whitebasecross(Cube* c)
{
int state = 0;
int check = 0;

while (state == 0) { // intend to make a flower
    if (c->block[0][1] == 0 && c->block[0][3] == 0 && c->block[0][5] == 0 && c->block[0][7] == 0) {
        state += 2;
    }
    if (c->block[5][1] == 0 && c->block[5][3] == 0 && c->block[5][5] == 0 && c->block[5][7] == 0) {
        state += 1;
    }
    else {
        for (int i = 0; i < 4; i++) { // the white face has white side
            if (c->block[0][1] == 0) {
                while (c->block[5][7] == 0) {
                    up_clockwise(c); // U
                }
                front_clockwise(c); // F
                front_clockwise(c); // F
            }
            down_clockwise(c); // D
        }
        if (c->block[2][5] == 0) { // side middle side has white
            while (c->block[5][5] == 0) {
                up_clockwise(c); // U
            }
            right_clockwise(c); // R
        }
        if (c->block[2][3] == 0) {
            while (c->block[5][3] == 0) {
                up_clockwise(c); // U
            }
            left_counterclockwise(c); // L'
        }
        if (c->block[1][5] == 0) {
            while (c->block[5][7] == 0) {
                up_clockwise(c); // U
            }
            front_clockwise(c); // F
        }
        if (c->block[1][3] == 0) {
            while (c->block[5][1] == 0) {
                up_clockwise(c); // U
            }
            back_counterclockwise(c); // B'
        }
        if (c->block[4][5] == 0) {
            while (c->block[5][3] == 0) {
                up_clockwise(c); // U
            }
            left_clockwise(c); // L
        }
        if (c->block[4][3] == 0) {
            while (c->block[5][5] == 0) {
                up_clockwise(c); // U
            }
            right_counterclockwise(c); // R'
        }
        if (c->block[3][5] == 0) {
            while (c->block[5][1] == 0) {
                up_clockwise(c); // U
            }
            back_clockwise(c); // B
        }
        if (c->block[3][3] == 0) {
            while (c->block[5][7] == 0) {
                up_clockwise(c); // U
            }
            front_counterclockwise(c); // F'
        }
        for (int i = 0; i < 4; i++) {
            if (c->block[2][7] == 0) { // side base side has white
                while (c->block[5][5] == 0) {
                    up_clockwise(c); // U
                }
                front_counterclockwise(c); // F'
                right_clockwise(c);        // R
                front_clockwise(c);        // F
            }
            down_clockwise(c); // D
        }
        for (int i = 0; i < 4; i++) {
            if (c->block[2][1] == 0) { // side top side has white
                front_counterclockwise(c); // F'
                left_clockwise(c);         // L
                down_clockwise(c);         // D
                left_counterclockwise(c);  // L'
                front_clockwise(c);        // F
                front_clockwise(c);        // F
            }
            up_clockwise(c); // U
        }
    }
}

while (state == 1) { // intend to make white cross
    if (c->block[0][1] == 0 && c->block[0][3] == 0 && c->block[0][5] == 0 && c->block[0][7] == 0) {
        state += 1;
    }
    else {
        if (c->block[1][1] == c->block[1][4]) {
            left_clockwise(c);            // L
            left_clockwise(c);            // L
        }
        if (c->block[2][1] == c->block[2][4]) {
            front_clockwise(c);           // F
            front_clockwise(c);           // F
        }
        if (c->block[3][1] == c->block[3][4]) {
            right_clockwise(c);           // R
            right_clockwise(c);           // R
        }
        if (c->block[4][1] == c->block[4][4]) {
            back_clockwise(c);            // B
            back_clockwise(c);            // B
        }
        up_clockwise(c); // U
    }
}
    
};
void holewitebase(Cube* c)
{
    int finish[4] = {0,0,0,0};
    while (1)
    {
        printf("check\n");

        while ((c->block[1][2] * c->block[2][0] * c->block[5][6] == 0) or //upper part have target block
               (c->block[2][2] * c->block[3][0] * c->block[5][8] == 0) or
               (c->block[3][2] * c->block[4][0] * c->block[5][2] == 0) or
               (c->block[4][2] * c->block[1][0] * c->block[5][0] == 0))
        {
            printf("target\n");
            if ((c->block[1][2] + 1) * (c->block[2][0] + 1) * (c->block[5][6] + 1) == 6)
            {
                printf("1\n");
                if (c->block[1][2] == 0)
                {
                    left_counterclockwise(c);
                    up_counterclockwise(c);
                    left_clockwise(c);
                }
                else if(c->block[2][0] == 0)
                {
                    front_clockwise(c);
                    up_clockwise(c);
                    front_counterclockwise(c);
                }
                else//R2 D' R2 D R2
                {
                    left_clockwise(c);
                    left_clockwise(c);
                    up_counterclockwise(c);
                    left_clockwise(c);
                    left_clockwise(c);
                    up_clockwise(c);
                    left_clockwise(c);
                    left_clockwise(c);
                }
                
            }
            if ((c->block[2][2] + 1) * (c->block[3][0] + 1) * (c->block[5][8] + 1) == 12)
            {
                printf("2\n");
                if (c->block[2][2] == 0)
                {
                    front_counterclockwise(c);
                    up_counterclockwise(c);
                    front_clockwise(c);
                }
                else if(c->block[3][0] == 0)
                {
                    right_clockwise(c);
                    up_clockwise(c);
                    right_counterclockwise(c);
                }
                else//R2 D' R2 D R2
                {
                    front_clockwise(c);
                    front_clockwise(c);
                    up_counterclockwise(c);
                    front_clockwise(c);
                    front_clockwise(c);
                    up_clockwise(c);
                    front_clockwise(c);
                    front_clockwise(c);
                }
                
            }
            if ((c->block[3][2] + 1) * (c->block[4][0] + 1) * (c->block[5][2] + 1) == 20)
            {
                printf("3\n");
                if (c->block[3][2] == 0)
                {
                    right_counterclockwise(c);
                    up_counterclockwise(c);
                    right_clockwise(c);
                }
                else if(c->block[4][0] == 0)
                {
                    back_clockwise(c);
                    up_clockwise(c);
                    back_counterclockwise(c);
                }
                else//R2 D' R2 D R2
                {
                    right_clockwise(c);
                    right_clockwise(c);
                    up_counterclockwise(c);
                    right_clockwise(c);
                    right_clockwise(c);
                    up_clockwise(c);
                    right_clockwise(c);
                    right_clockwise(c);
                }
                
            }
            if ((c->block[4][2] + 1) * (c->block[1][0] + 1) * (c->block[5][0] + 1) == 10)
            {
                printf("4\n");
                if (c->block[4][2] == 0)
                {
                    back_counterclockwise(c);
                    up_counterclockwise(c);
                    back_clockwise(c);
                }
                else if(c->block[1][0] == 0)
                {
                    left_clockwise(c);
                    up_clockwise(c);
                    left_counterclockwise(c);
                }
                else//R2 D' R2 D R2
                {
                    back_clockwise(c);
                    back_clockwise(c);
                    up_counterclockwise(c);
                    back_clockwise(c);
                    back_clockwise(c);
                    up_clockwise(c);
                    back_clockwise(c);
                    back_clockwise(c);
                }
                
            }
            
        
        up_clockwise(c);
        }
        if (c->block[1][8] == 1 and c->block[2][6] == 2 and c->block[0][0] == 0)
        {
            finish[0] = 1;
        }
        if (c->block[2][8] == 2 and c->block[3][6] == 3 and c->block[0][2] == 0)
        {
            finish[1] = 1;
        }
        if (c->block[3][8] == 3 and c->block[4][6] == 4 and c->block[0][8] == 0)
        {
            finish[2] = 1;
        }
        if (c->block[4][8] == 4 and c->block[1][6] == 1 and c->block[0][6] == 0)
        {
            finish[3] = 1;
        }
        if (finish[0] == 1 and finish[1] == 1 and finish[2] == 1  and finish[3] == 1)
        {
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            printf("%d ",finish[i]);

        }
        printf("\n");
        if (finish[0] == 0)// get block out
        {
            left_counterclockwise(c);
            up_counterclockwise(c);
            left_clockwise(c);
        }
        else if(finish[1] == 0)
        {
            front_counterclockwise(c);
            up_counterclockwise(c);
            front_clockwise(c);
        }
        else if(finish[2] == 0)
        {
            right_counterclockwise(c);
            up_counterclockwise(c);
            right_clockwise(c);
        }
        else if (finish[3] == 0)
        {
            back_counterclockwise(c);
            up_counterclockwise(c);
            back_clockwise(c);
        }
        
        
    }
    

};
void secondfloor(Cube* c)
{   
    int finish[4] = {0,0,0,0};
    
    while(1)
    {
        if (finish[0] == 1 and finish[1] == 1 and finish[2] == 1  and finish[3] == 1)
        {
            return; //finish 2nd floor and exit
        }
        printf("check\n");
        while ((c->block[3][1] != 5 and c->block[5][5] != 5) or //upper part have target blocks
               (c->block[4][1] != 5 and c->block[5][1] != 5) or 
               (c->block[1][1] != 5 and c->block[5][3] != 5) or 
               (c->block[2][1] != 5 and c->block[5][7] != 5))
        {
            printf("target\n");
            if (c->block[1][5] == 1 and c->block[2][3] == 2)//update finish
            {
                finish[0] = 1;
            }
            else
            {
                finish[0] = 0;
            }
            if (c->block[2][5] == 2 and c->block[3][3] == 3)
            {
                finish[1] = 1;
            }
            else
            {
                finish[1] = 0;
            }
            if (c->block[3][5] == 3 and c->block[4][3] == 4)
            {
                finish[2] = 1;
            }
            else
            {
                finish[2] = 0;
            }
            if (c->block[4][5] == 4 and c->block[1][3] == 1)
            {
                finish[3] = 1;
            }    
            else
            {
                finish[3] = 0;
            }   
    
            for (int i = 0; i < 4; i++)
            {
                printf("%d ",finish[i]);
    
            }
            retTime = time(0) + 3;   // Get finishing time.
            while (time(0) < retTime); 
            for (int i = 1; i < 5; i++)
            {
                if (c->block[i][1] == i and secpair(c,i) != 5)
                {
                    printf("SWITCH: %d\n",i);
                    switch (i)
                    {

                    case 1:
                        printf("be4:\n");
                        displayCube(c);
                        if (c->block[5][3] == 2)
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("1a\n");

                            up_clockwise(c);
                            front_clockwise(c);
                            up_counterclockwise(c);
                            front_counterclockwise(c);
                        
                            up_counterclockwise(c);
                            left_counterclockwise(c);
                            up_clockwise(c);
                            left_clockwise(c);

                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);

                        }
                        else
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("1b\n");
                            up_counterclockwise(c);
                            back_counterclockwise(c);
                            up_clockwise(c);
                            back_clockwise(c); 
                        
                            up_clockwise(c);
                            left_clockwise(c);
                            up_counterclockwise(c);
                            left_counterclockwise(c);

                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);

                        }
                        
                        break;
                    
                    case 2:
                    printf("be4:\n");
                    displayCube(c);
                        if (c->block[5][7] == 3)
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("2a\n");
                            sf3(c);
                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);
  
                        }
                        else
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("2b\n");
                            sf4(c);
                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);

                        }
                        
                        break;

                    case 3:
                    printf("be4:\n");
                    displayCube(c);
                        if (c->block[5][5] == 4)
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("3a\n");
                            up_clockwise(c);
                            back_clockwise(c);
                            up_counterclockwise(c);
                            back_counterclockwise(c);
                        
                            up_counterclockwise(c);
                            right_counterclockwise(c);
                            up_clockwise(c);
                            right_clockwise(c);
                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);

                        }
                        else
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("3b\n");
                            up_counterclockwise(c);
                            front_counterclockwise(c);
                            up_clockwise(c);
                            front_clockwise(c);
                        
                            up_clockwise(c);
                            right_clockwise(c);
                            up_counterclockwise(c);
                            right_counterclockwise(c);
                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);

                        }
                        
                        break;
                    
                    case 4:
                    printf("be4:\n");
                    displayCube(c);
                        if (c->block[5][1] == 1)
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("4a\n");
                            up_clockwise(c);
                            left_clockwise(c);
                            up_counterclockwise(c);
                            left_counterclockwise(c);
                        
                            up_counterclockwise(c);
                            back_counterclockwise(c);
                            up_clockwise(c);
                            back_clockwise(c);
                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);
 
                        }
                        else
                        {
                            retTime = time(0) + 1;   // Get finishing time.
                            while (time(0) < retTime);   
                            printf("4b\n");
                            up_counterclockwise(c);
                            right_counterclockwise(c);
                            up_clockwise(c);
                            right_clockwise(c);
                        
                            up_clockwise(c);
                            back_clockwise(c);
                            up_counterclockwise(c);
                            back_counterclockwise(c);
                            retTime = time(0) + 5;   // Get finishing time.
                            while (time(0) < retTime);   
                            displayCube(c);

                        }
                        
                        break;
                    
                    default:
                        break;
                    }
                }
                
            }
            up_clockwise(c); 
        }
        if (c->block[1][5] == 1 and c->block[2][3] == 2)//update finish
        {
            finish[0] = 1;
        }
        if (c->block[2][5] == 2 and c->block[3][3] == 3)
        {
            finish[1] = 1;
        }
        if (c->block[3][5] == 3 and c->block[4][3] == 4)
        {
            finish[2] = 1;
        }
        if (c->block[4][5] == 4 and c->block[1][3] == 1)
        {
            finish[3] = 1;
        }       

        for (int i = 0; i < 4; i++)
        {
            printf("%d ",finish[i]);

        }
        printf("\n");
        if (finish[0] == 0)// get block out
        {
            sf4(c);
        }
        else if(finish[1] == 0)
        {
            sf3(c);
        }
        else if(finish[2] == 0)
        {
            up_counterclockwise(c);
            right_counterclockwise(c);
            up_clockwise(c);
            right_clockwise(c);
        
            up_clockwise(c);
            back_clockwise(c);
            up_counterclockwise(c);
            back_counterclockwise(c);
        } 
        else if(finish[3] == 0)
        {
            up_clockwise(c);
            left_clockwise(c);
            up_counterclockwise(c);
            left_counterclockwise(c);
        
            up_counterclockwise(c);
            back_counterclockwise(c);
            up_clockwise(c);
            back_clockwise(c);
        }
        
        

    }
    
};
void thirdfloor(Cube* c)
{
    if (c->block[5][1] != 5 and c->block[5][3] != 5 and c->block[5][5] != 5 and c->block[5][7] != 5)
    {
        sf5(c);//dot yellow
    }

    if (c->block[5][1] == 5 and c->block[5][3] != 5 and c->block[5][5] != 5 and c->block[5][7] == 5)
    {
        sf5(c);// | yellow
    }
    else if (c->block[5][1] != 5 and c->block[5][3] == 5 and c->block[5][5] == 5 and c->block[5][7] != 5)
    {
        up_clockwise(c);// -- yellow
        sf5(c);
    }

    if (c->block[5][1] == 5 and c->block[5][3] == 5 and c->block[5][5] != 5 and c->block[5][7] != 5)
    {
        sf5(c); // ┛ yellow
    }
    else if (c->block[5][1] == 5 and c->block[5][3] != 5 and c->block[5][5] == 5 and c->block[5][7] != 5)
    {
        up_counterclockwise(c);
        sf5(c); // ┖ yellow
    }
    else if (c->block[5][1] != 5 and c->block[5][3] != 5 and c->block[5][5] == 5 and c->block[5][7] == 5)
    {
        up_counterclockwise(c);
        up_counterclockwise(c);
        sf5(c); // ┍ yellow
    }
    else if (c->block[5][1] != 5 and c->block[5][3] == 5 and c->block[5][5] != 5 and c->block[5][7] == 5)
    {
        up_clockwise(c);
        sf5(c); // ┒ yellow
    }

    if (c->block[5][1] != 5 or c->block[5][3] != 5 or c->block[5][5] != 5 or c->block[5][7] != 5)
    {
        puts("BUGS");
        displayCube(c);
        return;
    }

    while (1)
    {
        int count = getTotalYellow(c);
        if (count == 9) 
        {
            break;
        }
        if (count == 6)
        {
            
        }
        
    }
    

    
    
    
    

}

//***********Smart Fuction************
void sf1(Cube* c) // R' D' R D
{
    right_counterclockwise(c);
    down_counterclockwise(c);
    right_clockwise(c);
    down_clockwise(c); 
}
void sf2(Cube* c) // R U R' U'
{
    right_clockwise(c);
    up_clockwise(c);
    right_counterclockwise(c);
    up_counterclockwise(c); 
}

void sf3(Cube* c) // for second floor to right
{//U R U' R' U' F' U F
    up_clockwise(c);
    right_clockwise(c);
    up_counterclockwise(c);
    right_counterclockwise(c);

    up_counterclockwise(c);
    front_counterclockwise(c);
    up_clockwise(c);
    front_clockwise(c);
}

void sf4(Cube* c)// for second floor to left
{//U' L' U L U F U' F'
    up_counterclockwise(c);
    left_counterclockwise(c);
    up_clockwise(c);
    left_clockwise(c);

    up_clockwise(c);
    front_clockwise(c);
    up_counterclockwise(c);
    front_counterclockwise(c);
}

void sf5(Cube* c)//for 3floor yellow cross
{
    left_counterclockwise(c);
    up_counterclockwise(c);
    front_counterclockwise(c);

    up_clockwise(c);
    front_clockwise(c);
    left_clockwise(c);
}

int secpair(Cube* c,int face)
{
    if (face == 1)
    {
        return c->block[5][3];
    }
    if (face == 2)
    {
        return c->block[5][7];
    }
    if (face == 3)
    {
        return c->block[5][5];
    }
    if (face == 4)
    {
        return c->block[5][1];
    }
    printf("how to you get here???\n");
    return -1;
}

int getTotalYellow(Cube* c)
{
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (c->block[5][i] == 5)
        {
            count++;
        }
        
    }
    return count;
    
}