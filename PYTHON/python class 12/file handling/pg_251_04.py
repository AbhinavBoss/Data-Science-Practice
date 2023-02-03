with open('b.txt','r') as f:
    data=f.readlines()
    print('Name: ','  | ',"Phone: ") 
    for i in data:
        for j in range(len(i)):
            if i[j].isdigit():
                print(i[:j-1],' | ',i[j:],end=" ")
                break 



# with open('b.txt','r') as f:
#     c=0
#     for i in f:
#         c+=1
#     print('total number of lines: ',c)

