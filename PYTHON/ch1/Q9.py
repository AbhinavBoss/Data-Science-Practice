#distance to miles or vice-versa conversion
print('enter A for DISTANCE conversion or B for MILES conversion')
choice=input('enter A or B: ')  
if choice=='A':
    a=float(input('enter distance in KM: '))
else:
    b=float(input('enter distance in MILES: '))
print('''
select as per your choice(1 or 2):
1-KM to MILES
2-MILES to KM''')
c=int(input('enter choice: '))
if c==1:
    d=a*1.6 
elif c==2:
    d=b/1.6
print(d)   
print('distance(KM)'  '\t\t\t'  'distance(MILES)')
if choice=='A':
    print(a, '\t\t\t',  d)
else:
    print(b, '\t\t\t',  d)                      