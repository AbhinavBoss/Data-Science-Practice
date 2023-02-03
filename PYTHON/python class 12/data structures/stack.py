#stack implimentation using lists
def push():
    n=int(input('enter how many times you want to push: '))
    for i in range(n):
        item=int(input('enter element to be push:'))
        list1.append(item)
        print(f'{item} has been pushed')
def pop():
    if len(list1)==0:
        print('underflowing')
    else:
        print(f'{list1[len(list1)-1]} has been poped')            
        list1.pop()
def peek():
    if len(list1)==0:
        print('underflow') 
    else: 
        top=len(list1)-1
        print(f'{list1[top]} is the peek element')
def display_stack():      
    if len(list1)==0:
        print('underflow')
    else:
        print(list1[len(list1)-1],'<-- top')
        for i in range(len(list1)-2,-1,-1): 
            print(list1[i]) 
list1=[]  
print('''.....stack operations.....
         1-push
         2-pop
         3-peek
         4-display the stack
         5-exit''') 
while True:
    c=int(input('enter choice as per above: '))
    if c==1:
        push()
    elif c==2:
        pop()
    elif c==3:
        peek()
    elif c==4:
        display_stack() 
    elif c==5:
        print('hope this program will be helpful for you') 
        break
    else:
        print('good bye')