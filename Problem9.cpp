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

// we assert a, b, c are all less than 500.
// if a > 500 then with b > a any sum is > 1000
// if b > 500 then with c > b any sum is > 1000
// if c > 500 then the square is too big to be pythag triplet
int problem9()
{
	for (int a = 2; a < 500; a++)
	{
		for (int b = 500 - a; b < 500; b++)
		{
			iter9++;
			
			// does a have any chance of forming triplet
			if ((b + 1) * (b + 1) - (b * b) > a * a)
			{
				break;
			}

			int c = 1000 - a - b; // only value c can be when b is set
			if (c <= b)
			{
				break;
			}

			if (check_triplet(a, b, c))
			{
				return a * b * c;
			}
		}
	}
	throw 1;
}

// iter9 values:
// naieve = 99,575,750
// v1: 25,155,864
// v2: 1,584,490
// v3: 1,549,959
// v4: 1,540,205
// v5: 869,660
// v6: 69,294
// v7: 59,832
// v8: 10,030