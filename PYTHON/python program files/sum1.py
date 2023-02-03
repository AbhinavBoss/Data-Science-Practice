n=int(input("enter no of terms:"))
sum1=0
a=1
def term(a,b):
    c=0
    f=a
    for i in range(1,b+1):
        c+=a
        a+=f
        f+=1
    return c
for j in range(1,n+1):
    if j%2==0:
        sum1-=term(j,j+1)
    else:
        sum1+=term(j,j+1)
print(sum1)
