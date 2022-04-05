"""
 Program: intersection.py
 Description: Reads two functions from a file 
              and two numbers a and b and finds an intersection x, y
"""

import random
from math import *
import sys

def read_text():
    '''read from input text'''

    input_file = open("input.txt","r")
    content = input_file.read().splitlines()
    input_file.close()

    return content

def read_points():
    '''read from input text point a and b'''
    content = read_text()

    index_points = len(read_text()) - 1

    points = content[index_points].split()
    points_X_Y = [float(i) for i in points]

    return points_X_Y

def function_read():
    '''Read functions and return in other function str'''

    content = read_text()

    function_Fx = content[0]
    function_Gx = content[1]

    return func_sum(function_Fx, function_Gx)

def func_sum(function_Fx, function_Gx):
    ''' return fx + gx'''
    return lambda x : eval(function_Fx) - eval(function_Gx)

def diff(f):
    ''' returns the numeric derivative of f '''
    h = 0.000001
    return (lambda x: (f(x + h) - f(x)) / h)

def find_intersection(function, epsilon = 10 ** (-10), n = 100):
    ''' finds an approximation to a root of
        f using the Newton Raphson method '''
    
    der_func = diff(function)

    a, b = read_points()

    x0 = random.uniform(a, b)

    while abs(der_func(x0)) < epsilon:
        x0 = random.uniform(a, b)

    x = x0
    y = function(x)
    count = 1

    print("{0}. x={1}, f(x)={2}".format(count,x,y))
    
    while abs(y) > epsilon and count <= n:

        if x < 0:
            x = abs(x)

        count += 1
        y = function(x)
        x = x - (y / der_func(x))

        print("{0}. x={1}, f(x)={2}".format(count,x,y))

    if count > n:
        print("no intersection")
        sys.exit()

    if not a < float(x) < b:
        print("no intersection")
        sys.exit()

    y = find_y_with_x()(x)

    y = "%.4f" % float(y)
    x = "%.4f" % float(x)

    return x , y

def find_y_with_x():
    '''return y from y=f(x)'''

    content = read_text()

    function_Fx = content[0]

    return lambda x: eval(function_Fx)

def main():

    x, y = find_intersection(function_read())
    print("intersection:", x, y)
    
if __name__ == "__main__":
    main()

        

