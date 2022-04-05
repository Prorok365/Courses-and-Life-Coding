"""
 Program: undupList.py
 Description: Write function undupList(lst)
              Get nested list of numbers
              Return list without duplicates
"""

def undupList(lst):
    '''Return nested list of numbers without duplicates'''
    return [list(set(i)) for i in lst]

def main():
    
    ls = [[4,6,4,8,6,8,4,2,5],[4,5,6,5,5,5,5,5],[2,44,3,2,44,2,5,8,6,5,6]]

    print(undupList(ls))

if __name__ == "__main__":
    main()