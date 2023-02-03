 #include <stdio.h>
 int main()
 {
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num=n;
    while(n>0)
    {   
        count++;
        n/=10;
    }
    printf("The no of digits in %d is %d",num,count);
    return 0;
 }