#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d th element: ",i);
        scanf("%d", &arr[i]);
    }
    printf("The array so formed: \n");
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    for (int i = 0; i < n; i++)
        sum+=arr[i];
    printf("\n");
    printf("The sum of all the elements of the array is %d",sum);
    return 0;
}