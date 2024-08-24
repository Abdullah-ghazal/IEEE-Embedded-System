#include<stdio.h>
int main(int argc, char const *argv[])
{
    float Tc;
    printf("enter the temprature in celsuis : ");
    scanf("%f",&Tc);
    printf("Temp in Fahrenheit is = %0.2f\n",((Tc*1.8)+32));
    return 0;
}