/*********************MARIO HALF PYRAMID PROBLEM SET 1*********************/
/*****************************By Ameen M. Khan*****************************/

#include<stdio.h>
#include<cs50.h>
int main(void)
{
    printf ("Enter the height of the half pyramid:");
    
    int i,j,k,h,m,z;    //initialising variables
    
    do
    {
       h=GetInt();
    }while(!(h<=23&&h>=0));  //to get the required height value
    
    z=2;
    m=h;
   
        for(i=0;i<m;i++)
        {
          h=h-1;
          for(k=h;k>0;k--)
              printf(" ");
          for(j=0;j<z;j++)
              printf("#");   
          printf("\n");   
          z++;
         }
         
/*         //loop to generate the required half pyramid*/
/*        for(i=0;i<h;i++)       */
/*        {*/
/*        */
/*        //loop to print spaces*/
/*        for(k=h;k>;k--)    */
/*        {*/
/*            printf(" ");*/
/*        }*/

/*        //loop to print "#"*/
/*        for(j=i+1;j>=0;j--)    */
/*        {*/
/*            printf("#");*/
/*        }*/
/*        */
/*        printf("\n");*/
/*    }*/
    
    
}


