n=int(input('enter a number to be checked: '))
s=0
while s!=1 and s!=4:
    s=0
    while n>0:                               
        temp=n%10                            
        s+=temp*temp                             
        n//= 10                                     
    n=s
if s==1:
    print('is a happy number')
else:
    print('is not a happy number') 
