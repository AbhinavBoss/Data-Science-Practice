#python program to calculate the area of triangle.
a=int(input("please enter the length of the first side="))
b=int(input("please enter the length of the second side="))
c=int(input("please enter the length of the third side="))
s=(a+b+c)/2
area=(s*(s-a)*(s-b)*(s-c))**0.5
print("area of triangle=",area)
