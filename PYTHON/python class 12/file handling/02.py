import pickle
A={}
B={}
C={}
my_file=open('ab.dat','rb+')
print('enteries in the form of a dictionary','\n')
n=int(input('enter no of enteries allow: '))
print('\n')
i,j,k=1,1,1
print('use quotes for strings\n')
print('for dictionary first\n')
while i<=n:
    a=eval(input('enter key: '))
    b=eval(input('enter value: '))
    A[a]=b
    i+=1
print(A)    
print('\n')
print('for dictionary second\n')
while j<=n:
    a=eval(input('enter key: '))
    b=eval(input('enter value: '))
    B[a]=b
    j+=1
print(B) 
print('\n')
print('for dictionary third\n') 
while k<=n:
    a=eval(input('enter key: '))
    b=eval(input('enter value: '))
    C[a]=b
    k+=1
print(C) 
print('\n')
pickle.dump(A,my_file)
pickle.dump(B,my_file)
pickle.dump(C,my_file) 
my_file.close()