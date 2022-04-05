"""
 Program: rational.py
 Description: Use rational methods from class Rational
"""

class Rational:

    def __init__(self, x = 0, y = 1):
        self.x = x
        self.y = y

    def get_x(self):
        return self.x
    
    def get_y(self):
        return self.y
    
    # Check if the user parameter and the object number are equal
    def isEqual(self, num):
        return self.x * num.get_y() == self.y * num.get_x()
    
    # Return the result of division between the 
    # object number and the input parameter
    def div(self, num):

        t = Rational()

        t.x = self.x * num.get_y()
        t.y = self.y * num.get_x()

        return t

    # Return result of multiplication between the 
    # object number and the input parameter
    def mul(self, num):

        t = Rational()

        t.x = self.x * num.get_x()
        t.y = self.y * num.get_y()

        return t
    
    # Reduce the Numerator and denominator
    def reduction(self):

        for i in range(2, min(self.x, self.y) + 1):

            if self.x % i == 0 and self.y % i == 0:

                self.x //= i
                self.y //= i

    def __str__(self):
        
        return '({0}/{1})'.format(self.x, self.y)


def main():
    a = Rational(1,3)
    b = Rational(2,6)

    print(a.div(b))
    print(b.div(a))

    print(a.isEqual(b))
    


if __name__ == "__main__":
    main()
