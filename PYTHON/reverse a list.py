# #reverse list using recursion
# def rev(list1,low,high):
#     if low < high:
#         x=list1[low]
#         list1[low]=list1[high]
#         list1[high]=x
#         rev(list1,low+1,high-1)
# N=int(input('enter no of elements: '))
# list1=[0]*N
# for k in range(N):
#     list1[k]=int(input(f"enter {k}th element: "))
# print('original list')
# print(list1)
# rev(list1,0,len(list1)-1)
# print('reversed list')
# print(list1)

#reverse list without using recursion
N=int(input('enter no of elements: '))
list1=[0]*N
for k in range(N):
    list1[k]=int(input(f"enter {k} element: "))
print('original list')
print(list1)        
i=0                                                 
j=len(list1)-1                                      
while i<j:
    x=list1[i]
    list1[i]=list1[j]
    list1[j]=x
    i+=1
    j-=1
print('reversed list')
print(list1)  