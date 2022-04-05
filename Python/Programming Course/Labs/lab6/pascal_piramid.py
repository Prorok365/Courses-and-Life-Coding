"""
 Program: pascal_piramid.py
 Description: Print pascal pyramid in unique pyramid form
"""

def pTri(num):
    ''''''

    a = []

    for i in range(num):

        a.append([])

        a[i].append(1)

        for j in range(1,i):
            a[i].append(a[i-1][j-1] + a[i-1][j])

        if(i != 0):
            a[i].append(1)
    
    for i in range(num):
        print(" " * (num - i), end=" ")
        
        for j in range(0, i + 1):
            print('{0:6}'.format(a[i][j]), end=" ")
        
        print()


def main():

    size = 10

    pTri(size)

if __name__ == "__main__":
    main()
