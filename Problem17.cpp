/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
*/
int problem17()
{
	unsigned long long
	    a = 3, //one, two, six, ten, and
		b = 4, //four, five, nine
		c = 5, //three, seven, eight, fifty, sixty, forty,
		d = 6, //eleven, twelve, twenty, thirty, eighty, ninety
		e = 7, //fifteen, sixteen, seventy, hundred
		f = 8, //thirteen, fourteen, eighteen, nineteen, thousand
		g = 9; //seventeen

	unsigned long long oneToNine = a + a + c + b + b + a + c + c + b;
	unsigned long long first20 = oneToNine + a + d + d + f + f + e + e + g + f + f + d;
	unsigned long long first30 = first20 + d * 10 + oneToNine;
	unsigned long long first40 = first30 + d * 9 + oneToNine + c;
	unsigned long long first50 = first40 + c * 10 + oneToNine;
	unsigned long long first60 = first50 + c * 10 + oneToNine;
	unsigned long long first70 = first60 + c * 9 + oneToNine + e;
	unsigned long long first80 = first70 + e * 9 + oneToNine + d;
	unsigned long long first90 = first80 + d * 10 + oneToNine;
	unsigned long long first99 = first90 + d * 9 + oneToNine;
	
	unsigned long long first100 = first99 + a + e;
	unsigned long long first200 = first100 + (a + e + a) * 99 + first99 + (a + e);
	unsigned long long first300 = first200 + (a + e + a) * 99 + first99 + (c + e);
	unsigned long long first400 = first300 + (c + e + a) * 99 + first99 + (b + e);
	unsigned long long first500 = first400 + (b + e + a) * 99 + first99 + (b + e);
	unsigned long long first600 = first500 + (b + e + a) * 99 + first99 + (a + e);
	unsigned long long first700 = first600 + (a + e + a) * 99 + first99 + (c + e);
	unsigned long long first800 = first700 + (c + e + a) * 99 + first99 + (c + e);
	unsigned long long first900 = first800 + (c + e + a) * 99 + first99 + (b + e);
	unsigned long long first999 = first900 + (b + e + a) * 99 + first99;
		
	return first999 + a + f;
}