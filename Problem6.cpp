/*
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385 = 2640

.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <math.h>
int problem6()
{
	unsigned long long sq = 0, sum = 0;
	for (unsigned long long i = 0; i <= 100; i++)
	{
		sq += i * i;
		sum += i;
	}
	auto ans = (sum * sum) - sq;
	return ans;

}