#include <stdio.h>
int main()
// 1+2+3+4....n terms
{
	int n,s=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	s+=i;
	printf("The sum of %d natural numbers is %d",n,s);
	return 0;
}
// i++ or i+=1;