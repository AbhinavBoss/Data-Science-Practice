# name=input('enter name: ')
# file_object = open('abhinav.txt','r')
# for i in file_object:
#     if name in i:
#         print(i)

# to count any particular name,the above program will replace as :
count=0
name=input('enter name: ')
file_object = open('abhinav.txt','r')
for i in file_object:
    if name.lower() in i:
        count+=1
print(f'occurence of {name} is {count}') 