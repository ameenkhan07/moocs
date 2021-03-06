/*Problem code: RETPO

Recently Chef bought a bunch of robot-waiters. And now he needs to know how much to pay for the electricity that robots use for their work. All waiters serve food from the kitchen (which is in the point (0, 0)) and carry it to some table (which is in some point (x, y)) in a shortest way. But this is a beta version of robots and they can only do the next moves: turn right and make a step forward or turn left and make a step forward. Initially they look in direction of X-axis. Your task is to calculate for each query the number of moves they’ll do to reach corresponding table.
 
Input

The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. For each test case there is a sing line containing two space-separated integers - x and y.
Output

For each test case, output a single line containing number of moves that robot will make to reach point (x, y)
Constraints

1 ≤ T ≤ 105
-109 ≤ x, y ≤ 109
 
Example

Input:
2
3 3
3 4

Output:
6
7
 */
#include <stdio.h>	
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long x,y;
        scanf("%ld%ld",&x,&y);
        long i=0,j=0;
        long moves=0,c;
        if(x<0)
            x=-x;
        if(y<0)
            y=-y;
        long small=x;
        if(y<x)
            small=y;
        moves=small*2;
        i=j=small;
        if(i!=x)
        {
            c=x-small;
            if(c%2==0)
            {
                moves+=c*2;
            }
            else
            {
                moves+=(c-1)*2+3;
            }
        }
        if(j!=y)
        {
            c=y-small;
            if(c%2==0)
            {
                moves+=c*2;
            }
            else
            {
                moves+=(c-1)*2+1;
            }
        }
        printf("%ld\n",moves);
    }
    return 0;
}