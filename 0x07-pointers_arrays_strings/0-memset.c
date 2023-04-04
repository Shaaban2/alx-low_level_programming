#include "main.h"
/**
 * _memset - sets the first n bytes of the memory area pointed to by s to the
 * value of b
 *
 * @s: pointer to the memory area to be filled
 * @b: the value to be set
 * @n: the number of bytes to be set to the value
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return s;
