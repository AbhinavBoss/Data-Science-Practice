#include <stdio.h>
int main()
{
	int r,l,b,area1,peri;
	float area2,cir;
	printf("Enter the length of the rectangle: ");
	scanf("%d",&l); 
	printf("Enter the breadth of the rectangle: ");
	scanf("%d",&b);
	printf("Enter the radius of the circle: ");
	scanf("%d",&r);
	area1 = l * b;
	area2 = 3.14 * r * r;
	cir = 2 * 3.14 * r;
	peri = 2 * (l+b);	
	printf("The area of rectangle is %d sq.units and perimeter is %d units \n",area1,peri);
	printf("The area of circle is %d sq.units and circumference is %d units",area2,cir);
	return 0;
}