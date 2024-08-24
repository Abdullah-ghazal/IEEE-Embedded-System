/*//////////////////////// (gross salary of an employee) \\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float basic, gross, da, hra;
    printf("Enter the basic salary : ");
    scanf("%f",&basic);
    if (basic<=10000)
    {
        da = basic * 80/100;
        hra = basic * 20/100;
    }
    else if (basic<=20000)
    {
        da = basic * 90/100;
        hra = basic * 25/100;
    }
    else if (basic<=20000)
    {
        da = basic * 95/100;
        hra = basic * 30/100;
    }
    gross=da+hra+basic;
    printf("Gross salary is : %.2f\n",gross );
    
    
    return 0;
}
