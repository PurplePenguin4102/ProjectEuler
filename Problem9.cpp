/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^2 + b^2 = c^2

	For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
*/
int iter9 = 0;
int check_triplet(int a, int b, int c)
{
	return ((a * a) + (b * b) == (c * c));
}

int problem9()
{
	for (int a = 2; a < 500; a++)
	{
		for (int b = a + 1; b < 500; b++)
		{
			for (int c = b + 1; c < 500; c++)
			{
				iter9++;
				if (a * a + b * b < c * c)
				{
					break;
				}
				if (check_triplet(a, b, c) && a + b + c == 1000)
				{
					return a * b * c;
				}
			}
		}
	}
	throw 1;
}

// naieve = 99,575,750
// 25,155,864
// 1,584,490
// 1,549,959