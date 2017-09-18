import math

'''
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ? 99.
Find the largest palindrome made from the product of two 3-digit numbers.
'''

def isPalindrome(n): #the logic for this function is to find the final digit of the input (using modulo) and then reconstruct the number backwards to see if it's equal.
    reconstructed = 0
    finalDigit = 0
    t = n
    while(t > 0):
        finalDigit = t % 10
        reconstructed = reconstructed * 10 + finalDigit
        t = math.floor(t / 10)
    if n == reconstructed:
        return True
    else:
        return False

total = 0
for x in range(100, 1000):
    for y in range(100, 1000):
        product = x * y
        if isPalindrome(product) and product > total:
            total = product

print('The solution is ' + str(total))
