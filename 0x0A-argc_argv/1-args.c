#include <stdio.h>

/**
 * main - Entry point for the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
    /* The number of arguments passed, excluding the program name */
    int num_args = argc - 1;

    /* Print the number of arguments, followed by a newline */
    printf("%d\n", num_args);

    /* Return success */
    return (0);
}

