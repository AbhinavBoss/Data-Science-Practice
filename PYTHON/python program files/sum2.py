#(1+2)-(3+5+9)+(7+10+15+22)-..........
n=int(input("enter no of terms:"))
a=1
sum1=0
f=1
def term(a,b):
     c=0
     f=a
     a=1
     for i in range(1,b+1):
          c+=a
          a+=2*a
          f+=2
     return c
for j in range(1,n+1):
     if j%2==0:
          sum1-=term(j,j+1)
     else:
          sum1+=term(j,j+1)
print(sum1)
