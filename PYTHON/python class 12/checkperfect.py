n=int(input("enter number:"))
r=0
for i in range(1,n):
      if n%i==0:
            r=r+i
if r==n:
      print("yes")
else:
      print("no")
