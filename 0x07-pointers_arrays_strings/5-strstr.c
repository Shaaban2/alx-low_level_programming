#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *p1, *p2, *p3;

for (p1 = haystack; *p1 != '\0'; p1++)
{
p2 = p1;
p3 = needle;

while (*p2 == *p3 && *p2 != '\0' && *p3 != '\0')
{
p2++;
p3++;
}

if (*p3 == '\0')
{
return (p1);
}
}

return (NULL);
}
