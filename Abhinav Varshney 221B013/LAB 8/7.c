#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int y;
    float p,emi,r;
    int r2;
    float p1,emi2;
    printf("Choose as per following 1-> EMI calculation for entered year 2-> For 1 year \n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter the principal amount: ");
        scanf("%f",&p);
        printf("Enter the rate of interest: ");
        scanf("%f",&r);       
        printf("Enter no. of years: ");
        scanf("%d",&y); 
        printf("%.2f",r);
        emi = p*r*pow((r+1),y)/(pow((r+1),y)-1);
        printf("EMI for %d years time period for amount %.2f is %.2f",y,p,emi);
        break;
    case 2:
        printf("Enter the principal amount: ");
        scanf("%f",&p1);
        printf("Enter the rate of interest: ");
        scanf("%d",&r2);        
        emi2 = p*r*(r2+1)/((r2+1)-1);
        printf("EMI for 1 year time period for amount %.2f is %.2f",p1,emi2);
        break;
    default:
        break;
    }   
    return 0;
}