// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i=0;i<n;i++)
//     {
//         printf("Enter %d th element: ",i);
//         scanf("%d", &arr[i]);
//     }
//     printf("The array so formed: \n");
//     for (int i=0;i<n;i++)
//         printf("%d ",arr[i]);
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     printf("\n");
//     printf("The array after sorting: \n");
//     for (int i = 0; i < n; i++)
//         printf("%d ",arr[i]); 
//     printf("\n");
//     float median=(n%2!=0)?(arr[((n+1)/2)-1]):((float)(arr[((n/2)+1)-1]+arr[(n/2)-1])/2);
//     printf("Median value from the array is: %.2f",median);
//     return 0;
// }


#include <stdio.h>
#include <string.h>
char* reverse(char *str)
{
    int len, i;
    char ch;
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
        ch = str[i];
        str[i] = str[len - i - 1];
        str[len - i -1] = ch;
    }
    return str;
}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    char *p = reverse(str);
    printf("The reverse of string is %s",p);
    return 0;
}