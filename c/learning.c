// #include <stdio.h>
// int main()
// {
//     int a[20],number, i, j, n;
//     printf("\n Please Enter the Number You want to Convert  :  ");
//     scanf("%d", &number);
//     while(number > 0)
//     {
//         a[i] = number % 2;
//         number = number / 2;
//         i++;
//     }
//     printf("\n Binary Number of a Given Number =  ");
//     for(j = i - 1; j >= 0; j--)  {
//         printf("%d", a[j]);
//     }
//     printf("\n");
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int time=1,height;
//     printf("Height \t\t\t\t Time \n");
//     while(height<515205)
//     {
//         height=5*(time*time);
//         printf("%d \t\t\t\t %d \n",height,time);
//         time+=4;
//     }
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n,a,b,c,d,e,f,g,h,i,j;
//     printf("Enter the amount: ");
//     scanf("%d",&n);
//     printf("Amount \t\t\t Count \n");
//     switch(1)
//     {
//         case 1:
//         a=n/2000;
//         n%=2000;
//         printf("2000 \t\t\t %d \n",a);
//         case 2:
//         b=n/500;
//         n%=500;
//         printf("500 \t\t\t %d \n",b);
//         case 3:
//         c=n/200;
//         n%=200;
//         printf("200 \t\t\t %d \n",c);
//         case 4:
//         d=n/100;
//         n%=100;
//         printf("100 \t\t\t %d \n",d);
//         case 5:
//         e=n/50;
//         n%=50;
//         printf("50 \t\t\t %d \n",e);
//         case 6:
//         f=n/20;
//         n%=20;
//         printf("20 \t\t\t %d \n",f);
//         case 7:
//         g=n/10;
//         n%=10;
//         printf("10 \t\t\t %d \n",g);
//         case 8:
//         h=n/5;
//         n%=5;
//         printf("5 \t\t\t %d \n",h);
//         case 9:
//         i=n/2;
//         n%=2;
//         printf("2 \t\t\t %d \n",i);
//         case 10:
//         j=n/1;
//         n%=1;
//         printf("1 \t\t\t %d \n",j);
//         default:
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>
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
//         int temp=arr[low];
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



// insert 0 between every element in an array
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d",&n);
//     int arr[n],arr2[2*n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %dth element: ",i);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i<n; i++)
//     {
//         arr2[2*i]=arr[i];
//         arr2[2*i-1]=0;
//     }
//     for (int i = 0; i < 2*n-1; i++)
//         printf("%d ",arr2[i]);
// return 0;
// }

// sin X = X – X^3/ 3! + X^5/ 5! – X^7/7! +……
// #include <stdio.h>
// #include <math.h>
// int fact(int n)
// {
//     int fc=1;
//     for (int i=1;i<=n;i++)
//         fc*=i;
//     return fc;
// }
// int main()
// {
//     int n,x,i=1,b=1;
//     float sum=0,term;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     printf("Enter the value of x: ");
//     scanf("%d",&x);
//     while(i<=n)
//     {
//         term=pow(x,b)/fact(b);
//         if(i%2==0)
//             sum-=term;
//         else
//             sum+=term;
//         b+=2;
//         i++;
//     }
//     printf("The sum of %d terms is %.3f: ",n,sum);
//     return 0;
// }



// #include <stdio.h>
// int checkPrime(int num)
// {
//     if (num < 2)
//         return 0;
//     else
//     {
//         int x = num / 2;
//         for (int i = 2; i <= x; i++)
//         {
//             if (num % i == 0)
//                 return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int a = 1, b = 100;
//     for (int i = a; i <= b; i++)
//     {
//         if (checkPrime(i))
//             printf("%d ", i);
//     }
//     return 0;
//}

// GCD
//  #include <stdio.h>
//  int gcd(int n,int m)
//  {
//      int a=(n>m)?n:m;
//      while(a--)
//      {
//          if((n%a==0)&&(m%a==0))
//              return a;
//      }
//  }
//  int main(){
//      int n,m;
//      printf("Enter two numbers: ");
//      scanf("%d%d",&n,&m);
//      printf("The HCF of %d and %d is %d: ",n,m,gcd(n,m));
//  return 0;
//  }

// LCM
// #include <stdio.h>
// int lcm(int n,int m)
// {
//     int a=(n>m)?n:m;
//     while(1)
//     {
//         if((a%n==0)&&(a%m==0))
//             return a;
//         a++;
//     }
// }
// int main(){
//     int n,m;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&n,&m);
//     printf("The HCF of %d and %d is %d: ",n,m,lcm(n,m));
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char base[20],test[20];
//     int i=0,j=0,flag=0,k,m;
//     printf("Enter base string:");
//     gets(base);
//     printf("Enter test string:");
//     gets(test);
//     int len2 = strlen(test);
//     while(base[i]!='\0')
//     {
//         if(base[i]==test[j])
//         {
//             i++;j++;
//         }
//         if((test[j]=='\0' && base[i]==' ') || (test[j]=='\0' && base[i]=='\0'))
//         {
//             j=0;
//             m=0;
//             i = i-len2;
//             while(m<len2)
//             {
//                 k=i;
//                 while(base[k]!='\0')
//                 {
//                     base[k] = base[k+1];
//                     k++;
//                 }
//                 m++;
//             }
//         }
//         if(base[i]!=test[j])
//         {
//             i++;j=0;
//         }
//     }
//     printf("The modified string is %s",base);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of arry\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("inversions in an array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                printf("(%d,%d)\t", arr[i], arr[j]);
                count++;
            }
        }
    }
    printf("\nnumber of inversions in array : %d", count);
    return 0;
}
