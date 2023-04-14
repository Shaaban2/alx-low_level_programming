#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two positive numbers and prints the result to stdout
 * @argc: the number of arguments passed to the program (must be 3)
 * @argv: an array of strings containing the arguments (two positive numbers)
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;        

if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}

mul = atol(argv[1]) * atol(argv[2]);
printf("%lu\n", mul);

return (0);
}

