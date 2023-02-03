#include <stdio.h>
int main()
{
    int a,b,gcd;
    printf("Enter the two integers: ");
    scanf("%d%d",&a,&b);
    int min=(a>b)?a:b;
    while(min--)
    {
        if(a%min==0 && b%min==0)
        {
            gcd=min;
            break;
        }
    }
    printf("The GCD of the two integers %d and %d is %d \n",a,b,min);
    printf("The LCM of the two integers %d and %d is %d",a,b,(a*b)/gcd);
    return 0;
}