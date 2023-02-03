#include <stdio.h>
#include <math.h>
int main()
{
	// question 8
	float f,c;
	printf("Enter the temperature in fahrenheit: ");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("The temperature in celsius is %f C ",c);
	return 0;
} 