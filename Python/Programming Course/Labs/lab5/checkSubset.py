"""
 Program: checkSubset.py
 Description: Write function checkSubset(lst1, lst2) that
              get 2 nested lists of numbers and check 
              if second list contains first list
"""

def checkSubset(lst1, lst2):
    ''' Check if lst1 contains all elements of lst2'''
    return all(elem in lst1 for elem in lst2)

#=====================================================

def main():

    list1 = [[2, 3, 1], [4, 5], [6, 8]]
    list2 = [[4, 5], [6, 8]]

    print(checkSubset(list1, list2))

if __name__ == "__main__":
    main()