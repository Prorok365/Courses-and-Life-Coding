"""
 Program: insertionSort.py
 Description: Write function insertionSort(lst) that
              use insertion sort algorithm(like sorting cards)
"""

def insertionSort(lst):
    ''''''

    for i in range(1, len(lst)):

        key = lst[i]

        j = i - 1

        while j >= 0 and key < lst[j]:
            
            lst[j + 1] = lst[j]
            
            j -= 1

        lst[j + 1] = key
    
    return lst

def main():
    
    lst = [12, 11, 13, 5, 6]

    print(insertionSort(lst))

if __name__ == "__main__":
    main()