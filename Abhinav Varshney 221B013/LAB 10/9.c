#include <stdio.h>
#include <math.h>
int checkPrime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)
            return 0;
        else 
            return 1;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(checkPrime(n))
    printf("%d is a prime number\n",n);
    else if(n==1)
    printf("1 is neither prime nor composite\n");
    else if(n==2)
    printf("2 is a prime number\n");
    else
    printf("%d is not a prime number",n);
    return 0;
}