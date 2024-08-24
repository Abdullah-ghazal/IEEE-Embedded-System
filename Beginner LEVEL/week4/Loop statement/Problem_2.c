/*///////////////////////(print all natural numbers in reverse from n to 1)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter your number : ");
    scanf("%i",&n);

    for (int i = n; i >-1; i--)
    {
        printf("%i",i);
        if(i == 0)
        continue;
        printf(", ");
    }
    

    return 0;
}

