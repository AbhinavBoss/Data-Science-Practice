#include <stdio.h>
int main()
{
	int n,remainder=0,num;
	printf("Enter the number: ");
	scanf("%d",&n);
	num = n;
	remainder = n%10;	
	n=n/10;
	remainder = remainder + n%10;
	n=n/10;
	remainder = remainder + n%10;
	printf("The sum of digits of %d is %d",num,remainder);
	return 0;
} 