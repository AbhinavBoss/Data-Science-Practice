#insertion in a list
def findpos(list1,item):
    size=len(list1)
    if item < list1[0]:
        return 0
    else:
        pos = -1
    for i in range(size-1):
        if list1[i]<=item and item <= list1[i+1]:
            pos=i+1
            break
    if pos == -1 and i<=size-1:
        pos=size
    return pos

def shift(list1,pos):
    list1.append(None)
    size=len(list1)
    i=size-1
    while i>pos:
        list1[i]=list1[i-1]
        i-=1
n=int(input('enter no of elements: '))
list1=[0]*n
for i in range(n):
    list1[i]=int(input(f'enter {0}th element: '))
list1.sort()
print(list1)
item=int(input('enter item to be inserted: '))
print(f'{item} has been inserted: ')
position=findpos(list1,item)
shift(list1,position)
list1[position]=item
print(list1)         