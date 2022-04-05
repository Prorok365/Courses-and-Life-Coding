'''
 # @file future_age.py
 # @brief Get name and age from user 
 #        and print what be his age in 2025
 '''

current_year = 2019
future_year = 2025

difference_of_years = future_year - current_year

name = input("What's your name: ")
age = input("How old are you?: ")

print(name, ",When the year 2025 comes, you will be", int(age) + difference_of_years,"years old")



