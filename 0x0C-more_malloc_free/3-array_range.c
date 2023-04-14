#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * NULL if malloc fails or min is greater than max
 */
int *array_range(int min, int max)
{
int range, i;
int *p;

range = 0;

if (min > max) /* Check for invalid input */
return (NULL);

range = ((max + 1) - min); /* Calculate size of the array */

p = malloc(range *sizeof(int)); /* Allocate memory for array */

if (p == NULL) /* Check if malloc failed */
return (NULL);

for (i = 0; i < range; i++) /* Initialize array with values from min to max */
{
*(p + i) = min + i;
}

return (p);
}
