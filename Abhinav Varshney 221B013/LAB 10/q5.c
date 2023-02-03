#include <stdio.h>
int fact(int a)
{
    int fact=1;
    for (int i = 1; i <=a; i++)
        fact*=i;
    return fact;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
    return 0;
}