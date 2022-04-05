"""
 Program: evenDigitsNum.py
 Description: Write function evenDigitsNum 
              print all numbers from 17 to 1000 with only even digits
"""

def allEven(num):
    '''Check number if it contains only even digits'''
    
    split_num = [int(i) for i in str(num)]

    for i in split_num:
        if i % 2 != 0:
            return False
    return True

def evenDigitsNums():
    '''Print list of all numbers with only even digits'''
    print([i for i in range(17, 1000) if allEven(i)])

def main():
    
    evenDigitsNums()

if __name__ == "__main__":
    main()