n=int(input("enter number of terms: "))
sum1=0
i=1
while i<=n:
    t=0
    j=1
    while j<=i+1:
      t+=j
      j+=1
    i=i+1
    sum1+=t
print("sum of series: ",sum1)

        
                
            
