#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Choose as per following 1-> EMI calculation for entered year 2-> For 1 year \n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        int y1,r1;
        float p1;
        printf("Enter the amount: ");
        scanf("%f",&p1);
        printf("Enter rate of interest: ");
        scanf("%d",&r1);
        printf("Enter no. of years: ");
        scanf("%d",&y1);
        float emi1=p1 * r1 * pow((1 + r1), y1) / (pow((1 + r1), y1) - 1);
        printf("EMI for %d years time period for amount %.2f is %.2f", y1, p1,emi1);
        break;
    case 2:
        int y2=1,r2;
        float p2,emi2;
        printf("Enter the amount: ");
        scanf("%f",&p2);
        printf("Enter rate of interest: ");
        scanf("%d",&r2);
        emi2=p2 * r2 * pow((1 + r2), y2) / (pow((1 + r2), y2) - 1);
        printf("EMI for %d years time period for amount %.2f is %.2f", y2, p2,emi2);
        break;
    default:
        break;
    }
    return 0;
}