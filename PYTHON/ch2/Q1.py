n=input('enter number: ')
if len(n)==12:
    if n[3]=='-':
        if n[4:7].isdigit():
            if n[7]=='-':
                if n[8:12].isdigit():   
                    if n[:3].isdigit():
                        print('valid')
                    else:
                        print('invalid')
                else:
                    print('invalid')
            else:
                print('invalid')    
        else:
             print('invalid')
    else:
        print('invalid')
else:
    print('invalid')