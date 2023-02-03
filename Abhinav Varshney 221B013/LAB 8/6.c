#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a,fact=1;
	int b,c;
    int num;
    printf("1.Factorial 2.Prime number or not 3.Odd or Even 4.Exit \n");
    printf("Enter your choice number(1-4): ");
    scanf("%d",&n);
    switch (n)
    {
    case 1: 
        printf("Enter a number: ");
        scanf("%d",&a);
        for (int i = 1; i <= a; i++)
        {
            fact*=i;
        }
        printf("The factorial of %d is %d",a,fact);
        break;

    case 2: 
	    printf("Enter the number: ");
	    scanf("%d",&b);
	    int i=2;
	    while(i<=sqrt(b))
	    {
	    	if(b%i==0){c=0;break;}
	    	else{c=1;}
	        i++;
	    }
	    if(c==0){printf("%d is a not prime number",b);}
	    else {printf("%d is a prime number",b);}
        break;
        
    case 3: 
	    printf("Enter the number: ");
	    scanf("%d",&num);
        if(num%2==0)
        printf("%d is an even number",num);       
        else
        printf("%d is an odd number",num);
        break;

    case 4:
        break;

    default:
        printf("Wrong number entered");
        break;
    }
    return 0;
}   