#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string whose length is to be determined
 *
 * Return: the length of the string as an integer
**/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
