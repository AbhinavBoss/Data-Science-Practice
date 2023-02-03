import pickle
try:
    my_file = open('ab.dat','rb+') 
    while True:
        st=pickle.load(my_file)
        if st['marks']>98:
            print(st)
except EOFError:
    my_file.close()