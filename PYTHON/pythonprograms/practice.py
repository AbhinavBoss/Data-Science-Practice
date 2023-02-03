class student:
    def __init__(self,name,rollno,college):
        self.name=name
        self.rollno=rollno
        self.college=college
    def display(self):
        print('name: ',self.name,'\n')
        print('rollno: ',self.rollno,'\n')
        print('college: ',self.college,'\n')
person1=student('abhinav',1,'RRK') 
person1.display()
person2=student('akshat',2,'KKR') 
person2.display()    