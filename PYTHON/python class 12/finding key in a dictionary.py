#program to find the key in a dictionary
n=int(input('enter total enteries: '))
i=1
d={}
while i<=n:
    a=input('enter key: ')
    b=input('enter value: ')
    d[a]=b
    i+=1
print(d)

c=input('enter value whose key you want to search: ')
for j in d:
    if d[j].lower()==c.lower(): #the benefit is that we can use 
        print(j)                   #the value in any case 
        break
else:
    print('nikal banch****')