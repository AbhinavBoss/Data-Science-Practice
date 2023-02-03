str1=input("enter string:")
str2=""
l=len(str1)
for i in range(l):
   if str1[i] not in "aeiouAEIOU":
        str2=str2+str1[i]
print("new string:",str2)
