#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued terms
 *        in the Fibonacci sequence that do not exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
int i, n = 4000000;
long int prev = 1, curr = 2, next, sum = 0;

for (i = 1; curr <= n; ++i) {
if (curr % 2 == 0)
sum += curr;
next = prev + curr;
prev = curr;
curr = next;
}

printf("%ld\n", sum);

return (0);
}

