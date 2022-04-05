"""
 Program: cntFile.py
 Description: Count how much lines, words and chars in string text
              
"""

from readFile import readFile

def cntFile():
    '''Return tuple, how much lines, words and chars in the text'''

    input_data = readFile("poema.txt")

    words_cnt = 0
    lines_cnt = 0
    chars_cnt = 0

    lines_cnt = len(input_data)

    chars_cnt = len("".join(input_data))

    for words in input_data:
        words_cnt += len(words.split())

    return lines_cnt, words_cnt, chars_cnt

#=================================================

def main(): 
    
    lines, words, chars = cntFile()

    print("\nIn the text:\n%s\n" % '\n'.join(readFile("poema.txt")))

    print("\nAmount of lines in this text is %d\n" % lines)

    print("\nAmount of words in this text is %d\n" % words)
    
    print("\nAmount of chars in this text is %d\n" % chars)

if __name__ == "__main__":
    main() 
