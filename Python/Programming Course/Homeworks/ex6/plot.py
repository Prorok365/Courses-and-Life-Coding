"""
 Program: plot.py
 Description: Program draws a graph based on given functions from txt file
"""
from math import *
import math
import matplotlib.pyplot as plt

def main():

    txt_list= open("functions.txt","r")    #read from txt file
    t_list = txt_list.read().splitlines() #split all lines
    txt_list.close()

    a_b = t_list[len(t_list)-1].split() #seperate a and b

    a= float(a_b[0])    # get a
    b= float(a_b[1])    # get b

    functions = t_list[0:len(t_list)-1] #make list consisting only of functions
    h=0.01 # set h as graph line width

    all_x =[]
    all_y =[]

    for i in functions:
        x_vals=[a+i*h for i in range(int((b-a)/h))] #finds x values for i function
        y_vals=[eval(i) for x in x_vals]    #finds y values for i function

        all_x += x_vals   #combines all x values into one list
        all_y += y_vals   #combines all x values into one list

        plt.plot(x_vals,y_vals,color='red') #draws function with red line

    plt.axis([min(all_x),max(all_x),math.floor(min(all_y)),math.ceil(max(all_y))]) #check min and max x's and y's 
    plt.xlabel("x") #name for x line
    plt.ylabel("y") #name for y line
    plt.show()  #shows result graph

if __name__ == "__main__":
    main()