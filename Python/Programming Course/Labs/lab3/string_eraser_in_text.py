"""
 Program: string_eraser_in_text.py
 Description: Remove from text user requested string
"""


def string_eraser(text, str_to_erase):
    '''Remove from text user requested string'''

    i = text.find(str_to_erase)

    while i >= 0:

        before = text[: i - 1]

        after = text[i + len(str_to_erase): ]

        text = before + after

        i = text.find(str_to_erase)

    print("New text --> ", text)

#===============================================

def string_eraser_short(text, str_to_erase):

    new_text = ' '.join([elem for elem in text.split() if elem != str_to_erase])

    print("\n=====================================")

    print("\nOld text --> %s" % text)

    print("\nNew text --> %s\n" % new_text)
    


def main():

    text = input("\nPlease enter a text: ")

    string_to_erase = input("\nPlease enter a string that you want to erase: ")

    # string_eraser(text, string_to_erase) #Function not mine, doesn't work!!!

    string_eraser_short(text, string_to_erase)

if __name__ == "__main__":
    main()