#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{	
		int a=n%10;
		s+=a*a*a;
		n/=10;
	}
	if(num==s)
	printf("%d is an armstrong number",num);
	else
	printf("%d is not an armstrong number",num);
	return 0;
}