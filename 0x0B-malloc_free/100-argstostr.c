#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of 
 * a program into a single string.
 *
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: On success, pointer to the concatenated string
 * Otherwise, NULL.
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, m, k, ia;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = m = 0; m < ac; m++)
	{
		if (av[m] == NULL)
			return (NULL);

		for (k = 0; av[m][k] != '\0'; k++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (m = k = ia = 0; ia < c; k++, ia++)
	{
		if (av[m][k] == '\0')
		{
			aout[ia] = '\n';
			m++;
			ia++;
			k = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[m][k];
	}
	aout[ia] = '\0';

	return (aout);
}
