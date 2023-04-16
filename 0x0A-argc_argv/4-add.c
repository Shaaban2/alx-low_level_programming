#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
int num, digit, sum = 0;

/* Loop through each argument */
for (num = 1; num < argc; num++)
{
/* Loop through each digit in the argument */
for (digit = 0; argv[num][digit]; digit++)
{
/* Check if the digit is not a number */
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
/* Print an error message and return 1 */
printf("Error\n");
return (1);
}
}

/* Convert the argument to an integer and add it to the sum */
sum += atoi(argv[num]);
}

/* Print the sum and return 0 */
printf("%d\n", sum);
return (0);
}

