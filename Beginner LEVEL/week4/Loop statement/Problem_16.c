/*///////////////////////(to find reverse of a number)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num , reverse=0;
    printf("Enter your num: ");
    scanf("%i",&num);
    while (num!=0)
    {
        reverse = ((reverse*10) + num%10 );
        num/=10;
    }
    printf("num in reverse = %i\n",reverse);
    return 0;
}

