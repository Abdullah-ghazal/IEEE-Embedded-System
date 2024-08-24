/*///////////////////////(to print multiplication table of a given number)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter yout number : ");
    scanf("%i",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%i * %i = %i\n",n,i,n*i);
    }
    
    return 0;
}

