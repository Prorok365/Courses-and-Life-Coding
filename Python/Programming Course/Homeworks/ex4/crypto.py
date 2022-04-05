"""
 Program: crypto.py
 Description: Program that encrypt/decrypt text files with Posting code method
"""
import sys, random

def key_creator():
    '''Create a cipher of new aplhabetic values, storing in key.txt'''

    abc = "abcdefghijklmnopqrstuvwxyz"      #Alphabet of english characters

    dict_key = {}   #Empty dictionary

    abc_length = len(abc)       #length of english lower-case letters(26)

    shuffled_abc = random.sample(abc, abc_length)       #randomize the alphabet string
    
    dict_key = {abc[i] : shuffled_abc[i] for i in range(abc_length)}        #Create dictionary with alphabetic keys with randomize values, comprihasion method

    ###########################     #Save the key in text file
    file = open("key.txt","w")
    file.write(str(dict_key))
    file.close()
    ###########################

    return dict_key     #return new cipher dictionary of alphabetic value

def encryption():
    '''Encrypt text file with new dictionary alphabet, void function'''

    #####################################
    try:        #Check if the text file is exist
        file = open("plaintext.txt",'r')
        content = file.read()

    except IOError:
        print("File not accessible")

    finally:
        file.close()
    #####################################

    content = content.lower()       #Change all letters in the text to lower-case letters
    
    cipher_content = ""             #Empty str
    key = key_creator()             #New cipher key

    for letter in content:
        '''Create new string with encrypted text'''
        if letter in key:
            cipher_content += key[letter]

        else:       #if not alphabet, add with no change 
            cipher_content += letter
    
    ##################################      
    #Input the encrypted text in new file text
    file = open("ciphertext.txt","w")
    file.write(cipher_content)
    file.close()
    ##################################

def decryption():
    '''Decrypt the encrypted file text to its original form, void function'''

    ######################################
    #Check if the text file and text key are exist
    try:        
        file_text = open("ciphertext.txt",'r')
        file_key = open("key.txt",'r')

        text_content = file_text.read()
        key_content = file_key.read()

    except IOError:
        print("File not accessible")

    finally:
        file_text.close()
        file_key.close()
    ######################################
    
    dict_key = eval(key_content)    #change the string from key text file back to dictionary

    switched_dict_key = {value:key for key,value in dict_key.items()}       #switch the key and value of cipher

    original_text_content = ""      #empty str

    for letter in text_content:
        '''Create new string with decrypted(original) text'''

        if letter in switched_dict_key:
            original_text_content += switched_dict_key[letter]

        else:       #if not alphabet, add with no change 
            original_text_content += letter
    
    ##################################      #input the dencrypted text in new file text
    file = open("decrypted.txt","w")
    file.write(original_text_content)
    file.close()
    ##################################


# print("\nEnter 'e' for encryption")
# print("or 'd' for decryption: ")

user_input = input()

if user_input == 'e':
    encryption()        #Create key and encrypt the file text in new file text   

elif user_input == 'd':
    decryption()        #Use saved key, and decrypt the new file that created during encryption

else:                   #if enter something else than 'e' or 'd', leave message and program closed 
    print("\nThis option is not available\n")
    sys.exit()




