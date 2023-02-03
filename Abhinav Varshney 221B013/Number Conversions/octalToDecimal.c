#include <stdio.h>
int main()
{
    int b,d=0,base=1,temp;
    printf("Enter the octal number: ");
    scanf("%d",&b);
    int num=b;
    while(num!=0)
    {
        temp=num%10;
        d+=temp*base;
        base*=8;
        num/=10;
    }
    printf("The decimal for octal %d is %d",b,d);
    return 0;
}