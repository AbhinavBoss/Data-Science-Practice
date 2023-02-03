str1=input("enter string:")
str2=""
l=len(str1)
for a in range(0,l):
    if a%2==0:
        str2+=str1[a]
    else:
        str2+=str1[a].upper()
print(str2)
