"""
 Program: fibonacci.py
 Description: Get number from user and print 
              the fibonacci series on length of the number
"""

def fibonacci(num):
    '''''' 

    if num <= 1:
        return num

    else:
        return fibonacci(num-1) + fibonacci(num-2)

#=================================================

def main():
     
    num = int(input("\nPlease enter positive number: "))

    print("Fibonacci sequence:", end =' ')

    for i in range(1, num):
        print(fibonacci(i),end=' ')

if __name__ == "__main__":
    main() 