// #include<stdio.h>
// int GCD(int i,int j)
// {
//     if(i>j)
//         return GCD(j,i);
//     if(i==0)
//         return j;
//     else
//         return GCD(i,j%i);
// }
// int main()
// {
//    int a,b;
//    printf("Enter the two integers: ");
//    scanf("%d%d",&a,&b);
//    printf("GCD of %d and %d is %d",a,b,GCD(a,b));
//    return 0;
// }


//alternative approach (😂😂 dono same hi hai)
#include <stdio.h>
int GCD(int i,int j)
{
    if(j==0)
        return i;
    else 
        return GCD(j,i%j);
}
int main()
{
   int a,b;
   printf("Enter the two integers: ");
   scanf("%d%d",&a,&b);
   printf("GCD of %d and %d is %d",a,b,GCD(a,b));
   return 0;
}