"""
 Program: max_num.py
 Description: Get three numbers from user and print the biggest
"""

first_num, second_num, third_num = input("Enter three values: ").split()

first_num = float(first_num)
second_num = float(second_num)
third_num = float(third_num)

temp  = 0

if first_num > second_num:
    temp = first_num
else:
    temp = second_num

if temp < third_num:
    temp = third_num

print("the biggest num is:", temp)
    