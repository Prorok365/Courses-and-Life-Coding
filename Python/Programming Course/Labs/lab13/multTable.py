"""
 Program: multTable.py
 Description: Create multi table with class when
              the user can choose from where to where the table calculate.
              E.g: 
                    mt = multTable(50, 50)
                    mt.display( 20, 25, 15, 30)
                    ''''''
                    Multiplication Table ([20..25]x[15..30])
                            20  21  22  23  24  25
                        15 300 315 330 345 360 375
                        16 320 336 352 368 384 400
                        17 340 357 374 391 408 425
                        18 360 378 396 414 432 450
                        19 380 399 418 437 456 475
                        20 400 420 440 460 480 500
                        21 420 441 462 483 504 525
                        22 440 462 484 506 528 550
                        23 460 483 506 529 552 575
                        24 480 504 528 552 576 600
                        25 500 525 550 575 600 625
                        26 520 546 572 598 624 650
                        27 540 567 594 621 648 675
                        28 560 588 616 644 672 700
                        29 580 609 638 667 696 725
                        30 600 630 660 690 720 750
"""

class multTable:
    
    def __init__(self, w, h):
        if w < 0 or h < 0:
            raise Exception("negative input!")

        self.__width = w
        self.__height = h
        self.__tab = []
    
        for i in range(self.__width + 1):
            lst = []

            for j in range(self.__height + 1):
                lst.append(i * j)
            
            self.__tab.append(lst)
    
    def display(self, widthLow, widthHigh, heightLow, heightHigh):
        if widthLow < 0 or heightLow < 0 or widthHigh > self.__width or heightHigh > self.__height:
            raise Exception("wrong input for display!")

        print("\n   Multiplication Table ([%d..%d]x[%d..%d])\n" % (widthLow, widthHigh, heightLow, heightHigh))
        print("     ", end='')

        for j in range(widthLow, widthHigh + 1):
            print("%4d " % j, end = '')

        print()

        for i in range(heightLow, heightHigh + 1):
            print("%4d " % i, end = '')

            for j in range(widthLow, widthHigh + 1):
                print("%4d " % self.__tab[i][j], end = '')

            print()


def main():
    try:
        mt = multTable(50,50)
        mt.display(20,25,15,30)
    
    except Exception as error:
        print(error)

if __name__ == "__main__":
    main()