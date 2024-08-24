/*//////////////////////// (marks of five subjects ) \\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float Physics, Chemistry, Biology, Mathematics, Computer;
    float percentage;
    printf("Enter your grades : \n");
    scanf("%f %f %f %f %f",&Physics, &Chemistry, &Biology, &Mathematics, &Computer);
    percentage=((Physics+Chemistry+Biology+Mathematics+Computer)/5.0f);
    printf("%f\n",percentage);
    if (percentage >= 90) printf("Grade A\n");
    else if (percentage >= 80) printf("Grade B\n");
    else if (percentage >= 70) printf("Grade C\n");
    else if (percentage >= 60) printf("Grade D\n");
    else if (percentage >= 40) printf("Grade E\n");
    else if (percentage < 40) printf("Grade F\n");

 
    
    return 0;
}
