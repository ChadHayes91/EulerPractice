#include <iostream>

using namespace std;

/*A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ? 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

long ispalindrome(long n) //the logic for this function is to find the final digit of the input (using modulo) and then reconstruct the number backwards to see if it's equal.
{
	int reconstructed = 0;
	int finalDigit = 0;
	int t = n;
	while(t > 0)
	{
		finalDigit = t % 10;
		reconstructed = reconstructed * 10 + finalDigit;
		t = floor(t / 10);
	}
	if(n == reconstructed)
	{
		return 1;
	}
	return 0;
}


int main()
{
	int x;
	int y;
	long product = 0;
	long total = 0;
	for(x = 100; x < 1000; x++)
	{
		for(y = 100; y < 1000; y++)
		{
			product = x * y;
			if((ispalindrome(product)) && (product > total))
			{
				total = product;
			}
		}
	}
	cout << "The solution is " << total << endl;
	return 0;
}