 #include <stdio.h>
 int main()
 {
     int n,num,rev=0;
     printf("Enter the number: ");
     scanf("%d",&n);
     num=n;
     while(n>0)
     {
        rev=rev*10+n%10;
        n/=10;
     }
     if(rev==num){printf("%d is a palindrome number",num);}
     else {printf("%d is not a palindrome number",num);}
     return 0;
}
