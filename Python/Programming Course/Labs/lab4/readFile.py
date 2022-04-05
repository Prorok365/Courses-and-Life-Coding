"""
 Program: readFile.py
 Description: Read text from file and initialize 
              list with the text, line by line
"""

def readFile(file_name):
    '''Return the input of text, line by line in list'''

    file = open(file_name, 'r')

    input_text = file.read().splitlines()
    
    file.close()

    return input_text

#=================================================

def main(): 
    
    print('\n'.join(readFile("poema.txt")))

if __name__ == "__main__":
    main() 




#-------------------------------------------------