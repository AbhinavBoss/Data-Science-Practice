str1=input("enter string:")
n=len(str1)
f=1
i=0
j=n-1
while i<=n//2:
    if (str1[i]!=str1[j]):
        f=0
        print("not palindrome")
        break
    i+=1
    j-=1
if f==1:
    print("palindrome")
