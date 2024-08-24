/*//////////////////////// (no.of days in the month) \\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int month;
    printf("Enter the nomber of month : ");
    scanf("%i",&month);
    if (month == 1 || month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("31 days\n");
    }
    else if (month == 4 || month==6||month==9||month==11)
    {
        printf("30 days \n");
    }
    else if (2)
    {
        printf("28/29 days \n");
    }
    
    return 0;
}
