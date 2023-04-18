#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a dog struct
 * @d: Pointer to dog struct to print
 *
 * Return: None
 */
void print_dog(struct dog *d)
{
/* If d is NULL, do nothing */
if (d == NULL)
return;

/* If name is NULL, replace with "(nil)" */
if (d->name == NULL)
d->name = "(nil)";

/* If owner is NULL, replace with "(nil)" */
if (d->owner == NULL)
d->owner = "(nil)";

/* Print the dog's name, age, and owner */
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

