#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string
 * @s: String to calculate length of
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}

/**
 * _strcpy - Copies a string to a buffer
 * @dest: Destination buffer to copy string to
 * @src: Source string to copy from
 *
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
int i;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}

dest[i] = '\0';

return (dest);
}

/**
 * new_dog - Creates a new dog struct with the provided name, age, and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Return: Pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);

/* Allocate memory for the dog struct */
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

/* Allocate memory for the dog's name */
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

/* Allocate memory for the dog's owner */
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}

/* Copy the name and owner strings into the dog struct */
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);

/* Set the dog's age */
dog->age = age;

/* Return the pointer to the new dog struct */
return (dog);
}

