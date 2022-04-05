"""
 Program: space_fixer.py
 Description: Replace user string non-alphabetic char's to spaces and print it
"""

def no_spaces_string(string):
    '''Replace in string all non-alphabetic char's to space's and print it'''

    new_str = ''        

    for i in string:   

        if i.isalpha():
            new_str += i

        else:
            new_str += ' '

    print("What you write without gibrish -->", new_str)

def no_space_string_short(string):
    '''Line-short version of function, 
    Replace in string all non-alphabetic char's 
    to space's and print it'''

    new_str = ''.join([(elem if elem.isalpha() or elem.isspace() else(' ')) for elem in string])

    print("What you write without gibrish --> {0}".format(new_str))

def main():

    input_str = input("Write some string: ")

    # no_spaces_string(input_str)

    # ===============================

    no_space_string_short(input_str)


if __name__ == "__main__":
    main()







    

