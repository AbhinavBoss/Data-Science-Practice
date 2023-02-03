x=eval(input("enter salary: "))
if x<=50000:
    tax=0.08*x
elif x>=50000 and x<=80000:
    x=0.1*x+x
    tax=0.12*x
elif x>=80000 and x<95000:
    tax=0.18*x
elif x>95000:
    tax=0.25*x
print("salary: ",x,"tax: ",tax)
