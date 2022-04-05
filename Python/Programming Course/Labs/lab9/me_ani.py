"""
 Program: me_ani.py
 Description: Reverse the number 
"""

def me_ani(n):
    '''Return reversed number of n. Recursivly'''

    if n < 10:
        return n
    else:
        i = 10
        while n % i != n:
            i *= 10
        
        return ((n % 10) * i // 10) + me_ani(n // 10)
    

def main():
    
    n = 23456

    print(me_ani(n))
    

if __name__ == "__main__":
    main()