"""
 Program: manageGoods.py
 Description: Write program for managing product inventory in store.
              * Read from goods.txt the current stock 
              * Update the stock back to text file

              - The program need get from user name of product 
                and amount, stop adding when user put 'n'(nothing)
              - In the end of the input: 
                    * Print sum for sell 
                    * Print the amount in the invertory and 
                      update the file txt
              ** To be ensure that amount in the inventory capable
                 the sell amount, if not than print error message
              ** no difference between upper or lower letters in input
"""

def main():

    goods = {}

    f = open("goods.txt","r+")      #r+ reading and writing

    for i in f:
        '''Split name, price and amount 
        and get them right type'''
        
        row = i.split()

        row[1] = float(row[1])
        row[2] = int(row[2])
        goods[row[0].lower()] = row [1:]

    print("\nWelcome to Socked Cat!")
    print("\nInventory:")

    for key, value in goods.items():
        '''Print the inventory first time'''
        print(key, '-', value[0], '-', value[1])
    
    print()

    cost = 0

    while True:
        ''''''
        good = input("What would you like to order? (n - nothing) ").lower()

        if good == 'n' or good == 'N':
            break

        quantity = int(input("How many? "))

        if quantity > goods[good][1]:
            
            print("We don't have so much")
            continue

        cost += goods[good][0] * quantity

        goods[good][1] -= quantity
    
    print("\nPrice:", cost)

    f.seek(0)

    print("\nInventory:")

    for key, value in goods.items():
        '''Print all the inventory after changing(if any)'''
        print(key.title(), '-', value[0], '-', value[1])

        f.write(key.title() + ' ' + str(value[0]) + ' ' + str(value[1]) + '\n')
    
    f.close()

if __name__ == "__main__":
    main()