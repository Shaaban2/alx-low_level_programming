#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees the memory allocated to a dog structure
* @d: pointer to a dog_t struct
* This function takes a pointer
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
