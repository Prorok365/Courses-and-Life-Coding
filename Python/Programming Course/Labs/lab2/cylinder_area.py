"""
 Program: cylinder_area.py
 Description: Get from user radius and height of a cylinder and 
              calculate it's area
"""

import math

cylinder_radius = float(input("Enter the radius: "))
cylinder_height = float(input("Enter the height: "))

cylinder_area = float((2 * math.pi * cylinder_radius * cylinder_height) + (2 * math.pi * cylinder_radius ** 2))

print("Your cylinder area is:", "%.4f" % cylinder_area)