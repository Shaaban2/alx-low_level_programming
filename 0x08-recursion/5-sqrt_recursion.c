#include "main.h"
/**
 * _sqrt_recursion - Returns the square root of a
 * given number using recursion.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n does not
 * have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates the square root of a number using recursion.
 * @n: The number to find the square root of.
 * @i: The current value to test for a square root.
 *
 * Return: The square root of n, or -1 if n does not have a
 * natural square root.
 */
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
