"""
 Program: lamis.py
 Description: Get from user amount of shekels and print
              the posible answer In the cash register system.
"""

print("\nWelcome to Lamis!\n")

shekels = int(input("Please enter the required amount: "))

if shekels % 50 == 0 and shekels != 0: 
    print("\nSababa\n")
elif shekels < 50 and shekels % 10 == 0 and shekels != 0:
    print("\nOk\n")
elif shekels <= 0:
    print("\nNo service\n")
else:
    print("\nNo change, come tommorow\n")

