str1=input("enter string:")
str2=""
length=len(str1)
for i in range (len(str1)):
    if str1[i] not in "ieaouAEIOU":
        str2+=str1[i]
print(str2)
