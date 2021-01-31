/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include "Problems.h"
#include <vector>
#include <numeric>

int is_prime(unsigned long long  n, std::vector<unsigned long long> primes)
{
	for (unsigned long long  p : primes)
	{
		if (p * p > n) return 1;
		if (!(n % p)) return 0;
	}
	throw - 1;
}

int problem10()
{
	std::vector<unsigned long long> primes{ 2, 3, 5, 7, 11, 13 };
	for (unsigned long long i = 15; primes[primes.size() - 1] < 2000000; i += 2)
	{
		if (is_prime(i, primes))
		{
			primes.push_back(i);
		}
	}
	primes.pop_back();
	unsigned long long acc = 0;
	for (unsigned long long p : primes)
	{
		acc += p;
	}
	return acc;
}