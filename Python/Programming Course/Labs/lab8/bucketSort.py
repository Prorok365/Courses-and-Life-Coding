"""
 Program: bucketSort.py
 Description: Q: What Bucketsort do?
              A: Function bucketSort create dictionary
                 and count every number appearance in the list.
                 
                 Create new list and append in all 
                 the numbers from dictionary while 
                 searching for every number
                 from low to high.

                 Return sorted list.
"""

def bucketSort(lst, low, high):
    '''Return sorted list in bucket sort method'''

    counters = dict()       #emply dictionary

    for i in range(low, high + 1):
        counters[i] = 0
    
    # counters = {i:0 for i in range(low,high + 1)}

    for i in lst:
        '''count all numbers that appear in the list '''
        counters[i] += 1
    
    nls = []        #empty list

    for i in counters:
        '''run over all ductioanry and append 
        the amount of ever number that counted'''
        for _ in range(counters[i]):
            nls.append(i)
    
    return nls

# import random, timeit

def main():
    
    lst = [80, 45, 77, 52, 100, 95, 67, 93, 63, 36, 80, 67, 100]

    # t1=timeit.default_timer()

    # size = 100
    # lst = [random.randint(0,5000000) for i in range(size)]

    print(bucketSort(lst, 0, 101))
    # bucketSort(lst, 0, 101)
    # t2=timeit.default_timer()

    # print("time elapsed:",t2-t1, "seconds")


if __name__ == "__main__":
    main()