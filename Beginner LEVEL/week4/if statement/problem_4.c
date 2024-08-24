/*//////////////////////// (divisible 5 or 11) \\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter your number : ");
    scanf("%i",&num);
    if ((num%5==0)&&(num%11==0))
    {
        printf("number is devisible\n");
    }
    else printf("number is devisible\n");
    
    return 0;
}
