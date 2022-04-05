"""
 Program: uniqueValues.py
 Description: Write a fuction uniqueValues
              Get list of dictionaries
              Return list of unique values
"""

def uniqueValues(dict_list):
    '''Return list of unique values'''
    return list(set(val for dic in dict_list for val in dic.values()))

def main():
    d = [ {"V":"S001"}, 
          {"V": "S002"}, 
          {"VI": "S001"}, 
          {"VI": "S005"}, 
          {"VII":"S005"}, 
          {"V":"S009"}, 
          {"VIII":"S007"} ]
    
    print(uniqueValues(d))

if __name__ == "__main__":
    main()