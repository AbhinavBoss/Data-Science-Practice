n=int(input("enter number of terms: "))
sum1=0
i=1
while i<=n:
    a=i
    t=0
    j=1
    while j<=i+1:
        if j%2!=0:
           t=t+a
        else:
           t=t-a
        j=j+1
        a=a+2
    if i%2!=0:
            sum1=sum1+t
    else:
            sum1=sum1-t
    i=i+1   
print("sum of series: ",sum1)
