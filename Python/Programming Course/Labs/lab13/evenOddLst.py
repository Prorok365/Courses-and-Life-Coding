"""
 Program: evenOddLst.py
 Description: Write function evenOddLst:
              Get two lists
              Return new list that contains 
              all elements in odd index
              of first list and all even index
              from second list.

"""

def evenOddLst(lst1, lst2):
    ''''''
    newLst = []
    
    oddElem = lst1[1: : 2]
    evenElem = lst2[0: :2]

    newLst.extend(oddElem)
    newLst.extend(evenElem)

    return newLst       
    # return lst1[1::2]+lst2[0::2] (shortest way)

def main():
    listOne = [3, 6, 9, 12, 15, 18, 21]
    listTwo = [4, 8, 12, 16, 20, 24, 28]

    print(evenOddLst(listOne, listTwo))

if __name__ == "__main__":
    main()