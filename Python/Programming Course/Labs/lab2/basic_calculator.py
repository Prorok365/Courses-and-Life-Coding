"""
 Program: basic_calculator.py
 Description: Get from user the operator with 
              two float numbers, and calculate them
"""

operator = ""
print("\nWelcome to Basic Calculator 9000!\n")

while operator != 0:

    operator = input("Please enter the operator you want to use. only '+', '-', '*', '/' (0 to stop): ")
    
    if operator == '0':
        print("\nThanks for using our service, Cya 0/\n")
        break
    
    num1 , num2 = input("\nPlease enter two float numbers: ").split()

    num1 = float(num1)
    num2 = float(num2)

    num_sum = num1 + num2

    num_sub = num1 - num2

    num_multi = num1 * num2

    num_divine = num1 / num2

    if operator == '+':
        print("{0} + {1} = {2}".format(num1, num2, num_sum))

    elif operator == '-':
        print("{0} - {1} = {2}".format(num1, num2, num_sub))

    elif operator == '*':
        print("{0} * {1} = {2}".format(num1, num2, num_multi))

    elif operator == '/':
        if(num2 == 0):
            print("Error! The number does not divide by zero")
            
        else:
            print("{0} / {1} = {2}".format(num1, num2, num_divine))

