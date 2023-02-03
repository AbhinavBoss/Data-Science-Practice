#include <stdio.h>
int main()
{
    int a[20], n, i;
    printf("Enter a decimal number to convert: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\n Binary of Given Number is: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", a[i]);
    return 0;
}

//alternative
// int main()
// {   
//     int dec=10,bin,i=1;
//     while (dec != 0) {
//         bin += (dec % 2) * i;
//         dec /= 2;
//         i *= 10;
//     }
//     printf("%d",bin);
//     return 0;
// }