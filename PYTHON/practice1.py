# n = int(input('enter no of elements: '))
# list1 = [None] * n
# for i in range(n):
#     list1[i] = input(f'enter {i}th element: ')
# print(list1)
# for j in (list1):
#     if j[-1] in 'aeiouAEIOU':
#         print(j)


#ans 1
# my_file=open('D:/PYTHON PROGRAMMING LANGUAGE/a.txt','r')
# n=int(input('enter how many lines from where u want to read: '))
# for i in (my_file.readlines()[-n:]):
#     print(i,end="")
# my_file.close()


# #ans2
# my_file=open('D:/PYTHON PROGRAMMING LANGUAGE/a.txt','a+')
# a=input('enter your text: ')
# my_file.write(a)
# x=my_file.readlines()
# print(x)
# my_file.close()


# ans3
# d = open('D:/PYTHON PROGRAMMING LANGUAGE/a.txt','r')
# l = d.readlines()
# p = l[0]
# s = p.split()
# d = []
# for i in s:
#     d.append(len(i))
#     e = max(d)
# for j in s:
#     if len(j) == e:
#         print("The longest word is", j, "and it is", len(j),"characters long")


# #ans4
# my_file=open('D:/PYTHON PROGRAMMING LANGUAGE/a.txt','r')
# a=my_file.read()
# f=a.split()
# print(len(f))
# my_file.close()


# # ans5
# import random
# s=open('D:/PYTHON PROGRAMMING LANGUAGE/a.txt','r')
# m=s.readlines()
# l=[]
# for i in range(0,len(m)-1):
#     x=m[i]
#     z=len(x)
#     a=x[:z-1]
#     l.append(a)
# l.append(m[i+1])
# o=random.choice(l)
# print(o)
# s.close()


# s=open('D:/PYTHON PROGRAMMING LANGUAGE/a.txt','r')
# a=s.read()
# x=a.split()
# max_word=x[0]
# max_length=len(max_word)
# for i in range(len(x)):
#     if len(x[i])>max_length:
#         max_word=x[i]
#         max_length=len(x[i])
# print(f'max word is {max_word} and its length is {max_length}')


#import mysql.connector
#mydb = mysql.connector.connect(
#  host="localhost",
#  user="root",
#  password="abhinav",
#  database="test")
#mycursor = mydb.cursor()
#sql = "DELETE FROM customers WHERE address = 'Mountain 21'"
#mycursor.execute(sql)
#mydb.commit()
#print(mycursor.rowcount, "record(s) deleted")


# a='12345678'
# i=1
# while i<=len(a):
#     print(a[0:i])
#     i+=1


class Employee:
    increment=1.5
    def __init__(self,fname,lname,salary):
        self.fname = fname
        self.lname = lname 
        self.salary = salary
    def increase(self):
        self.salary*=Employee.increment
rajjo=Employee("rajjo","bhakshi",20000)
ishita=Employee("ishita","acchi",30000)
print(rajjo.salary)