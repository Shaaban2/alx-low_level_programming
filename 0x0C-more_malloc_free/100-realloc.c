#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a
 * call to ``` malloc : malloc(old_size) ```.
 * @old_size: size in bytes allocated for ptr.
 * @new_size: size in bytes of new memory block.
 *
 * Return: pointer to new memory block, NULL or ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr; /* declare pointer for new memory block */
unsigned int i; /* counter variable */

if (new_size == old_size) /* if new size is same as old size, return ptr */
return (ptr);

if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
}

if (new_size > old_size && (ptr != NULL))
{
nptr = malloc(new_size); /* allocate new memory block */
if (nptr == NULL)
return (nptr);

for (i = 0; i < old_size; i++) /* copy old memory block to new memory block */
nptr[i] = *((char *)ptr + 1);

free(ptr); /* free old memory block */
}

return (nptr); /* return pointer to new memory block */
}

