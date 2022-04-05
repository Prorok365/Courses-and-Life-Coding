"""
 Program: input2Output.py
 Description: Read exist file and create file with even lines.
              
"""

def readFile(file_name):
    '''Return the input of text, word by word in list'''

    file = open(file_name, 'r')

    input_text = file.read().split()
    
    file.close()

    return input_text

#=================================================

def input2Output():
    '''Create file with every 
    word in even place of input text string'''

    input_data = readFile("poema.txt")

    file = open("output.txt", "w")

    file.write(' '.join([word for word in input_data[::2]]))

    file.close()

#=================================================

def main(): 

    input2Output()

if __name__ == "__main__":
    main() 


#=================================================

#-------------------------------------------------