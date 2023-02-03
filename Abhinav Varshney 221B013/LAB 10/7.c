#include <stdio.h>
#include <math.h>
int fact(int a)
{   
    int fact=1;
    for(int i=1;i<=a;i++)
        fact*=i;
    return fact;
}
int main()
{
    //x-x^3/3!+x^5/5!-x^7/7!+.....
    int n,x,i=1,b=1;
    float sum=0,term;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    while (i<=n)
    {
        term=pow(x,b)/fact(b);
        if(i%2==0)
            sum-=term;
        else
            sum+=term;
        b+=2;
        i++;
    }
    printf("%.4f",sum);
    return 0;
}