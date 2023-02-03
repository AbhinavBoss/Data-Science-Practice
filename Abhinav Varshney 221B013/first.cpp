#include <bits/stdc++.h> 
using namespace std;

// #include <math.h>
// prime number in an interval
// bool isPrime(int num){
//     for(int i=2;i<=sqrt(num);i++){
//         if(num % i == 0){
//             return false;
//         }
//     }return true;
// }
// int main()
// {
// int n,m;
// cout << "Enter lower interval: ";
// cin >> n;
// cout << "Enter upper interval: ";
// cin >> m;
// for(int i=n;i<=m;i++){
//     if(isPrime(i)){
//         cout << i << endl;
//     }
// }}


// fibonacci series
// int main()
// {
// int n,f,s,c;
// cout << "Enter no. of terms: ";
// cin >> n;  
// f=0;
// s=1;
// cout << f << endl;
// cout << s << endl;
// c=f+s;
// while(c<n)
// {
//     cout << c << endl;
//     f=s;
//     s=c;
//     c=f+s;
// }}


// factorial program
// int n,factorial;
// cout << "Enter number: ";
// cin >> n;
// factorial = 1;
// for(int i=1;i<=n;i++){
//     factorial*=i;
// }
// cout <<"factorial of " << n <<" is "<<factorial;


// calculating n c r
// int factorial(int num) {
//     int fact = 1;
//     for (int i = 1;i<=num;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int ncr(int n1, int n2){
//     return factorial(n1)/(factorial(n2)*factorial(n1-n2));
// }
// int main(){
//     int n,r;
//     cout << "Enter upper number: ";
//     cin >> n;
//     cout << "Enter lower number: ";
//     cin >> r;
//     cout << ncr(n,r);
//     return 0;
// }


