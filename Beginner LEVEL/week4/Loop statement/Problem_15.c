/*///////////////////////(to calculate product of digits of a number)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,product=1;
    printf("Enter your num: ");
    scanf("%i",&num);
    while (num!=0)
    {
        product *=(num%10) ;
        num /=10;
    }
    printf("product = %i \n",product);
    return 0;
}
