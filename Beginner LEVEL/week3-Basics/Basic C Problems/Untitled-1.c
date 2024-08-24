#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2;
    printf("Enter num1 : ");
    scanf("%i",&num1);
    printf("Enter num2 : ");
    scanf("%i",&num2);
    printf("sum = %i\n",(num1+num2));
    printf("Dif = %i\n",(num1-num2));
    printf("product = %i\n",(num1 * num2));
    printf("Quotient = %0.2f\n",(float)(num1/num2));
    printf("modulus = %i\n",(num1%num2));
    return 0;
}