/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
int problem1()
{
    int acc = 0; 
    for (int i = 0; i < 1000; i++) acc += (!(i % 3) || !(i % 5)) ? i : 0;
    return acc;
}