#include<stdio.h>
  int num;
                   /* ///////////////// num is EVEN or ODD \\\\\\\\\\\\\\\\\\\\\*/
int main(int argc, char const *argv[])
{
    //num is EVEN or ODD -> the same method of LSB because the least digit is always odd

    printf("Enter your num : ");
    scanf("%d",&num);
    if (num & 1)
    {
        printf("num is odd\n");
    }
    else
    {
        printf("num is even\n");
    }
    
    return 0;
}
