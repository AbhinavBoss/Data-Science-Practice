#n fabonacci series by using loop
n=int(input("enter no of terms: "))
f=0
s=1
c=f+s
print(f)
print(s)
while c<n:
      print(c)
      f=s
      s=c
      c=f+s
#n fabonacci series using recursive function
def fib(n):
      if n==1:
            return 0
      elif n==2:
            return 1
      else:
            return fib(n-1)+fib(n-2)
n=int(input('enter no of terms: '))
i=1
while i<=n:
      print(fib(i),end=" ")
      i+=1