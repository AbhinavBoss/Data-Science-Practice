#include <stdio.h>
int binaryToDecimal(int n)
{
    int d=0,base=1,temp,num=n;
    while(num!=0)
    {
        temp=num%10;
        d+=temp*base;
        base*=2;
        num/=10;
    }
    return d;
}
int main()
{
    int n;
    printf("Enter the binary number: ");
    scanf("%d", &n);
    printf("Decimal equivalent for %d is %d",n,binaryToDecimal(n));
    return 0;
}