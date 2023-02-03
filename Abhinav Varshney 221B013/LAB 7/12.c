#include <stdio.h>
int factorial(int n)
{	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;

	}
	return fact;
}
int main()
{
	int n,s;
	printf("Enter the number: ");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		s+=factorial(n%10);
		n=n/10;
	}
	if(s==num){printf("%d is a strong number",num);}
	else{printf("%d is not a strong number",num);}
	return 0;
}