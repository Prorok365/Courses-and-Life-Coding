"""
 Program: num_sums.py
 Description: Count all possibilities of requested number 
              with list of numbers and print it
"""

import sys

def num_sums(n, parts):
    '''Recursive function, create nested 
       list of all variants that sum n'''

    if n < 0:
        return []

    if n == 0:      #recursive stop
         return [[]]        #nested list, enter all variant at the end

    all_variants = []       #empty list

    for k in parts:
        '''put all variations of numbers that sums n '''

        variabilities = num_sums(n - k, parts)      #recursive step

        for variant in variabilities:
            '''add in the nested list the variations'''
            
            variant.append(k)

            all_variants.append(variant)

    return all_variants

def main():
    while True:

        input_nums = input()

        input_nums = input_nums.split()
        

        all_nums = [int(digit) for digit in input_nums if not digit.isspace()]      #create list of all numbers

        parts = all_nums[1:len(all_nums)]       #create list of variant numbers

        n = all_nums[0]     #requested num

        if n == 0:          #exit from program if input '0'
            sys.exit()

        l = num_sums(n, parts)      #Create all possibilities of sum for n from parts

        print(len(l))       #print the counted ways

if __name__ == "__main__":
    main()
