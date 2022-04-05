"""
 Program: factorial.py
 Description: Print factorial of number
"""

def factorial_rec(num):
    '''Recursion, return factorial of number'''

    if num == 1:
        return 1
    
    return factorial_rec(num - 1) * num

#=================================================

def main(): 
    
    num = 5

    print("\n%d! = %d\n" % (num, factorial_rec(num)))

if __name__ == "__main__":
    main() 
