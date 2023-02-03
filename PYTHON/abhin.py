import turtle
t=turtle.Turtle()
t.speed(0)
t.shape("turtle")
list1=["red","yellow","light green","pink","purple","brown","orange","blue","sky blue","violet"]
for i in range(400):
        t.color(list1[i%10])
        t.pensize(i/10+1)
        t.backward(i)
        t.left(59)  

