"""
 Program: num_analyzer.py
 Description: Get integer number from user and print:
                1. How much digits in it.
                2. Sum of even digits.
                3. Multiplication of odd digits.
"""

num = int(input("Please enter integer number: "))

digit_counter = 0

point_on_digit = 0

even_sum = 0

multi_odd = 1
    
while num != 0:

    digit_counter += 1

    point_on_digit =  num % 10
    
    if (point_on_digit % 2) == 0:
        even_sum += point_on_digit

    else:
        multi_odd *= point_on_digit
    
    num //= 10

print("Number of digit's in this input is: ", digit_counter)

print("Sum of even digit is: ", even_sum)

print("Multiplication of odd digit's is: ", multi_odd)


    

