"""
 Program: makeList.py
 Description: Write function makeList(n)
              get integer number n
              return nested list like this: 
              [[1],[1,2],[1,2,3],…,[1,2,…,n]]
"""

def makeList(n):
    '''Return nested list --> [[1],[1,2],[1,2,3],…,[1,2,…,n]]'''

    return [[num for num in range(1, elem + 1)] for elem in range(1, n + 1)]

def main():


    # n = int(input("What is the size of the nested list? "))

    n = 6
    print(makeList(n))

if __name__ == "__main__":
    main()