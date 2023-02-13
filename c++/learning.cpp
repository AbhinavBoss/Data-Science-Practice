// #include <bits/stdc++.h>
// using namespace std;
// class Test
// {
//    public:
//    string firstName="Abhinav";
//    string lastName="Varshney";
//    int id=1;
// };
// int main()
// {
//    Test boy;
//    boy.firstName="Akshat";
//    boy.lastName="Chirand"; 
//    cout << "Name of the child is " <<boy.firstName <<" "<<boy.lastName <<endl;
//    return 0;
// } 
 

#include <bits/stdc++.h>
using namespace std;
int main()
{  
   int a[3];
   int* ptr=a;
   for (int i = 0; i < 3; i++)
      cin>>*(ptr+i);
   for (int i = 0; i < 3; i++)
      cout<<*(ptr+i)<<" ";
   return 0;
}