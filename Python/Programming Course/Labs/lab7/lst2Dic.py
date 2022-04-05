"""
 Program: lst2Dic.py
 Description: Write function lst2Dic(lst1, lst2)
              get 2 lists
              return dictionary that composed both lists
              lst1 key, lst2 value
"""

def lst2Dic(lst1, lst2):

    return dict(zip(lst1, lst2))

def main():
    lst1 = ["apple", "avocado", "watermelon"]
    lst2 = ["yellow","green", "red"]

    print(lst2Dic(lst1, lst2))

if __name__ == "__main__":
    main()