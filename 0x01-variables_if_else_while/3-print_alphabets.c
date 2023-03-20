#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

/* print lowercase letters */
for (i = 97; i < 123; i++)
{
putchar(i);
}

/* print uppercase letters */
for (i = 65; i < 91; i++)
{
putchar(i);
}

/* print newline character */
putchar('\n');

return (0);
}

