#include "main.h"
/*
 * Recursive function to calculate the power of a
 * given base raised to an exponent.
 * @param base: the base integer
 * @param exponent: the exponent integer
 * @return: the result of base raised to the power of exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
