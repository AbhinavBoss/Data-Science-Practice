import pickle
with open('ab.dat','wb+') as my_file:
    m=int(input('enter no of enteries allowed: '))
    j=1
    d={}
    while j<=m:
        a=input('enter key: ')
        b=input('enter value: ')
        d[a]=b
        j+=1
    pickle.dump(d,my_file)
    j+=1
