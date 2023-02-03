#program to find element's frequency in a list
L =eval(input("enter list's elements:"))
print(list(L))
L1=[]
L2=[]
for i in L:
    if i not in L2:
        x=L.count(i)
        L1.append(x)
        L2.append(i)
print("Element",'\t\t',"Frequency")
for i in range(len(L1)):
    print(L2[i],'\t\t\t',L1[i]) 
