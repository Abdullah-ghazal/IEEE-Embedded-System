/*///////////////////////(print all odd numbers from 1 to n using for loop)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0,i;
    printf("Enter your num: ");
    scanf("%i",&n);
    if (!(n<0))
    {
       for(i=0;i<=n;i++)
       {
        sum+=i;
       }
   
    }
     printf("sum = %i\n",sum);
    return 0;
    
}
