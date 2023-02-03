n=int(input('enter a number to be checked: '))
s=0
num=n
while s!=1 and s!=4:
    s=0
    while n>0:                               
        temp=n%10                            
        s+=temp*temp                             
        n=n//10
    n=s
if s==1:
    print(f'{num} is a happy number')
else:
    print(f'{num} not a happy number')
#using recursion
def sum_sq_digits(num,n=0):
    if n==len(num):
        return 0
    else:
        return (int(num[n])**2+sum_sq_digits(num,n+1)) 
def is_happy(num):
    if sum_sq_digits(num)==1:
        print('happy number')
    elif len(num)==1:
        print('not a happy number')
    else:
        num=str(sum_sq_digits(num))
        is_happy(num)
num=input('enter a number: ')
is_happy(num)