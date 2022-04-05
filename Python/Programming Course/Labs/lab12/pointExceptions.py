"""
 Program: pointExceptions.py
 Description: Check the value of the point on resolution of 1920x1080.
              Raise Exceptions when needed.
"""

def checkX(x):
    return x >= 0 and x < 1920

def checkY(y):
    return y >= 0 and y < 1080 

class Point:
    def __init__(self,x = 0,y = 0):
        if not checkX(x):
            raise Exception("wrong value of x(0-1920)")

        if not checkY(y):
            raise Exception("wrong value of y(0-1080)")

        self.__x = x
        self.__y = y
    
    def getX(self):
        return self.__x

    def setX(self, x):
        if not checkX(x):
            raise Exception("wrong value of x(0-1920)")

        self.__x = x
    
    def getY(self):
        return self.__y

    def setY(self, y):
        if not checkY(y):
            raise Exception("wrong value of y(0-1920)")

        self.__y = y

    def __str__(self):
        return "({0}, {1})".format(self.__x, self.__y)


def main():
    try:
        p1 = Point(1921, 864)
        # p2 = Point(456, 1081)
        # p3 = Point(19254, 84511)
        # p4 = Point(987, 457)

        print(p1)
        
    except Exception as error:
        print(error, " Please try again...")


if __name__ == "__main__":
    main()