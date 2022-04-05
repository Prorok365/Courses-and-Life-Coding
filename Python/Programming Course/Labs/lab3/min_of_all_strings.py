"""
 Program: min_of_all_strings.py
 Description: Print the shortest string from user
"""

def list_builder(user_string):
    '''Enter user strings in list'''
    
    main_lst = []

    while user_string != 'stop':

        main_lst.append(user_string)

        user_string = input("\nPlease enter some string, type 'stop' for stop: ")

    return find_min_string(main_lst)

#==========================================================

def find_min_string(main_lst):
    '''Find the smallest len of string'''

    min_len_str = 0
    elem = 0
    
    min_len_str = len(main_lst[0])

    for elem in main_lst:
        if len(elem) < min_len_str:
            min_len_str = len(elem)

    return int(min_len_str)

#==========================================================

def main():

    user_string = ''

    user_string = input("\nPlease enter some string, type 'stop' for stop: ")

    print("\nThe shortest length of string's is {0}\n".format(list_builder(user_string)))

if __name__ == "__main__":
    main()