// pascal's traingle
// int factorial(int num) {
//     int fact = 1;
//     for (int i = 1;i<=num;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cout << "Enter no. of terms: ";
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<n-i){
//                 cout << " ";
//             }
//         }
//         for(int j=0;j<=i;j++){
//             cout << factorial(i)/(factorial(j)*factorial(i-j)) << " ";
//         }
//         cout << endl;
//     }
// }


// implementing linear search
// int linearSearch(int arr[],int key,int n){
//     for(int i=0;i<n;i++){
//         if(key==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout << "Enter the size of the array; ";
//     cin >> n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> array[i];
//     }
//     for(int i=0;i<n;i++){
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     int key;
//     cout << "Enter element to be searched: ";
//     cin >> key;
//     cout<<linearSearch(array,key,n);
//     return 0;
// }


// implementing binary search
// int binarySearch(int arr[],int n,int key)
// {
//     int s=0;
//     int e=n;
//     while(s<=e)
//     {
//     int mid = (s+e)/2;
//         if(arr[mid]==key)
//             return mid;
//         else if(arr[mid]>key)
//             e=mid-1;
//         else
//             s=mid+1;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> array[i];
//     }
//     for(int i=0;i<n;i++)
//         cout << array[i] << " ";
//     cout << endl;
//     int key;
//     cout << "Enter element to be searched: ";
//     cin >> key;
//     cout<<binarySearch(array,n,key);
//     return 0;
// }


// implementing selection sort
// int main(){
//     int n;
//     cout << "Enter the size of the array; ";
//     cin >> n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> array[i];
//     }
//     cout << "Array before sorting"<<endl;
//     for(int i=0;i<n;i++){
//         cout << array[i] << " ";
//     }  
//     cout << endl;  
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(array[j]<array[i]){
//                 int temp = array[j];
//                 array[j]=array[i];
//                 array[i]=temp;
//             }
//         }
//     }
//     cout << "Array after sorting" << endl;
//     for(int i=0;i<n;i++){
//         cout << array[i] << " ";
//     }    
//     return 0;
// }


// implementing bubble sort
// int main(){
//     int n;
//     cout << "Enter the size of the array; ";
//     cin >> n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> array[i];
//     }
//     cout << "Array before sorting"<<endl;
//     for(int i=0;i<n;i++){
//         cout << array[i] << " ";
//     }  
//     cout << endl;  
//     int counter = 1;
//     while(n>counter){
//         for(int i=0;i<n-counter;i++){
//             if(array[i]>array[i+1]){
//                 int temp=array[i];
//                 array[i]=array[i+1];
//                 array[i+1]=temp;
//             }
//         }
//         counter++;
//     }
//     cout << "Array after sorting" << endl;
//     for(int i=0;i<n;i++){
//         cout << array[i] << " ";
//     }    
//     return 0;
// }


// insertion sort
// int main(){
//     int n;
//     cout << "Enter the size of the array; ";
//     cin >> n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> array[i];
//     }
//     cout << "Array before sorting"<<endl;
//     for(int i=0;i<n;i++){
//         cout << array[i] << " ";
//     }  
//     cout << endl;  
//     for(int i=1;i<n;i++){
//         int current=array[i];
//         int j=i-1;
//         while(array[j]>current && j>=0){
//             array[j+1]=array[j];
//             j--;
//         }
//         array[j+1]=current;
//     }
//     cout << "Array after sorting" << endl;
//     for(int i=0;i<n;i++){
//         cout << array[i] << " ";
//     }    
//     return 0;
// }



// int main()
// {
// // badiya question on array
// // finding the maximum element of the array before i th iteration
//     int n;
//     cout << "Enter the length of the array: ";
//     cin >> n;
//     int array[n];
//     int mx = -13443;
//     for(int i=0;i<n;i++)
//     {
//         cout << "Enter "<< i <<" th"<<" element of the array: ";
//         cin >> array[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         mx=max(mx,array[i]);
//         cout << mx << endl;
//     }
//     return 0;
// }    


// sum of all sub-arrays of an array
// int main(){
//     int n;
//     cout << "Enter the length of the array: ";
//     cin >> n;
//     int a[n]; 
//     for(int i=0;i<n;i++){
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> a[i];
//     }   
//     for(int i=0;i<n;i++){
//         int total = 0;
//         for(int j=i;j<n;j++){
//             total += a[j];
//             cout << total << endl;
//         }
//     }
//     return 0;
// }


// bohot kaam ka question
// finding the length of maximum sub-array having similar common difference
// int main(){
//     int n;
//     cout << "Enter the size of the array; ";
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> a[i];
//     }  
//     int ans = 0;
//     int pd=a[1]-a[0];
//     int j=2;
//     int current = 2;
//     while(j<n)
//     {
//         if(pd==(a[j]-a[j-1]))
//         {
//             current++;
//         }
//         else
//         {
//             pd=(a[j]-a[j-1]);
//             current=2;
//         }
//         ans = max(ans,current);
//         j++;
//     }
//     cout << ans;
//     return 0;
// }


// program to print all possible sub-arrays of a given array
// int main(){
//     int n;
//     cout << "Enter the size of the array; ";
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter "<< i <<" th"<<" value of the array: ";
//         cin >> a[i];
//     }  
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout << a[k];
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }


// creating and traversing in a 2D-array
// int main(){
//     int n,m;
//     cout << "Enter the rows of the 2D-array; ";
//     cin >> n;
//     cout << "Enter the columns of the 2D-array; ";
//     cin >> m;
//     int array[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter " << i << " " << j << "th element: ";
//             cin >> array[i][j]; 
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << array[i][j] << " ";
//         }
//     cout << endl;
//     }
//     return 0;
// }


// spiral traversing in a 2D-array
// int main(){
//     int n,m;
//     cout << "Enter the rows of the 2D-array; ";
//     cin >> n;
//     cout << "Enter the columns of the 2D-array; ";
//     cin >> m;
//     int array[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter " << i << " " << j << "th element: ";
//             cin >> array[i][j]; 
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << array[i][j] << " ";
//         }
//     cout << endl;
//     }
//     cout << endl;
//     int rs=0,re=n-1,cs=0,ce=m-1;
//     while(rs<=re && cs<=ce){
//         for(int col=cs;col<=ce;col++){
//             cout << array[rs][col] << " ";
//         }
//         rs++;
//         for(int row=rs;row<=re;row++){
//             cout << array[row][ce] << " ";
//         }
//         ce--;
//         for(int col=ce;col>=cs;col--){
//             cout << array[re][col] << " ";
//         }
//         re--;
//         for(int row=re;row>=rs;row--){
//             cout << array[row][cs] << " ";
//         }
//         cs++;
//     }
//     return 0;
// }


// matrix transpose
// int main(){
//     int n,m;
//     cout << "Enter the rows of the 2D-array; ";
//     cin >> n;
//     cout << "Enter the columns of the 2D-array; ";
//     cin >> m;
//     int array[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter " << i << " " << j << "th element: ";
//             cin >> array[i][j]; 
//         }
//     }
//     cout <<"original array"<< endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << array[i][j] << " ";
//         }
//     cout << endl;
//     }
//     cout <<"transpose array"<< endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << array[j][i] << " ";
//         }
//     cout << endl;
//     }
// }


// matix multiplication
// int main(){
//     int n1,n2,n3;
//     cout << "Enter the length of rows of the first 2D-array; ";
//     cin >> n1;
//     cout << "Enter the columns of the first 2D-array and rows for second 2D-array; ";
//     cin >> n2;
//     cout << "Enter the columns of the second 2D-array; ";
//     cin >> n3;
//     int array1[n1][n2];
//     int array2[n2][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cout << "Enter " << i << " " << j << "th element: ";
//             cin >> array1[i][j]; 
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cout << "Enter " << i << " " << j << "th element: ";
//             cin >> array2[i][j]; 
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
//             cout << ans[i][j] << " ";
//         }
//     cout << endl;
//     }
// }