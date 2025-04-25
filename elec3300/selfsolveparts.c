#include "includes/selfsolveparts.h"
#include <stdio.h>

void whitebasecross(Cube* c)
{
    while (1)
    {
        puts("1");
        if (c->block[5][1] == 0 and 
            c->block[5][3] == 0 and
            c->block[5][5] == 0 and
            c->block[5][7] == 0)
        {
            break;
        }
        
        if (c->block[0][1] == 0)
        {
            while (c->block[5][7] == 0)
            {
                up_clockwise(c);
            }            
            front_clockwise(c);
            front_clockwise(c);
        }
        if (c->block[0][3] == 0)
        {
            while (c->block[5][3] == 0)
            {
                up_clockwise(c);
            }            
            left_clockwise(c);
            left_clockwise(c);
        }
        if (c->block[0][5] == 0)
        {
            while (c->block[5][5] == 0)
            {
                up_clockwise(c);
            }            
            right_clockwise(c);
            right_clockwise(c);
        }
        if (c->block[0][7] == 0)
        {
            while (c->block[5][1] == 0)
            {
                up_clockwise(c);
            }            
            back_clockwise(c);
            back_clockwise(c);
        }

        if (c->block[1][7] == 0)
        {
            while (c->block[5][7] == 0)
            {
                up_clockwise(c);
            }            
            left_counterclockwise(c);
            front_clockwise(c);
        }
        if (c->block[2][7] == 0)
        {
            while (c->block[5][5] == 0)
            {
                up_clockwise(c);
            }            
            front_counterclockwise(c);
            right_clockwise(c);
        }
        if (c->block[3][7] == 0)
        {
            while (c->block[5][1] == 0)
            {
                up_clockwise(c);
            }            
            right_counterclockwise(c);
            back_clockwise(c);
        }
        if (c->block[4][7] == 0)
        {
            while (c->block[5][3] == 0)
            {
                up_clockwise(c);
            }            
            back_counterclockwise(c);
            left_clockwise(c);
        }

        if (c->block[1][5] == 0)
        {
            while (c->block[5][7] == 0)
            {
                up_clockwise(c);
            }            
            front_clockwise(c);
        }
        if (c->block[2][5] == 0)
        {
            while (c->block[5][5] == 0)
            {
                up_clockwise(c);
            }            
            right_clockwise(c);
        }
        if (c->block[3][5] == 0)
        {
            while (c->block[5][1] == 0)
            {
                up_clockwise(c);
            }            
            back_clockwise(c);
        }
        if (c->block[4][5] == 0)
        {
            while (c->block[5][3] == 0)
            {
                up_clockwise(c);
            }            
            left_clockwise(c);
        }

        if (c->block[1][3] == 0)
        {
            while (c->block[5][1] == 0)
            {
                up_clockwise(c);
            }            
            back_counterclockwise(c);
        }
        if (c->block[2][3] == 0)
        {
            while (c->block[5][3] == 0)
            {
                up_clockwise(c);
            }            
            left_counterclockwise(c);
        }
        if (c->block[3][3] == 0)
        {
            while (c->block[5][7] == 0)
            {
                up_clockwise(c);
            }            
            front_counterclockwise(c);
        }
        if (c->block[4][3] == 0)
        {
            while (c->block[5][5] == 0)
            {
                up_clockwise(c);
            }            
            right_counterclockwise(c);
        }

        if (c->block[1][1] == 0)
        {           
            left_clockwise(c);
            up_counterclockwise(c);
            front_clockwise(c);
        }
        if (c->block[2][1] == 0)
        {          
            front_clockwise(c);
            up_counterclockwise(c);
            right_clockwise(c);
        }
        if (c->block[3][1] == 0)
        {         
            right_clockwise(c);
            up_counterclockwise(c);
            back_clockwise(c);
        }
        if (c->block[4][1] == 0)
        {           
            back_clockwise(c);
            up_counterclockwise(c);
            left_clockwise(c);
        }
    }
    while  (c->block[5][1] == 0 or 
            c->block[5][3] == 0 or
            c->block[5][5] == 0 or
            c->block[5][7] == 0)
    {
        if (c->block[1][1] == 1 and c->block[5][3] == 0)
        {
            left_clockwise(c);
            left_clockwise(c);
        }
        if (c->block[2][1] == 2 and c->block[5][7] == 0)
        {
            front_clockwise(c);
            front_clockwise(c);
        }
        if (c->block[3][1] == 3 and c->block[5][5] == 0)
        {
            right_clockwise(c);
            right_clockwise(c);
        }
        if (c->block[4][1] == 4 and c->block[5][1] == 0)
        {
            back_clockwise(c);
            back_clockwise(c);
        }
        puts("2");
        up_clockwise(c);
        
    }
    
    
};
void holewitebase(Cube* c)
{
    int finish[4] = {0,0,0,0};
    while (1)
    {
        while ((c->block[1][2] * c->block[2][0] * c->block[5][6] == 0) or //upper part have target block
               (c->block[2][2] * c->block[3][0] * c->block[5][8] == 0) or
               (c->block[3][2] * c->block[4][0] * c->block[5][2] == 0) or
               (c->block[4][2] * c->block[1][0] * c->block[5][0] == 0))
        {
            if ((c->block[1][2] + 1) * (c->block[2][0] + 1) * (c->block[5][6] + 1) == 6)
            {
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
        while ((c->block[3][1] != 5 and c->block[5][5] != 5) or //upper part have target blocks
               (c->block[4][1] != 5 and c->block[5][1] != 5) or 
               (c->block[1][1] != 5 and c->block[5][3] != 5) or 
               (c->block[2][1] != 5 and c->block[5][7] != 5))
        {
            for (int i = 1; i < 5; i++)
            {
                if (c->block[i][1] == i and secpair(c,i) != 5)
                {
                    switch (i)
                    {

                    case 1:
                        if (c->block[5][3] == 2)
                        {
                            up_clockwise(c);
                            front_clockwise(c);
                            up_counterclockwise(c);
                            front_counterclockwise(c);
                        
                            up_counterclockwise(c);
                            left_counterclockwise(c);
                            up_clockwise(c);
                            left_clockwise(c);
                        }
                        else
                        {
                            up_counterclockwise(c);
                            back_counterclockwise(c);
                            up_clockwise(c);
                            back_clockwise(c); 
                        
                            up_clockwise(c);
                            left_clockwise(c);
                            up_counterclockwise(c);
                            left_counterclockwise(c);

                        }
                        
                        break;
                    
                    case 2:
                        if (c->block[5][7] == 3)
                        {
                            sf3(c);
                        }
                        else
                        {
                            sf4(c);
                        }
                        
                        break;

                    case 3:
                        if (c->block[5][5] == 4)
                        {
                            up_clockwise(c);
                            back_clockwise(c);
                            up_counterclockwise(c);
                            back_counterclockwise(c);
                        
                            up_counterclockwise(c);
                            right_counterclockwise(c);
                            up_clockwise(c);
                            right_clockwise(c);

                        }
                        else
                        {
                            up_counterclockwise(c);
                            front_counterclockwise(c);
                            up_clockwise(c);
                            front_clockwise(c);
                        
                            up_clockwise(c);
                            right_clockwise(c);
                            up_counterclockwise(c);
                            right_counterclockwise(c);
                        }
                        
                        break;
                    
                    case 4:
                        if (c->block[5][1] == 1)
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
                        else
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

    for (int i = 0; i < 4; i++)
    {
        if (c->block[5][1] == 5 and c->block[5][3] == 5 and c->block[5][5] != 5 and c->block[5][7] != 5)
        {
            sf5(c); // ┛ yellow
            break;
        }
        up_clockwise(c);
    }
    
    int count = getTotalYellow(c);
    while (count != 9)
    {
        if (count == 6)
        {
            for (int i = 0; i < 4; i++)
            {
                if (c->block[2][0] == 5 and c->block[3][0] == 5 and c->block[4][0] == 5)
                {
                    sf6(c);
                    break;
                }
                else if(c->block[4][2] == 5 and c->block[2][2] == 5 and c->block[3][2] == 5)
                {
                    sf7(c);
                    break;
                }
                up_clockwise(c);
                
            }
            
        }
        else if (count == 7)
        {
            for (int i = 0; i < 4; i++)
            {
                if (c->block[2][0] == 5 and c->block[4][2] == 5)
                {
                    sf6(c);
                    break;
                }
                else if (c->block[4][0] == 5 and c->block[4][2] == 5)
                {
                    sf6(c);
                    break;
                }
                else if (c->block[3][0] == 5 and c->block[4][2] == 5)
                {
                    sf6(c);
                    break;
                }
                up_clockwise(c);
                
            }
            
        }
        else if(count == 5)
        {
            for (int i = 0; i < 4; i++)
            {
                if (c->block[2][0] == 5 and c->block[2][2] == 5 and c->block[3][2] == 5 and c->block[1][0] == 5)
                {
                    sf6(c);
                    break;
                }
                else if (c->block[1][0] == 5 and c->block[1][2] == 5 and c->block[3][2] == 5 and c->block[3][0] == 5)
                {
                    sf6(c);
                    break;
                }
                up_clockwise(c);
            }
            
            
            
        }
        
    count = getTotalYellow(c);    
    }
    count = getTotalCorrectCorners(c);
    while(count != 4)
    {
        if (count == 0)
        {
            sf8(c);
        }
        else 
        {
            for (int i = 0; i < 4; i++)
            {
                if (c->block[1][0] == c->block[1][2])
                {
                    sf8(c);
                    break;
                }
                up_clockwise(c);
                
            }
           
        }
        
    count = getTotalCorrectCorners(c);
    }
    if (c->block[1][0] != c->block[1][1] and
        c->block[2][0] != c->block[2][1] and
        c->block[3][0] != c->block[3][1] and
        c->block[4][0] != c->block[4][1] )
    {
        sf6(c);
        sf7(c);
    }
    for (int i = 0; i < 4; i++)
    {
        if (c->block[4][0] == c->block[4][1])
        {   
            break;
        }
        up_clockwise(c);
        
    }
    if (c->block[1][1] == c->block[2][0])
    {
        front_clockwise(c);
        front_clockwise(c);

        up_counterclockwise(c);

        right_counterclockwise(c);
        left_clockwise(c);
        front_clockwise(c);
        front_clockwise(c);
        right_clockwise(c);
        left_counterclockwise(c);

        up_counterclockwise(c);

        front_clockwise(c);
        front_clockwise(c);

    }
    else if (c->block[2][1] == c->block[1][0])
    {
        front_clockwise(c);
        front_clockwise(c);

        up_clockwise(c);

        right_counterclockwise(c);
        left_clockwise(c);
        front_clockwise(c);
        front_clockwise(c);
        right_clockwise(c);
        left_counterclockwise(c);

        up_clockwise(c);

        front_clockwise(c);
        front_clockwise(c);
    }
    while(c->block[1][1] != 1)
    {
        up_clockwise(c);
    }
    return;
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
    right_counterclockwise(c);
    up_counterclockwise(c);
    front_counterclockwise(c);
    up_clockwise(c);
    front_clockwise(c);
    right_clockwise(c);
}

void sf6(Cube* c)// for  3floor filll all yeloow C1
{
    right_counterclockwise(c);
    up_counterclockwise(c);
    right_clockwise(c);
    up_counterclockwise(c);
    right_counterclockwise(c);
    up_clockwise(c);
    up_clockwise(c);
    right_clockwise(c);
    up_clockwise(c);
}

void sf7(Cube* c)// for  3floor filll all yeloow C2
{
    
    right_clockwise(c);
    up_clockwise(c);
    right_counterclockwise(c);
    up_clockwise(c);
    right_clockwise(c);
    up_counterclockwise(c);
    up_counterclockwise(c);
    right_counterclockwise(c);
    up_counterclockwise(c);
}

void sf8(Cube* c)// for 3floor D1
{   
    front_clockwise(c);
    right_counterclockwise(c);
    front_clockwise(c);
    left_clockwise(c);
    left_clockwise(c);

    front_counterclockwise(c);
    right_clockwise(c);
    front_clockwise(c);
    left_clockwise(c);
    left_clockwise(c);

    front_clockwise(c);
    front_clockwise(c);
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

int getTotalCorrectCorners(Cube* c)
{
    int count = 0;
    if (c->block[1][0] == c->block[1][2])
    {
        count++;
    }
    if (c->block[2][0] == c->block[2][2])
    {
        count++;
    }
    if (c->block[3][0] == c->block[3][2])
    {
        count++;
    }
    if (c->block[4][0] == c->block[4][2])
    {
        count++;
    }
    return count;
    
}
