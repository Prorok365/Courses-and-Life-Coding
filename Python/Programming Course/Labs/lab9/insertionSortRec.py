"""
 Program: insertionSortRec.py
 Description: Write function of insersion sort method in recursive way
"""

def insertionSortRec(lst, size):
    '''Sort the list in insertion method. Recursive.'''
  
    if size <= 1:
        return 
    
    insertionSortRec(lst, size - 1)

    last = lst[size - 1]
    
    i = size - 2 

    while i >= 0 and lst[i] > last:
        lst[i + 1] = lst[i]
        i -= 1
    
    lst[i + 1] = last
    
def printLst(lst, size):
    '''Print the list'''

    for i in range(size):
        print(lst[i], end= " ")


def main():

    lst = [12, 11, 13, 5, 6]

    size = len(lst)

    insertionSortRec(lst, size)

    printLst(lst, size)

if __name__ == "__main__":
    main()