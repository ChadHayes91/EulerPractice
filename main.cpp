#include <iostream>

using namespace std;

/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

This solution can easily be solved by having a for loop that first tests if each number is a factor of 600851475143 and then testing if that factor is prime.
Solving the problem this way would take far too long, likely taking hours to compute.
I've solved this problem by cutting out the majority of the for loop since we only need to test to the square root of each number.
For example, if I listed the factors of 100, they would be: 1 and 100, 2 and 50, 4 and 25, 5 and 20, 10 and 10, 20 and 5, 25 and 4, 50 and 2, 100 and 1.
You can notice a pattern here, that up to the square root of the number your testing (the square root of 100 is 10), you've gone through every factor once.
My method below starts with an empty array, and then adds two elements - a factor and its compliment. We can test if each of those elements are prime by using a for loop only to the square root of that number.*/

int main()
{
	long long input = 600851475143;
	long long total = 0;
	long long multipleslist[2] = { 0, 0 };
	for (long long x = 3; x * x < input; x+=2) //We only need to test odd numbers, since an even number factor would never be prime
	{
		if (input % x == 0)
		{
			multipleslist[0] = x;
			multipleslist[1] = input / x;

			for (int y = 0; y <= 1; y++) //This is a for loop for each of the two elements we just created
			{
				bool isPrime = true;
				for (long z = 2; z * z < multipleslist[y]; z++) //This loop tests for primality
				{
					if (multipleslist[y] % z == 0) 
					{
						isPrime = false;
						break;
					}
				}
				if ((isPrime) && (multipleslist[y] > total)) 
				{
					total = multipleslist[y];
				}
			}
		}
	}
	cout << "The solution is " << total << endl;
	return 0;
}
