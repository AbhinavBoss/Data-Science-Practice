def MS(list1):
    if len(list1)>1:
        mid=len(list1)//2
        lf=list1[:mid]
        rf=list1[mid:]
        MS(lf)
        MS(rf)
        i=0
        j=0
        k=0
        while i<len(lf) and j<len(rf):
            if lf[i]<rf[j]:             #change sign for desc. order
                list1[k]=lf[i]
                i+=1
                k+=1
            else:
                list1[k]=rf[j]
                j+=1
                k+=1
        while i<len(lf):
            list1[k]=lf[i]
            i+=1
            k+=1
        while j<len(rf):
            list1[k]=rf[j]
            j+=1
            k+=1
n=int(input('enter no of elements: '))
list1=[0]*n
for i in range(n):
    list1[i]=int(input(f'enter {0}th element: '))
print(f'original list is: \n{list1}')
MS(list1)
print(f'list after sorting: \n{list1}')