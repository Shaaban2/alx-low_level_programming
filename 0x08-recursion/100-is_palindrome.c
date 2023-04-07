#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string recursively
 * @s: pointer to a string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - check if a string is palindrome
 * @s: pointer to a string
 * @l: position
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: pointer to a string
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}

