#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double num;
    printf("Enter the number : ");
    scanf("%lf",&num);
    if (num<0)
    {
        printf("Undefined!!!\n");
    }
    else
    {
        printf("square root is = %0.2lf \n",sqrt(num));
    }
    
    
    return 0;
}
