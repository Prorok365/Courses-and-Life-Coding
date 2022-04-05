"""
 Program: maxList.py
 Description: Write function maxList(lst1, lst2)
              get two lists in same size
              return new list with max amount in every element

"""

def maxList(lst1,lst2):
    '''Return new list with max amount 
    in every element from compared both lists'''

    return [lst1[i] if lst1[i] > lst2[i] else lst2[i] for i in range(len(lst1))]

#==============================================================================

def main():

    print(maxList([2,1,2,1,2,1],[1,2,1,2,1,2]))

if __name__ == "__main__":
    main()
