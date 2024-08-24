#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    float Radius ;
    printf("Enter the Radius : ");
    scanf("%f",&Radius);
    printf("the diameter = %.2f\n",(2 * Radius));
    printf("the circumference = %.2f\n",(2*PI*Radius));
    printf("the Area = %.2f\n",(PI*Radius*Radius));
    return 0;
}
