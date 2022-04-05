"""
 Program: stats.py
 Description: Get three numbers from user and print the average
              and standard deviation 
"""

import math

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))
c = float(input("Enter third number: "))

average_number = (a + b + c) / 3

sd = math.sqrt((pow(a - average_number, 2) + pow(b - average_number, 2) + pow(c - average_number,2)) / 3)

print("Average:", average_number)
print("Standard deviation:", sd)