#include <stdio.h>
#include <math.h>
int main(){
    int n,count=0,new_n;
    printf("Enter the number: ");
    scanf("%d",&n);
    count = log10(n);
    int f = n / (pow(10,count));
    int l = n % 10;
    int a = f * (pow(10,count));
    int b= n % a;
    n = b / 10;
    new_n = l * (pow(10,count)) + (n*10 + f);
    printf("%d",new_n);
return 0;
}