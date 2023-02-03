#how to use list comprehensions
#first
#multiply each element by 10
a=eval(input("enter list:"))
b=[x*10 for x in a]
print(b)

#second
#for change case of letters
a=eval(input("enter a string"))
b=[x.upper() for x  in a] 
print(b)

#third
#extract number or letter from a string
a=eval(input("enter a string with numbers"))
b=[x for x in a if x.isdigit()]  #for numbers
c=[x for x in a if x.isalpha()]  #for characters
print(b)
print(c)

#fourth
#in nested list,on extracting elements from each list
a=[[1,2,3],[4,5,6],["a","b","c"]]
b=[x[-2] for x in a]
print(b)

#fifth
#on functions
def square(x):
      return x**2
a=[square(x) for x in range(1,11)]
print(a)

#sixth
#for adding two list
a=eval(input("enter list"))
b=eval(input("enter another list"))
c=[x+y for x in a for y in b]
print(c)
#another way
a=eval(input("enter list"))
b=eval(input("enter another list"))
c=[a[i]+b[i] for i in range(len(a))]
print(c)

#seventh
#creating list n numbers
n=int(input("enter number upto which you want to print numbers:"))
a=[x for x in range(1,n)]
print(a)

#eighth
#for printing even or odd numbers
a=[x for x in range(1,11) if x%2==0]
print(a)
b=[x for x in range(1,11) if x%2!=0]
print(b)

#nineth
#to convert numbers
a=[1.2,4.5,8.8]
b=[int(x) for x in a]
print(b)

