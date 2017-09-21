import math

'''
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
'''

def isPrime(n):
    for x in range(2, math.floor(math.sqrt(n))+1): #This is a standard primality test. As I did in problem 3, we only test up to the square root of a number. Details on primality needing to go only up to the square root of a number can be seen there.
        if (n % x == 0):
            return False
    return True

y = 3 #I start at 3 and skip 2 so I can increase y by 2 for each iteration (since prime numbers are never even)
counter = 1 #I start at one to include 2 as a prime
primeMax = 10001
while(counter <= primeMax):
    if (isPrime(y)):
        counter+=1
        if (counter == primeMax):
            break #I need to break the loop before increasing y's value.
        else:
            y+=2
    else:
        y+=2
print('The solution is ' + str(y))
