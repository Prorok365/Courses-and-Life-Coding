"""
 Program: logo.py
 Description: Using turtle function, draw the logo of python
"""

import turtle
little_circle = turtle.Turtle()
bottom_part = turtle.Turtle()
upper_part = turtle.Turtle()

#First part with direction of clock
#Second part against direction of clock

##############Start First Part##############
# Inner circle
bottom_part.forward(150)
bottom_part.circle(50,90)
bottom_part.forward(90)
# ------------

bottom_part.right(90)
bottom_part.forward(70)

# Circle from east
bottom_part.right(50)
bottom_part.circle(-170, 85)
bottom_part.right(45)
#-----------------

# "Port" zigzag drawing
bottom_part.forward(170)
bottom_part.left(90)

bottom_part.forward(15)
bottom_part.left(90)

bottom_part.forward(80)
bottom_part.right(90)

bottom_part.forward(60)
#----------------------

# Circle from south
bottom_part.right(50)
bottom_part.circle(-190, 80)
bottom_part.right(50)
#------------------

# Inner circle back to starting point
bottom_part.forward(75)
bottom_part.circle(-90,85)
bottom_part.right(5)
#-------------------------------

# New location of second part
upper_part.penup()
upper_part.sety(10)
upper_part.pendown()
#----------------------------
##############End First Part################

##############Start Second Part#############
# Inner circle
upper_part.forward(130)
upper_part.circle(50,90)
upper_part.forward(150)
#-------------

# Circle from north
upper_part.left(50)
upper_part.circle(190, 80)
upper_part.left(50)
#------------------

# "Port" zigzag drawing
upper_part.forward(80)
upper_part.left(90)

upper_part.forward(80)
upper_part.right(90)

upper_part.forward(15)
upper_part.right(90)

upper_part.forward(170)
upper_part.left(90)
#----------------------

# Circle from west
upper_part.right(40)
upper_part.circle(170, 80)
upper_part.left(50)
#-----------------

upper_part.forward(65)
upper_part.left(90)

# Inner circle to starting point
upper_part.forward(25)
upper_part.circle(-90,90)
#-------------------------------

#Little circles in the logo
little_circle.penup()
little_circle.setx(-30)
little_circle.sety(185)
little_circle.pendown()
little_circle.circle(12,360)

little_circle.penup()
little_circle.setx(140)
little_circle.sety(-160)
little_circle.pendown()
little_circle.circle(12,360)
#--------------------------
###########End Second Part##################

turtle.done()

