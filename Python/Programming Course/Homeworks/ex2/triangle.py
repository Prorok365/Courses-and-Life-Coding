"""
 Program: triangle.py
 Description: Get from user Height of pyramid, &'s and spaces in the pyramid
              Prints pyramid with user numbers of &'s and spaces in the pattern 
"""
# 2*(height - row) + 1      size of row
# 2*(height - row) - 1      size of row between every "*"

height = input("Please enter a height(Can't be less then 2): ")
dollars = input("Please enter amount of '$':" )
spaces = input("Please enter amount of spaces: ")

height = int(height)
dollars = int(dollars)
spaces = int(spaces)


column_counter = 0      #count how much space have in the pyramid
counter = 1             #count how much dollars + spaces were printed 


for row in range(height, 0, -1):
    column_counter = 0          

    for col in range(1, row):       # build spaces for every new row 
        print(" ", end = "")
    
    for col in range(1, 2*(height - row) + 2):      # loop the count size of the pyramid

        if row == 1 or col == 1 or col == 2*(height - row) + 1:         # print first row one star and the last row of stars
            print("*", end = "")

        else:
            while column_counter < 2*(height - row) - 1:    #count every char in the pyramid
                if counter <= dollars:                      #count $'s and count how much chars input in the inner row
                    print("$", end ="")
                    counter += 1
                    column_counter += 1
                    
                    if counter == dollars + spaces + 1:     #reset the counter of one string of input dollars and spaces
                        counter = 1
                
                else:                                       #count spaces and how much chars input in the inner row
                    print(" ", end = "")
                    counter += 1
                    column_counter += 1 

                    if counter == dollars + spaces + 1:     #reset the counter of input dollars and spaces
                        counter = 1

    print()     # a new row