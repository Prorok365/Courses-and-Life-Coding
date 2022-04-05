"""
 Program: shtrudel_counter.py
 Description: Print how much '@' has been appeared in input string 
"""

def shtrudel_count():
    '''Count and print how much shtrudel's in string'''

    input_str = ' '
    elem = ''

    shtrudel_counter = 0
    
    input_str = input("\nPlease enter a string or enter 'quit' to exit: ")
    
    for elem in input_str:
        
        if input_str == 'quit':
            print("\nHave a nice day! o/\n")
            break
        
        else:
            for elem in input_str:
                if elem == '@':
                    shtrudel_counter += 1
        
        print("\nThe sigh '@' has been appeared {0} times".format(shtrudel_counter))

        input_str = input("\nPlease enter a string or type 'quit' to exit: ")

        shtrudel_counter = 0

#=================================================================

def shtrudel_count_short():
    '''Short version of function that Count and print 
    amount of shtrudel's from user string'''

    input_str = ' '

    while input_str != 'quit':

        input_str = input("\nPlease enter a string or enter 'quit' to exit: ")

        sigh_counter = [sigh for sigh in input_str].count('@')

        print("\nThe sigh '@' has been appeared {0} times".format(sigh_counter))
    
    print("\nHave a nice day! o/\n")

#=================================================================

def main():

    # shtrudel_count()

    #=====================

    shtrudel_count_short()


if __name__ == "__main__":
    main()
