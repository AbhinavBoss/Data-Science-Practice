import random
a=[20,30,40,50,60,70]
lower=random.randint(1,3)
upper=random.randint(2,4)
for i in range(lower,upper+1):
    print(a[i],end='#')