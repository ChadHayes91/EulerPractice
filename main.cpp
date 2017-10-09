#include <iostream>
#include <bitset>
#include <math.h>

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

//Additional details regarding the sieve of Eratosthenes (which is the method this program uses to solve this problem), can be found here: (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
//Using the sieve is more optimal than using brute force

using namespace std;

int main()
{
	unsigned long long limit = 2000000;
	bitset<2000000> Sieve; //this is a bitset of length 2 million which is basically an array of two million 0s (which also represent False)
	unsigned long long total = 0;

	Sieve.flip();      // Set all bits to 1 (or True)

	for (long i = 2; i < ceil(sqrt(limit)); ++i)
	{
		if (!Sieve[i])   // If marked not prime (or 0, or False)
			continue;      // return to beginning of loop
		else
			// Set all multiples as not prime
			for (long j = i * i; j < limit; j += i) //You can start at the square of the non-prime to avoid repitition
				Sieve[j] = 0;
	}
	for (long i = 2; i < limit; ++i)
		if (Sieve[i])  //This sums all the numbers that are prime
			total += i;

	cout << "The solution is " << total << endl;
	return 0;
}