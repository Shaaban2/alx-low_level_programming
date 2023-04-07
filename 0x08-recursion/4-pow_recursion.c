#include "main.h"
/*
 *_pow_recursion - Calculate the power of a number recursively
*@x: Base number
*@y: Exponent
*Return: Result of x raised to y
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
