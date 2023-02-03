#include <stdio.h>
int main()
{
	// question 5
	int n,sum;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	sum = n * (n+1) * (2*n+1) /6;
	printf("The sum of squares first %d natural numbers is: %d",n,sum);
	return 0;
} 