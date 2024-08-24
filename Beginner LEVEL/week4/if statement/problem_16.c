/*//////////////////////// (Properties of triangle) \\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ang1,ang2,ang3;
    printf("Enter ang1 : ");
    scanf("%d",&ang1);
    printf("Enter ang2 : ");
    scanf("%d",&ang2);
    printf("Enter ang3 : ");
    scanf("%d",&ang3);

    if (ang1==ang2==ang3)
    {
        printf("Triangle is Equilateral\n");
    }
    else if(ang1==ang2||ang1==ang3||ang2==ang3)
    {
        printf("Triangle is Isosceles\n");
    }
    else
        printf("Triangle is Scalene\n");



}