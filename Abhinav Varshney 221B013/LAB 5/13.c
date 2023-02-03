#include<stdio.h>
int main()
{
    int n, f, l, sum, num, d=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num!=0)
    {
        num = num/10;
        d = d*10;
    }
    d = d/10;
    f = n/d;
    l = n%10;
    sum = f+l;
    printf("Sum of first and last digit of %d is: %d",n,sum);
}

 #include <stdio.h>
 int main()
 {
     int n, sum=0, firstDigit, lastDigit;
     printf("Enter number to find sum of first and last digit = ");
     scanf("%d", &n);
     lastDigit = n % 10;
     while(n >= 10)
     {
         n = n / 10;
     }
     firstDigit = n;
     sum = firstDigit + lastDigit;
     printf("Sum of first and last digit = %d", sum);
     return 0;
 }

