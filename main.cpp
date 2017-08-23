#include <iostream>
#include <math.h>

//Problem 1: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

//I believe this is a more optimized answer than just using a for loop from 3 to 1000 using modulo.
//The idea here is that the sum of all numbers divisible by 3 up to 999 is (3 + 6 + 9 + 12 + ... + 999) this reduces to 3(1 + 2 + 3 +... + 333)
//Similarly, numbers divisible by five are 5(1 + 2 + 3 + ... + 199).
//You can sum these two expressions by using the formula (1 + 2 + ... + n) = n*(n+1)/2
//Lastly, if you sum these two expressions, multiples of 15 are double counted so we need to subtract one of those instances back out

int maximum = 999;
int sumofdivisible(int x)
{
	int n = floor(999 / x);
	return x * n*(n + 1) / 2;
}

int main()
{
	int a;
	a = sumofdivisible(3) + sumofdivisible(5) - sumofdivisible(15);
	std::cout << "The result is " << a << "\n";
	return 0;
}