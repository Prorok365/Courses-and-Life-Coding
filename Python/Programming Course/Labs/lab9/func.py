"""
 Program: func.py
 Description: Search for biggest number in the list 
              with slice method. Recursive.
              Compares between left and right sides of the list.
"""

def func(lst):
    '''Return the biggest number in the list'''

    n = len(lst)
    
    if n == 1:
        return lst[0]
    
    a = func(lst[:n//2])
    b = func(lst[n//2:])

    if a > b:
        return a
    return b

def main():
    
    lst = [4,8,1,2,5]
    
    print(lst)

    print(func(lst))

if __name__ == "__main__":
    main()