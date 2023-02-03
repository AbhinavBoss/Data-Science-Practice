n=40
i=0
t=0
p=10
print('you have 5 chances')
print('A number is between 0 to 50')
print("you will get your score out of 10")
while i<5:
    guess=int(input('enter guess: '))
    i+=1
    if guess==n:
        t+=1
        print('you won')           
        print('total tries: ',t) 
        print('total points out of 10: ',p) 
        break
    elif guess>50:
        print("do not exceeds the limits") 
        t+=1
        p-=2
        print('total tries: ',t)
        print('total points out of 10: ',p) 
    else:
        print("wrong guess") 
        t+=1
        p-=2
        print('total tries: ',t)
        print('total points out of 10: ',p)   
else:
    print('chances over!!') 
    print('total points out of 10: ',p) 