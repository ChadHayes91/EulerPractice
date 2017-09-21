#include <iostream>

using namespace std;

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

bool isPrime(int n)
{
	for (int x = 2; x * x <= n; x++) //This is a standard primality test. As I did in problem 3, we only test up to the square root of a number. Details on primality needing to go only up to the square root of a number can be seen there.
	{
		if (n % x == 0) {
			return false;
		}
	}
	return true;
}


int main()
{
	int y = 3; //I start at 3 and skip 2 so I can increase y by 2 for each iteration (since prime numbers are never even)
	int counter = 1; //I start at one to include 2 as a prime
	int primeMax = 10001;
	while (counter <= primeMax)
	{
		if (isPrime(y)) {
			++counter;
			if (counter == primeMax){
				break; //I need to break the loop before increasing y's value.
			}
			else {
				y+=2;
			}

		}
		else {
			y+=2;
		}
	}
	cout << "The solution is " << y << endl;
	return 0;
}