"""
 Program: grades.py
 Description: * Read two text files:
                    a) student.txt Where the ID of students and student names appear
                    b) grades.txt Where the ID of students and a list of grades appear

              * Create Dictionary for each file

              * Print: 
                    a) Name of student with highest average grade
                    b) Grades that received most often 
                    c) List of all grades that not appear at all
                    
              * Program stop working if:
                    a) ID Not consists of 9 digits
                    b) ID not appeared in both files
                    c) ID without grades
"""
import sys

def main():

    try:        
        file_students = open("students.txt",'r')        #ID + names
        file_grades = open("grades.txt",'r')            #ID + grade/s

        students_content = file_students.read().splitlines()    #split into lines
        grades_content = file_grades.read().splitlines()        #same

    except IOError:
        print("File not accessible")    #if files not exist, print this message to user

    finally:
        file_students.close()
        file_grades.close()

    
    #Create dictionary {ID's : Students Names} 
    dict_students = {line[0:9] : line[10:] for line in students_content}

    #Create dictionary {ID's : list of grades}
    dict_grades = {line[0:9] : line[10:].split() for line in grades_content}

    #Convert list of string grades to list of integer grades
    convert_dict_grades = {key : [int(i) for i in value] 
                            for key, value in dict_grades.items()}
    
    #######################Start Check Stop#############################
    for id_str in convert_dict_grades.keys():
        '''Enter to every key in the dictionary'''

        if not id_str in dict_students:     #Check if in two dict have same keys(ID's)
            print("Missing ID number in one of the files")
            sys.exit()
        
        elif bool(convert_dict_grades[id_str]) == False:   #Check if have value(grade/s) to every key(ID)
            print("Missing grades")
            sys.exit()


        else:   #Check if all ID's are correct
            for id_digit in id_str:
                '''Enter to every digit in the key'''
                if id_digit.isdigit():
                    continue
                else:
                    print("Incorrect ID number")
                    sys.exit()

    for id_str in dict_students.keys():
        '''Enter to every key in the dictionary, check if all the ID's correct(9 digits)'''
        for id_digit in id_str:
            '''Enter to every digit in the key'''
            if id_digit.isdigit():
                continue

            else:
                print("Incorrect ID number")
                sys.exit() 
    #######################End Check Stop#########################

    ###Start create new dictionary {Names : list of grades}######
    dict_name_and_grades = {}       #empty dict

    for id_str , grades in convert_dict_grades.items():
        '''Create new dictionary {'Students Name' : 'Grades'}'''

        for id_str2, names in dict_students.items():
            if id_str == id_str2:       #if id's are same
                dict_name_and_grades.update({names : grades})   #create new key(name):value(grades) in new dictionary
    ###End create new dictionary {Names : list of grades}########

    ##############Start find Name + Best average grade####################################
    max_avg = 0

    for name, grades in dict_name_and_grades.items():
        '''Find the name of student with highest average grade'''

        avg = sum(grades) / len(grades)     #create every loop the average grade of every student

        if avg > max_avg:
            max_avg = avg
            student_name = name

    print("best student: {0} , average: {1}".format(student_name, max_avg))
    ##############End find Name + Best average grade#####################################

    ##################Start create list of all grades########################
    all_grades = []
    for grades in dict_name_and_grades.values():
        for i in grades:
            all_grades.append(i) 
    ##################End create list of all grades##########################

    #Create dictionary {grade : apperance counter}
    all_grades_counter = {grade : all_grades.count(grade) for grade in all_grades}

    ############Start find maximum appearence of grade######################
    max_grade = max(all_grades_counter.values())    #give the highest value of appearance

    for grade, count in all_grades_counter.items():
        '''Print the grade with the highest appear'''
        if all_grades_counter[grade] == max_grade:  #if value = max appearence
            print("the grade {0} appeared {1} times".format(grade,count))
    ############End find maximum appearence of grade########################

    ###########Start find all grades that not appear############
    max_range = 100 + 1     #from 1 to 100
    print("The grades that did not appear:")
    print([i for i in range(1,max_range) if i not in all_grades])
    ###########End find all grades that not appear##############
    


if __name__ == "__main__":
    main()