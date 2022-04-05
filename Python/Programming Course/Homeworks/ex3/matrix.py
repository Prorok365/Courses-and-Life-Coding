"""
 Program: matrix.py
 Description: Get input of two matrices from file text and print 
              the result of [A(transpose) * B]

              P.S: 1. Can assume that the input is correct
                   2. Can assume that the number of cols of matrix A same as row of matrix B
                   3. Can assume that the number of cols of matrix A(transpose) same as row of matrix B
"""
'''
 Result from file matrices.txt:
    A(transpose) * B = 
                        13.0 28.0 4.0
                        49.0 64.0 23.0
                        42.0 28.0 -5.0
'''


def transpose(matrix):
   '''Get matrix and return is transposed form'''
   
   #list comprehension that switch row with col in matrix 2D list
   return [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix[0]))]  

def matrix_mult(matrix_A, matrix_B):
   '''Get two matrices A and B and return there multiplication matrix'''

   #list comprehension multiple row of matrix A with col of matrix B.\\ A(rxn) * B(nxp) = C(rxp)
   return [[sum(float(i) * float(j) for i, j in zip(row_matrix_A, col_matrix_B)) for col_matrix_B in zip(*matrix_B)] for row_matrix_A in matrix_A]

def print_matrix(matrix):
   '''Print the matrix on a screen'''

   for i in range(len(matrix)):

      for j in range(len(matrix[i])):

         print(matrix[i][j], end = ' ')

      print()

def string_to_list(num_str):
   '''Converting every line from string input to float numbers'''

   str_list = list(num_str.split())            #Create list from every line

   num_list = [float(i) for i in str_list]     #list comprehension, converte all to float

   return num_list

'''File proccess'''
matrices_file = open("matrices.txt", "r")

#convert every line of text file to list of strings 
input_matrices = matrices_file.read().splitlines()     

matrices_file.close()
'''End file proccess'''

matrix_A =[]            #Empty matrix
matrix_B =[]

current = matrix_A      # Point to current matrix 

for line in input_matrices:
   '''Split input text to two matrices'''

   if "A=" in line:     #Skip on 'A='
      continue

   if "B=" in line:     #When achieved 'B=', switch to second matrix
      current = matrix_B

   else:                #Add converting string to float numbers
      current.append(string_to_list(line))
         

transposed_A = transpose(matrix_A)

print_matrix(matrix_mult(transposed_A, matrix_B))      #Print the result of [A(transpose) * B]  

