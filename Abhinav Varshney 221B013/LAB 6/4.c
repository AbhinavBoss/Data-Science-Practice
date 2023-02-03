#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the first angle of triangle: ");
	scanf("%f",&a);
	printf("Enter the second angle of triangle: ");
	scanf("%f",&b);
	printf("Enter the third angle of triangle: ");
	scanf("%f",&c);
	if((a+b+c)==180)
	printf("Triangle is valid");
	else
	printf("Triangle is not valid");
}