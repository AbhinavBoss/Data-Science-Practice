class Evaluate:  
    def __init__(self, length): 
        self.top = -1
        self.length = length   
        self.array = [] 
    def isEmpty(self): 
        return True if self.top == -1 else False
    def peek(self): 
        return self.array[-1]  
    def pop(self): 
        if not self.isEmpty(): 
            self.top -= 1
            return self.array.pop() 
        else: 
            return "khali stack mein pop kese kre" 
    def push(self, op): 
        self.top += 1
        self.array.append(op)  
    def evaluatePostfix(self, exp):  
        for i in exp:  
            if i.isdigit(): 
                self.push(i)  
            else: 
                val1 = self.pop() 
                val2 = self.pop() 
                self.push(str(eval(val2 + i + val1))) 
        return (self.pop()) 
exp = "231*+9-"
obj = Evaluate(len(exp)) 
print (obj.evaluatePostfix(exp))