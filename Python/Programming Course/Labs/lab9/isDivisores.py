"""
 Program: isDivisores.py
 Description: Write fucntion isDivisores(lst)
              Get list of numbers
              Return True if it's a list of divisors 
              or False if not
"""


def isDivisores(lst):
    '''Check if first value divide all numbers after him'''

    n = len(lst)

    if n == 0:
        return True

    if sum(lst[1:]) % lst[0] == 0:
        return isDivisores(lst[1:])

    return False

def main():
    
    lst = [2, 4, 8, 64, 4096]

    print(isDivisores(lst))


if __name__ == "__main__":
    main()