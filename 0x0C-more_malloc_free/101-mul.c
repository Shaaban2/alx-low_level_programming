/**
*main - multiplies two positive numbers passed as command line arguments
*@argc: number of arguments passed
*@argv: array of string arguments
*
*Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;

// Check if exactly two arguments are passed
if (argc != 3)
{
printf("Error\n");
return (EXIT_FAILURE);
}

// Check if the arguments are positive integers
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
return (EXIT_FAILURE);
}
}
}

// Multiply the two numbers
mul = atol(argv[1]) * atol(argv[2]);

// Print the result
printf("%lu\n", mul);

return (EXIT_SUCCESS);
}
