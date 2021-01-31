/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/

unsigned long long nChoosek(unsigned n, unsigned k)
{
	if (k > n) return 0;
	if (k * 2 > n) k = n - k;
	if (k == 0) return 1;

	unsigned long long result = n;
	for (unsigned long long i = 2; i <= k; ++i) {
		result *= (n - i + 1);
		result /= i;
	}
	return result;
}

int problem15()
{
	// Simply represent the problem as 40 positions, and choose 20 to be on.
	return nChoosek(40, 20);
}