#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	printf("The sum of digits of %d is %d",num,sum);
	return 0;
}
