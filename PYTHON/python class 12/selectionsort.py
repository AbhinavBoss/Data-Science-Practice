# to arrange list in ascending order 
# list1=eval(input("enter list of non-repeat numbers"))
# for i in range(len(list1)):
#        mv=min(list1[i:])
#        mi=list1.index(mv)
#        list1[i],list1[mi]=list1[mi],list1[i]
# print(list1)

# to arrange list in desending order
# list2=eval(input("enter list of non-repeat numbers"))
# for i in range(len(list2)):
#        mv=max(list2[i:])
#        mi=list2.index(-mv)
#        list2[i],list2[mi]=list2[mi],list2[i]
# print(list2)
#for repeating digits.
N=int(input('enter no of elements: '))
list3=[0]*N
for i in range(N):
       list3[i]=int(input(f'enter {i}th element: '))
print('list before sorting')
print(list3)
for i in range(len(list3)):
       mv=max(list3[i:])
       mi=list3.index(mv,i)
       list3[i],list3[mi]=list3[mi],list3[i]
print('list after sorting')
print(list3) 