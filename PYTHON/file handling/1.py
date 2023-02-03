import pickle
my_file=open('ab.dat','rb+')
try:
    while True:
        seek=my_file.tell()
        my=pickle.load(my_file)
        if my['rollno']=='2':
            my['name']='akshat'
            my_file.seek(seek)
            pickle.dump(my,my_file) 
except EOFError:
    my_file.close() 


# import pickle
# my_file=open('ab.dat','rb+')
# try:
#     while True:
#         my=pickle.load(my_file)
#         print(my)
# except EOFError: 
#     my_file.close()

#program to count number of lines
# my_file=open('ab.txt','r')
# f=my_file.readlines()
# c=0
# for i in f:
#     c+=1
# print(c) 