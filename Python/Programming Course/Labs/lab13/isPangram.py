"""
 Program: isPangram.py
 Description: Write function isPangram:
              Get string 
              Return 1 if all letters a-z 
              in the string or 0 if not
              * No difference between capital and small letters 
"""

def ispangram(s):
    '''Return 1 if all letters a-z 
    in the string or 0 if not'''
    
    latin_len = 26

    counters = dict()
    
    for letter in s:
        if letter.isspace():
            continue

        if letter not in counters:
            counters[letter.lower()] = 1
        else:
            counters[letter.lower()] += 1
    
    if len(counters) == latin_len:
        return True
    return False
        
def main():
    
    str1 = "The quick brown fox jumps over the lazy dog"
    str2 = "Sphinx of black quartz judge my vow"
    str3 = "Pack my box with five dozen liquor jugs"
    str4 = "abcdefghijklmnopqrstuvwxyz"

    print(ispangram(str1))
    print(ispangram(str2))
    print(ispangram(str3))
    print(ispangram(str4))

if __name__ == "__main__":
    main()