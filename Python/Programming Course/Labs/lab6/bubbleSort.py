"""
 Program: bubbleSort.py
 Description: Write function bubbleSort(lst) 
              with bubble sort algorithm
"""

def bubbleSort(lst):
    ''''''

    size = len(lst)
    
    for i in range(size):

        for j in range(0, size - i - 1):

            if lst[j] > lst[j+1]:

                lst[j], lst[j+1] = lst[j+1], lst[j]

    return lst

def main():

    lst = [64, 34, 25, 12, 22, 11, 90]
    print(bubbleSort(lst)) 

if __name__ == "__main__":
    main()