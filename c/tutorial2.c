#include <stdio.h>
#include <math.h>


//int main()
//{
//	question 1
//	int i,n;
//	printf("Enter the number whose divisors you want: ");
//	scanf("%d",&n);
//	printf("Divisors of %d are: ",n);
//	for(i=1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	//question 11
//	int i,n;
//	printf("Enter the limit: ");
//	scanf("%d",&n);
//	printf("Odd numbers between 0 to %d are: \n",n);
//	for (i=1;i<=n;i++)
//	{
//		if(i%2!=0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//int main()
//{	
//	question 13
//	int a,b,c;
//	printf("Enter the first number: ");
//	scanf("%d",&a);
//	printf("Enter the second number: ");
//	scanf("%d",&b);
//	printf("Enter the third number: ");
//	scanf("%d",&c);
//	if (a>b && a>c)
//	{
//		printf("%d is greater in all three: ",a);
//	}
//	if (b>a && b>c)
//	{
//		printf("%d is greater in all three: ",b);
//	}
//	if (c>b && c>a)
//	{
//		printf("%d is greater in all three: ",c);
//	}

//  alternative approach
//int main()
//{
//    int a[3];
//    int i;
//    int greatest;
//    printf("Enter three numbers:");
//    for (i=0; i<3; i++)
//	{
//        scanf("%d", &a[i]);
//    }
//    greatest = a[0];
//    for (i=0; i<3; i++)
//	{
//        if (a[i] > greatest)
//		{
//        greatest = a[i];
//        }
//    }
//    printf("Greatest of three numbers is %d", greatest);
//}





//	return 0;
//}



//int main()
//{
//  question 12
//	int i;
//	printf("Even numbers between 0 to 50 are: ");
//	for (i=1;i<=50;i++)
//	{
//		if (i%2==0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//  question 6
//	int n;
//	printf("Enter number of terms: ");
//	scanf("%d",&n);
//	int f=0;
//	int s=1;
//	int c=f+s;
//	printf("%d  %d",f,s);
//	while (c<n)
//	{
//		printf(" %d ",c);
//		f=s;
//		s=c;
//		c=f+s;
//	}
//	return 0;
//}


//int main()
//{	
//	question 14
//	int a,b;
//	printf("Enter first number: ");
//	scanf("%d",&a);
//	printf("Enter second number: ");
//	scanf("%d",&b);
//	printf("Original values: a=%d and b=%d \n",a,b);
//	printf("After swapping \n");
//	printf("New values: a=%d and b=%d \n",b,a);
//	return 0;
//}


int main()
{
   // question 3
   int n1, n2, max, gcd;
   printf("Enter first integers: ");
   scanf("%d", &n1);
   printf("Enter second integers: ");
   scanf("%d", &n2);
   (n1>n2)?(max=n1):(max=n2);
   while (1)
	{
      if((max % n1 == 0) && (max % n2 == 0)){
         printf("The LCM of %d and %d is %d. \n", n1, n2, max);
         break;}
   max++;}
   gcd = (n1 * n2) / max;
   printf("The HCF of %d and %d is %d", n1, n2, gcd);
   return 0;
}


// int main()
// {
// //  question 4
//  int n, i, c = 0;
//  printf("Enter any number n:");
//  scanf("%d", &n);

//  for (i = 1; i <= n; i++)
//  {
//     if (n % i == 0)
//         c++;
//  }
//  if (c == 2)
//     printf("%d is a Prime number",n);
//  else 
//     printf("%d is not a Prime number",n);
//  return 0;    
// }


//int main(){
//  question
//	int x;
//	printf("Enter a number...and see the printing of a table: ");
//	scanf("%d",&x);
//	int i=1;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d X %d = %d\n",x,i,x*i);
//	}
//	return 0;
//}




//int main()
//{
//	//question 15
//	int a,b,c;
//	int Area = 0;
//	int s=0;
//	printf("Enter the first side of the triangle: ");
//	scanf("%d",&a);
//	printf("Enter the second side of the triangle: ");
//	scanf("%d",&b);
//	printf("Enter the third side of the triangle: ");
//	scanf("%d",&c);
//	s = ((a+b+c)/2);
//	Area = sqrt((s * (s-a) * (s-b) * (s-c))) ;
//	printf("The area of the traingle is: %d",Area);
//	return 0;
//}

//int main()
//{
//	//question 10
//	// sum of series 1+2+3+4+.....n terms
//	int n,i;
//	int sum=0;
//	printf("Enter the number of terms: ");
//	scanf("%d",&n);
//	for(i=0;i<=n;i++)
//	{
//		sum = (sum + i);
//	}
//	printf("sum of series is %d",sum);
//	return 0;
//}


//int main()
//{
//	//question 2
//	int i,n;
//	int fact=1;
//	printf("Enter the number whose factorial you want to find: ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		fact *=  i;
//	}
//	printf("The factorial of %d is %d",n,fact);
//}


// int main()
// {
// 	//question 9 
// 	//1+3+5+7........n terms   
// 	int i,j,n,sum;
// 	printf("Enter the number of terms: ");
// 	scanf("%d",&n);
// 	sum=0;
// 	i=1;
// 	j=1;
// 	while(i<=n)
// 	{
// 		sum = sum + j;
// 		j=j+2;
// 		i++;
// 	}
// 	printf("The sum of %d terms is %d: ",n,sum);
// 	return 0;
// }


// int main()
// {   
//     //question 8
//     int n,i=1,sum=0,x;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     printf("Enter the value of x: ");
//     scanf("%d",&x);
//     sum = (pow(-x,n)-1)/-(x+1); 
//     printf("The sum of %d terms is %d",n,sum);
//     return 0;
// }

// int main()
// {
//     int ram,shyam,ajay;
//     printf("Enter the ages: ");
//     scanf("%d%d%d",&ram,&shyam,&ajay);
//     if(ram<shyam)
//     {
//         if(ram<ajay)
//         printf("Ram is younger in all",ram);
//         else
//         printf("Ajay is younger in all",ajay);
//     }
//     else
//     {
//         if(shyam<ajay)
//         printf("Shyam is younger in all",shyam);
//         else
//         printf("Ajay is younger in all",ajay);
//     }
//     return 0;
// }

