N=int(input('enter no of elements required in a list: '))
L=[0]*N
for i in range(N):
    L[i]=int(input(f'enter {i}th list elements: ')) 
L2=[]
L3=[]
for i in L:
    if i not in L2:
        L2.append(i)
    else:
        L3.append(i)
print(L)
print(L2)