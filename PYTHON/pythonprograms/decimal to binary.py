n=int(input("enter a decimal number: "))
i=1
num=0
while n!=0:
    a=n%2
    n=n//2
    num+=a*i
    i*=10
print(num)