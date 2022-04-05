"""
 Program: rational.py
 Description: Use rules of rational number and raise exception when needed.
"""

class Rational:
    def __init__(self, x = 0, y = 1):

        if not isinstance(x, int):
            raise ValueError("Numerator must be an integer")

        if not isinstance(y, int):
            raise ValueError("Denominator must be an integer")

        if y == 0:
            raise ZeroDivisionError("Can't divide by zero!")

        self.x = x
        self.y = y
        
    def get_x(self):
        return self.x

    def set_x(self, x):
        if not isinstance(x, int):
            raise ValueError("Numerator must be an integer")

        self.x = x

    def get_y(self):
        return self.y

    def set_y(self, y):
        if not isinstance(y, int):
            raise ValueError("Denominator must be an integer")
        if y == 0:
            raise ZeroDivisionError("Can't divide by zero!")

        self.y = y
    
    def isEqual(self, num):
        return self.x * num.get_y() == self.y * num.get_x()
    
    def div(self, num):

        t = Rational()
        t.x = self.x * num.get_y()
        t.y = self.y * num.get_x()

        return t

    def mul(self, num):

        t = Rational()
        t.x = self.x * num.get_x()
        t.y = self.y * num.get_y()

        return t

    def reduction(self):
        for i in range(2, min(self.x, self.y) + 1):
            if self.x % i == 0 and self.y % i == 0:
                self.x //= i
                self.y //= i

    def __str__(self):
        return '({0}/{1})'.format(self.x, self.y)


def main():
    try:
        a = Rational(24)

        a.set_y(0)

        print(a)

    except ZeroDivisionError:
        print("Can't divine by zero!")
        
    except Exception as error:
        print(error)
    
if __name__ == "__main__":
    main()