import turtle
t=turtle.Turtle()
t.pensize(10)
t.up()
t.goto(0,-90)
t.down()
t.circle(100)
t.up()
t.home()

t.goto(30,30)
t.down()
t.circle(30)
t.up()
t.home()

t.goto(-30,30)
t.down()
t.circle(30)
t.up()
t.home()

t.goto(0,-10)
t.down()
t.circle(10)

t.up()
t.goto(30,2)
t.down()
t.left(20)
t.forward(40)

t.up()
t.goto(30,2)
t.down()
t.setheading(0)
t.forward(40)

t.up()
t.goto(30,2)
t.down()
t.right(20)
t.forward(40)
t.up()
t.home()


t.up()
t.goto(-30,2)
t.down()
t.left(-20)
t.forward(-40)

t.up()
t.goto(-30,2)
t.down()
t.setheading(0)
t.forward(-40)

t.up()
t.goto(-30,2)
t.down()
t.right(-20)
t.forward(-40)
t.up()
t.home()

t.forward(-50)
t.goto(0,-50)
t.down()
t.circle(20,-50)

t.up()
t.goto(0,-50)
t.down()
t.circle(20,100)
