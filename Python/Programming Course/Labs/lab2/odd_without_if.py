"""
 Program: odd_without_if.py
 Description: get four numbers from user and print the odd numbers
              (without using IF)
"""

num1 = int(input("Enter first number: "))

num2 = int(input("Enter second number: "))

num3 = int(input("Enter third number: "))

num4 = int(input("Enter fourth number: "))

print("The number of odds is:", (num1 % 2) + (num2 % 2) + (num3 % 2) + (num4 % 2))
