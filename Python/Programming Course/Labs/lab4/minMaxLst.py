"""
 Program: minMaxLst.py
 Description: Get form user size, min, max numbers create and print list 
              with random numbers between min an max in current size
"""

import random 

def minMaxLst(lst, size, min_num, max_num):
    '''Return list with size and random number 
    in it, between min and max numbers'''

    return [random.randint(min_num, max_num) for i in range(size)]

#=================================================

def main():

    lst = []
    
    size = int(input("\nPlease enter size of the list: "))
    
    min_num = int(input("\nPlease enter smallest number: "))
    
    max_num = int(input("\nPlease enter biggest number: "))

    print("\nYour requested list:", minMaxLst(lst, size, min_num, max_num))

if __name__ == "__main__":
    main() 