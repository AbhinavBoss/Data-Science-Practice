#include <stdio.h>
int main()
{
    int b,d=0,base=1,temp;
    printf("Enter the binary number: ");
    scanf("%d",&b);
    int num=b;
    while(num!=0)
    {
        temp=num%10;
        d+=temp*base;
        base*=2;
        num/=10;
    }
    printf("The decimal for %d is %d",b,d);
    return 0;
}