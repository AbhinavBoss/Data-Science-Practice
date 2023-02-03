#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter coefficient of x: ");
    scanf("%d",&b);
    printf("Enter constant term: ");
    scanf("%d",&c);
    printf("The quadratic equation so formed is %d x^2 + %d x + %d = 0 \n",a,b,c);
    d=b*b-4*a*c;
    (d>0) ? (e=1) : (e=-1) ; (e=0);
    switch (e)
    {
    case 1:
        printf("Roots are real and distinct");
        break;
    case -1:
        printf("Roots are imagionary");
        break;
    case 0:
        printf("Roots are real and equal");
        break;
    default:
        break;
    }
return 0;
} 