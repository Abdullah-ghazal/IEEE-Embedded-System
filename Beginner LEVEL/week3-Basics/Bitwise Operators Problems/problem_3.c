#include<stdio.h>


int main(int argc, char const *argv[])
{
    int num, n_bit;
    printf("Enter the number : ");
    scanf("%i",&num);
    printf("Enter the order of bit : ");
    scanf("%i",&n_bit);
    if (num&(1<<n_bit))
    {
        printf("the %i Bit is set (1)\n",n_bit);
    }
    else
    {
        printf("the %i Bit is unset (0)\n",n_bit);

    }
    
    return 0;
}
