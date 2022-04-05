"""
 Program: bgstUnits.py
 Description: Write recursive function bgstUnits
              Get lst and two index
              Return biggest unity number between two index(include)
"""

def bgstUnits(lst, low, high):
    ''' '''
    if low == high:
        return lst[low] % 10
    
    if lst[low] % 10 < lst[high] % 10:
        return bgstUnits(lst, low + 1, high)

    return bgstUnits(lst,low,high - 1)

def main():
    
    lst = [21, 219, 166, 61, 127, 60, 34]

    print("The biggest unit digit is:", bgstUnits(lst, 0, 6))

if __name__ == "__main__":
    main()