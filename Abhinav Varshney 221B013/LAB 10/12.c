#include <stdio.h>

void decimalToBinary(int n)
{
    int a[20],i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("Binary of Given Number is: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", a[i]);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    decimalToBinary(n);
    return 0;
}