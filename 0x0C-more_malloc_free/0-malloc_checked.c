#include <stdlib.h>
/**
 * malloc_checked -  to allocates memory using malloc.
 * @b: size of memory to be allocated.
 *
 * Return:  to return pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *t = malloc(b);

if (t == NULL)
exit(98);

return (t);
}
