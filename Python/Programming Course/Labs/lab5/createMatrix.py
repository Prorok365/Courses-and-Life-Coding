"""
 Program: createMatrix.py
 Description: Write function createMatrix(size)
              return nested list with "size" lists 
              and in every list numbers from 0 to "size"
"""


def createMatrix(size):
    '''create nested list with "size" lists 
    and in every list numbers from 0 to "size"'''

    return [[num for num in range(size)] for elem in range(size)]

def main():

    matrix_size = int(input("What is the size of the matrix? "))
    
    print(createMatrix(matrix_size))

if __name__ == "__main__":
    main()