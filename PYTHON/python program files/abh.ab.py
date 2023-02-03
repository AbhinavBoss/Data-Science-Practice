#(1+2)+(1+2+3)+(1+2+3+4)...............+n
n = int(input("enter number of terms :"))
sum1=0
def term(a,b):
    c=0
    a=1
    f=a
    for i in range(1,b+1):
        c+=a
        a+=f
    return c
for j in range(1,n+1):
    sum1+=term(j,j+1)
print(sum1)
