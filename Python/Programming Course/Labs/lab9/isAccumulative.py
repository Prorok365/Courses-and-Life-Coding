"""
 Program: isAccumolative.py
 Description: Write function isAccumulative(lst)
              Get list and check if its List of cumulative
              (fibonacci individual case)
              Return True/False
"""

def isAccumolative(lst):
    ''' Return True/False if the list accumulative '''
    n = len(lst)

    if n < 3:
        return True

    if lst[0] + lst[1] == lst[2]:
        return isAccumolative(lst[1:])

    return False


def main():
    
    lst = [6,7,13,20,33,53,86]
    print(isAccumolative(lst))

if __name__ == "__main__":
    main()