#include <iostream>

using namespace std;
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

bool evenlyDivisible(long n) // Note that testing for digits one through ten is redundant. If a number is divisible by 11 through 20, then it is divisible by 1 through 10. This can be proven by prime factorization.
{
	int z = 0;
	for (z = 10; z <= 20; z++)
	{
		if (n % z == 0) {
			continue;
		}
		else {
			return 0;
		}
	}
	return 1;
}

int main()
{
	bool a = true;
	long x = 0;
	for (x = 2520; a == true; x += 20) //Since 2520 is the first number divisible by 1 to 10 (this is given to us), we don't need to test for number less than 2520. In addition, since it must be divisible by 20, the number must be a multiple of 20 so we can remove a lot of the iterations.
	{
		if (evenlyDivisible(x))
		{
			break;
		}
	}
	cout << "The solution is " << x << endl;
	return 0;
}