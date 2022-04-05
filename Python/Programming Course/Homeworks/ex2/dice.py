"""
 Program: dice.py
 Description: User give amount of two dice throwes, randomly sum each throw 
              Print the result in horizontal graph, how much every result will happend
"""


import random

def counter_posibilities(n):
    '''Create list of counters from 2 to 12'''
    possiblities = [0] * 11

    for _ in range(0,n):

        dice1 = random.randint(1,6)
        dice2 = random.randint(1,6)

        dice_sum = dice1 + dice2

        possiblities[dice_sum - 2] = possiblities[dice_sum - 2] + 1
     
    return possiblities
    



possible_numbers = [2,3,4,5,6,7,8,9,10,11,12]

throwes = input("Enter the amount of throws: ")
throwes = int(throwes)

counters = counter_posibilities(throwes)        #Get all possible throwes in sorted list

row = max(counters)                             #limit if max counter
col = len(counters)                             #length from 2 to 12

for i in range(row):
    for j in range(col):
        if counters[j] < row - i:       #if the counter small then the max row
            print(" ", end = "  ")
        else:                           #else print 'x' until the of the row
            print("x", end = "  ") 
    
    print()                             #new row

for p in range(0, len(possible_numbers)):       #align all possible sum with printed 'x' before
    if possible_numbers[p] < 9:
        print(possible_numbers[p], end = "  ")
    else:
        print(possible_numbers[p], end = " ") 

    



    

