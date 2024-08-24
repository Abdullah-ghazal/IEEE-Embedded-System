#include<stdio.h>

int num;
                     /* ///////////// flip num \\\\\\\\\\\\\\\\\\\\\ */
int main(int argc, char const *argv[])
{
    printf("Enter num : ");
    scanf("%i",&num);
    printf("the original num = %i\n",num);
    printf("the modefied num = %i\n",~num);

    

    return 0;
}
