#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string length
 * @string: string to calculate length of
 *
 * Return: length of the string
 */
int _strlen(char *string)
{
int m;

for (m = 0; string[m] != '\0'; m++)
;
return (m);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of string 2 to concatenate
 *
 * Return: pointer to the concatenated string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int num, len, m, k;

/* handle NULL strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

num = n;
if (num < 0) /* handle negative n */
return (NULL);
if (num >= _strlen(s2)) /* handle n too big */
num = _strlen(s2);

len = _strlen(s1) + num + 1; /* calculate total length of new string */

/* allocate memory for new string, check for malloc failure */
ptr = malloc(sizeof(*ptr) * len);
if (ptr == NULL)
return (NULL);

/* concatenate the two strings */
for (m = 0; s1[m] != '\0'; m++)
ptr[m] = s1[m];
for (k = 0; k < num; k++)
ptr[m + k] = s2[k];
ptr[m + k] = '\0';

return (ptr);
}

