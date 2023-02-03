#include <stdio.h>
int main()
{
	// question 4
	int n,sum;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	sum = n * (n+1) /2;
	printf("The sum of first %d natural numbers is: %d",n,sum);
	return 0;
} 