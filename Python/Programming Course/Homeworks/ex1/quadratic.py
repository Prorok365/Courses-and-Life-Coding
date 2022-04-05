"""
 Program: quadratic.py
 Description: Get three numbers that representing coefficients 
              of a quadratic equation and print its roots(if possible)
"""

import math

print("\nWelcome to the Root Finding Calculator!\n")

a = float(input("Please enter first parameter (a): "))
b = float(input("Now enter second parameter (b): "))
c = float(input("At last, enter third parameter (c): "))


in_root = pow(b, 2) - (4 * a * c)    

if in_root < 0:
    print("\nSorry, no solution\n")
else:
    x1 = (-b + math.sqrt(in_root)) / (2 * a)
    x2 = (-b - math.sqrt(in_root)) / (2 * a)

    if x1 == x2:
        print("\nYou get one solution", x1,"\n")
    else:
        print("\nYou get two solutions:", x1, ",", x2, "\n")




