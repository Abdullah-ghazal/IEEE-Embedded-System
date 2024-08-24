#include<stdio.h>
int main(int argc, char const *argv[])
{
    double sub1,sub2,sub3,sub4,sub5;

    printf("Enter the first subject : "); scanf("%lf",&sub1);
    printf("Enter the second subject : "); scanf("%lf",&sub2);
    printf("Enter the third subject : "); scanf("%lf",&sub3);
    printf("Enter the forth subject : "); scanf("%lf",&sub4);
    printf("Enter the fifth subject : "); scanf("%lf",&sub5);
    printf("total = %0.2lf\n",(sub1+sub2+sub3+sub4+sub5));
    printf("avrage = %0.2lf\n",(sub1+sub2+sub3+sub4+sub5)/5.0f);
    printf("percentage = %0.2lf\n",((sub1+sub2+sub3+sub4+sub5)/500.0f)*100);

    return 0;
}