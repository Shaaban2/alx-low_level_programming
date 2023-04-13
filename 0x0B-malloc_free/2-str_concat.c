#include "main.h"
#include <stdlib.h>

/**
 * concatenate_strings - concatenates two strings.
 * @str1: first string.
 * @str2: second string.
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *concatenate_strings(char *str1, char *str2)
{
	char *result;
	unsigned int len1, len2, i, j;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	for (len1 = 0; str1[len1] != '\0'; len1++)
		;

	for (len2 = 0; str2[len2] != '\0'; len2++)
		;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = str1[i];

	for (j = 0; j <= len2; j++)
		result[i + j] = str2[j];

	return (result);
}
