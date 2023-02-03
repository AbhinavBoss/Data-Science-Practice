def is_lucky(n):
    next_position=n
    if is_lucky.counter>n:
        return 1
    if n % is_lucky.counter == 0:
        return 0
    next_position = next_position-next_position//is_lucky.counter 
    is_lucky.counter+=1
    return is_lucky(next_position)
is_lucky.counter = 2
n=int(input('enter a number to be checked for lucky_number: '))
if is_lucky(n):
    print(f'{n} is a lucky number')
else:
    print(f'{n} is not a lucky number')   