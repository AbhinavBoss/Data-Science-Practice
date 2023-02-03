"""an automorphic is a number in which square of a number contains last digits
as the number is 
for eg 5---5*5=25,contains 25 as last digits,hence is automorphic number"""
n=int(input('enter a number to be checked for automorphic: '))
num=n
sq=n*n
t=10
equal=False
while n:
    if sq%t==n:
        equal=True
        break
    n=n//10
    t=t*10 
if equal:
    print(f'{num} is an automorphic_number')
else:
    print(f'{num} is not an automorphic_number') 