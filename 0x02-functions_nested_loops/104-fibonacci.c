#include <stdio.h>
/**
 * main - Entry point
 * Description: Finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
int count = 0, num1 = 1, num2 = 2, fib = 0;

printf("%d, %d", num1, num2);
count = 2;

while (count < 98)
{
fib = num1 + num2;
printf(", %d", fib);
num1 = num2;
num2 = fib;
count++;
}
printf("\n");

return (0);
}

