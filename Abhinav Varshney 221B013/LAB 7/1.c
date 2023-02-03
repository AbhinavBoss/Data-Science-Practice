 #include <stdio.h>
 int main()
{  int a,b,product = 1;
    printf("Enter base number: ");
    scanf("%d",&a);
    printf("Enter power number: ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    product*=a;
    printf("%d raise to power %d is %d",a,b,product);
    return 0;
}

// Alternative loop
// #include <stdio.h>
// int main()
// {
//     int a,b,c=1,product=1;
//     printf("Enter base number: ");
//     scanf("%d",&a);
//     printf("Enter power number: ");
//     scanf("%d",&b);
//     while(c<=b)
//     {
//         product*=a;
//         c++;
//     }
//     printf("%d raise to power %d is %d",a,b,product);
//     return 0;
// }