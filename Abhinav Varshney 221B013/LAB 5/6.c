#include <stdio.h>
#include <math.h>
int main()
{
	// question 6
	int n,sum;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	sum = pow((n * (n+1) /2),2);
	printf("The sum of cubes first %d natural numbers is: %d",n,sum);
	return 0;
} 