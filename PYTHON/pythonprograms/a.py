mp={'a':(4,3),'b':(1,2),'c':(5,1),'d':(6,0)}
highest=[0,0]
i=0
for a in range(2):
    i=0
    for b in mp.keys():
        val=mp[b][a]
        if i==0:
            highest[a]=val
        i+=1
        if val > highest[a]:
            highest[a]=val
    print(highest[a])