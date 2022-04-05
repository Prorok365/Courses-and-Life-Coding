"""
 Program: string_upsidedown.py
 Description: Print string upsidedown 10 times
"""


def str_upsidedown(string):

    return ([print(string[::-1]) for i in range(10)])

def main():

    input_str = input("Write something good: ")

    str_upsidedown(input_str)

if __name__ == "__main__":
    main()



#Long option of this programm
# for j in range(0,10):
#     for i in range(0, len(s)):
#         print(s[len(s) - i - 1], end = "")
#     print()

