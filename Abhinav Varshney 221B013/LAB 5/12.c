#include <stdio.h>
int main()
{
	// question 3
	int a,b=0,c;
	printf("Enter the number: ");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=b+a%10;
		a=a/10;	
	}
	printf("Sum of digits of %d is %d",c,b);
	return 0;
} 