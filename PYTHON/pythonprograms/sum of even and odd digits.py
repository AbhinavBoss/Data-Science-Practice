osum=0
esum=0
n=int(input("enter no: ")) 
while n!=0:
    a=n%10
    if a%2 == 0:
      esum = esum + a
    else:
      osum = osum + a
    n=n//10
print("sum of even digits:",osum)
print("sum of odd digits:",esum) 