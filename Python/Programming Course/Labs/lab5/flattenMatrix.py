"""
 Program: flattenMatrix.py
 Description: Write function flattenMatrix(mat) 
              Get nested list of numbers
              Return numbers of all elements in one list
"""

def flattenMatrix(mat):
    '''Combine all numbers in nested list to one list'''
    
    return [num for elem in mat for num in elem]

def main():

    mat = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

    print(flattenMatrix(mat))

if __name__ == "__main__":
    main()