"""
 Program: dice.py
 Description: Create dice game
              Create class Dice that define dice with
              attributes: sides and value

              The class will create the following methods:
              * A constructor that sets the "dice" and sets the size of the wigs and gives an initial value of 0.
              * An action called a roll which "rolls the dice".
              * An action called getValue which returns the number that shows the "dice".  
              
              1) Write class Dice
              2) In the main function, set 2 dice with 6 wigs and create 
                 a game so that each turn will cast two
                 The dice and results will be printed, 
                 the process will continue until the result is 6:6, the number 
                 of attempts must be printed until the result is 6: 6

"""

from random import randrange

class Dice:

    def __init__(self, sides):
        self.sides = sides
        self.value = 0
    
    def roll(self):
        self.value = randrange(1, self.sides + 1)
    
    def getValue(self):
        return self.value
    
def main():
    
    max_value = 6

    d1 = Dice(max_value)
    d2 = Dice(max_value)

    count = 0

    while(d1.getValue() != max_value or d2.getValue() != max_value):
        '''Roll the dices and count until both dice's get 6:6'''
        
        count += 1
        
        d1.roll()
        d2.roll()
    
    print(count)



if __name__ == "__main__":
    main()
