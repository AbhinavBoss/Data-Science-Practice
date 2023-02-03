include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter %dth element: ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("Original Array\n");
//     for (int i = 0; i < n; i++)
//         printf("%d ",arr[i]);
//     printf("\n");
//     int low=0;
//     int high=n-1;
//     while(low<high)
//     {
//         int temp;
//         temp=arr[low];
//         arr[low]=arr[high];
//         arr[high]=temp;
//         low++;
//         high--;
//     }
//     printf("Reversed array\n");
//     for (int i = 0; i < n; i++)
//         printf("%d ",arr[i]);
// return 0;
// }