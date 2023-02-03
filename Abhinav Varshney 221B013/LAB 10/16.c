#include <stdio.h>
void displayTerms(int a,int n)
{
    if(a<=n)
    {
        printf("%d ",a);
        displayTerms(a+1,n);
    }
}
int main()
{
    int n,a=1;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    displayTerms(a,n);
    return 0;
}