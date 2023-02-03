"""a spy_number is a number in which the sum of all of its digits is equal 
to their product
for eg--6 is a spy number
6=1+2+3
6=1*2*3"""
n=int(input('enter a number to be checked for spy: '))
num=n
sum1=0
product=1
while n>0:
   r=n%10
   sum1+=r
   product*=r
   n=n//10
if sum1==product: 
   print(f'{num} is a spy_number')
else:
   print(f'{num} is not a spy_number')