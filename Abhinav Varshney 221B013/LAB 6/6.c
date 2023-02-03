#include <stdio.h>
int main()
{
	printf("If area of triangle formed by the points are zero then they are collinear \n");	
	int a,b,c,d,e,f,area;
	printf("Enter first coordinates: ");
	scanf("%d %d",&a,&b);
	printf("Enter second coordinates: ");
	scanf("%d %d",&c,&d);
	printf("Enter third coordinates: ");
	scanf("%d %d",&e,&f);
	area = a * (d-f) - c * (b-f) + e * (b-d) ;
	if (area ==0)
	printf("The points are lie on the straight line");
	else
	printf("These points are not on the straight line");
	return 0;
}