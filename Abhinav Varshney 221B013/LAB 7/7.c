#include <stdio.h>
#include <math.h>
int main()
{
	int n,c;
	printf("Enter the number: ");
	scanf("%d",&n);
	int i=2;
	while(i<=sqrt(n))
	{
		if(n%i==0){c=0;break;}
		else{c=1;}
	    i++;
	}
	if(c==0){printf("%d is a not prime number",n);}
	else {printf("%d is a prime number",n);}
	return 0;
}