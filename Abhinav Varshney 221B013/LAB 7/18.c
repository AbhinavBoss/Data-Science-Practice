#include <stdio.h>
int main()
{	
	int i;
	printf("ASCII FOR ALL THE KEYS OF KEYBOARD \n");
	for(i=1;i<256;i++)
	printf("%c  = %d \n",i,i);
	return 0;
}