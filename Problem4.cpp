/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <string>
#include <vector>
#include <algorithm>

int iter4 = 0;

int is_palindrome(int n)
{
	auto str = std::to_string(n);

	for (int i = 0, j = str.size() - 1; i <= j; i++, j--)
	{
		iter4++;
		if (str[i] != str[j])
			return 0;
	}
	return 1;
}

int problem4()
{
	int pal = 0;
	for (int j = 999; j >= 100; j--)
	{
		for (int i = 999; i >= 100; i--)
		{
			int k = i * j;
			if (is_palindrome(k))
			{
				pal = k > pal ? k : pal;
				break;
			}
			if (k < pal) break;
		}
	}
	return pal;
}