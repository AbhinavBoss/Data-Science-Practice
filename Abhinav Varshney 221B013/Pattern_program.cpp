#include <bits/stdc++.h>
using namespace std;
// compile the code before running,if you will use compiling

// rectangle pattern
// int n,m;
// cout<<"Enter how many rows you want: ";
// cin >> n;
// cout<<"Enter how many columns you want: ";
// cin>>m;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         cout<<"*";
//     }
// cout<<endl;
// }

// hollow rectangle
// int n,m;
// cout<<"Enter how many rows you want: ";
// cin >> n;
// cout<<"Enter how many columns you want: ";
// cin>>m;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++)
    // {
//         if (i==1 || i==n || j==1 || j==m)
//             cout<<"*";
//         else
//             cout<<" ";      
//     }
//     cout<<endl;
// }

// inverted half pyramid from right
// int m;
// cout<<"Enter how many columns you want: ";
// cin>>m;
// for(int i=m;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// inverted half pyramid from left 
// int m;
// cout<<"Enter how many columns you want: ";
// cin>>m;
// for(int i=1;i<=m;i++){
//     for(int j=1;j<=m;j++){
//         if(j<=m-i){
//             cout<<" ";
//         }else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }


// int main()
// {
//one number pattern program for all,we need to change a little
// int n;
// cout << "Enter how many rows you want: ";
// cin >> n;
// for(int i=1;i<=n;i++)
//     {
//     for(int j=1;j<=n+1-i;j++)
//         cout << j << " ";
//     cout << endl;
//     }
//     return 0;
// }

// Floyd's triangle
// int n;
// cout <<"enter how many rows you want: ";
// cin >> n;
// int count = 1;
// for(int i=1;i<=n;i++){
//    for(int j=1;j<=i;j++){
//        cout << count << " ";
//        count++;
//    }
//    cout << endl;
// }

// int main()
// {
// Butterfly pattern
// int n;
// cout << "enter how many rows you want: ";
// cin >> n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=i;j++)
//         cout << "*";
//     int space = 2*n - 2 * i;
//     for(int j=1;j<=space;j++)
//         cout << " ";
//     for(int j=1;j<=i;j++)
//         cout << "*";
//     cout << endl;
// }
// for(int i=n-1;i>=1;i--)
// {
//     for(int j=1;j<=i;j++)
//         cout << "*";
//     int space = 2*n - 2 * i;
//     for(int j=1;j<=space;j++)
//         cout << " ";
//     for(int j=1;j<=i;j++)
//         cout << "*";
//     cout << endl;
// }
// return 0;
// }



// int main()
// {
// // 0-1 pattern
// int n;
// cout << "Enter how many rows you want: ";
// cin >> n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0){
//             cout << " 1";
//         }
//         else{
//             cout << " 0";
//         }
//     }
//     cout << endl;
// }
// return 0;
// }


// int main()
// {
// // Rhombus pattern
// int m;
// cout<<"Enter how many columns you want: ";
// cin>>m;
// for (int i=1; i<=m; i++){
//     for (int j=1; j<=m-i; j++){
//         cout<< " ";
//     }
//     for(int j=1; j<=m; j++){
//         cout<< " *";
//     }
//     cout<< endl;
// }
//     return 0;
// }

// int main()
// {
// // palindrome number pattern(important)
// int n;
// cout << "Enter how many rows you want: ";
// cin >> n;
// for(int i=1;i<=n;i++)
// {
//     int j;
//     for(j=1;j<=n-i;j++)
//         cout << "  ";
//     int k=i;
//     for(j;j<=n;j++)
//         cout << k--<<" ";
//     k=2;
//     for(j;j<=n+i-1;j++)
//         cout<<k++<<" ";
//     cout<<endl;
// }
// return 0;
// }


// int main()
// {
// // Diamond pattern
// int n;
// cout << "Enter how many rows you want: ";
// cin >> n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n-i;j++)
//         cout << "  ";
//     for(int j=1;j<=2*i-1;j++)
//         cout << " *";
//     cout << endl;
// }
// for(int i=n-1;i>=1;i--)
// {
//     for(int j=1;j<=n-i;j++)
//         cout << "  ";
//     for(int j=1;j<=2*i-1;j++)
//         cout << " *";
//     cout << endl;
// }
//     return 0;
// }


// int main()
// {
// // zig-zag pattern
// int m;
// cout<< "Enter how many columns you want: ";
// cin>> m;
// for(int i=1;i<=3;i++){
//     for(int j=1;j<=m;j++){
//         if((i+j)%4==0 || (i==2 && j%4==0)){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }
//     return 0;
// }


