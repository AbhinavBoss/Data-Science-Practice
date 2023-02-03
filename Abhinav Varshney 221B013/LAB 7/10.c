#include <stdio.h>
int main()
{
	int n,d,count=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	int num=n;
	printf("Enter the digit: ");
	scanf("%d",&d);
	while(n>0)
	{
		int a=n%10;
		if(d==a)
		count++;
		n/=10;
	}
	printf("The frequency of %d in %d is %d",d,num,count);
	return 0;
}

