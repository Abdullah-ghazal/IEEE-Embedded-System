#include<stdio.h>
#define BITS sizeof(int)*8
int num, msb;
main()
{
     //most significant bit (LSB) -> set(1) or unset(0)
     printf("Enter num : ");
     scanf("%d",&num);
     //shift to lift
     msb = 1<<(BITS - 1);
     if (num&msb)
     {
          printf("num is set(1)\n");
     }
     else
      printf("num is unset(0)\n");

    
}
