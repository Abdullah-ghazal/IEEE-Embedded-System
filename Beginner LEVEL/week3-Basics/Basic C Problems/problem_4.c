#include<stdio.h>
int main(int argc, char const *argv[])
{
    float length, width;
    printf("Enter the length : ");
    scanf("%f",&length);
    printf("Enter the width : ");
    scanf("%f",&width);
    printf("the perimeter = %0.2f\n",(2*(length + width)));
    return 0;
}
