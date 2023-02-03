#include <stdio.h>  
int main()
{  
    int startYear, endyear, i,count=0;  
    printf("Enter a year to start searching the leap years: ");  
    scanf("%d", &startYear);  
    printf("Enter a year to end the search of leap years: ");  
    scanf("%d", &endyear);  
    printf("Leap Years between %d to %d are: \n", startYear, endyear);  
    for(i= startYear; i<= endyear; i++)
    {  
        if((i%4==0) && ((i%400==0)||(i%100!=0)))
        {
            printf("%d  ", i);
            count++;
        }
    }  
    printf("\n");
    printf("Number of leap years between %d and %d are: %d",startYear,endyear,count);
    return 0;
}  