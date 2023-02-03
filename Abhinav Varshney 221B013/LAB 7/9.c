#include <stdio.h>
int main()
{
	int n,s=0,i=1;
	printf("How many numbers you want to enter: ");
	scanf("%d",&n);
	while (i<=n)
	{	int a;
		printf("enter %d number: ",i);
		scanf("%d",&a);
		s+=a;
		i+=1;
	}
	printf("Sum and average of %d numbers you entered is %d and %d respectively",n,s,s/n);
	return 0;
}