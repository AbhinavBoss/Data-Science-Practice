#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("%d is greatest in all three",a);
	else if(b>a && b>c)
	printf("%d is greatest in all three",b);
	else if(c>a && c>b)
	printf("%d is greatest in all three",c);
	return 0;
}