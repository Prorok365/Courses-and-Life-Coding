"""
 Program: palindrome.py
 Description: Get string and check if its palindrome
"""

def is_it_palindrome_short(num):
    '''Shortest version of finding palindrome'''

    res = 0

    res = str(num) == str(num)[: : -1]

    print("\nPalindrome ? ", str(res))
#=====================================================
def is_it_palindrome_long(str_num):
    '''Take two strings and check main str, 
    from start and end in every loop'''

    fixed_str = ''
    new_str = ''
    i = 0
    j = 0

    # Another option of str fix
    # for i in range(-1,-len(s)-1,-1):
    #     if s[i].isalpha():
    #         new_str += s[i].lower()

    for i in reversed(str_num):           #from end, fix str with only alpha chars
        if i.isalpha():
            new_str += i.lower()

    for j in str_num:                     #from start, same 
        if j.isalpha():
            fixed_str += j.lower()

    if new_str == fixed_str:        #if new reversed and normal str same
        print("\nPalindrome it is!")

    else:
        print("\nSorry, Not Palindrome")

def main():

    str_num = input("\nPlease write something: ")

    is_it_palindrome_long(str_num)

    # is_it_palindrome_short(int(str_num))



if __name__ == "__main__":
    main()




