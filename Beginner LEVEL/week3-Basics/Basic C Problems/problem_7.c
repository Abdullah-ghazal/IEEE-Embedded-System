#include<stdio.h>
int main(int argc, char const *argv[])
{
    float length;
    printf("Enter the length in cm : ");
    scanf("%f",&length);
    printf("L = %0.2f m \n",(length/100));
    printf("L = %0.2f km \n",(length/100000));
    return 0;
}
