#1
#2 4 
#3 5 6
n=int(input("enter no.of rows:"))
for i in range(n):
       v=i+1
       d=n-1
       for j in range(i+1):
              print(v,end=" ")
              v+=d
              d-=1
       print()
