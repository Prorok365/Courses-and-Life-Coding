"""
 Program: merge3.py
 Description: Write function merge3(lst1, lst2, lst3)
              Get three sorted lists
              Return one sorted list contains lst1, lst2 and lst3
"""

def merge3(lst1,lst2,lst3):
    '''merge all three lists into one sorted list'''
    
    return sorted(lst1 + lst2 + lst3)

def main():
    lst1 = [1,2,3]
    lst2 = [2,3,5]
    lst3 = [1,8,9]

    print(merge3(lst1, lst2, lst3))


if __name__ == "__main__":
    main()