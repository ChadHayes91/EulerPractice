#include <iostream>
#include <math.h> //used for ceil
#include <cmath> //used for pow

using namespace std;

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main()
{
	int total;
	int totalsum = 1000;
	bool endloop = false;

	for (int a = 1; a <= ceil(totalsum / 3); ++a) ///since a < b < c and a + b + c = 1000, the highest possible value in this case would be slightly less than one third (something like a = 332, b = 333 and c = 335). No need to iterate up to 1000.
	{
		for (int b = a + 1; b <= ceil(totalsum / 2); ++b) ///simiarly, suppose a = 0, and a + b + c = 1000 (and of course b < c). b's maximum value would be 499 and c would be 501. This is why we only iterate to the first 500 terms for b instead of the entire 1000.
		{
			int c = totalsum - a - b; ///no need to create a needless for loop for c, we can just back into c's value
			if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			{
				endloop = true;
				total = a * b * c;
				break;
			}
		}
		if (endloop)
		{
			break; //we break the loop to avoid needless iterations
		}
	}
	cout << "The solution is " << total << endl;
	return 0;
}




