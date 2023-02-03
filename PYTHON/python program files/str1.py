str1=input("enter string:")
str2=input("enter that word:")
L=str1.split()
count=0
for i in L:
    if i==str2:
        count+=1
print("word appears:",count,"times")
