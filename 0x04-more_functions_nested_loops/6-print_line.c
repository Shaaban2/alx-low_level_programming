#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the number of times to print '_'
 *
 * Return: void
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= n; i++)
{
_putchar('_');
}

_putchar('\n');
}

