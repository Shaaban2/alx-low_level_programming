#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog struct
 * with the provided name, age, and owner
 * @d: Pointer to dog struct to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* Check if d is NULL, allocate memory if necessary */
if (d == NULL)
d = malloc(sizeof(struct dog));

/* Set the name, age, and owner of the dog struct */
d->name = name;
d->age = age;
d->owner = owner;
}
