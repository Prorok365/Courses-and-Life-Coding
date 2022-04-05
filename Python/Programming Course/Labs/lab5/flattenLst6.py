"""
 Program: flattenLst6.py
 Description: Write function flattenLst6(mat) 
              Get nested list of strings
              Return list of all strings no more than 6 letters
"""

def flattenLst6(mat):
    ''''''

    return [string for elem in mat for string in elem if len(string) < 6]

def main():

    planets = ([['Mercury', 'Venus', 'Earth'], 
                ['Mars', 'Jupiter', 'Saturn'], 
                ['Uranus','Neptune', 'Pluto']])

    print(flattenLst6(planets))

if __name__ == "__main__":
    main()