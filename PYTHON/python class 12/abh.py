#(1-2)-(1-2+3)+(1-2+3-4)-.........n
n=int(input("enter number of terms:"))
s=0
i=1
while i<=n:
     j=1
     t=0
     while j<=i+1:
          if j%2==0:
               t=t-j
          else:
               t=t+j
          j+=1
     if i%2==0:
          s-=t
     else:
          s+=t
     i+=1
print("sum:",s)