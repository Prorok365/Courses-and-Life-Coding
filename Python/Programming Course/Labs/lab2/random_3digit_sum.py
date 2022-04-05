"""
 Program: random_3digit_sum.py
 Description: Get random 3digit and sum it
"""

import random   

def three_digit_sum(rand_num):
    '''Get random 3 digit number and sum it's digits'''
    digit_sum = 0 

    digit_sum += int(rand_num % 10)
    rand_num /= 10

    digit_sum += int(rand_num % 10)
    rand_num /= 10

    digit_sum += int(rand_num % 10)

    print("The sum of 3digit is:", int(digit_sum))

def main():

    rand_3digit_num = random.randint(100,999)   

    print("the chosen number is:", rand_3digit_num)   

    three_digit_sum(rand_3digit_num)

if __name__ == "__main__":
    main()