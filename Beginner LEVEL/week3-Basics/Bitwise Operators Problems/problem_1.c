#include<stdio.h>
  int num;
int main(int argc, char const *argv[])
{
    //least significant bit (LSB) -> set(1) or unset(0)

    printf("Enter your num : ");
    scanf("%d",&num);
    if (num & 1)
    {
        printf("num is set (1)\n");
    }
    else
    {
        printf("num is unset (0)\n");
    }
    
    return 0;
}
