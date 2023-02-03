postfix = []   
temp = []
operator = 10
operand = 20
leftparentheses = 30
rightparentheses = 40
empty = 50      
def precedence(s): 
    if s == '(':
        return 0 
    elif s == '+' or '-':
        return 1
    elif s == '*' or '/' or '^':
        return 2
    else:
        return 3                 
def typeof(s):
    if s == '(':
        return leftparentheses
    elif s == ')':
        return rightparentheses
    elif s == '+' or s == '-' or s == '*' or s == '^' or s == '/':
        return operator
    elif s == ' ':
        return empty    
    else :
        return operand                          
infix = input("Enter the infix notation : ")     
for i in infix :
    type = typeof(i)
    if type == leftparentheses :
        temp.append(i)
    elif type == rightparentheses :
        next = temp.pop()
        while next != '(':
            postfix.append(next)
            next = temp.pop()
    elif type == operand:
        postfix.append(i)
    elif type == operator:
        p = precedence(i)
        while len(temp) != 0 and p <= precedence(temp[-1]) : 
            postfix.append(temp.pop())
        temp.append(i)
    elif type == empty: 
        continue                
while len(temp) > 0 :
    postfix.append(temp.pop())
print("It's postfix notation is ",''.join(postfix)) 