#include <stdio.h>
int main()
{
	float a,b,c,area,peri;
	printf("Enter the length of rectangle: ");
	scanf("%f",&a);
	printf("Enter the breadth of rectangle: ");
	scanf("%f",&b);
	area=a*b;
	peri=2*(a+b);
	printf("area = %.2f and perimeter = %.2f \n",area,peri);
	if(area > peri)
	printf("the area of the rectangle with length = %.2f and breadth = %.2f is greater than its perimeter.",a,b);
	else
	printf("Area is not greater than its perimeter");
	return 0;
}