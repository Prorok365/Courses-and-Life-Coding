"""
 Program: multi_table.py
 Description: Print Multiplication table with 10 rows and 10 
"""

i = 0
j = 0

for i in range(1, 11):
    for j in range(1, 11):
        multi = i * j
        print("%2s" % multi, end = " ")
    print("")
