# list comprehensions
# list1=[1,2,3,4]
# list2=[i**3 for i in list1]
# print([i for i in range(5)])

# c_to_f=lambda c:(9/5) * c + 32
# print(c_to_f(-40))


# a=[1,2,3]
# b=["Abhinav","Akshat","Shrinu"]
# dic={}
# for i in range(3):
#     dic[a[i]]=b[i] 
# print(dic)


class Employee:
    increment=1.5
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
    def increase(self):
        self.salary=self.salary*Employee.increment
    @classmethod
    def change_increment(cls,amount):
        cls.increment=amount
# Harry=Employee("Harry",10000)    
# Abhinav=Employee("Abhinav",20000)
# print(Abhinav.salary,Harry.salary)

# Inheritance begins
class Programmer(Employee):
    def __init__(self,name,salary,lang,exp):
        super().__init__(name,salary)
        self.name=name
        self.salary=salary
        self.lang=lang
        self.exp=exp
Harry=Programmer("Harry",10000,"Python","5 yrs")
print(Harry.salary)