"""
 Program: equation_of_line.py
 Description: Find equation of Line From 2 Points
"""

# y = mx + b
# m = (y2 - y1) / (x2 - x1)
# b = y - mx

x1 = float(input ("Please enter X of first point: "))
y1 = float(input ("Please enter Y of first point: "))

x2 = float(input ("Please enter X of second point: "))
y2 = float(input ("Please enter Y of second point: "))

m = (y2 - y1) / (x2 - x1)
b = y1 - m * x1

if b < 0:
    print("Your line is: y = {0}x - {1}".format(m, -b))
else:
    print("Your line is: y = {0}x + {1}".format(m, b))