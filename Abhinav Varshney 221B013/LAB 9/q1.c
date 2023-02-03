// #include <stdio.h>
// int main()
// {
//     int i,j,n,m;
//     printf("Enter the number of rows: ");
//     scanf("%d",&n);
//     printf("Enter the number of columns: ");
//     scanf("%d",&m);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=m;j++)
//         {
//             if(i==1 || i==n || j==1 || j==m)
//             printf("*");
//             else
//             printf(" ");
//         }
//     printf("\n");
//     }
//     return 0;
// }

//part b

#include <stdio.h>
int main()
{
    int i,j,n=7,m=7;
    // printf("Enter the number of rows: ");
    // scanf("%d",&n);
    // printf("Enter the number of columns: ");
    // scanf("%d",&m);
    for(i=1;i<=n;i++)
    {   
        int j=1;
        int k=0;
        while(j<=n)
        {   
            if(i==j)
            printf("*");
            else
            printf(" ");
            k++;
            j++;
        }
    printf("\n");
    }
    return 0;
}