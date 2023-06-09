#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
/* Subtract 1 from argc to exclude the program name */
printf("%d\n", argc - 1);

/* Return success */
return (0);
}

