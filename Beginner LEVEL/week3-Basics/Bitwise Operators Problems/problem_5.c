#include<stdio.h>
int num,n_bit,result;
int main(int argc, char const *argv[])
{
    printf("Enter your number : ");
    scanf("%i",&num);
    printf("Enter the nth bit to clear : ");
    scanf("%i",&n_bit);
    result = num& (~(1<<n_bit));
    printf("original num = %i\n",num);
    printf("modefied num = %i\n",result);
    
    return 0;
}
