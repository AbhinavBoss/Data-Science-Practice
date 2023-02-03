s=0
n=int(input("enter a number: "))
while n!=0:
      a=n%10
      n=n//10
      s=s+a
print("sum of digits: ",s)
