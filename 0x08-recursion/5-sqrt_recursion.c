#include "main.h"
/*
 * A recursive function to calculate the integer square root of a given number.
 * @param n: the input integer to calculate the square root of
 * @return: the integer square root of n, or -1 if n is negative or
 * has no integer square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
