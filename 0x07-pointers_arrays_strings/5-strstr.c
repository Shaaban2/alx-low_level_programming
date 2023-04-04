#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                        of the located substring.
 *         If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *begin = haystack;
        char *pattern = needle;

    /* Check if the current character matches the beginning of the substring */
    while (*haystack && *pattern && *haystack == *pattern)
    {
        haystack++;
        pattern++;
    }

    /* If the entire substring has been matched, return the beginning of the substring */
    if (!*pattern)
    return (begin);

    haystack = begin + 1;
    }

    return (NULL);
    }
