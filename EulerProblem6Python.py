
'''
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385 The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025 Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

I don't plan on going through the proofs for these formulas, but the formula for sum of natural numbers is: n(n+1)/2 while the sum of squares is n(n+1)(2n+1)/6.
Using these formulas avoids using loops which would increase the time for the program to run.

'''

def sumOfSquares(n):
    total = n * (n+1) * (2 * n +1) / 6
    return total

def squareOfSums(x):
    total = (x * (x + 1) / 2)**2
    return total

value = 100
solution = squareOfSums(value) - sumOfSquares(value)
print('The solution is ' + str(solution))
