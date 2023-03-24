/**
 * print_line - draws a straight line of underscores in the terminal
 * @n: number of times to print '_'
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

int i;

for (i = 0; i < n; i++)
_putchar('_');

_putchar('\n');
}

