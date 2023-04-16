#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if the program receives two arguments, 1 otherwise.
 */
int main(int argc, char *argv[])
{
int num1, num2, prod;

/* Check that we received two arguments */
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convert arguments to integers and calculate product */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 *num2;

/* Print the result to the console */
printf("%d\n", prod);

/* Return success */
return (0);
}

