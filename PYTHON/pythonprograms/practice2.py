# # x/2!-x^2/4!+x^4/7!-..............n terms.  
# import math
# n=int(input('enter no of terms: '))
# x=int(input('enter x: '))
# sum1=0
# j=0
# a=1
# f=2 
# while j<n:  
#     term=0 
#     p=math.factorial(f) 
#     q=x**a 
#     s=q/p
#     term+=s
#     j+=1
#     a+=j
#     f+=j
# if j%2==0:
#     sum1-=term
# else:
#     sum1+=term
# print(sum1)  