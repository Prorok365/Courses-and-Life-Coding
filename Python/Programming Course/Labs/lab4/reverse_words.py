"""
 Program: reverse_words.py
 Description: Print reversed by words, string
              
"""

def reverse_words(string):
    ''''''
    return ' '.join(reversed(string.split()))

#=================================================

def main(): 

    input_str = input("Please enter a string: ")

    print("\nInput:", input_str)

    print("\nOutput:", reverse_words(input_str), end='\n\n')


if __name__ == "__main__":
    main() 