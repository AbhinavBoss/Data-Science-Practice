n=int(input("enter a number: "))
print(1,end=' ')
factor=2
while factor<=n/2:
    if n%factor==0:
      print(factor,end=' ')
    factor=factor+1
print(n,end='  ')
