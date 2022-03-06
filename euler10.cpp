#include <iostream>

using namespace std;

int isItPrime(int number);

//Find the sum of all the primes below two million.


void main()
{
	long long sum = 17;
	for (int currentNumber = 11; currentNumber < 2000000; currentNumber = currentNumber + 2)
	{
		if (isItPrime(currentNumber) == 1)
		{
			sum = sum + currentNumber;
		}
	}
	cout << sum;
}


int isItPrime(int number)
{
	for (int a = 2; pow(a, 2) <= number; a++) //every prime number div only with 1 and himself so a*a is a way to shorten the loop
	{
		if (number % a == 0) //the check if it's div with the num or not
			return 0;
	}

	return 1; //the number is prime
}