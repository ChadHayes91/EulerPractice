import math

'''
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
'''

#Additional details regarding the sieve of Eratosthenes (which is the method this program uses to solve this problem), can be found here: (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
#Using the sieve is more optimal than using brute force

limit = 2000000

primeList = [True] * limit #this is similar to the C++ answer which uses bitset (there isn't a bitset for Python)
primeList[0] = False
primeList[1] = False
for x, y in enumerate(primeList):
    if not y: #ignores non-primes
        continue
    for z in range(2 * x, limit, x): #"marks" all multiples of the prime number
        primeList[z] = False
total = [x for x, y in enumerate(primeList) if y] #sums the primes
print('The solution is ' + str(sum(total)))
