"""
 Program: miller_rabin_algorithm.py
 Description: Finds large prime numbers using the Miller Rabin algorithm
"""

import math
import random


def even(n):
    '''Recursion function that finds the 
       exponent of the highest possession of 2 '''
    
    if n % 2 == 1:      #if odd
        return 0

    else:
        return even(int(n/2)) + 1      #recursion, return +1 for every divide integer by 2
  
def odd(n):
    '''Finds the largest odd number that divides n'''

    if n % 2 == 1:      #if odd
        return n

    elif (2 ** even(n)) == n:   #if Every number that is power of two
        return 1

    else:
        for i in range(n - 1, 1, -2):
            '''Finds from end ,-2 every loop, the biggest odd number that devide it'''

            if n / i != int(n / i):     #if the (number / biggest odd number) is not float 
                continue

            else:                       #if yes return it
                return i

def get_even_odd_parts(n):
    '''Return the parts of even and odd of n'''

    return (even(n), odd(n))

def is_probably_prime(n, num_iterations):
    '''Determines whether a given number is prime'''

    s,t = get_even_odd_parts(n - 1)     # s = even(n-1) t = odd(n-1)

    for _ in range(1, num_iterations + 1):
        '''Checks whether the given number is a prime number '''

        if is_suspected_prime(n,s,t) == True:    #if its really a prime number   
            continue

        else:                                    #if not
            return False

    return True

def modular_power(a, b, n):
    """ computes a ** b (mod n) using iterated squaring
        assumes b is a nonnegative integer """

    result = 1

    while b > 0:                    # b has some bits left
        if b % 2 == 1:              # b is odd

            result = (result * a) % n

            b -= 1

        else:

            a = (a * a) % n
            b = b // 2

    return result

def is_suspected_prime(n, s, t):
    '''Check for sure that is a prime number'''

    a = random.randint(1, n - 1)    #choose a random positive integer a smaller than n
    
    d = modular_power(a, t, n)      

    if d == 1 or d == n - 1:
        return True
    
    for _ in range(1, s - 1):
        
        d = modular_power(a, 2, n)

        if d == n - 1:
            return True

    return False

def generate_prime(num_bits, num_iterations):
    '''Create a prime number of a given size (bits)'''
    
    for _ in range(1, num_iterations + 1):
        '''Search for random num if its prime and return it'''

        n = random.getrandbits(num_bits)    #create random number in given size by bits

        if n % 2 == 0:      #if its even
            n += 1          #change to odd

        elif is_probably_prime(n, num_iterations) == False:  #check if its a prime number, 
            continue                                         #if not than continue   

        else:                                                #if its prime than break the loop
            break
    
    return n                                                 # return the last prime number that created

