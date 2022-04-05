"""
 Program: more_stats.py
 Description: Get from user string of float numbers
              and print:
              1. Average
              2. Standard deviation
              3. Min & Max 
              4. Sorted list from low to high
"""

import math

def string_to_list(num_str):
    '''Convert string of float numbers to 
       list and return it sorted form low to high'''

    for s in num_str:
        '''Check if user string written correctly'''

        if s.isalnum() or s == '.' or s.isspace():

            continue

        else:
             
             print("\nError! Your input is invalid, please try again\n")

             num_str = input("Please enter a string of float numbers: ")
    
    
    str_list = list(num_str.split(" "))

    num_list = [float(i) for i in str_list]     #list comprehension, converte all to float
    num_list.sort()                             #sort flaot list from low to high
    
    return num_list

def mean(num_list):
    '''Calculates all the numbers in the list and returns their average'''

    return sum(num_list) / len(num_list)

def sd(num_list):
    '''Calculate standart deviation of float list and return the result'''
    
    avg = mean(num_list)

    sum_calculator = 0

    for i in num_list:
        sum_calculator += (i - avg) ** 2


    sd = math.sqrt(sum_calculator * 1 / len(num_list))

    return sd

def min_from_list(num_list):
    '''Return minimun value in the list'''
    return min(num_list)

def max_from_list(num_list):
    '''Return maximum value in the list'''
    return max(num_list)



string_of_numbers = input()                         #User input

lst_of_num = string_to_list(string_of_numbers)      #Convert string of numbers to sorted list
      
average = mean(lst_of_num)                          #Average of input numbers
print("mean:",average)

sd = sd(lst_of_num)                                 #Standard deviation
print("standard deviation:", sd)

max_lst = max_from_list(lst_of_num)                 #Max num
print("maximum: ", max_lst)

min_lst = min_from_list(lst_of_num)                 #Min num
print("minimum: ", min_lst)

print(lst_of_num)                                   #sorted list



