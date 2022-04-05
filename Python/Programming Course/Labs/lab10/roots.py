"""
 Program: roots.py
 Description: Write lambda that get quadratic equation coefficients
              Return set of the two roots of the equation
              Write function funki
              Get function lambda and the roots of quadratic
              equation
              Return the roots of the equation, if any
              else print message "no solution"
"""

import math

def coeff():
    '''return tuple of quadratic equation coefficients'''
    return lambda a,b,c:{ (-b + math.sqrt(b * b - 4 * a * c)) / 2 * a,
                          (-b - math.sqrt(b * b - 4 * a * c)) / 2 * a } 

def funki(func, a, b, c):
    '''Return the roots of the equation'''

    d = math.pow(b, 2) - 4 * a * c

    if d >= 0:
        return func(a,b,c)
    
    return "no solution"


def main():

    print(funki(coeff(), 1 ,-2 , -5))

if __name__ == "__main__":
    main()
