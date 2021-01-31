/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <vector>

int iter7 = 0;
int is_prime(int n, std::vector<long> primes)
{
	for (int p : primes)
	{
		iter7++;
		if (p * p > n) return 1;
		if (!(n % p)) return 0;
	}
	throw -1;
}

int problem7()
{
	std::vector<long> primes{ 2, 3, 5, 7, 11, 13 };
	for (int i = 15; primes.size() < 10001; i += 2 )
	{
		if (is_prime(i, primes))
		{
			primes.push_back(i);
		}
	}
	return primes[primes.size() - 1];
}

// naieve solution : 2,873,585
// 1,434,285
// 746,482