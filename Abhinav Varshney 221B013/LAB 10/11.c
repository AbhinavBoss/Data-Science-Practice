#include <stdio.h>
void fib(int n)
{
    int f=0;
    int s=1;
    printf("%d\n%d\n",f,s);
    int c=f+s;
    while(c<n)
    {
        printf("%d\n",c);
        f=s;
        s=c;
        c=f+s;
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fib(n);
    return 0;
}