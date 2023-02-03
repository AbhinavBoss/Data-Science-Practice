n=(input("enter a binary number: ")) 
dec_num=0
list1=list(str(n)) 
for j in range(len(list1)):
    a=(2**(j))*int(list1[(len(list1)-1)-j])
    dec_num+=a
print(dec_num)