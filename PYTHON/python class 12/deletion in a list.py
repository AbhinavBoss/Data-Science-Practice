#deletion in a list.
def search(list1,key):
    b=0
    l=len(list1)-1
    while b<=l:
        mid=(b+l)//2
        if key==list1[mid]:
            return mid
        elif key>list1[mid]:
            b=mid+1
        else:
            l=mid-1
    else:
        return None
list1=list(eval(input("enter list's elements: ")))
list1.sort()
print(list1)
key=eval(input('enter element to be deleted: '))
position=search(list1,key)
if position:
    del list1[position]
    print(list1)
else:
    print('invalid')
