// insertion
//  #include <stdio.h>
//  int main()
//  {
//      int array[100], position, c, n, value;
//      printf("Enter number of elements in array\n");
//      scanf("%d", &n);
//      printf("Enter %d elements\n", n);
//      for (c = 0; c < n; c++)
//          scanf("%d", &array[c]);
//      printf("Enter the location where you wish to insert an element\n");
//      scanf("%d", &position);
//      printf("Enter the value to insert\n");
//      scanf("%d", &value);
//      for (c = n - 1; c >= position - 1; c--)
//          array[c + 1] = array[c];
//      array[position - 1] = value;
//      printf("Resultant array is\n");
//      for (c = 0; c <= n; c++)
//          printf("%d ", array[c]);
//      return 0;
//  }

// Deletion
//  #include <stdio.h>
//  int main()
//  {
//      int n,m;
//      printf("Enter size of array: ");
//      scanf("%d",&n);
//      int arr[n];
//      for(int i=0;i<n;i++)
//      {
//          printf("enter the %d th element of array:",i);
//          scanf("%d",&arr[i]);
//      }
//      printf("Enter the index of the element: ");
//      scanf("%d",&m);
//      printf("Array formed is: \n");
//      for (int i = 0;i<n;i++)
//          printf("%d ",arr[i]);
//      if(m>=n)printf("Deletion is not possible\n");
//      else
//      {
//          for(int i = m; i < n-1; i++)
//              arr[i]=arr[i+1];
//      }
//      printf("\n");
//      printf("Required Array: \n");
//      for(int i = 0;i<n-1;i++)
//          printf("%d ",arr[i]);
//      return 0;
//  }


// sort and merge two arrays
// #include <stdio.h>
// void asc_sort(int a[], int n)
// {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int n, m;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     printf("Enter the size of the array2: ");
//     scanf("%d", &m);
//     int arr[n], arr2[m], arr3[n + m];
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the %d th element of array1:", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         printf("enter the %d th element of array2:", i);
//         scanf("%d", &arr2[i]);
//     }
//     for (int i = 0; i < m + n; i++)
//     {
//         if (i < n)
//             arr3[i] = arr[i];
//         else
//             arr3[i] = arr2[i - n];
//     }
//     asc_sort(arr3,n+m);
//     for (int i = 0; i < m + n; i++)
//         printf("%d ", arr3[i]);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int rows, cols;
//     int a[][3] = {
//         {1, 2, 3},
//         {8, 6, 4},
//         {4, 5, 6}};
//     rows = (sizeof(a) / sizeof(a[0]));
//     cols = (sizeof(a) / sizeof(a[0][0])) / rows;
//     if (rows != cols)
//         printf("Matrix should be a square matrix\n");
//     else
//     {
//         printf("Lower triangular matrix: \n");
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 if (j < i)
//                     printf("0 ");
//                 else
//                     printf("%d ", a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter the size: ");
//     scanf("%d", &n);
//     int a[n];
//     int* ptr=a;
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter %d th element: ", i);
//         scanf("%d",ptr+i);
//     }
//     for (int i = 0; i < n; i++)
//         sum += *(ptr+i);
//     printf("Array so formed is: \n");
//     for (int i = 0; i < n; i++)
//         printf("%d ",*(ptr+i));
//     printf("\n");
//     printf("Sum: %d",sum);
//     return 0;
// }



// #include <stdio.h>
// void main()
// {
//     char str[20], k;
//     int i, j;
//     printf("Enter a string: \n");
//     scanf("%[^\n]", str);
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         for (j = i + 1; str[j] != '\0'; j++)
//         {
//             if (str[i] > str[j])
//             {
//                 k = str[i];
//                 str[i] = str[j];
//                 str[j] = k;
//             }
//         }
//     }
//     printf("%s", str);
//     printf("\n");
// }