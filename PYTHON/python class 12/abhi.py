#(1-3)-(2-4+6)+(3-5+7-9)-............
n=int(input("enter no of terms:"))
s=0
i=1
while i<=n:
     j=1
     t=0
     a=i
     while j<=i+1:
          if j%2!=0:
               t+=a
          else:
               t-=a
          j=j+1
          a=a+2
     if i%2!=0:
          s+=t
     else:
          s-=t
     i+=1
print("sum:",s)

