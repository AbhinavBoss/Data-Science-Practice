# list comprehensions
# list1=[1,2,3,4]
# list2=[i**3 for i in list1]
# print([i for i in range(5)])

# c_to_f=lambda c:(9/5) * c + 32
# print(c_to_f(-40))

a=[1,2,3]
b=["Abhinav","Akshat","Shrinu"]
dic={}
for i in range(3):
    dic[a[i]]=b[i]
print(dic)