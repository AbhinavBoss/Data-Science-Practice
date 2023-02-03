#include <stdio.h>
int main(){
    int n,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n>0 && n<=10)
    c=1;
    else if (n>10 && n<=20)
    c=2;
    else 
    c=3;
    switch (c)
    {
    case 1:
        printf("%d ",n*n);
        break;
    case 2:
        printf("%d",n*n*n);
        break;
    case 3:
        printf("%d",n);
        break;
    default:
        break;
    }
return 0;
}
