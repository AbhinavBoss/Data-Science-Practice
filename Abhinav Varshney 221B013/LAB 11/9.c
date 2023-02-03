#include <stdio.h>
// matrix transpose
// int main(){
//     int n,m;
//     printf("Enter the rows of the 2D-array; ");
//     scanf >> n;
//     printf << "Enter the columns of the 2D-array; ";
//     scanf >> m;
//     int array[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf << "Enter " << i << " " << j << "th element: ";
//             scanf >> array[i][j]; 
//         }
//     }
//     printf <<"original array"<< endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf << array[i][j] << " ";
//         }
//     printf << endl;
//     }
//     printf <<"transpose array"<< endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf << array[j][i] << " ";
//         }
//     printf << endl;
//     }
// }


// matix multiplication
// int main(){
//     int n1,n2,n3;
//     printf << "Enter the length of rows of the first 2D-array; ";
//     scanf >> n1;
//     printf << "Enter the columns of the first 2D-array and rows for second 2D-array; ";
//     scanf >> n2;
//     printf << "Enter the columns of the second 2D-array; ";
//     scanf >> n3;
//     int array1[n1][n2];
//     int array2[n2][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             printf << "Enter " << i << " " << j << "th element: ";
//             scanf >> array1[i][j]; 
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             printf << "Enter " << i << " " << j << "th element: ";
//             scanf >> array2[i][j]; 
//         }
//     }
//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//                 ans[i][j]+=array1[i][k]*array2[k][j];
//             }
//         }
//     }
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             printf << ans[i][j] << " ";
//         }
//     printf << endl;
//     }
// }