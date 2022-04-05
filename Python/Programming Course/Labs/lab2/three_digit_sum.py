"""
 Program: three_digit_sum.py
 Description: Get 3digit number from user and sum all digits
"""

def three_digit_sum(num):
    '''Get 3 digit number and sum it's digits'''

    digit_sum = 0

    digit_sum += int(num % 10)

    num /= 10
    digit_sum += int(num % 10)

    num /= 10
    digit_sum += int(num % 10)

    print("The sum of 3digits:", int(digit_sum))

#=================================================

def main():

    input_3digit = 0

    input_3digit = int(input("Enter 3digit number: "))

    three_digit_sum(input_3digit)

if __name__ == "__main__":
    main()