"""
 Program: palindrome_num.py
 Description: Check if user's input is palindrome num(converte to str forbidden)
"""

def is_it_palindrome(num):
    '''Longest version of finding palindrome'''
    
    digit = 0
    temp_num = 0
    constract_num = 0


    temp_num = num

    while temp_num > 0:

        digit = temp_num % 10

        temp_num //= 10

        constract_num *= 10

        constract_num += digit 
    
    if num == constract_num:
        print("\nSymetric!!")
    
    else:
        print("\nNot Symetric!!")

def main():

    input_num = int(input("Please enter a number: "))

    is_it_palindrome(input_num)

if __name__ == "__main__":
    main()