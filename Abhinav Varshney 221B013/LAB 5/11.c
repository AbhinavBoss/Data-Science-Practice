#include <stdio.h>
int main()
{	
	//question 10
	int n,rev;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
	   rev = rev*10 + n%10;
	   n = n/10;	   	
	}
	printf("Reversed number is: %d",rev);
	return 0;
}