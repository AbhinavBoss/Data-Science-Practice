num=int(input('enter a number: '))
n=int(input('enter digit: '))
count=0
while num!=0:
    digit=num%10 
    num=num//10  
    if digit==n:
        count+=1
print(f"the occurence of {n} is {count}")   