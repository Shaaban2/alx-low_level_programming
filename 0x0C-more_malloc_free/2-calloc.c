#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size in bytes of each element.
 *
 * Return: NULL if nmemb or size is 0,
 * or if malloc fails to allocate memory.
 * Pointer to the allocated memory on success.
 *
 * Description: This function allocates memory
 * for an array of nmemb elements,
 * each of size bytes, and initializes the memory to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

if (nmemb == 0 || size == 0) /* check if nmemb or size is 0 */
return (NULL);

p = malloc(nmemb * size); /* allocate memory and check for error */
if (p == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++) /* initialize memory to zero */
*((char *)(p) + i) = 0;

return (p);
}

