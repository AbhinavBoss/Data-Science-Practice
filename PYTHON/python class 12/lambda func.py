#___________map function______________
a=eval(input("enter list:"))
def add(x):
	return x*2
print(list(map(add,a)))

#map + lambda function
a=eval(input("enter list:"))
print(tuple(map(lambda x:x**2,a)))


#filter function
print(list(filter(lambda x:x%2==0,range(1,11))))

#reduce function
import functools
a=[1,2,3,4]
#adding  each element
print(functools.reduce(lambda x,y:x+y,a))




