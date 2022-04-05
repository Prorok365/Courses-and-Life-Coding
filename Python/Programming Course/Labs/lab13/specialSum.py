"""
 Program: specialSum.py
 Description: Write function specialSum
              Get list, num and 2 index low, high
              Return sum of all numbers from low to high big then num 
"""

def specialSum(lst, num, low, high):

    if low == high:
        if lst[low] > num:
            return lst[low]
        return 0

    p1 = specialSum(lst, num, low, (low+high) // 2)
    p2 = specialSum(lst, num, ((low+high) // 2) + 1, high)

    return p1 + p2 

def main():
    
    lst=[2,8,4,14,5,18] 
    
    print("The special sum is:", specialSum(lst, 6, 1, 5))

if __name__ == "__main__":
    main()