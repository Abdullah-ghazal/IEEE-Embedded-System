/*///////////////////////(to convert binary number system to decimal number system)\\\\\\\\\\\\\\\\\\\\\\\\\*/
#include<stdio.h>
#include<math.h>
#define Base 2
int main(int argc, char const *argv[])
{
    int bin, dec=0, power=0;   
    printf("Enter your binary number : ");
    scanf("%i",&bin);
    while (bin!=0)
    {
        if (bin%10==1)
        {
            dec+=pow(Base,power);
        }
        power++;
        bin/=10;
    }
    printf("Your decimal number = %i\n",dec);
    
    
    return 0;
}

    // while(tempBinary!=0)
    // {
    //     /* If current binary digit is 1 */
    //     if(tempBinary % 10 == 1)
    //     {
    //         decimal += pow(BASE, N);
    //     }

    //     N++;
    //     tempBinary /= 10;
    // }
