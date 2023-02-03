x=int(input("enter lower interval:"))
y=int(input("enter upper interval:"))
for i in range(x,y+1):
      r=0
      for j in range(1,i):
            if i%j==0:
                  r=r+j
      if r==i:
            print(i)