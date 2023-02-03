#include<stdio.h>
void modify(int arr[], int n)
{
	if (n <= 1)
	return;
	int prev = arr[0];
	arr[0] = arr[0] - arr[1];
	for (int i=1; i<n-1; i++)
	{
		int curr = arr[i];
		arr[i] = prev - arr[i+1];
		prev = curr;
	}
	arr[n-1] = prev - arr[n-1];
}
int main()
{
	int arr[] = {2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	modify(arr, n);
	for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int len, i;
    gets(str);
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
        ch = str[i];
        str[i] = str[len - i - 1];
        str[len - i -1] = ch;
    }
    printf("The reverse of string is %s",str);
	return 0;
} 