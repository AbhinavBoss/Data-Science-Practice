L1=[1,4,2,3,7,7,3,5,1,3,2,4]
L2=[]
L3=[]
for i in L1:
    if i not in L2:
      L2.append(i)
    else:
        L3.append(i)
print(L2)
print(L3)
