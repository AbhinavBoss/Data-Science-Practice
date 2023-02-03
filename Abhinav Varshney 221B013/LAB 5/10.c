#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Original numbers: a = %d and b = %d",a,b);
	printf("Numbers after swapping: a = %d and b = %d",b,a);
	return 0;
}