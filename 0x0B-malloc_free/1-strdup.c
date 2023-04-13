#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - creates a new string which is a duplicate of the given string.
* @str: the string to duplicate.
* Return: On success, a pointer to the newly allocated memory containing the
* duplicated string. On failure, returns NULL.
*/
char *_strdup(char *str)
{
char *strout;
size_t len;

if (str == NULL)
return (NULL);

len = strlen(str);
strout = malloc(sizeof(char) * (len + 1));

if (strout == NULL)
return (NULL);

strcpy(strout, str);
return (strout);
}
