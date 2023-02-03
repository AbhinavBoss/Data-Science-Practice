#include <stdio.h>
int main()
{	
	// question 7
	printf("Assuming the month will be of 30 days \n");
	int n;
	printf("Enter the number of days: ");
	scanf("%d",&n);
	printf("%d days represents: %d month(s) and %d day(s)",n,n/30,n%30);
	return 0;
} 