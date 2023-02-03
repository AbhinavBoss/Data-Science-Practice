#shell sort
def SS(list1):
    gap=len(list1)//2
    while gap>0:
        for i in range(gap,len(list1)):
            x=list1[i]
            j=i
            while j>=gap and x>=list1[j-gap]:
                list1[j]=list1[j-gap]
                j-=gap
            list1[j]=x
        gap=gap//2

list1=list(eval(input("enter list:")))
print('list before sorting')
print(list1)
SS(list1)
print('list after sorting')
print(list1)
