#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int arg;

/* Loop through all arguments and print each one */
for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);

/* Return success */
return (0);
}

