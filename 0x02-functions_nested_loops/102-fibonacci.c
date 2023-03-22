#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
int i;
long fib1 = 1, fib2 = 2, fib_next;

printf("%ld, %ld, ", fib1, fib2);

for (i = 3; i <= 50; i++)
{
fib_next = fib1 + fib2;
printf("%ld", fib_next);

if (i != 50)
printf(", ");

fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}

