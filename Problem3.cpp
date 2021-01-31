/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>
int iter3 = 0;
int problem3()
{
	auto init = 600851475143;
	auto n = init;
	std::vector<int> d;
	for (int i = 2; pow(i, 2) < n; ++i)
	{
		if (!(n % i))
		{
			d.push_back(i);
			n = init / i;
		}
		iter3++;
	}
	return d[d.size() - 1];	
}