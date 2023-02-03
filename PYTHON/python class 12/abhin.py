import turtle
a=turtle.Turtle()
a.shape('turtle')
a.speed(0)
list1=["red","yellow","green","orange"]
for i in range(200):
        a.color(list1[i%4])
        a.pensize(i/7+1)
        a.forward(i)
        a.left(59)
