import turtle
t=turtle.Turtle()
list1=['red','yellow','pink','green','blue','orange','purple']
t.up()
t.speed(10)
t.goto(350,0)
for i in range(7):
       t.pensize(30)
       t.down()
       t.begin_fill()
       t.fillcolor(list1[i])
       t.circle(50)
       t.end_fill()
       t.up()
       t.backward(100)