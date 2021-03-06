"""
 Program: orders.py
 Description: Write program that create list of tuples that contains
              order number with all item price(price * quantity).
              * on end price add 10 shekel 
                if the price is less than 100 shekels
"""

def main():
    
    orders = [["34587", "Learning Python, Mark Lutz", 4, 40.95], 
	          ["98762", "Programming Python, Mark Lutz", 5, 56.80], 
              ["77226", "Head First Python, Paul Barry", 3, 32.95],
              ["88112", "Einführung in Python3, Bernd Klein", 3, 24.99]]

    min_order = 100

    invoice_totals = list(map(lambda x: x if x[1] >= min_order else (x[0], x[1] + 10), 
                          map(lambda x: (x[0], x[2] * x[3]), orders) ) )
    
    print(invoice_totals)


if __name__ == "__main__":
    main()