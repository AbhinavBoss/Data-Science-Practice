N=int(input('enter the length of array: '))
list1=[None]*N
for i in range(N):
    list1[i]=int(input(f'enter {i}th element: '))
a=len(list1)
list2=list1
for i in range(a-1,0,-1):
       for j in range(i):
              if list1[j] > list1[j+1]: #change symbol for descending order
                     list1[j],list1[j+1] = list1[j+1],list1[j]
                    
print(list1) 
