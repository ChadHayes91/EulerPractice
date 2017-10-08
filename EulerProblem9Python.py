import math

'''
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
'''

totalsum = 1000
endloop = False

for a in range(1, math.ceil(totalsum / 3)): #since a < b < c and a + b + c = 1000, the highest possible value in this case would be slightly less than one third (something like a = 332, b = 333 and c = 335). No need to iterate up to 1000.
    for b in range(a + 1, math.ceil(totalsum / 2)): #simiarly, suppose a = 0, and a + b + c = 1000 (and of course b < c). b's maximum value would be 499 and c would be 501. This is why we only iterate to the first 500 terms for b instead of the entire 1000.
        c = totalsum - a - b #no need to create a needless for loop for c, we can just back into c's value
        if(a ** 2 + b ** 2 == c**2):
            endloop = True
            break 
    if (endloop):
        break #we break the loop to avoid needless iterations
    
print('The solution is ', a * b * c,)
                
        
