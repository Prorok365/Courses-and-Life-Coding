"""
 Program: pascalTriangle.py
 Description: Write function pascalTriangle
              Get integer num 
              Print pascal triangle on asked height
"""

def pascalTriangle(n):
    '''Print pascal triangle on asked height(n)'''
    
    if n < 1:
        raise Exception("illegal parameters!")

    row = [1]
    temp = [0]

    for _ in range(n):
        print(row)
        row = [l + r for l,r in zip(row + temp, temp + row)]
    return n >= 1

def main():
    try:
        pascalTriangle(6)

    except Exception as error:
        print(error)

if __name__ == "__main__":
    main()