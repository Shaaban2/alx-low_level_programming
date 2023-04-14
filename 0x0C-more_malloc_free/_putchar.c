#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write a character to the standard output
 *
 * This function writes a single character to the standard output.
 * The character is specified as an argument to the function.
 *
 * @c: The character to write
 *
 * Return: On success, the function returns 1.
 * On error, -1 is returned and errno
 * is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

