string=input("enter a string:")  
a=len(string)     
m=a//2             
i=-1               
for j in range(m):
    if(string[j]==string[i]):
        m=m+1
        i=i-1
    else:
        print("string is not palindrome")
        break
else:
    print("string is palindrome")

#alternate program
string=input("enter a string:")
rs=string[::-1]
if string==rs:
    print('string is palindrome')
else:
    print('it is not palindrome')