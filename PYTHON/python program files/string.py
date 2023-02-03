st=input("enter string:")
str1=""
x=len(st)
for a in range(0,x):
    if a%2==0:
        str1+=st[a]
    else:
        str1+=st[a].upper()
print(str1)
