"""
 Program: isPalindrome.py
 Description: Write funciton isPalindrome(s)
              Get string and check if its palindrome
              Return True/False
"""

def isPalindrome(s):
    '''check if string is palindrome while ignoring 
    all not latine letters'''
    
    s = s.lower()

    if not s[0].isalpha():
        return isPalindrome(s[1:])
        
    if not s[len(s) - 1].isalpha():
        return isPalindrome(s[:len(s) - 1])
        
    if len(s) == 1:
        return True
    
    if s[0] != s[len(s) - 1]:
        return False
    
    return isPalindrome(s[1:len(s) - 1])

def main():

    s = "Was it Eliot's toilet I saw?"
    print(isPalindrome(s))
    print("'%s' is%s a palindrome" % (s, "" if isPalindrome(s) else " not"))

if __name__ == "__main__":
    main()