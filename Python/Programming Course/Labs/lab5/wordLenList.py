"""
 Program: wordLenList.py
 Description: Write function wordLenList(s,w)
              get string s and word w
              return list that contains the length 
              of all words in the string except for letter 'w'
"""

def wordLenList(s,w):
    '''Return list of all words length axcept word 'w' '''
    return [len(i) for i in s.split(" ") if i != w]

#==============================================================================

def main():
    
    string = "the quick brown fox jumps over the lazy dog"
    word = "the"

    print(wordLenList(string, word))

if __name__ == "__main__":
    main()