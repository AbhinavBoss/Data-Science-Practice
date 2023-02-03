m=open(r"D:\PROGRAMMING LANGUAGES\PYTHON\a.txt",'r+')
def student_entry():
    n=int(input('Enter no. of students: '))
    for i in range(n):
        a=int(input("Enter student rollno: "))
        b=input("Enter student name: ")
        c=input("Enter student address: ")
        R=f"Rollno {a} Name {b} Address {c}"
        m.write(R)
        m.write(" \n")
def student_details():
    i=m.readline()
    while i!="":
        print(i)
        i=m.readline()
def find_student():
    rollno=int(input("enter the roll number of the student: "))
    i=m.readline()
    while i!="":
        if rollno==int(list(i.split(" "))[1]):
            print(i)
        i=m.readline()
print('''
1.Enter Student details
2.Show all students
3.Find a student 
4.Exit
 ''')
while True:
    c=int(input('enter(1-3): '))
    if c==1:
        student_entry()
    elif c==2:
        student_details()
    elif c==3:
        find_student()
    elif c==4:
        exit()
    else:
        print("Invalid.....try again")    