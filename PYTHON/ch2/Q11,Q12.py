d1={4:"abhinav",2:"akshat",1:"nimul",3:"nipur"}
values=list(d1.keys())
print(values)
n=len(values)  
for i in range(n):
    for j in range(0,n-i-1):
        if values[j]<values[j+1]: #change the sign for ascending order ..currently in descending order
            values[j],values[j+1]=values[j+1],values[j]   
print(values)  