print('type abhinav for more')
started=False
command=""
while command!="quit":
    command=input('>>> ').lower()
    if command=='start':
        if started:
            print('hey!!,car is already started!!!!')
        else:
            started=True
            print('car started.....')
    elif command=='stop':
        if not started:
            print('hey!!,car is already stopped!!!!')
        else:
            started=False
            print('car stopped!!!!')
    elif command =='abhinav'.lower():
        print('''
            start--to start the car
            stop--to stop the car
            quit==to exit       ''')
    elif command=='quit':
        break
    else:
        print('invalid option')  