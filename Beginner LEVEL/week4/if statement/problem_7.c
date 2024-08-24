/*//////////////////////// (is alphabet or no) \\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter your character : ");
    scanf("%c",&ch);
    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
    printf("is Alphabet \n");
    }
    else 
    printf("is not Alphabet \n");
    return 0;
}
