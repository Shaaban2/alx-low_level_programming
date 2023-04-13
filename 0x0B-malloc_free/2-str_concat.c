#include "main.h"
#include <stdlib.h>

/**
 * concatenate_strings - concatenates two strings.
 * @str1: first string.
 * @str2: second string.
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, m, l, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (m = 0; s2[m] != '\0'; m++)
		;

	strout = malloc(sizeof(char) * (i + m + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (l = 0; l < i; l++)
		strout[l] = s1[l];

	limit = m;
	for (m = 0; m <= limit; l++, m++)
		strout[l] = s2[m];

	return (strout);
}
