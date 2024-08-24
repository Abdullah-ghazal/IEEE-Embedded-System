#include<stdio.h>
int main(int argc, char const *argv[])
{
    int days;
    printf("Enter the No.of days : ");
    scanf("%i",&days);
    int Years = days/365 ;
    int Weeks = ((days % 365)/7);
    int Days = days-(Years * 365 + Weeks * 7);
    printf("Years = %i\n",Years);
    printf("Weeks = %i\n",Weeks);
    printf("Days = %i\n",Days);
    return 0;
}
