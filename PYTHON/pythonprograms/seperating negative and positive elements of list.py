N=int(input('enter no of terms: '))
list1=[0]*N
for i in range(N):
    list1[i]=int(input(f'enter {i}th terms: '))
print(list1)
n=len(list1)-1
for i in range(n):
    for j in range(n-i-1):
        if list1[j]>=0:
            list1[j],list1[j+1]=list1[j+1],list1[j]
print(list1)            
