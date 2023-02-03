#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	// Without using third variable
	printf("original values: a=%d and b=%d \n",a,b);
	printf("values after swapping: a=%d and b=%d \n",b,a);
	//using third variable;
	c=a*b;
	printf("original values: a=%d and b=%d \n",a,b);
	printf("values after swapping: a=%d and b=%d",c/a,c/b);
	return 0;
}