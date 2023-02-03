n=int(input("enter a decimal number: "))
i=1
num=0
while n!=0:
    a=n%8
    n=n//8
    num+=a*i
    i*=10
print(num)