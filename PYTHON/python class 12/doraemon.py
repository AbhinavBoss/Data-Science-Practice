import time                                                               #DORAEMON  BY PYTHON CODING
import turtle                                                           #ABHINAV VARSHNEY 

def dor(Turtle1):
    """Right eyes"""
    for i in range(90):
        Turtle1.speed(0)
        Turtle1.forward(1)
        Turtle1.right(4)

    """Right eyeball"""
    Turtle1.speed(0)
    Turtle1.up()
    Turtle1.goto(9,10)
    Turtle1.dot(4)
    Turtle1.goto(30,0)
    Turtle1.down()

    """Left eyes"""
    for i in range(90):
        Turtle1.speed(0)
        Turtle1.forward(1)
        Turtle1.right(4)

    """Left eyeball"""
    Turtle1.speed(0)
    Turtle1.up()
    Turtle1.goto(21,10)
    Turtle1.dot(4)
    Turtle1.goto(15,-10)
    Turtle1.down()

    """Nose"""
    Turtle1.fillcolor('red')
    Turtle1.begin_fill()

    for i in range(45):
        Turtle1.forward(1)
        Turtle1.right(8)

    Turtle1.end_fill()
    Turtle1.fillcolor('black')


    """Line below nose"""
    Turtle1.left(90)
    Turtle1.forward(32)


    """Goto right eyes"""
    Turtle1.up()
    Turtle1.goto(-15,10)
    Turtle1.right(80)
    Turtle1.down()


    """Right cheek"""
    for i in range(29):
        Turtle1.forward(3)
        Turtle1.left(5)

    """Neck"""
    Turtle1.left(-3)
    for i in range(35):
        Turtle1.forward(3)
        Turtle1.left(2)

    """Left cheek"""
    Turtle1.left(10)
    for i in range(27):
        Turtle1.forward(3)
        Turtle1.left(5)

    """Goto right neck"""
    Turtle1.up()
    Turtle1.goto(-38,-48)
    Turtle1.setheading(132)
    Turtle1.down()


    """Right Forehead"""
    for i in range(130):
        Turtle1.forward(1)
        Turtle1.right(1)

    """Head"""
    Turtle1.right(2)
    Turtle1.forward(27)
 
     
    
  

    """Left Forehead"""
    for i in range(131):
        Turtle1.forward(1)
        Turtle1.right(1)

    """Goto right neck"""
    Turtle1.up()
    Turtle1.goto(-38,-48)
    Turtle1.down()

    """Right hand"""
    for i in range(50):
        Turtle1.forward(1)
        Turtle1.left(1)

    """Right hand palm"""
    for i in range(51):
        Turtle1.forward(1)
        Turtle1.left(7)

    """Goto left neck"""
    Turtle1.up()
    Turtle1.goto(72.81,-46.55)
    Turtle1.down()

    """Left hand"""
    Turtle1.setheading(-49)
    for i in range(50):
        Turtle1.forward(1)
        Turtle1.right(1)

    """Left hand palm"""
    for i in range(51):
        Turtle1.forward(1)
        Turtle1.right(7)


    """Goto middle neck"""
    Turtle1.up()
    Turtle1.goto(15,-79)
    Turtle1.setheading(180)
    Turtle1.down()


    """Bell circle"""
    Turtle1.fillcolor('yellow')
    Turtle1.begin_fill()
    for i in range(45):
        Turtle1.forward(1)
        Turtle1.right(8)
    Turtle1.end_fill()
    Turtle1.fillcolor('black')

    """Bell detail"""
    Turtle1.up()
    Turtle1.goto(7,-70)
    Turtle1.down()
    Turtle1.goto(22,-70)

    """Right bell tie"""
    Turtle1.up()
    Turtle1.goto(7,-70)
    Turtle1.down()

    for i in range(54):
        Turtle1.forward(1)
        Turtle1.right(1)


    """Left bell tie""" 
    Turtle1.up()
    Turtle1.goto(22,-70)
    Turtle1.setheading(0)
    Turtle1.down()
    Turtle1.forward(3)

    for i in range(54):
        Turtle1.forward(1)
        Turtle1.left(1)

    Turtle1.up()
    Turtle1.goto(-32,-56)
    Turtle1.setheading(-95)
    Turtle1.down()


    """Right body"""
    for i in range(9):
        Turtle1.forward(7)
        Turtle1.left(1)


    """Left body"""
    Turtle1.up()
    Turtle1.goto(66.81,-54.55)
    Turtle1.setheading(-85)
    Turtle1.down()

    for i in range(10):
        Turtle1.forward(7)
        Turtle1.right(1)

    Turtle1.up()
    Turtle1.goto(-10,-140)
    Turtle1.setheading(180)
    Turtle1.down()


    """Right leg"""
    for i in range(24):
        Turtle1.forward(1)
        Turtle1.right(1)

    for i in range(22):
        Turtle1.forward(1)
        Turtle1.right(8)

    Turtle1.setheading(5)
    Turtle1.forward(15)

    for i in range(24):
        Turtle1.forward(1)
        Turtle1.right(1)

    for i in range(22):
        Turtle1.forward(1)
        Turtle1.right(8)

    Turtle1.setheading(195)
    Turtle1.forward(1)

    for i in range(15):
        Turtle1.forward(1)
        Turtle1.right(1)

    Turtle1.up()
    Turtle1.goto(44,-140)
    Turtle1.down()

    """Left leg"""
    for i in range(24):
        Turtle1.forward(1)
        Turtle1.right(1)

    for i in range(22):
        Turtle1.forward(1)
        Turtle1.right(8)

    Turtle1.setheading(5)
    Turtle1.forward(15)

    for i in range(24):
        Turtle1.forward(1)
        Turtle1.right(1)

    for i in range(22):
        Turtle1.forward(1)
        Turtle1.right(8)

    Turtle1.setheading(195)
    Turtle1.forward(1)

    for i in range(15):
        Turtle1.forward(1)
        Turtle1.right(1)


    """Chest"""
    Turtle1.up()
    Turtle1.goto(15,-55)
    Turtle1.goto(-20.06,-62.89)
    Turtle1.setheading(240)
    Turtle1.down()

    for i in range(27):
        Turtle1.forward(2)
        Turtle1.left(4)

    Turtle1.setheading(350)

    for i in range(22):
        Turtle1.forward(1.7)
        Turtle1.left(0.9)

    for i in range(27):
        Turtle1.forward(2)
        Turtle1.left(4)


    """Pocket"""
    Turtle1.up()
    Turtle1.goto(-9.75,-80.43)
    Turtle1.setheading(-85)
    Turtle1.down()

    for i in range(11):
        Turtle1.forward(2)
        Turtle1.left(6)

    Turtle1.setheading(-35)

    for i in range(40):
        Turtle1.forward(1)
        Turtle1.left(2)

    for i in range(8):
        Turtle1.forward(2)
        Turtle1.left(6)

    Turtle1.forward(1)
    Turtle1.goto(-9.75,-80.43)

    """LIPS"""
    Turtle1.up()
    Turtle1.goto(-13,-35)
    Turtle1.setheading(-30)
    Turtle1.down()

    for i in range(60):
        Turtle1.forward(1)
        Turtle1.left(1)


    """Moustache"""

    """Left top"""
    Turtle1.up()
    Turtle1.forward(100)
    Turtle1.goto(-6,-15)
    Turtle1.setheading(160)
    Turtle1.down()

    Turtle1.forward(45)

    """Left middle"""
    Turtle1.up()
    Turtle1.goto(-6,-20)
    Turtle1.setheading(180)
    Turtle1.down()

    Turtle1.forward(45)


    """Left bottom"""
    Turtle1.up()
    Turtle1.goto(-6,-25)
    Turtle1.setheading(200)
    Turtle1.down()

    Turtle1.forward(45)


    """Right top"""
    Turtle1.up()
    Turtle1.goto(36,-15)
    Turtle1.setheading(20)
    Turtle1.down()

    Turtle1.forward(45)

    """Right middle"""
    Turtle1.up()
    Turtle1.goto(36,-20)
    Turtle1.setheading(0)
    Turtle1.down()

    Turtle1.forward(45)

    """Right bottom"""
    Turtle1.up()
    Turtle1.goto(36,-25)
    Turtle1.setheading(-20)
    Turtle1.down()

    Turtle1.forward(45)
    
    Turtle1.hideturtle()



def main():
    
    screen = turtle.Screen()
    screen.title('Doraemon')
    Turtle1 = turtle.Turtle()
    
    Turtle1.setheading(180)
    Turtle1.pensize(4)
   

    dor(Turtle1)
    

    turtle.done()
    Turtle1.speed(0)
if __name__ == '__main__':  
    main()