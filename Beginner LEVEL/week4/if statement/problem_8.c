/*//////////////////////// (alphabet is vowel or consonant) \\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter your character : ");
    scanf("%c",&ch);
    if ((ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='y')||(ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='Y'))
    {
        printf("alphabet is vowel \n");
    }
    else
        printf("alphabet is consonant \n");

    return 0;
}