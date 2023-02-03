#using math module
import math
n= int(input("enter a number:"))
fact=math.factorial(n)
print("factorial of ",n,"is:",fact)
#using simple code
n= int(input("enter a number:"))
fact=1
for i in range(n):
      fact=fact*(i+1)
print("factorial of ",n,"is:",fact)
#using recursive function
def fact(n):
      if n==1:
            return 1
      else:
            return n * fact(n-1)
n=int(input("enter a number:"))
print(f"factorial of {n} is: {fact(n)}")