"""
 Program: dicOfDiv.py
 Description: Write function dicOfDiv(ls)
              - Get list of integers
              - Calculate for every number in the list its parts
              - Return tuple with 3 parameters:
                * Dictionary consists of number from list as key
                  and as value all its divisors
                * Sum of all parts for all elements
                * Amount of divisors of all elements
"""             

def allDivisors(num):
    '''Return nested list that every elem is list of divisors'''        
    return [i for i in range(2, num) if (num % i == 0)]

def sum_all_divisors(lst):
    '''Summarize all divisors of all numbers'''
    return sum([num for elem in lst for num in elem]) 

def divCount(lst):
    '''Count how much divisors have in all list'''
    return len([num for elem in lst for num in elem])

def dicOfDiv(lst):
    '''Return triple tuple of ({number: divisors}, sum of all divisors, amount of divisors)'''

    div_lst = [allDivisors(i) for i in lst]
    
    dictionary = dict(zip(lst, div_lst))

    return (dictionary, sum_all_divisors(div_lst), divCount(div_lst))

def main():

    lst = [12,36,52]
    
    print(dicOfDiv(lst))

if __name__ == "__main__":
    main()