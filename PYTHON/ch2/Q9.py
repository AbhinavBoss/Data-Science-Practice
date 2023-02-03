print('enter first three letters of months')
d1={'jan':31,'feb':28,'mar':31,'apr':30,'may':31,'jun':30,'jul':31,'aug':31,'sep':30,'oct':31,'nov':30,'dec':31}
print('FIRST PART')
j=input('enter month name whose days you want to know: ').lower() 
print(d1[j]) 
print('SECOND PART')
c=list(d1.keys())
c.sort()
print(c) 
print('THIRD PART')
for i in d1.keys():
    if d1[i]==31:
        print(i,end="") 