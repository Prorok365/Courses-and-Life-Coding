"""
 Program: findMaxLength.py
 Description: Write function findMaxLength(lst):
              Get nested list
              Return longest element of list and its length
"""

def findMaxLength(lst):
    '''Return longest element of list and its length'''
    
    elem = 0
    max_length = 0
    biggest_elem = ''

    for elem in lst:
        if len(elem) > max_length:
            max_length = len(elem)
            biggest_elem = elem

    return [biggest_elem, max_length] 

def main():

    lst1 = [['A'], ['A', 'B'], ['A', 'B', 'C']]
    lst2 = [[1, 2, 3, 9, 4], [5], [3, 8], [2]]

    print(findMaxLength(lst1))
    print(findMaxLength(lst2))

if __name__ == "__main__":
    main()