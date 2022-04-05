"""
 Program: grammar_correction_for_johnny.py
 Description: Get johnny string, fix grammar of word 'cow', 'true' and 'doubt'
"""






def main():
    print("\nHello johnny!")
    user_string = input("\nPlease enter some string: \n\n")

    user_string = (user_string.replace('caw', 'cow')
                              .replace('dout', 'doubt')
                              .replace('tru', 'true'))

    # user_string = user_string.replace('caw', 'cow')
    # user_string = user_string.replace('dout', 'doubt')
    # user_string = user_string.replace('tru', 'true')

    print("\nLets help you with the grammar\n")
    print("Result: " + user_string + "\n")

if __name__ == "__main__":
    main()

    
    
    
