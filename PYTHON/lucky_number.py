'''a lucky is a number in which sum of all its digits will
be equal to 1'''
def is_lucky(n):
    next_position = n
    if is_lucky.counter>n:
        return 1
    elif n % is_lucky.counter==0:
        return 0
    next_position=next_position-next_position//is_lucky.counter
    is_lucky.counter+=1
    return is_lucky(next_position)
is_lucky.counter=2
x=int(input('enter a number to be checked for lucky_number: '))
if is_lucky(x):
    print(f'{x} is a lucky number')
else:
    print(f'{x} is not a lucky number')       