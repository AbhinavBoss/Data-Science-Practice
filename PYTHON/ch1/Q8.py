n=int(input('enter a number in 8 digit format: '))
dic = {1:"January",2:"February",3:"March",4:'April',5:'May',6:'June',
7:'July',8:'August',9:'September',10:'October',11:'November',12:'December'}
a=list(dic.keys())
for i in range(len(a)):
    if a[i]==(n//1000000): 
        x=a[i]      
print(dic[a[i]],(n//10000)%100,n%10000) 
