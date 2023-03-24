/**
 * print_diagonal - draws a diagonal line of backslashes in the terminal
 * @n: number of times to print '\'
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');

_putchar('\\');
_putchar('\n');
}
}

