import math

'''
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

This solution can easily be solved by having a for loop that first tests if each number is a factor of 600851475143 and then testing if that factor is prime.
Solving the problem this way would take far too long, likely taking hours to compute.
I've solved this problem by cutting out the majority of the for loop since we only need to test to the square root of each number.
For example, if I listed the factors of 100, they would be: 1 and 100, 2 and 50, 4 and 25, 5 and 20, 10 and 10, 20 and 5, 25 and 4, 50 and 2, 100 and 1.
You can notice a pattern here, that up to the square root of the number your testing (the square root of 100 is 10), you've gone through every factor once.
My method below starts with an empty array, and then adds two elements - a factor and its compliment. We can test if each of those elements are prime by using a for loop only to the square root of that number.
'''

value = 600851475143
valueroot = math.floor(math.sqrt(value)) 
total = 0
multipleslist = [0, 0]
for x in range(3, valueroot + 1, 2): #We only need to test odd numbers, since an even number factor would never be prime
    if value % x == 0:
        multipleslist[0] = x
        multipleslist[1] = value / x

        for y in range(0, 2): #This is a for loop for each of the two elements we just created
            isPrime = True
            rootlist = math.floor(math.sqrt(multipleslist[y]))
            for z in range(2, rootlist + 1): #This loop tests for primality
                if multipleslist[y] % z == 0:
                    isPrime = False
                    break
            if isPrime and multipleslist[y] > total:
                total = multipleslist[y]
print('The solution is ' + str(total))
    
                    

        
