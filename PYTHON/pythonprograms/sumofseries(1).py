x=int(input("enter value of x: "))
N=int(input("enter no of terms: "))
s=0
a=1
i=1
while i<=N:
      x1=x**a
      f=1
      j=1
      while j<=i*2:
            f=f*j
            j=j+i
      s=s+x1/f
      a=a+1
      i=i+1
print("sum of series: ",s)
