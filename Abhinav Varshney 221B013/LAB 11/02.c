#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter %d th element: ",i);
        scanf("%d", &arr[i]);
    }
    printf("The array so formed: \n");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("\n");
    printf("The array after sorting: \n");
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);    
    return 0;
}