"""
 Program: two_lists_compare.py
 Description: Get two list of float numbers from user, print compared numbers
              and print both lists with non-compared numbers
"""

#=================================================================

def lists_builder(user_input):
    '''Create two lists and use compare function'''

    lst1 = []
    lst2 = []

    while user_input != 'done':

        lst1.append(float(user_input, end=' '))

        user_input = input(end=' ')

    user_input = input("\nPlease enter float number in second list, for stop enter 'done': \n")
    
    while user_input != 'done':

        lst2.append(float(user_input, end=' '))
        user_input = input(end=' ')
    
    return lists_compare_sets(lst1, lst2)

#=================================================================

def lists_compare_sets(lst1, lst2):
    '''Print union of numbers and unique numbers for every list'''

    compared = set(lst1) & set(lst2)

    only_in_lst1 = set(lst1) - set(lst2)

    only_in_lst2 = set(lst2) - set(lst1)

    print("\nCompared num's:", compared)

    print("\nUnique for first list:", only_in_lst1)

    print("\nUnique for second list:", only_in_lst2)

#=================================================================
#=================================================================

def main():

    user_input = input("\nPlease enter float number in first list, for stop enter 'done': \n")

    lists_builder(user_input) 

if __name__ == "__main__":
    main()



