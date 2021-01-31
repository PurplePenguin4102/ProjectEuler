/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/
#include<vector>
#include<numeric>

int problem16()
{
	int acc = 0;
	std::vector<int> digits{ 2 };
	for (int i = 2; i <= 1000; i++)
	{
		int carry = 0;
		for (int j = 0; j < digits.size(); j++)
		{
			int tmp = digits[j] * 2 + carry;
			digits[j] = tmp % 10;
			carry = tmp / 10;
		}
		if (carry) digits.push_back(carry);
	}

	acc = std::accumulate(digits.begin(), digits.end(), 0);
	return acc;
}