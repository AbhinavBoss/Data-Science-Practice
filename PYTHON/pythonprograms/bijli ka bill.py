x=eval(input("enter consumed units: "))
if x<150:
    charges=x*4+200
elif x<301:
    charges=(x-150)*5.5+600+200
elif x<451:
    charges=(x-300)*6+600+200+825
elif x<600:
    charges=(x-450)*7.5+600+200+825+900
print("total bill:",charges)
