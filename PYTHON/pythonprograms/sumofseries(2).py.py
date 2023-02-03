x=int(input("enter a number: "))
y=int(input("enter a digit: "))
j=0
while x!=0:
    digit=x%10
    x=x//10
    if digit==y:
        j=j+1
print(j)
            
