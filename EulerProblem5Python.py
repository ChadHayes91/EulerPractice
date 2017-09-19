import sys

'''
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
'''

def evenlyDivisible(n): #Note that testing for digits one through ten is redundant. If a number is divisible by 11 through 20, then it is divisible by 1 through 10. This can be proven by prime factorization.
    for z in range (10, 21):
        if n % z == 0:
            continue
        else:
            return False
    return True

for x in range(2520, sys.maxsize**10, 20): #Since 2520 is the first number divisible by 1 to 10 (this is given to us), we don't need to test for number less than 2520. In addition, since it must be divisible by 20, the number must be a multiple of 20 so we can remove a lot of the iterations.
    if evenlyDivisible(x):
        break
print('The solution is ' + str(x))
    
