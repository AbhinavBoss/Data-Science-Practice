#include <stdio.h>
int main(){
    int a,b,c;
    printf("choose 1->Addition , 2->Subtraction Else multiplication: ");
    scanf("%d",&c);
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    switch (c)
    {
    case 1:
        printf("Addition of %d and %d is %d",a,b,a+b);
        break;
    case 2:
        printf("subtracted value of %d and %d is %d",a,b,a-b);
        break;
    default:
        printf("Multiplicative value of %d and %d is %d",a,b,a*b);
        break;
    }
return 0;
}