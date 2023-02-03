#program to remove even/odd digits from a number.
str1=input("enter number:")
str2=" "
l=len(str1)
for i in range(0,l):
    if i%2==0:          #i%2!=0: for odd digits
        str2+=str1[i]
        continue
print(str2)
