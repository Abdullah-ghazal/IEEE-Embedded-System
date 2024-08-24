/*///////////////////////(to find power of any number)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    //2^4=2*2*2*2
    int base,power,result=1;
    printf("Enter the base of num : ");
    scanf("%i",&base);
    printf("Enter the power : ");
    scanf("%i",&power);
    for (int i = 1; i <=power; i++)
    {
        result*=base;
    }
    printf("%i ^ %i = %i\n",base,power,result);
    
    return 0;
}
