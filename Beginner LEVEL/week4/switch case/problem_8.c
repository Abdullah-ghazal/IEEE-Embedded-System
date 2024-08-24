/*///////////////////////(calculator)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char op;
    float num1,num2,result=0.0f;
    printf("Enter your opertion : ");
    scanf("%f %c %f ",&num1,&op,&num2);
    switch (op)
    {
    case '+':
        printf(" %0.2f %c %0.2f = %0.2f\n",num1,op,num2,num1+num2);
        break;
    case '-':
        printf(" %0.2f %c %0.2f = %0.2f\n",num1,op,num2,num1-num2);
        break;
    case '*':
        printf(" %0.2f %c %0.2f = %0.2f\n",num1,op,num2,num1*num2);
        break;
    case '/':
        printf(" %0.2f %c %0.2f = %0.2f\n",num1,op,num2,num1/num2);
        break;
    default:
        printf("Error!!\n");
        break;
    }
    return 0;
}
