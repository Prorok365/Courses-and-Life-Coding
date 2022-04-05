"""
 Program: selectionSortRec.py
 Description: Write function for selection sort method 
              in recursive way
"""

def minIndex(lst, i, j):
    '''Return minimum index'''
    if i == j:
        return i
    
    k = minIndex(lst ,i + 1, j)

    return i if lst[i] < lst[k] else k

def selectionSortRec(lst, index = 0):
    '''Recursive selection sort. 
       n is size of a[] and index is index of 
       starting element. '''

    n = len(lst)

    if index == n:
        return -1
    
    k = minIndex(lst, index, n - 1)

    if k != index:
        lst[k], lst[index] = lst[index], lst[k]

    selectionSortRec(lst, index + 1)

def main():

    lst = [3, 1, 5, 2, 7, 0]

    selectionSortRec(lst) 

    for i in lst: 
    	print(i, end = ' ') 


if __name__ == "__main__":
    main()