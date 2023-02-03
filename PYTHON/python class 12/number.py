#check number whether it starts and ends with an even digit.
n=int(input("enter no"))
a=n%10
while n!=0:
     b=n%10
     n=n//10
if a%2==0 and b%2==0:
     print("yes")
else:
     print("no") 