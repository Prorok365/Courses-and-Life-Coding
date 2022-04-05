"""
 Program: recursive_functions.py
 Description: Many recursive fuinctions in differente variations
"""

def printForward(num):
    '''Print all numbers from 1 to num'''
    
    if num == 0:
        return 1

    printForward(num - 1)

    print(num, end = " ")     

def printBackward(num):
    '''Print all number's from num to 1'''

    if num == 0:
        return 1 
    
    print(num, end = ' ')

    printBackward(num - 1)

def mult(a,b):
    '''Get two natural numbers and return there multiplication
    (without '*') '''

    if b == 1:
        return a
    
    return mult(a, b - 1) + a

def printEven(lst):
    '''print all even numbers from list'''

    if len(lst) == 0:
        return

    if lst[0] % 2 == 0:
        print(lst[0], end = " ")

    printEven(lst[1:])

def multEven(lst):
    '''Return multiplication of all even numbers from list'''

    res = 1

    if len(lst) == 0:
        return res
    if lst[0] % 2 == 0:
        res = lst[0]
    
    return res * multEven(lst[1:])

def listSum(numList):
    '''Get list of numbers
       Return sum of them'''
    
    if len(numList) == 0:
        return 0
    return numList[0] + listSum(numList[1:])

def nastedListSum(lst):
    '''Get nested list of numbers
       Return sum of them'''

    if len(lst) == 0:
        return 0

    if type(lst[0]) == list:
        return nastedListSum(lst[0]) + nastedListSum(lst[1:])

    else:
        return lst[0] + nastedListSum(lst[1:])

def maxList(lst):
    '''Get list of numbers
       Return the biggest number'''
    
    if len(lst) == 1:
        return lst[0]

    bgst = maxList(lst[1:])
    
    if lst[0] > bgst:
        return lst[0]
        
    else:
        return bgst

def findNumInList(lst, n):
    '''Return the index of the value n
    if not found then return -1'''

    if len(lst) == 0:
        return -1

    if lst[0] == n:
        return 0
    
    pos = findNumInList(lst[1:], n)

    if pos == -1:
        return -1

    return pos + 1

def isDiv3(num):
    '''Check if x divine by 3 without use of '%' '''
    
    if num < 0:
        num = -(num)

    if num == 3:
        return True

    if num == 2 or num == 1:
        return False

    return isDiv3(num - 3)

def main():

    printForward(5)
    print()

    printBackward(5)
    print()

    print(mult(3, 4))
    
    printEven([0, 1, 2, 3, 4, 5, 6, 7, 8])
    print()

    print(multEven([1, 2, 3, 4, 5, 6, 7, 8]))
    
    print(listSum([1,2,3,4,5,6,7,8,9,10]))
    
    print(nastedListSum([[1, 2, 3], [4, 5, 6], [7, 8, 9, 10]]))

    print(maxList([2,4,60,8]))

    print(findNumInList([1,54,23,9], 43))

    print(isDiv3(24))

if __name__ == "__main__":
    main()