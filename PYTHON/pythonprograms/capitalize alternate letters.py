str1=input("enter string:")
str2=" "
l=len(str1)
for i in range(0,l):
    if i%2!=0:          #use i%2==0: for even place change
        str2+=str1[i]
    else:
        str2+=str1[i].upper()
print(str2)
