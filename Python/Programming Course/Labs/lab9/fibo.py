"""
 Program: fibo.py
 Description: Write function fibo(n)
              Get number
              Return Fibonacci series
              Print Fibonacci series until input user n
"""

def fibo(n):
    ''''''
    if n == 0:
        return 0

    if n == 1:
        return 1

    return fibo(n - 1) + fibo(n - 2)

def main():
    
    n = int(input("Please enter a number: "))

    for i in range(1, n - 1):
        '''print all fibonacci series until n'''
        print(fibo(i), end=', ')
    print(fibo(n - 1))

    # n = 10
    # print(fibo(n))

if __name__ == "__main__":
    main()