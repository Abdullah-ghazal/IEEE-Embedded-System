/*///////////////////////(print all odd numbers from 1 to n using for loop)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter your number : ");
    scanf("%i",&n);
    for (int i = 1; i <= n ; i++)
    {
        if ((i%2!=0))
        {
             printf("%i",i);
            if(i == n-1 || i==n)
            continue;
            printf(", ");
        }
        else
        continue;
        
    }
    
    return 0;
}
