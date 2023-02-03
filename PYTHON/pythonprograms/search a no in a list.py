N=int(input('enter no of terms: '))
list1=[0]*N
for i in range(N):
    list1[i]=int(input(f'enter {i}th terms: '))
print(list1)
x=int(input("enter no:"))
for i in range(len(list1)):
    if list1[i]==x:
        print("number found")
        print("at",i+1,"position")
        break    
else:
    print("number doesn't exists")  