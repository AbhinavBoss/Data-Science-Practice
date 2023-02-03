#include <stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i;i<=n;i++)
	f*=i;
	printf("Factorial of %d is %d",n,f);
	return 0;
}
