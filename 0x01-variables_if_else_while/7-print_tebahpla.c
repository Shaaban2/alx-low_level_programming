#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* print the alphabet in reverse */
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar('\n'); /* print a new line */

return (0);
}

