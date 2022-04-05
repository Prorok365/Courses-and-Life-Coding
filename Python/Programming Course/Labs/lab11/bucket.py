"""
 Program: bucket.py
 Description: Create list of buckets with capacity and current amount
              from user. Enter random amount in every bucket
              
"""


import random


class Bucket:
    
    def __init__(self, capacity, currentAmount):

        self.capacity = capacity
        self.currentAmount = currentAmount
    
    # Empty the bucket
    def empty(self):

        self.currentAmount = 0
    
    # Check if the bucket is empty
    def isEmpty(self):

        return self.currentAmount == 0
    
    # Fill the bucket
    def fill(self, add):

        if self.capacity - self.currentAmount >= add:
            
            self.currentAmount += add

            return add
            
        else:
            dif = self.capacity - self.currentAmount

            self.currentAmount = self.capacity

            return dif
    
    
    def getCapacity(self):
        return self.capacity
    
    def getCurrentAmount(self):
        return self.currentAmount

    # Move capacity from one bucket to another
    def pourInto(self, buck):
        dif = self.fill(buck.currentAmount)
        buck.currentAmount = buck.currentAmount - dif
    
    def __str__(self):
        return "Capacity: %i CurrentAmount: %.2f" % (self.capacity, self.currentAmount)

# Sort the buckets in ascending way
def sorted_buckets(lst):

    for i in range(len(lst)):
        
        index = i
        
        for j in range(i + 1, len(lst)):
            if(lst[j].capacity - lst[j].currentAmount < lst[index].capacity - lst[index].currentAmount):
                index = j
        
        temp = lst[i]

        lst[i] = lst[index]

        lst[index] = temp



def main():

    lst = []

    for _ in range(3):

        capacity = float(input('Enter capacity number: '))

        currentAmount = random.randint(1, capacity) * (random.random())

        buck = Bucket(capacity, currentAmount)

        lst.append(buck)

    print(lst)
    print('')

    sorted_buckets(lst)

    print(lst)
    print()
    for i in lst:
        print(i)
    print()

    for i in lst:
        i.fill(10)
        print(i)
    

if __name__ == "__main__":
    main()
