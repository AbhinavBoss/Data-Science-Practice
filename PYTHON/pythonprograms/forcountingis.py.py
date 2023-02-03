str1=input("enter string:")
str2="is"
l=str1.split()
count=0
for i in l:
    if i==str2:
        count+=1
print("substring appears:",count)
