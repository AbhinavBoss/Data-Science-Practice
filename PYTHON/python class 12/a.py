# 1+2+3+4.......n
n=int(input("enter no of terms:"))
s=0
a=1
t=0
for i in range(1,n+1):
     t+=a
     s+=t
print("sum of series:",s)

# x=[10,[3.141,20,[30,'baz',2.718]],'foo'] 
# print(x[1][2][1][-1]) 
# print(x[1][2][1:3]) 