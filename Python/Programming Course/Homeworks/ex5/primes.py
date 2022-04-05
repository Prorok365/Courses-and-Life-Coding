"""
 Program: primes.py
 Description: Create random prime numbers in 
              bits size and count the time elapsed
"""

import miller_rabin_algorithm
import timeit

def main():
    
    num_of_primes = 10      #number of primes 
    prime_size = 1024       #size of the primes numbers by bits

    f = open("primes.txt", "w")     #create/open file for write mode

    t1 = timeit.default_timer()     #time counter

    for _ in range(num_of_primes):
        '''Create prime numbers and write them in text file '''

        n = miller_rabin_algorithm.generate_prime(prime_size, num_of_primes)    #use miller rabin algorithm

        f.write(str(n))
        f.write("\n")

    t2 = timeit.default_timer()     #time counter

    f.close()

    print("time elapsed for create 10 primes: ", t2 - t1, " seconds")

if __name__ == "__main__":
    main()