#include <stdio.h>
void addition()
{
    double a,b;
    printf("Enter two numbers: ");
    scanf("%lf%lf",&a,&b);
    printf("The sum of %.2lf and %.2lf is %.2lf: \n",a,b,a+b);   
}
void subtraction()
{
    double a,b;
    printf("Enter two numbers: ");
    scanf("%lf%lf",&a,&b);        
    printf("The difference of %.2lf and %.2lf is %.2lf: \n",a,b,a-b);
}
void multiplication()
{
    double a,b;
    printf("Enter two numbers: ");
    scanf("%lf%lf",&a,&b);
    printf("The product of %.2lf and %.2lf is %.2lf: \n",a,b,a*b);
}
void division()
{
    double a,b;
    printf("Enter two numbers: ");
    scanf("%lf%lf",&a,&b);
    printf("The division of %.2lf and %.2lf is %.2lf: \n",a,b,a/b);
}
int main()
{   
    int n;
    printf("1->Addition 2->Subtraction 3->Multipication 4->Division 5->Exit \n");
    while (1)
    {   
        printf("Enter choice as per yours: ");
        scanf("%d",&n);
        if(n==1)
            addition();
       else if (n==2)
            subtraction();
        else if(n==3)
            multiplication();
        else if(n==4)
            division();
        else if(n==5)
        {   
            printf("Thank you for using this program");
            break;
        } 
        else 
            printf("Wrong input \n");
    }
    return 0;
}