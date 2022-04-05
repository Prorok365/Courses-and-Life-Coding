"""
 Program: base_converter.py
 Description: Get from user integer number and change
              its base to what user will ask
"""
'''
 The logarithm to converte num x from base 10 to base b:
   1. Consider the remainder of x / b, or in short x % b. Save the result in r = 2.
   2. Write the symbol corresponding to r as the leftmost digit of the result.
   3. Divide x by b without the remainder by x. (x = x / b).
   4. If x is different from 0, repeat the process again.
'''


num = int(input("Please enter an integer number: "))
base = int(input("Please enter the base you want to converte your number: "))

converter = ""

while  num != 0:
    
    converter += str(num % base)    #sum the number as string next to ""  
    num //= base                    #divine the number

print(converter[::-1])

    
