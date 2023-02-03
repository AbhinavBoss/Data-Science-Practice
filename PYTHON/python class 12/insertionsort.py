#insertion sort
def IS(list1):
    for i in range(1,len(list1)):
        x=list1[i]
        j=i
        while x<list1[j-1] and j>0: 
            list1[j]=list1[j-1]
            j-=1
        list1[j]=x
list1=eval(input("enter list:"))
IS(list1)
print(list1)