#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
return;
}

/* iterate over each row of the triangle */
for (row = 0; row < size; row++)
{
/* iterate over each column of the current row */
for (col = 0; col < size; col++)
{
/* print spaces for the left side of the triangle */
if (col < size - row - 1)
{
_putchar(' ');
}
/* print '#' for the right side of the triangle */
else
{
_putchar('#');
}
}
/* print a new line after each row of the triangle */
_putchar('\n');
}
}

