/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <vector>
#include <algorithm>
int iter5 = 0;
int problem5()
{
	int acc = 0;
	auto v = std::vector<int>{ 5, 7, 8, 9, 11, 13, 17, 19 };
	std::sort(v.begin(), v.end(), std::greater<int>());
	for(;;)
	{
		acc += 20 * v[0];
		int i = 0;
		for (auto n: v)
		{
			iter5++;
			if (acc % n) break;
			i++;
		}
		if (i == v.size()) break;
	}
	return acc * 2;
}

// 2, 3, 4, 5, 7, 8, 9, 11, 13, 17, 19
// naieve = 416,181,986
// 299,785,706
// 295,812,787
// 188,838,416
// 143,942,708
// 25,883,622
// 12,298,244
// 1,271,229
// 632,164