#queue implimentation using lists
queue=[]
def enqueue():
    n=int(input('enter how many times you want to enqueue: '))
    for i in range(n):
        item=int(input('enter item to be added: '))
        queue.append(item)
        print(f'{item} has been enqued')
def dequeue():
    if len(queue)==0:
        print('underflow')
    else:
        print(f'{queue[0]} has been dequed')
        queue.pop(0)
def peek():
    front=0
    print(f'{queue[front]} is the peek element')
def display_queue():
    if len(queue)==0:
        print('underflow')
    elif len(queue)==1:
        print(queue[0])
    else:
        print(queue[0],'<-- front')
        for i in range(1,len(queue)-1):
            print(queue[i])
        print(queue[len(queue)-1],'<-- rear')
print('''
    Queue operations.....
    1-enqueue
    2-dequeue
    3-peek
    4-display the queue
    5-exit''')
while True:
    c=int(input('enter choice as per above: '))
    if c==1:
        enqueue()
    elif c==2:
        dequeue()
    elif c==3:
        peek()
    elif c==4:
        display_queue() 
    elif c==5:
        print('good bye.....')
        break
    else:
        print('invalid option')