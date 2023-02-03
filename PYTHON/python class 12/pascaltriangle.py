# n=int(input("enter no of rows:"))
# list1=[]
# for i in range(n):
#         list2=[]
#         for j in range(i+1):
#              if j==0 or j==i:
#                  list2.append(1)         
#              else:
#                  list2.append(list1[i-1][j-1]+list1[i-1][j])
#         list1.append(list2)
# print(list1)
# for i in range(n):
#     for j in range(n-i-1):
#         print(end=" ")
#     for j in range(i+1):
#         print(list1[i][j],end=" ")
#     print()


# alternative and best approach
def factorial(num):
    fact = 1
    for i in range(1,num+1):
        fact *= i
    return fact
n=int(input('enter the no. of terms: '))
for i in range(n):
    for j in range(n-i-1):
        print(end=" ")
    for j in range(i+1):
        print((factorial(i)//(factorial(j)*factorial(i-j))),end=" ") 
    print()